
//
// electron selections
//

// CMS2 includes
#include "electronSelections.h"
#include "CMS2.h"

bool electronSelection_cand01(const unsigned int index)
{
  if (!(cms2.els_type()[index] & (1<<ISECALDRIVEN))) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.5) return false;
  if (!electronId_noMuon(index)) return false;
  if (!electronId_cand01(index)) return false;
  if (!electronImpact_cand01(index)) return false;
  if (electronIsolation_relsusy_cand1(index, true) > 0.10) return false;
  if (isFromConversionPartnerTrack(index)) return false;
  return true;
}

bool electronSelection_cand02(const unsigned int index)
{
  if (!(cms2.els_type()[index] & (1<<ISECALDRIVEN))) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.5) return false;
  if (!electronId_noMuon(index)) return false;
  if (!electronId_cand02(index)) return false;
  if (!electronImpact_cand01(index)) return false;
  if (electronIsolation_relsusy_cand1(index, true) > 0.10) return false;
  if (isFromConversionPartnerTrack(index)) return false;
  return true;
}

//this will replace our PAS-09-002 style selection
// with more better rejection: JuraTrackIso, susy-style (ped subtracted in EB)
// and conversion rejection
bool electronSelectionTTbar_egLoose(const unsigned int index)
{
  if (!(cms2.els_type()[index] & (1<<ISECALDRIVEN))) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.5) return false;
  if (!electronId_noMuon(index)) return false;
  if (!electronId_classBasedLoose(index)) return false; // egamma_looseId
  if (!electronImpactTTbar(index)) return false;
  if (electronIsolation_relsusy_cand1(index, true) > 0.10) return false;
  if (isFromConversionPartnerTrack(index)) return false;
  return true;
}
bool electronSelectionTTbar_egLoose(const unsigned int index, unsigned int fakeableV)
{
  if (!(cms2.els_type()[index] & (1<<ISECALDRIVEN))) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.5) return false;
  if (!electronId_noMuon(index)) return false;
  if (!electronId_classBasedLoose(index)) return false; // egamma_looseId
  if (!electronImpactTTbar(index)) return false;
  if (electronIsolation_relsusy_cand1(index, true) > 0.10) return false;
  if (isFromConversionPartnerTrack(index)) return false;
  return true;
}
//this is similar to above, but based on a simpler cut-based egamma ID
// with more better rejection: JuraTrackIso, susy-style (ped subtracted in EB)
// and conversion rejection
bool electronSelectionTTbar_tasCand01(const unsigned int index)
{
  if (!(cms2.els_type()[index] & (1<<ISECALDRIVEN))) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.5) return false;
  if (!electronId_noMuon(index)) return false;
  if (!electronId_cand01(index)) return false; // 
  if (!electronImpactTTbar(index)) return false;
  if (electronIsolation_relsusy_cand1(index, true) > 0.10) return false;
  if (isFromConversionPartnerTrack(index)) return false;
  return true;
}

bool electronSelectionTTbar_refS10(const unsigned int index){
  if (cms2.els_p4()[index].pt()<20 ) return false;
  if (fabs(cms2.els_p4()[index].eta()) > 2.4) return false;
  if (!electronId_classBasedLoose(index)) return false; // egamma_looseId
  if (!electronImpactTTbar(index)) return false;
  int muSize = cms2.mus_p4().size();
  for (int i =0; i< muSize; ++i){
    if (((cms2.mus_type()[i])&6)==0) continue; //global or tracker
    if (cms2.mus_validHits()[i] <= 10 ) continue;
    float dR = ROOT::Math::VectorUtil::DeltaR(cms2.mus_p4()[i], cms2.els_p4()[index]);
    if (dR< 0.1) return false;
  }
  if ((cms2.els_exp_innerlayers()[index]) > 1) return false;
  float isoSum = cms2.els_tkIso04()[index] + cms2.els_ecalIso04()[index] + cms2.els_hcalIso04()[index];
  if (isoSum/cms2.els_p4()[index].pt()>0.15) return false;

  return true;
}

//
// if fbrem is low then cut on e/p_in
//

bool electronId_extra(const unsigned int index)
{
  if (cms2.els_fbrem()[index] < 0.2) {
    if (cms2.els_eOverPIn()[index] < 0.7 || cms2.els_eOverPIn()[index] > 1.5) return false;
  }
  
  return true;
}

//
// remove if close to a muon
//
bool electronId_noMuon(const unsigned int index)
{
  if ( cms2.els_closestMuon().at(index) != -1) return false;
  return true;
}

//
// candidate electron id function
//
bool electronId_cand01(const unsigned int index)
{
  
  //
  // define thresholds for EB, EE
  //
  float dEtaInThresholds[2]               = {0.007, 0.010};
  float dPhiInThresholds[2]               = {0.020, 0.025};
  float hoeThresholds[2]                  = {0.01, 0.01};
  float sigmaIEtaIEtaThresholds[2]        = {9999.99, 0.03};
  float e2x5Over5x5Thresholds[2]          = {0.90, 0.00};
  
  //
  // apply cuts
  //
  if (fabs(cms2.els_etaSC()[index]) < 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEB)) {
    if (fabs(cms2.els_dEtaIn()[index]) > dEtaInThresholds[0]) 	return false;
    if (fabs(cms2.els_dPhiIn()[index]) > dPhiInThresholds[0]) 	return false;
    if (cms2.els_hOverE()[index] > hoeThresholds[0]) 		return false;
    if ((cms2.els_e2x5Max()[index]/cms2.els_e5x5()[index]) < e2x5Over5x5Thresholds[0]) return false;
    return true;
  }
  if (fabs(cms2.els_etaSC()[index]) > 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEE)) {
    if (fabs(cms2.els_dEtaIn()[index]) > dEtaInThresholds[1]) 	return false;
    if (fabs(cms2.els_dPhiIn()[index]) > dPhiInThresholds[1]) 	return false;
    if (cms2.els_hOverE()[index] > hoeThresholds[1]) 		return false;
    if (cms2.els_sigmaIEtaIEta()[index] > sigmaIEtaIEtaThresholds[1]) 	return false;
    return true;
  }
  
  return false;
}

bool electronId_cand02(const unsigned int index)
{
  
  //
  // define thresholds for EB, EE
  //
  float dEtaInThresholds[2]               = {0.005, 0.007};
  float dPhiInThresholds[2]               = {0.020, 0.025};
  float hoeThresholds[2]                  = {0.01, 0.01};
  float sigmaIEtaIEtaThresholds[2]        = {9999.99, 0.03};
  float e2x5Over5x5Thresholds[2]          = {0.94, 0.00};
  
  //
  // apply cuts
  //
  if (fabs(cms2.els_etaSC()[index]) < 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEB)) {
    if (fabs(cms2.els_dEtaIn()[index]) > dEtaInThresholds[0])   return false;
    if (fabs(cms2.els_dPhiIn()[index]) > dPhiInThresholds[0])   return false;
    if (cms2.els_hOverE()[index] > hoeThresholds[0])        return false;
    if ((cms2.els_e2x5Max()[index]/cms2.els_e5x5()[index]) < e2x5Over5x5Thresholds[0]) return false;
    return true;
  }
  if (fabs(cms2.els_etaSC()[index]) > 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEE)) {
    if (fabs(cms2.els_dEtaIn()[index]) > dEtaInThresholds[1])   return false;
    if (fabs(cms2.els_dPhiIn()[index]) > dPhiInThresholds[1])   return false;
    if (cms2.els_hOverE()[index] > hoeThresholds[1])        return false;
    if (cms2.els_sigmaIEtaIEta()[index] > sigmaIEtaIEtaThresholds[1])   return false;
    return true;
  }
  
  return false;
}




bool electronImpact_cand01(const unsigned int index)
{
  //
  // define thresholds for EB, EE
  //
  float d0Thresholds[2]               = {0.02, 0.02};
  
  //
  // apply cutç
  //
  if (fabs(cms2.els_etaSC()[index]) < 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEB)) {
    if (fabs(cms2.els_d0corr()[index]) > d0Thresholds[0]) return false;
    return true;
  }
  if (fabs(cms2.els_etaSC()[index]) > 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEE)) {
    if (fabs(cms2.els_d0corr()[index]) > d0Thresholds[1]) return false;
    return true;
  }
  
  return false;
  
}
bool electronImpactTTbar(const unsigned int index)
{
  //
  // define thresholds for EB, EE
  //
  float d0Thresholds[2]               = {0.04, 0.04};
  
  //
  // apply cutç
  //
  if (fabs(cms2.els_etaSC()[index]) < 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEB)) {
    if (fabs(cms2.els_d0corr()[index]) > d0Thresholds[0]) return false;
    return true;
  }
  if (fabs(cms2.els_etaSC()[index]) > 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEE)) {
    if (fabs(cms2.els_d0corr()[index]) > d0Thresholds[1]) return false;
    return true;
  }
  
  return false;
  
}

//
// candidate electron isolation function
//
bool electronIsolation_cand01(const unsigned int index)
{
  
  //
  // define thresholds for EB, EE
  //
  //float tkThresholds[2]         =       {4.5, 6.0};
  float tkThresholds[2] 	= 	{2.5, 2.0};
  float ecalThresholds[2] = 	{2.5, 2.0};
  float hcalThresholds[2] = 	{1.0, 1.0};
  
  //
  // apply cuts
  //
  
  
  if (fabs(cms2.els_etaSC()[index]) < 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEB)) {
    // if (cms2.els_tkIso()[index] > tkThresholds[0])    return false;
    if (cms2.els_tkJuraIso()[index] > tkThresholds[0]) 	return false;
    if (cms2.els_ecalIso()[index] 	> ecalThresholds[0]) 	return false;
    if (cms2.els_hcalIso()[index] 	> hcalThresholds[0]) 	return false;
    return true;
  }
  if (fabs(cms2.els_etaSC()[index]) > 1.479) {
    //if (cms2.els_fiduciality()[index] & (1<<ISEE)) {
    //if (cms2.els_tkIso()[index] > tkThresholds[1])      return false;
    if (cms2.els_tkJuraIso()[index] > tkThresholds[1])      return false;
    if (cms2.els_ecalIso()[index]   > ecalThresholds[1])    return false;
    if (cms2.els_hcalIso()[index]   > hcalThresholds[1])    return false;
    return true;
  }
  
  return false;
}

//
// class based electron id that we have used before
//
bool electronId_classBasedLoose(const unsigned int index)
{
  if (cms2.els_egamma_looseId()[index]) return true;
  return false;
}

bool electronId_classBasedTight(const unsigned int index)
{
  if (cms2.els_egamma_tightId()[index]) return true;
  return false;
}

//
// electron isolation definitions that we have used before
//

float electronIsolation_rel(const unsigned int index, bool use_calo_iso)
{
  float sum = cms2.els_tkIso().at(index);
  if (use_calo_iso) {
    sum += cms2.els_ecalIso()[index];
    sum += cms2.els_hcalIso()[index];
  }
  float pt = cms2.els_p4().at(index).pt();
  return pt / (pt + sum + 1e-5);
}

float electronIsolation_relsusy(const unsigned int index, bool use_calo_iso)
{
  float sum = cms2.els_tkIso().at(index);
  if (use_calo_iso) {
    sum += max(0., (cms2.els_ecalIso().at(index) -2.));
    sum += cms2.els_hcalIso().at(index);
  }
  double pt = cms2.els_p4().at(index).pt();
  return sum/max(pt, 20.);
}

float electronIsolation_relsusy_cand0(const unsigned int index, bool use_calo_iso)
{
  float sum = cms2.els_tkIso().at(index);
  if (use_calo_iso) {
    if (fabs(cms2.els_etaSC().at(index)) > 1.479) sum += cms2.els_ecalIso().at(index);
    if (fabs(cms2.els_etaSC().at(index)) <= 1.479) sum += max(0., (cms2.els_ecalIso().at(index) -1.));
    sum += cms2.els_hcalIso().at(index);
  }
  double pt = cms2.els_p4().at(index).pt();
  return sum/max(pt, 20.);
}

float electronIsolation_relsusy_cand1(const unsigned int index, bool use_calo_iso)
{
  float sum = cms2.els_tkJuraIso().at(index);
  if (use_calo_iso) {
    if (fabs(cms2.els_etaSC().at(index)) > 1.479) sum += cms2.els_ecalIso().at(index);
    if (fabs(cms2.els_etaSC().at(index)) <= 1.479) sum += max(0., (cms2.els_ecalIso().at(index) -1.));
    sum += cms2.els_hcalIso().at(index);
  }
  double pt = cms2.els_p4().at(index).pt();
  return sum/max(pt, 20.);
}


//
//conversion rejection
//
bool isFromConversionHitPattern(const unsigned int index)
{
  if(cms2.els_exp_innerlayers().at(index) > 1) return true;
  return false;
}

bool isFromConversionPartnerTrack(const unsigned int index) {
  
  if(fabs(cms2.els_conv_dist().at(index)) < 0.02 &&
     fabs(cms2.els_conv_dcot().at(index)) < 0.02)
    return true;
  
  return false;
  
}


int getChargeUsingMajorityLogic(int elIdx, float minFracSharedHits) {
  
  
  if(cms2.els_sccharge()[elIdx]*cms2.els_trk_charge()[elIdx] > 0 || (cms2.els_trkidx()[elIdx] < 0 || cms2.els_trkshFrac()[elIdx] < minFracSharedHits))
    return cms2.els_sccharge()[elIdx];
  else 
    return  cms2.trks_charge().at(cms2.els_trkidx().at(elIdx));
  
}

bool isChargeFlip(int elIndex){
  //true if electron is likely to be a charge flip
  if ((cms2.els_trkidx().at(elIndex) >= 0) && (cms2.els_trk_charge().at(elIndex) != cms2.trks_charge().at(cms2.els_trkidx().at(elIndex))) ) return true;
  if ((cms2.els_trkidx().at(elIndex) < 0)  && (cms2.els_trk_charge().at(elIndex) != cms2.els_sccharge().at(elIndex))) return true;
  
  return false;
}
