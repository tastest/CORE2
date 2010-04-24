// -*- C++ -*-
#ifndef CMS2_H
#define CMS2_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include <vector> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

//#define PARANOIA

using namespace std; 
class CMS2 {
private: 
protected: 
	unsigned int index;
	TString evt_CMS2tag_;
	TBranch *evt_CMS2tag_branch;
	bool evt_CMS2tag_isLoaded;
	TString evt_dataset_;
	TBranch *evt_dataset_branch;
	bool evt_dataset_isLoaded;
	vector<TString> hlt_trigNames_;
	TBranch *hlt_trigNames_branch;
	bool hlt_trigNames_isLoaded;
	vector<TString> l1_trigNames_;
	TBranch *l1_trigNames_branch;
	bool l1_trigNames_isLoaded;
	vector<double> jets_closestElectron_DR_;
	TBranch *jets_closestElectron_DR_branch;
	bool jets_closestElectron_DR_isLoaded;
	vector<double> jets_closestMuon_DR_;
	TBranch *jets_closestMuon_DR_branch;
	bool jets_closestMuon_DR_isLoaded;
	float evt_bs_Xwidth_;
	TBranch *evt_bs_Xwidth_branch;
	bool evt_bs_Xwidth_isLoaded;
	float evt_bs_XwidthErr_;
	TBranch *evt_bs_XwidthErr_branch;
	bool evt_bs_XwidthErr_isLoaded;
	float evt_bs_Ywidth_;
	TBranch *evt_bs_Ywidth_branch;
	bool evt_bs_Ywidth_isLoaded;
	float evt_bs_YwidthErr_;
	TBranch *evt_bs_YwidthErr_branch;
	bool evt_bs_YwidthErr_isLoaded;
	float evt_bs_dxdz_;
	TBranch *evt_bs_dxdz_branch;
	bool evt_bs_dxdz_isLoaded;
	float evt_bs_dxdzErr_;
	TBranch *evt_bs_dxdzErr_branch;
	bool evt_bs_dxdzErr_isLoaded;
	float evt_bs_dydz_;
	TBranch *evt_bs_dydz_branch;
	bool evt_bs_dydz_isLoaded;
	float evt_bs_dydzErr_;
	TBranch *evt_bs_dydzErr_branch;
	bool evt_bs_dydzErr_isLoaded;
	float evt_bs_sigmaZ_;
	TBranch *evt_bs_sigmaZ_branch;
	bool evt_bs_sigmaZ_isLoaded;
	float evt_bs_sigmaZErr_;
	TBranch *evt_bs_sigmaZErr_branch;
	bool evt_bs_sigmaZErr_isLoaded;
	float evt_bs_xErr_;
	TBranch *evt_bs_xErr_branch;
	bool evt_bs_xErr_isLoaded;
	float evt_bs_yErr_;
	TBranch *evt_bs_yErr_branch;
	bool evt_bs_yErr_isLoaded;
	float evt_bs_zErr_;
	TBranch *evt_bs_zErr_branch;
	bool evt_bs_zErr_isLoaded;
	float evt_bField_;
	TBranch *evt_bField_branch;
	bool evt_bField_isLoaded;
	float	evt_kfactor_;
	TBranch *evt_kfactor_branch;
	bool evt_kfactor_isLoaded;
	float	evt_scale1fb_;
	TBranch *evt_scale1fb_branch;
	bool evt_scale1fb_isLoaded;
	float	evt_xsec_excl_;
	TBranch *evt_xsec_excl_branch;
	bool evt_xsec_excl_isLoaded;
	float	evt_xsec_incl_;
	TBranch *evt_xsec_incl_branch;
	bool evt_xsec_incl_isLoaded;
	float gen_met_;
	TBranch *gen_met_branch;
	bool gen_met_isLoaded;
	float gen_metPhi_;
	TBranch *gen_metPhi_branch;
	bool gen_metPhi_isLoaded;
	float genps_alphaQCD_;
	TBranch *genps_alphaQCD_branch;
	bool genps_alphaQCD_isLoaded;
	float genps_pthat_;
	TBranch *genps_pthat_branch;
	bool genps_pthat_isLoaded;
	float genps_qScale_;
	TBranch *genps_qScale_branch;
	bool genps_qScale_isLoaded;
	float genps_weight_;
	TBranch *genps_weight_branch;
	bool genps_weight_isLoaded;
	float gen_sumEt_;
	TBranch *gen_sumEt_branch;
	bool gen_sumEt_isLoaded;
	float hcalnoise_eventChargeFraction_;
	TBranch *hcalnoise_eventChargeFraction_branch;
	bool hcalnoise_eventChargeFraction_isLoaded;
	float hcalnoise_eventEMEnergy_;
	TBranch *hcalnoise_eventEMEnergy_branch;
	bool hcalnoise_eventEMEnergy_isLoaded;
	float hcalnoise_eventEMFraction_;
	TBranch *hcalnoise_eventEMFraction_branch;
	bool hcalnoise_eventEMFraction_isLoaded;
	float hcalnoise_eventHadEnergy_;
	TBranch *hcalnoise_eventHadEnergy_branch;
	bool hcalnoise_eventHadEnergy_isLoaded;
	float hcalnoise_eventTrackEnergy_;
	TBranch *hcalnoise_eventTrackEnergy_branch;
	bool hcalnoise_eventTrackEnergy_isLoaded;
	float hcalnoise_max10GeVHitTime_;
	TBranch *hcalnoise_max10GeVHitTime_branch;
	bool hcalnoise_max10GeVHitTime_isLoaded;
	float hcalnoise_max25GeVHitTime_;
	TBranch *hcalnoise_max25GeVHitTime_branch;
	bool hcalnoise_max25GeVHitTime_isLoaded;
	float hcalnoise_min10GeVHitTime_;
	TBranch *hcalnoise_min10GeVHitTime_branch;
	bool hcalnoise_min10GeVHitTime_isLoaded;
	float hcalnoise_min25GeVHitTime_;
	TBranch *hcalnoise_min25GeVHitTime_branch;
	bool hcalnoise_min25GeVHitTime_isLoaded;
	float hcalnoise_minE10TS_;
	TBranch *hcalnoise_minE10TS_branch;
	bool hcalnoise_minE10TS_isLoaded;
	float hcalnoise_minE2Over10TS_;
	TBranch *hcalnoise_minE2Over10TS_branch;
	bool hcalnoise_minE2Over10TS_isLoaded;
	float hcalnoise_minE2TS_;
	TBranch *hcalnoise_minE2TS_branch;
	bool hcalnoise_minE2TS_isLoaded;
	float hcalnoise_minHPDEMF_;
	TBranch *hcalnoise_minHPDEMF_branch;
	bool hcalnoise_minHPDEMF_isLoaded;
	float hcalnoise_minRBXEMF_;
	TBranch *hcalnoise_minRBXEMF_branch;
	bool hcalnoise_minRBXEMF_isLoaded;
	float hcalnoise_rms10GeVHitTime_;
	TBranch *hcalnoise_rms10GeVHitTime_branch;
	bool hcalnoise_rms10GeVHitTime_isLoaded;
	float hcalnoise_rms25GeVHitTime_;
	TBranch *hcalnoise_rms25GeVHitTime_branch;
	bool hcalnoise_rms25GeVHitTime_isLoaded;
	float l1_met_etTot_;
	TBranch *l1_met_etTot_branch;
	bool l1_met_etTot_isLoaded;
	float l1_met_met_;
	TBranch *l1_met_met_branch;
	bool l1_met_met_isLoaded;
	float l1_mht_htTot_;
	TBranch *l1_mht_htTot_branch;
	bool l1_mht_htTot_isLoaded;
	float l1_mht_mht_;
	TBranch *l1_mht_mht_branch;
	bool l1_mht_mht_isLoaded;
	float evt_ecalendcapm_met_;
	TBranch *evt_ecalendcapm_met_branch;
	bool evt_ecalendcapm_met_isLoaded;
	float evt_ecalendcapm_metPhi_;
	TBranch *evt_ecalendcapm_metPhi_branch;
	bool evt_ecalendcapm_metPhi_isLoaded;
	float evt_ecalendcapp_met_;
	TBranch *evt_ecalendcapp_met_branch;
	bool evt_ecalendcapp_met_isLoaded;
	float evt_ecalendcapp_metPhi_;
	TBranch *evt_ecalendcapp_metPhi_branch;
	bool evt_ecalendcapp_metPhi_isLoaded;
	float evt_ecalmet_;
	TBranch *evt_ecalmet_branch;
	bool evt_ecalmet_isLoaded;
	float evt_ecalmetPhi_;
	TBranch *evt_ecalmetPhi_branch;
	bool evt_ecalmetPhi_isLoaded;
	float evt_endcapm_met_;
	TBranch *evt_endcapm_met_branch;
	bool evt_endcapm_met_isLoaded;
	float evt_endcapm_metPhi_;
	TBranch *evt_endcapm_metPhi_branch;
	bool evt_endcapm_metPhi_isLoaded;
	float evt_endcapp_met_;
	TBranch *evt_endcapp_met_branch;
	bool evt_endcapp_met_isLoaded;
	float evt_endcapp_metPhi_;
	TBranch *evt_endcapp_metPhi_branch;
	bool evt_endcapp_metPhi_isLoaded;
	float evt_hcalendcapm_met_;
	TBranch *evt_hcalendcapm_met_branch;
	bool evt_hcalendcapm_met_isLoaded;
	float evt_hcalendcapm_metPhi_;
	TBranch *evt_hcalendcapm_metPhi_branch;
	bool evt_hcalendcapm_metPhi_isLoaded;
	float evt_hcalendcapp_met_;
	TBranch *evt_hcalendcapp_met_branch;
	bool evt_hcalendcapp_met_isLoaded;
	float evt_hcalendcapp_metPhi_;
	TBranch *evt_hcalendcapp_metPhi_branch;
	bool evt_hcalendcapp_metPhi_isLoaded;
	float evt_hcalmet_;
	TBranch *evt_hcalmet_branch;
	bool evt_hcalmet_isLoaded;
	float evt_hcalmetPhi_;
	TBranch *evt_hcalmetPhi_branch;
	bool evt_hcalmetPhi_isLoaded;
	float evt_met_;
	TBranch *evt_met_branch;
	bool evt_met_isLoaded;
	float evt_metHO_;
	TBranch *evt_metHO_branch;
	bool evt_metHO_isLoaded;
	float evt_metHOPhi_;
	TBranch *evt_metHOPhi_branch;
	bool evt_metHOPhi_isLoaded;
	float evt_metHOSig_;
	TBranch *evt_metHOSig_branch;
	bool evt_metHOSig_isLoaded;
	float evt_metMuonCorr_;
	TBranch *evt_metMuonCorr_branch;
	bool evt_metMuonCorr_isLoaded;
	float evt_metMuonCorrPhi_;
	TBranch *evt_metMuonCorrPhi_branch;
	bool evt_metMuonCorrPhi_isLoaded;
	float evt_metMuonCorrSig_;
	TBranch *evt_metMuonCorrSig_branch;
	bool evt_metMuonCorrSig_isLoaded;
	float evt_metMuonJESCorr_;
	TBranch *evt_metMuonJESCorr_branch;
	bool evt_metMuonJESCorr_isLoaded;
	float evt_metMuonJESCorrPhi_;
	TBranch *evt_metMuonJESCorrPhi_branch;
	bool evt_metMuonJESCorrPhi_isLoaded;
	float evt_metMuonJESCorrSig_;
	TBranch *evt_metMuonJESCorrSig_branch;
	bool evt_metMuonJESCorrSig_isLoaded;
	float evt_metNoHF_;
	TBranch *evt_metNoHF_branch;
	bool evt_metNoHF_isLoaded;
	float evt_metNoHFHO_;
	TBranch *evt_metNoHFHO_branch;
	bool evt_metNoHFHO_isLoaded;
	float evt_metNoHFHOPhi_;
	TBranch *evt_metNoHFHOPhi_branch;
	bool evt_metNoHFHOPhi_isLoaded;
	float evt_metNoHFHOSig_;
	TBranch *evt_metNoHFHOSig_branch;
	bool evt_metNoHFHOSig_isLoaded;
	float evt_metNoHFPhi_;
	TBranch *evt_metNoHFPhi_branch;
	bool evt_metNoHFPhi_isLoaded;
	float evt_metNoHFSig_;
	TBranch *evt_metNoHFSig_branch;
	bool evt_metNoHFSig_isLoaded;
	float evt_metOpt_;
	TBranch *evt_metOpt_branch;
	bool evt_metOpt_isLoaded;
	float evt_metOptHO_;
	TBranch *evt_metOptHO_branch;
	bool evt_metOptHO_isLoaded;
	float evt_metOptHOPhi_;
	TBranch *evt_metOptHOPhi_branch;
	bool evt_metOptHOPhi_isLoaded;
	float evt_metOptHOSig_;
	TBranch *evt_metOptHOSig_branch;
	bool evt_metOptHOSig_isLoaded;
	float evt_metOptNoHF_;
	TBranch *evt_metOptNoHF_branch;
	bool evt_metOptNoHF_isLoaded;
	float evt_metOptNoHFHO_;
	TBranch *evt_metOptNoHFHO_branch;
	bool evt_metOptNoHFHO_isLoaded;
	float evt_metOptNoHFHOPhi_;
	TBranch *evt_metOptNoHFHOPhi_branch;
	bool evt_metOptNoHFHOPhi_isLoaded;
	float evt_metOptNoHFHOSig_;
	TBranch *evt_metOptNoHFHOSig_branch;
	bool evt_metOptNoHFHOSig_isLoaded;
	float evt_metOptNoHFPhi_;
	TBranch *evt_metOptNoHFPhi_branch;
	bool evt_metOptNoHFPhi_isLoaded;
	float evt_metOptNoHFSig_;
	TBranch *evt_metOptNoHFSig_branch;
	bool evt_metOptNoHFSig_isLoaded;
	float evt_metOptPhi_;
	TBranch *evt_metOptPhi_branch;
	bool evt_metOptPhi_isLoaded;
	float evt_metOptSig_;
	TBranch *evt_metOptSig_branch;
	bool evt_metOptSig_isLoaded;
	float evt_metPhi_;
	TBranch *evt_metPhi_branch;
	bool evt_metPhi_isLoaded;
	float evt_metSig_;
	TBranch *evt_metSig_branch;
	bool evt_metSig_isLoaded;
	float evt_sumet_;
	TBranch *evt_sumet_branch;
	bool evt_sumet_isLoaded;
	float evt_sumetHO_;
	TBranch *evt_sumetHO_branch;
	bool evt_sumetHO_isLoaded;
	float evt_sumetMuonCorr_;
	TBranch *evt_sumetMuonCorr_branch;
	bool evt_sumetMuonCorr_isLoaded;
	float evt_sumetNoHF_;
	TBranch *evt_sumetNoHF_branch;
	bool evt_sumetNoHF_isLoaded;
	float evt_sumetNoHFHO_;
	TBranch *evt_sumetNoHFHO_branch;
	bool evt_sumetNoHFHO_isLoaded;
	float evt_sumetOpt_;
	TBranch *evt_sumetOpt_branch;
	bool evt_sumetOpt_isLoaded;
	float evt_sumetOptHO_;
	TBranch *evt_sumetOptHO_branch;
	bool evt_sumetOptHO_isLoaded;
	float evt_sumetOptNoHF_;
	TBranch *evt_sumetOptNoHF_branch;
	bool evt_sumetOptNoHF_isLoaded;
	float evt_sumetOptNoHFHO_;
	TBranch *evt_sumetOptNoHFHO_branch;
	bool evt_sumetOptNoHFHO_isLoaded;
	float pdfinfo_scale_;
	TBranch *pdfinfo_scale_branch;
	bool pdfinfo_scale_isLoaded;
	float pdfinfo_x1_;
	TBranch *pdfinfo_x1_branch;
	bool pdfinfo_x1_isLoaded;
	float pdfinfo_x2_;
	TBranch *pdfinfo_x2_branch;
	bool pdfinfo_x2_isLoaded;
	float evt_pfmet_;
	TBranch *evt_pfmet_branch;
	bool evt_pfmet_isLoaded;
	float evt_pfmetPhi_;
	TBranch *evt_pfmetPhi_branch;
	bool evt_pfmetPhi_isLoaded;
	float evt_pfmetSig_;
	TBranch *evt_pfmetSig_branch;
	bool evt_pfmetSig_isLoaded;
	float evt_pfsumet_;
	TBranch *evt_pfsumet_branch;
	bool evt_pfsumet_isLoaded;
	float evt_tcmet_;
	TBranch *evt_tcmet_branch;
	bool evt_tcmet_isLoaded;
	float evt_tcmetPhi_;
	TBranch *evt_tcmetPhi_branch;
	bool evt_tcmetPhi_isLoaded;
	float evt_tcmetSig_;
	TBranch *evt_tcmetSig_branch;
	bool evt_tcmetSig_isLoaded;
	float evt_tcsumet_;
	TBranch *evt_tcsumet_branch;
	bool evt_tcsumet_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  evt_bsp4_;
	TBranch *evt_bsp4_branch;
	bool evt_bsp4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  l1_met_p4_;
	TBranch *l1_met_p4_branch;
	bool l1_met_p4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  l1_mht_p4_;
	TBranch *l1_mht_p4_branch;
	bool l1_mht_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_calo_p4_;
	TBranch *taus_calo_p4_branch;
	bool taus_calo_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_mc_motherp4_;
	TBranch *els_mc_motherp4_branch;
	bool els_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_mc_p4_;
	TBranch *els_mc_p4_branch;
	bool els_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_mc_gp_p4_;
	TBranch *jets_mc_gp_p4_branch;
	bool jets_mc_gp_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_mc_p4_;
	TBranch *jets_mc_p4_branch;
	bool jets_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_mc_motherp4_;
	TBranch *mus_mc_motherp4_branch;
	bool mus_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_mc_p4_;
	TBranch *mus_mc_p4_branch;
	bool mus_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trk_mcp4_;
	TBranch *trk_mcp4_branch;
	bool trk_mcp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_inner_position_;
	TBranch *els_inner_position_branch;
	bool els_inner_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_outer_position_;
	TBranch *els_outer_position_branch;
	bool els_outer_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4_;
	TBranch *els_p4_branch;
	bool els_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4In_;
	TBranch *els_p4In_branch;
	bool els_p4In_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4Out_;
	TBranch *els_p4Out_branch;
	bool els_p4Out_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_trk_p4_;
	TBranch *els_trk_p4_branch;
	bool els_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_vertex_p4_;
	TBranch *els_vertex_p4_branch;
	bool els_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genjets_p4_;
	TBranch *genjets_p4_branch;
	bool genjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genps_p4_;
	TBranch *genps_p4_branch;
	bool genps_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genps_prod_vtx_;
	TBranch *genps_prod_vtx_branch;
	bool genps_prod_vtx_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_ll_p4_;
	TBranch *hyp_ll_p4_branch;
	bool hyp_ll_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_ll_trk_p4_;
	TBranch *hyp_ll_trk_p4_branch;
	bool hyp_ll_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_lt_p4_;
	TBranch *hyp_lt_p4_branch;
	bool hyp_lt_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_lt_trk_p4_;
	TBranch *hyp_lt_trk_p4_branch;
	bool hyp_lt_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_p4_;
	TBranch *hyp_p4_branch;
	bool hyp_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_FVFit_p4_;
	TBranch *hyp_FVFit_p4_branch;
	bool hyp_FVFit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_FVFit_v4_;
	TBranch *hyp_FVFit_v4_branch;
	bool hyp_FVFit_v4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_ll_mc_p4_;
	TBranch *hyp_ll_mc_p4_branch;
	bool hyp_ll_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_lt_mc_p4_;
	TBranch *hyp_lt_mc_p4_branch;
	bool hyp_lt_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_p4_;
	TBranch *jets_p4_branch;
	bool jets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_vertex_p4_;
	TBranch *jets_vertex_p4_branch;
	bool jets_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jpts_p4_;
	TBranch *jpts_p4_branch;
	bool jpts_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_emiso_p4_;
	TBranch *l1_emiso_p4_branch;
	bool l1_emiso_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_emnoiso_p4_;
	TBranch *l1_emnoiso_p4_branch;
	bool l1_emnoiso_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetsc_p4_;
	TBranch *l1_jetsc_p4_branch;
	bool l1_jetsc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetsf_p4_;
	TBranch *l1_jetsf_p4_branch;
	bool l1_jetsf_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetst_p4_;
	TBranch *l1_jetst_p4_branch;
	bool l1_jetst_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_mus_p4_;
	TBranch *l1_mus_p4_branch;
	bool l1_mus_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitdefault_p4_;
	TBranch *mus_fitdefault_p4_branch;
	bool mus_fitdefault_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitfirsthit_p4_;
	TBranch *mus_fitfirsthit_p4_branch;
	bool mus_fitfirsthit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitpicky_p4_;
	TBranch *mus_fitpicky_p4_branch;
	bool mus_fitpicky_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fittev_p4_;
	TBranch *mus_fittev_p4_branch;
	bool mus_fittev_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_outerPos_p4_;
	TBranch *mus_gfit_outerPos_p4_branch;
	bool mus_gfit_outerPos_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_p4_;
	TBranch *mus_gfit_p4_branch;
	bool mus_gfit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_vertex_p4_;
	TBranch *mus_gfit_vertex_p4_branch;
	bool mus_gfit_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_p4_;
	TBranch *mus_p4_branch;
	bool mus_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_p4_;
	TBranch *mus_sta_p4_branch;
	bool mus_sta_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_vertex_p4_;
	TBranch *mus_sta_vertex_p4_branch;
	bool mus_sta_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_trk_p4_;
	TBranch *mus_trk_p4_branch;
	bool mus_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_vertex_p4_;
	TBranch *mus_vertex_p4_branch;
	bool mus_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_p4_;
	TBranch *pfjets_p4_branch;
	bool pfjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_lead_chargecand_p4_;
	TBranch *taus_pf_lead_chargecand_p4_branch;
	bool taus_pf_lead_chargecand_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_lead_neutrcand_p4_;
	TBranch *taus_pf_lead_neutrcand_p4_branch;
	bool taus_pf_lead_neutrcand_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_p4_;
	TBranch *taus_pf_p4_branch;
	bool taus_pf_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > photons_p4_;
	TBranch *photons_p4_branch;
	bool photons_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ran_trksecalp4_;
	TBranch *ran_trksecalp4_branch;
	bool ran_trksecalp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ran_trksp4_;
	TBranch *ran_trksp4_branch;
	bool ran_trksp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_p4_;
	TBranch *scs_p4_branch;
	bool scs_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_pos_p4_;
	TBranch *scs_pos_p4_branch;
	bool scs_pos_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_vtx_p4_;
	TBranch *scs_vtx_p4_branch;
	bool scs_vtx_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scjets_p4_;
	TBranch *scjets_p4_branch;
	bool scjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scjets_vertex_p4_;
	TBranch *scjets_vertex_p4_branch;
	bool scjets_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_inner_position_;
	TBranch *trks_inner_position_branch;
	bool trks_inner_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_outer_p4_;
	TBranch *trks_outer_p4_branch;
	bool trks_outer_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_outer_position_;
	TBranch *trks_outer_position_branch;
	bool trks_outer_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_trk_p4_;
	TBranch *trks_trk_p4_branch;
	bool trks_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_vertex_p4_;
	TBranch *trks_vertex_p4_branch;
	bool trks_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trkjets_p4_;
	TBranch *trkjets_p4_branch;
	bool trkjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > vtxs_position_;
	TBranch *vtxs_position_branch;
	bool vtxs_position_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > genps_lepdaughter_p4_;
	TBranch *genps_lepdaughter_p4_branch;
	bool genps_lepdaughter_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > hlt_trigObjs_p4_;
	TBranch *hlt_trigObjs_p4_branch;
	bool hlt_trigObjs_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > hyp_jets_p4_;
	TBranch *hyp_jets_p4_branch;
	bool hyp_jets_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > hyp_other_jets_p4_;
	TBranch *hyp_other_jets_p4_branch;
	bool hyp_other_jets_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_isochargecand_p4_;
	TBranch *taus_pf_isochargecand_p4_branch;
	bool taus_pf_isochargecand_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_isogammacand_p4_;
	TBranch *taus_pf_isogammacand_p4_branch;
	bool taus_pf_isogammacand_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_isoneutrcand_p4_;
	TBranch *taus_pf_isoneutrcand_p4_branch;
	bool taus_pf_isoneutrcand_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_sigchargecand_p4_;
	TBranch *taus_pf_sigchargecand_p4_branch;
	bool taus_pf_sigchargecand_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_siggammacand_p4_;
	TBranch *taus_pf_siggammacand_p4_branch;
	bool taus_pf_siggammacand_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_signeutrcand_p4_;
	TBranch *taus_pf_signeutrcand_p4_branch;
	bool taus_pf_signeutrcand_p4_isLoaded;
	vector<float> jets_combinedSecondaryVertexBJetTag_;
	TBranch *jets_combinedSecondaryVertexBJetTag_branch;
	bool jets_combinedSecondaryVertexBJetTag_isLoaded;
	vector<float> jets_combinedSecondaryVertexMVABJetTag_;
	TBranch *jets_combinedSecondaryVertexMVABJetTag_branch;
	bool jets_combinedSecondaryVertexMVABJetTag_isLoaded;
	vector<float> jets_jetBProbabilityBJetTag_;
	TBranch *jets_jetBProbabilityBJetTag_branch;
	bool jets_jetBProbabilityBJetTag_isLoaded;
	vector<float> jets_jetProbabilityBJetTag_;
	TBranch *jets_jetProbabilityBJetTag_branch;
	bool jets_jetProbabilityBJetTag_isLoaded;
	vector<float> jets_simpleSecondaryVertexBJetTag_;
	TBranch *jets_simpleSecondaryVertexBJetTag_branch;
	bool jets_simpleSecondaryVertexBJetTag_isLoaded;
	vector<float> jets_softElectronByIP3dBJetTag_;
	TBranch *jets_softElectronByIP3dBJetTag_branch;
	bool jets_softElectronByIP3dBJetTag_isLoaded;
	vector<float> jets_softElectronByPtBJetTag_;
	TBranch *jets_softElectronByPtBJetTag_branch;
	bool jets_softElectronByPtBJetTag_isLoaded;
	vector<float> jets_softMuonBJetTag_;
	TBranch *jets_softMuonBJetTag_branch;
	bool jets_softMuonBJetTag_isLoaded;
	vector<float> jets_softMuonByIP3dBJetTag_;
	TBranch *jets_softMuonByIP3dBJetTag_branch;
	bool jets_softMuonByIP3dBJetTag_isLoaded;
	vector<float> jets_softMuonByPtBJetTag_;
	TBranch *jets_softMuonByPtBJetTag_branch;
	bool jets_softMuonByPtBJetTag_isLoaded;
	vector<float> jets_softMuonNoIPBJetTag_;
	TBranch *jets_softMuonNoIPBJetTag_branch;
	bool jets_softMuonNoIPBJetTag_isLoaded;
	vector<float> jets_trackCountingHighEffBJetTag_;
	TBranch *jets_trackCountingHighEffBJetTag_branch;
	bool jets_trackCountingHighEffBJetTag_isLoaded;
	vector<float> jets_trackCountingHighPurBJetTag_;
	TBranch *jets_trackCountingHighPurBJetTag_branch;
	bool jets_trackCountingHighPurBJetTag_isLoaded;
	vector<float> trkjets_combinedSecondaryVertexBJetTag_;
	TBranch *trkjets_combinedSecondaryVertexBJetTag_branch;
	bool trkjets_combinedSecondaryVertexBJetTag_isLoaded;
	vector<float> trkjets_combinedSecondaryVertexMVABJetTag_;
	TBranch *trkjets_combinedSecondaryVertexMVABJetTag_branch;
	bool trkjets_combinedSecondaryVertexMVABJetTag_isLoaded;
	vector<float> trkjets_jetBProbabilityBJetTag_;
	TBranch *trkjets_jetBProbabilityBJetTag_branch;
	bool trkjets_jetBProbabilityBJetTag_isLoaded;
	vector<float> trkjets_jetProbabilityBJetTag_;
	TBranch *trkjets_jetProbabilityBJetTag_branch;
	bool trkjets_jetProbabilityBJetTag_isLoaded;
	vector<float> trkjets_simpleSecondaryVertexBJetTag_;
	TBranch *trkjets_simpleSecondaryVertexBJetTag_branch;
	bool trkjets_simpleSecondaryVertexBJetTag_isLoaded;
	vector<float> trkjets_softElectronByIP3dBJetTag_;
	TBranch *trkjets_softElectronByIP3dBJetTag_branch;
	bool trkjets_softElectronByIP3dBJetTag_isLoaded;
	vector<float> trkjets_softElectronByPtBJetTag_;
	TBranch *trkjets_softElectronByPtBJetTag_branch;
	bool trkjets_softElectronByPtBJetTag_isLoaded;
	vector<float> trkjets_softMuonBJetTag_;
	TBranch *trkjets_softMuonBJetTag_branch;
	bool trkjets_softMuonBJetTag_isLoaded;
	vector<float> trkjets_softMuonByIP3dBJetTag_;
	TBranch *trkjets_softMuonByIP3dBJetTag_branch;
	bool trkjets_softMuonByIP3dBJetTag_isLoaded;
	vector<float> trkjets_softMuonByPtBJetTag_;
	TBranch *trkjets_softMuonByPtBJetTag_branch;
	bool trkjets_softMuonByPtBJetTag_isLoaded;
	vector<float> trkjets_softMuonNoIPBJetTag_;
	TBranch *trkjets_softMuonNoIPBJetTag_branch;
	bool trkjets_softMuonNoIPBJetTag_isLoaded;
	vector<float> trkjets_trackCountingHighEffBJetTag_;
	TBranch *trkjets_trackCountingHighEffBJetTag_branch;
	bool trkjets_trackCountingHighEffBJetTag_isLoaded;
	vector<float> trkjets_trackCountingHighPurBJetTag_;
	TBranch *trkjets_trackCountingHighPurBJetTag_branch;
	bool trkjets_trackCountingHighPurBJetTag_isLoaded;
	vector<float> evt_bs_covMatrix_;
	TBranch *evt_bs_covMatrix_branch;
	bool evt_bs_covMatrix_isLoaded;
	vector<float> twrs_ecalTime_;
	TBranch *twrs_ecalTime_branch;
	bool twrs_ecalTime_isLoaded;
	vector<float> twrs_emEnergy_;
	TBranch *twrs_emEnergy_branch;
	bool twrs_emEnergy_isLoaded;
	vector<float> twrs_emEt_;
	TBranch *twrs_emEt_branch;
	bool twrs_emEt_isLoaded;
	vector<float> twrs_emEtcorr_;
	TBranch *twrs_emEtcorr_branch;
	bool twrs_emEtcorr_isLoaded;
	vector<float> twrs_eta_;
	TBranch *twrs_eta_branch;
	bool twrs_eta_isLoaded;
	vector<float> twrs_etacorr_;
	TBranch *twrs_etacorr_branch;
	bool twrs_etacorr_isLoaded;
	vector<float> twrs_etcorr_;
	TBranch *twrs_etcorr_branch;
	bool twrs_etcorr_isLoaded;
	vector<float> twrs_hadEnergy_;
	TBranch *twrs_hadEnergy_branch;
	bool twrs_hadEnergy_isLoaded;
	vector<float> twrs_hadEt_;
	TBranch *twrs_hadEt_branch;
	bool twrs_hadEt_isLoaded;
	vector<float> twrs_hadEtcorr_;
	TBranch *twrs_hadEtcorr_branch;
	bool twrs_hadEtcorr_isLoaded;
	vector<float> twrs_hcalTime_;
	TBranch *twrs_hcalTime_branch;
	bool twrs_hcalTime_isLoaded;
	vector<float> twrs_outerEnergy_;
	TBranch *twrs_outerEnergy_branch;
	bool twrs_outerEnergy_isLoaded;
	vector<float> twrs_outerEt_;
	TBranch *twrs_outerEt_branch;
	bool twrs_outerEt_isLoaded;
	vector<float> twrs_outerEtcorr_;
	TBranch *twrs_outerEtcorr_branch;
	bool twrs_outerEtcorr_isLoaded;
	vector<float> twrs_pcorr_;
	TBranch *twrs_pcorr_branch;
	bool twrs_pcorr_isLoaded;
	vector<float> twrs_phi_;
	TBranch *twrs_phi_branch;
	bool twrs_phi_isLoaded;
	vector<float> twrs_phicorr_;
	TBranch *twrs_phicorr_branch;
	bool twrs_phicorr_isLoaded;
	vector<float> twrs_spikeEt_;
	TBranch *twrs_spikeEt_branch;
	bool twrs_spikeEt_isLoaded;
	vector<float> twrs_spikeR4_;
	TBranch *twrs_spikeR4_branch;
	bool twrs_spikeR4_isLoaded;
	vector<float> twrsUncleaned_ecalTime_;
	TBranch *twrsUncleaned_ecalTime_branch;
	bool twrsUncleaned_ecalTime_isLoaded;
	vector<float> twrsUncleaned_emEnergy_;
	TBranch *twrsUncleaned_emEnergy_branch;
	bool twrsUncleaned_emEnergy_isLoaded;
	vector<float> twrsUncleaned_emEt_;
	TBranch *twrsUncleaned_emEt_branch;
	bool twrsUncleaned_emEt_isLoaded;
	vector<float> twrsUncleaned_emEtcorr_;
	TBranch *twrsUncleaned_emEtcorr_branch;
	bool twrsUncleaned_emEtcorr_isLoaded;
	vector<float> twrsUncleaned_eta_;
	TBranch *twrsUncleaned_eta_branch;
	bool twrsUncleaned_eta_isLoaded;
	vector<float> twrsUncleaned_etacorr_;
	TBranch *twrsUncleaned_etacorr_branch;
	bool twrsUncleaned_etacorr_isLoaded;
	vector<float> twrsUncleaned_etcorr_;
	TBranch *twrsUncleaned_etcorr_branch;
	bool twrsUncleaned_etcorr_isLoaded;
	vector<float> twrsUncleaned_hadEnergy_;
	TBranch *twrsUncleaned_hadEnergy_branch;
	bool twrsUncleaned_hadEnergy_isLoaded;
	vector<float> twrsUncleaned_hadEt_;
	TBranch *twrsUncleaned_hadEt_branch;
	bool twrsUncleaned_hadEt_isLoaded;
	vector<float> twrsUncleaned_hadEtcorr_;
	TBranch *twrsUncleaned_hadEtcorr_branch;
	bool twrsUncleaned_hadEtcorr_isLoaded;
	vector<float> twrsUncleaned_hcalTime_;
	TBranch *twrsUncleaned_hcalTime_branch;
	bool twrsUncleaned_hcalTime_isLoaded;
	vector<float> twrsUncleaned_outerEnergy_;
	TBranch *twrsUncleaned_outerEnergy_branch;
	bool twrsUncleaned_outerEnergy_isLoaded;
	vector<float> twrsUncleaned_outerEt_;
	TBranch *twrsUncleaned_outerEt_branch;
	bool twrsUncleaned_outerEt_isLoaded;
	vector<float> twrsUncleaned_outerEtcorr_;
	TBranch *twrsUncleaned_outerEtcorr_branch;
	bool twrsUncleaned_outerEtcorr_isLoaded;
	vector<float> twrsUncleaned_pcorr_;
	TBranch *twrsUncleaned_pcorr_branch;
	bool twrsUncleaned_pcorr_isLoaded;
	vector<float> twrsUncleaned_phi_;
	TBranch *twrsUncleaned_phi_branch;
	bool twrsUncleaned_phi_isLoaded;
	vector<float> twrsUncleaned_phicorr_;
	TBranch *twrsUncleaned_phicorr_branch;
	bool twrsUncleaned_phicorr_isLoaded;
	vector<float> twrsUncleaned_spikeEt_;
	TBranch *twrsUncleaned_spikeEt_branch;
	bool twrsUncleaned_spikeEt_isLoaded;
	vector<float> twrsUncleaned_spikeR4_;
	TBranch *twrsUncleaned_spikeR4_branch;
	bool twrsUncleaned_spikeR4_isLoaded;
	vector<float> taus_calo_isolationECALhitsEtSum_;
	TBranch *taus_calo_isolationECALhitsEtSum_branch;
	bool taus_calo_isolationECALhitsEtSum_isLoaded;
	vector<float> taus_calo_isolationtrksPtSum_;
	TBranch *taus_calo_isolationtrksPtSum_branch;
	bool taus_calo_isolationtrksPtSum_isLoaded;
	vector<float> taus_calo_leadtrk_HCAL3x3hitsEtSum_;
	TBranch *taus_calo_leadtrk_HCAL3x3hitsEtSum_branch;
	bool taus_calo_leadtrk_HCAL3x3hitsEtSum_isLoaded;
	vector<float> taus_calo_leadtrk_HCAL3x3hottesthitDEta_;
	TBranch *taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch;
	bool taus_calo_leadtrk_HCAL3x3hottesthitDEta_isLoaded;
	vector<float> taus_calo_leadtrk_Signed_Sipt_;
	TBranch *taus_calo_leadtrk_Signed_Sipt_branch;
	bool taus_calo_leadtrk_Signed_Sipt_isLoaded;
	vector<float> taus_calo_leadtrk_lostHits_;
	TBranch *taus_calo_leadtrk_lostHits_branch;
	bool taus_calo_leadtrk_lostHits_isLoaded;
	vector<float> taus_calo_leadtrk_validHits_;
	TBranch *taus_calo_leadtrk_validHits_branch;
	bool taus_calo_leadtrk_validHits_isLoaded;
	vector<float> taus_calo_maximumHCALhitEt_;
	TBranch *taus_calo_maximumHCALhitEt_branch;
	bool taus_calo_maximumHCALhitEt_isLoaded;
	vector<float> taus_calo_signaltrksInvariantMass_;
	TBranch *taus_calo_signaltrksInvariantMass_branch;
	bool taus_calo_signaltrksInvariantMass_isLoaded;
	vector<float> els_mc3dr_;
	TBranch *els_mc3dr_branch;
	bool els_mc3dr_isLoaded;
	vector<float> els_mcdr_;
	TBranch *els_mcdr_branch;
	bool els_mcdr_isLoaded;
	vector<float> jets_mc3dr_;
	TBranch *jets_mc3dr_branch;
	bool jets_mc3dr_isLoaded;
	vector<float> jets_mcdr_;
	TBranch *jets_mcdr_branch;
	bool jets_mcdr_isLoaded;
	vector<float> jets_mc_emEnergy_;
	TBranch *jets_mc_emEnergy_branch;
	bool jets_mc_emEnergy_isLoaded;
	vector<float> jets_mc_gpdr_;
	TBranch *jets_mc_gpdr_branch;
	bool jets_mc_gpdr_isLoaded;
	vector<float> jets_mc_hadEnergy_;
	TBranch *jets_mc_hadEnergy_branch;
	bool jets_mc_hadEnergy_isLoaded;
	vector<float> jets_mc_invEnergy_;
	TBranch *jets_mc_invEnergy_branch;
	bool jets_mc_invEnergy_isLoaded;
	vector<float> jets_mc_otherEnergy_;
	TBranch *jets_mc_otherEnergy_branch;
	bool jets_mc_otherEnergy_isLoaded;
	vector<float> mus_mc3dr_;
	TBranch *mus_mc3dr_branch;
	bool mus_mc3dr_isLoaded;
	vector<float> mus_mcdr_;
	TBranch *mus_mcdr_branch;
	bool mus_mcdr_isLoaded;
	vector<float> trk_mc3dr_;
	TBranch *trk_mc3dr_branch;
	bool trk_mc3dr_isLoaded;
	vector<float> trk_mcdr_;
	TBranch *trk_mcdr_branch;
	bool trk_mcdr_isLoaded;
	vector<float> els_ecalJuraIso_;
	TBranch *els_ecalJuraIso_branch;
	bool els_ecalJuraIso_isLoaded;
	vector<float> els_ecalJuraTowerIso_;
	TBranch *els_ecalJuraTowerIso_branch;
	bool els_ecalJuraTowerIso_isLoaded;
	vector<float> els_hcalConeIso_;
	TBranch *els_hcalConeIso_branch;
	bool els_hcalConeIso_isLoaded;
	vector<float> els_tkJuraIso_;
	TBranch *els_tkJuraIso_branch;
	bool els_tkJuraIso_isLoaded;
	vector<float> els_jetdr_;
	TBranch *els_jetdr_branch;
	bool els_jetdr_isLoaded;
	vector<float> els_musdr_;
	TBranch *els_musdr_branch;
	bool els_musdr_isLoaded;
	vector<float> els_chi2_;
	TBranch *els_chi2_branch;
	bool els_chi2_isLoaded;
	vector<float> els_conv_dcot_;
	TBranch *els_conv_dcot_branch;
	bool els_conv_dcot_isLoaded;
	vector<float> els_conv_dist_;
	TBranch *els_conv_dist_branch;
	bool els_conv_dist_isLoaded;
	vector<float> els_d0_;
	TBranch *els_d0_branch;
	bool els_d0_isLoaded;
	vector<float> els_d0Err_;
	TBranch *els_d0Err_branch;
	bool els_d0Err_isLoaded;
	vector<float> els_d0corr_;
	TBranch *els_d0corr_branch;
	bool els_d0corr_isLoaded;
	vector<float> els_dEtaIn_;
	TBranch *els_dEtaIn_branch;
	bool els_dEtaIn_isLoaded;
	vector<float> els_dEtaOut_;
	TBranch *els_dEtaOut_branch;
	bool els_dEtaOut_isLoaded;
	vector<float> els_dPhiIn_;
	TBranch *els_dPhiIn_branch;
	bool els_dPhiIn_isLoaded;
	vector<float> els_dPhiInPhiOut_;
	TBranch *els_dPhiInPhiOut_branch;
	bool els_dPhiInPhiOut_isLoaded;
	vector<float> els_dPhiOut_;
	TBranch *els_dPhiOut_branch;
	bool els_dPhiOut_isLoaded;
	vector<float> els_deltaEtaEleClusterTrackAtCalo_;
	TBranch *els_deltaEtaEleClusterTrackAtCalo_branch;
	bool els_deltaEtaEleClusterTrackAtCalo_isLoaded;
	vector<float> els_deltaPhiEleClusterTrackAtCalo_;
	TBranch *els_deltaPhiEleClusterTrackAtCalo_branch;
	bool els_deltaPhiEleClusterTrackAtCalo_isLoaded;
	vector<float> els_e1x5_;
	TBranch *els_e1x5_branch;
	bool els_e1x5_isLoaded;
	vector<float> els_e2x5Max_;
	TBranch *els_e2x5Max_branch;
	bool els_e2x5Max_isLoaded;
	vector<float> els_e3x3_;
	TBranch *els_e3x3_branch;
	bool els_e3x3_isLoaded;
	vector<float> els_e5x5_;
	TBranch *els_e5x5_branch;
	bool els_e5x5_isLoaded;
	vector<float> els_eMax_;
	TBranch *els_eMax_branch;
	bool els_eMax_isLoaded;
	vector<float> els_eOverPIn_;
	TBranch *els_eOverPIn_branch;
	bool els_eOverPIn_isLoaded;
	vector<float> els_eOverPOut_;
	TBranch *els_eOverPOut_branch;
	bool els_eOverPOut_isLoaded;
	vector<float> els_eSC_;
	TBranch *els_eSC_branch;
	bool els_eSC_isLoaded;
	vector<float> els_eSCPresh_;
	TBranch *els_eSCPresh_branch;
	bool els_eSCPresh_isLoaded;
	vector<float> els_eSCRaw_;
	TBranch *els_eSCRaw_branch;
	bool els_eSCRaw_isLoaded;
	vector<float> els_eSeed_;
	TBranch *els_eSeed_branch;
	bool els_eSeed_isLoaded;
	vector<float> els_eSeedOverPIn_;
	TBranch *els_eSeedOverPIn_branch;
	bool els_eSeedOverPIn_isLoaded;
	vector<float> els_eSeedOverPOut_;
	TBranch *els_eSeedOverPOut_branch;
	bool els_eSeedOverPOut_isLoaded;
	vector<float> els_ecalEnergy_;
	TBranch *els_ecalEnergy_branch;
	bool els_ecalEnergy_isLoaded;
	vector<float> els_ecalEnergyError_;
	TBranch *els_ecalEnergyError_branch;
	bool els_ecalEnergyError_isLoaded;
	vector<float> els_ecalIso_;
	TBranch *els_ecalIso_branch;
	bool els_ecalIso_isLoaded;
	vector<float> els_ecalIso04_;
	TBranch *els_ecalIso04_branch;
	bool els_ecalIso04_isLoaded;
	vector<float> els_egamma_looseId_;
	TBranch *els_egamma_looseId_branch;
	bool els_egamma_looseId_isLoaded;
	vector<float> els_egamma_robustHighEnergy_;
	TBranch *els_egamma_robustHighEnergy_branch;
	bool els_egamma_robustHighEnergy_isLoaded;
	vector<float> els_egamma_robustLooseId_;
	TBranch *els_egamma_robustLooseId_branch;
	bool els_egamma_robustLooseId_isLoaded;
	vector<float> els_egamma_robustTightId_;
	TBranch *els_egamma_robustTightId_branch;
	bool els_egamma_robustTightId_isLoaded;
	vector<float> els_egamma_tightId_;
	TBranch *els_egamma_tightId_branch;
	bool els_egamma_tightId_isLoaded;
	vector<float> els_electronMomentumError_;
	TBranch *els_electronMomentumError_branch;
	bool els_electronMomentumError_isLoaded;
	vector<float> els_etaErr_;
	TBranch *els_etaErr_branch;
	bool els_etaErr_isLoaded;
	vector<float> els_etaSC_;
	TBranch *els_etaSC_branch;
	bool els_etaSC_isLoaded;
	vector<float> els_fbrem_;
	TBranch *els_fbrem_branch;
	bool els_fbrem_isLoaded;
	vector<float> els_hOverE_;
	TBranch *els_hOverE_branch;
	bool els_hOverE_isLoaded;
	vector<float> els_hcalDepth1OverEcal_;
	TBranch *els_hcalDepth1OverEcal_branch;
	bool els_hcalDepth1OverEcal_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt_;
	TBranch *els_hcalDepth1TowerSumEt_branch;
	bool els_hcalDepth1TowerSumEt_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt04_;
	TBranch *els_hcalDepth1TowerSumEt04_branch;
	bool els_hcalDepth1TowerSumEt04_isLoaded;
	vector<float> els_hcalDepth2OverEcal_;
	TBranch *els_hcalDepth2OverEcal_branch;
	bool els_hcalDepth2OverEcal_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt_;
	TBranch *els_hcalDepth2TowerSumEt_branch;
	bool els_hcalDepth2TowerSumEt_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt04_;
	TBranch *els_hcalDepth2TowerSumEt04_branch;
	bool els_hcalDepth2TowerSumEt04_isLoaded;
	vector<float> els_hcalIso_;
	TBranch *els_hcalIso_branch;
	bool els_hcalIso_isLoaded;
	vector<float> els_hcalIso04_;
	TBranch *els_hcalIso04_branch;
	bool els_hcalIso04_isLoaded;
	vector<float> els_layer1_charge_;
	TBranch *els_layer1_charge_branch;
	bool els_layer1_charge_isLoaded;
	vector<float> els_ndof_;
	TBranch *els_ndof_branch;
	bool els_ndof_isLoaded;
	vector<float> els_phiErr_;
	TBranch *els_phiErr_branch;
	bool els_phiErr_isLoaded;
	vector<float> els_phiSC_;
	TBranch *els_phiSC_branch;
	bool els_phiSC_isLoaded;
	vector<float> els_ptErr_;
	TBranch *els_ptErr_branch;
	bool els_ptErr_isLoaded;
	vector<float> els_sigmaEtaEta_;
	TBranch *els_sigmaEtaEta_branch;
	bool els_sigmaEtaEta_isLoaded;
	vector<float> els_sigmaIEtaIEta_;
	TBranch *els_sigmaIEtaIEta_branch;
	bool els_sigmaIEtaIEta_isLoaded;
	vector<float> els_sigmaIPhiIPhi_;
	TBranch *els_sigmaIPhiIPhi_branch;
	bool els_sigmaIPhiIPhi_isLoaded;
	vector<float> els_sigmaPhiPhi_;
	TBranch *els_sigmaPhiPhi_branch;
	bool els_sigmaPhiPhi_isLoaded;
	vector<float> els_tkIso_;
	TBranch *els_tkIso_branch;
	bool els_tkIso_isLoaded;
	vector<float> els_tkIso04_;
	TBranch *els_tkIso04_branch;
	bool els_tkIso04_isLoaded;
	vector<float> els_trackMomentumError_;
	TBranch *els_trackMomentumError_branch;
	bool els_trackMomentumError_isLoaded;
	vector<float> els_trkdr_;
	TBranch *els_trkdr_branch;
	bool els_trkdr_isLoaded;
	vector<float> els_trkshFrac_;
	TBranch *els_trkshFrac_branch;
	bool els_trkshFrac_isLoaded;
	vector<float> els_z0_;
	TBranch *els_z0_branch;
	bool els_z0_isLoaded;
	vector<float> els_z0Err_;
	TBranch *els_z0Err_branch;
	bool els_z0Err_isLoaded;
	vector<float> els_z0corr_;
	TBranch *els_z0corr_branch;
	bool els_z0corr_isLoaded;
	vector<float> hyp_Ht_;
	TBranch *hyp_Ht_branch;
	bool hyp_Ht_isLoaded;
	vector<float> hyp_dPhi_nJet_metMuonJESCorr_;
	TBranch *hyp_dPhi_nJet_metMuonJESCorr_branch;
	bool hyp_dPhi_nJet_metMuonJESCorr_isLoaded;
	vector<float> hyp_dPhi_nJet_muCorrMet_;
	TBranch *hyp_dPhi_nJet_muCorrMet_branch;
	bool hyp_dPhi_nJet_muCorrMet_isLoaded;
	vector<float> hyp_dPhi_nJet_tcMet_;
	TBranch *hyp_dPhi_nJet_tcMet_branch;
	bool hyp_dPhi_nJet_tcMet_isLoaded;
	vector<float> hyp_dPhi_nJet_unCorrMet_;
	TBranch *hyp_dPhi_nJet_unCorrMet_branch;
	bool hyp_dPhi_nJet_unCorrMet_isLoaded;
	vector<float> hyp_ll_chi2_;
	TBranch *hyp_ll_chi2_branch;
	bool hyp_ll_chi2_isLoaded;
	vector<float> hyp_ll_d0_;
	TBranch *hyp_ll_d0_branch;
	bool hyp_ll_d0_isLoaded;
	vector<float> hyp_ll_d0Err_;
	TBranch *hyp_ll_d0Err_branch;
	bool hyp_ll_d0Err_isLoaded;
	vector<float> hyp_ll_d0corr_;
	TBranch *hyp_ll_d0corr_branch;
	bool hyp_ll_d0corr_isLoaded;
	vector<float> hyp_ll_dPhi_metMuonJESCorr_;
	TBranch *hyp_ll_dPhi_metMuonJESCorr_branch;
	bool hyp_ll_dPhi_metMuonJESCorr_isLoaded;
	vector<float> hyp_ll_dPhi_muCorrMet_;
	TBranch *hyp_ll_dPhi_muCorrMet_branch;
	bool hyp_ll_dPhi_muCorrMet_isLoaded;
	vector<float> hyp_ll_dPhi_tcMet_;
	TBranch *hyp_ll_dPhi_tcMet_branch;
	bool hyp_ll_dPhi_tcMet_isLoaded;
	vector<float> hyp_ll_dPhi_unCorrMet_;
	TBranch *hyp_ll_dPhi_unCorrMet_branch;
	bool hyp_ll_dPhi_unCorrMet_isLoaded;
	vector<float> hyp_ll_etaErr_;
	TBranch *hyp_ll_etaErr_branch;
	bool hyp_ll_etaErr_isLoaded;
	vector<float> hyp_ll_ndof_;
	TBranch *hyp_ll_ndof_branch;
	bool hyp_ll_ndof_isLoaded;
	vector<float> hyp_ll_phiErr_;
	TBranch *hyp_ll_phiErr_branch;
	bool hyp_ll_phiErr_isLoaded;
	vector<float> hyp_ll_ptErr_;
	TBranch *hyp_ll_ptErr_branch;
	bool hyp_ll_ptErr_isLoaded;
	vector<float> hyp_ll_z0_;
	TBranch *hyp_ll_z0_branch;
	bool hyp_ll_z0_isLoaded;
	vector<float> hyp_ll_z0Err_;
	TBranch *hyp_ll_z0Err_branch;
	bool hyp_ll_z0Err_isLoaded;
	vector<float> hyp_ll_z0corr_;
	TBranch *hyp_ll_z0corr_branch;
	bool hyp_ll_z0corr_isLoaded;
	vector<float> hyp_lt_chi2_;
	TBranch *hyp_lt_chi2_branch;
	bool hyp_lt_chi2_isLoaded;
	vector<float> hyp_lt_d0_;
	TBranch *hyp_lt_d0_branch;
	bool hyp_lt_d0_isLoaded;
	vector<float> hyp_lt_d0Err_;
	TBranch *hyp_lt_d0Err_branch;
	bool hyp_lt_d0Err_isLoaded;
	vector<float> hyp_lt_d0corr_;
	TBranch *hyp_lt_d0corr_branch;
	bool hyp_lt_d0corr_isLoaded;
	vector<float> hyp_lt_dPhi_metMuonJESCorr_;
	TBranch *hyp_lt_dPhi_metMuonJESCorr_branch;
	bool hyp_lt_dPhi_metMuonJESCorr_isLoaded;
	vector<float> hyp_lt_dPhi_muCorrMet_;
	TBranch *hyp_lt_dPhi_muCorrMet_branch;
	bool hyp_lt_dPhi_muCorrMet_isLoaded;
	vector<float> hyp_lt_dPhi_tcMet_;
	TBranch *hyp_lt_dPhi_tcMet_branch;
	bool hyp_lt_dPhi_tcMet_isLoaded;
	vector<float> hyp_lt_dPhi_unCorrMet_;
	TBranch *hyp_lt_dPhi_unCorrMet_branch;
	bool hyp_lt_dPhi_unCorrMet_isLoaded;
	vector<float> hyp_lt_etaErr_;
	TBranch *hyp_lt_etaErr_branch;
	bool hyp_lt_etaErr_isLoaded;
	vector<float> hyp_lt_ndof_;
	TBranch *hyp_lt_ndof_branch;
	bool hyp_lt_ndof_isLoaded;
	vector<float> hyp_lt_phiErr_;
	TBranch *hyp_lt_phiErr_branch;
	bool hyp_lt_phiErr_isLoaded;
	vector<float> hyp_lt_ptErr_;
	TBranch *hyp_lt_ptErr_branch;
	bool hyp_lt_ptErr_isLoaded;
	vector<float> hyp_lt_z0_;
	TBranch *hyp_lt_z0_branch;
	bool hyp_lt_z0_isLoaded;
	vector<float> hyp_lt_z0Err_;
	TBranch *hyp_lt_z0Err_branch;
	bool hyp_lt_z0Err_isLoaded;
	vector<float> hyp_lt_z0corr_;
	TBranch *hyp_lt_z0corr_branch;
	bool hyp_lt_z0corr_isLoaded;
	vector<float> hyp_mt2_metMuonJESCorr_;
	TBranch *hyp_mt2_metMuonJESCorr_branch;
	bool hyp_mt2_metMuonJESCorr_isLoaded;
	vector<float> hyp_mt2_muCorrMet_;
	TBranch *hyp_mt2_muCorrMet_branch;
	bool hyp_mt2_muCorrMet_isLoaded;
	vector<float> hyp_mt2_tcMet_;
	TBranch *hyp_mt2_tcMet_branch;
	bool hyp_mt2_tcMet_isLoaded;
	vector<float> hyp_sumJetPt_;
	TBranch *hyp_sumJetPt_branch;
	bool hyp_sumJetPt_isLoaded;
	vector<float> hyp_FVFit_chi2ndf_;
	TBranch *hyp_FVFit_chi2ndf_branch;
	bool hyp_FVFit_chi2ndf_isLoaded;
	vector<float> hyp_FVFit_prob_;
	TBranch *hyp_FVFit_prob_branch;
	bool hyp_FVFit_prob_isLoaded;
	vector<float> hyp_FVFit_v4cxx_;
	TBranch *hyp_FVFit_v4cxx_branch;
	bool hyp_FVFit_v4cxx_isLoaded;
	vector<float> hyp_FVFit_v4cxy_;
	TBranch *hyp_FVFit_v4cxy_branch;
	bool hyp_FVFit_v4cxy_isLoaded;
	vector<float> hyp_FVFit_v4cyy_;
	TBranch *hyp_FVFit_v4cyy_branch;
	bool hyp_FVFit_v4cyy_isLoaded;
	vector<float> hyp_FVFit_v4czx_;
	TBranch *hyp_FVFit_v4czx_branch;
	bool hyp_FVFit_v4czx_isLoaded;
	vector<float> hyp_FVFit_v4czy_;
	TBranch *hyp_FVFit_v4czy_branch;
	bool hyp_FVFit_v4czy_isLoaded;
	vector<float> hyp_FVFit_v4czz_;
	TBranch *hyp_FVFit_v4czz_branch;
	bool hyp_FVFit_v4czz_isLoaded;
	vector<float> hyp_ll_ecaliso_;
	TBranch *hyp_ll_ecaliso_branch;
	bool hyp_ll_ecaliso_isLoaded;
	vector<float> hyp_ll_trkiso_;
	TBranch *hyp_ll_trkiso_branch;
	bool hyp_ll_trkiso_isLoaded;
	vector<float> hyp_lt_ecaliso_;
	TBranch *hyp_lt_ecaliso_branch;
	bool hyp_lt_ecaliso_isLoaded;
	vector<float> hyp_lt_trkiso_;
	TBranch *hyp_lt_trkiso_branch;
	bool hyp_lt_trkiso_isLoaded;
	vector<float> jets_approximatefHPD_;
	TBranch *jets_approximatefHPD_branch;
	bool jets_approximatefHPD_isLoaded;
	vector<float> jets_approximatefRBX_;
	TBranch *jets_approximatefRBX_branch;
	bool jets_approximatefRBX_isLoaded;
	vector<float> jets_cor_;
	TBranch *jets_cor_branch;
	bool jets_cor_isLoaded;
	vector<float> jets_emFrac_;
	TBranch *jets_emFrac_branch;
	bool jets_emFrac_isLoaded;
	vector<float> jets_fHPD_;
	TBranch *jets_fHPD_branch;
	bool jets_fHPD_isLoaded;
	vector<float> jets_fRBX_;
	TBranch *jets_fRBX_branch;
	bool jets_fRBX_isLoaded;
	vector<float> jets_fSubDetector1_;
	TBranch *jets_fSubDetector1_branch;
	bool jets_fSubDetector1_isLoaded;
	vector<float> jets_fSubDetector2_;
	TBranch *jets_fSubDetector2_branch;
	bool jets_fSubDetector2_isLoaded;
	vector<float> jets_fSubDetector3_;
	TBranch *jets_fSubDetector3_branch;
	bool jets_fSubDetector3_isLoaded;
	vector<float> jets_fSubDetector4_;
	TBranch *jets_fSubDetector4_branch;
	bool jets_fSubDetector4_isLoaded;
	vector<float> jets_hitsInN90_;
	TBranch *jets_hitsInN90_branch;
	bool jets_hitsInN90_isLoaded;
	vector<float> jets_n90Hits_;
	TBranch *jets_n90Hits_branch;
	bool jets_n90Hits_isLoaded;
	vector<float> jets_nECALTowers_;
	TBranch *jets_nECALTowers_branch;
	bool jets_nECALTowers_isLoaded;
	vector<float> jets_nHCALTowers_;
	TBranch *jets_nHCALTowers_branch;
	bool jets_nHCALTowers_isLoaded;
	vector<float> jets_restrictedEMF_;
	TBranch *jets_restrictedEMF_branch;
	bool jets_restrictedEMF_isLoaded;
	vector<float> jpts_emFrac_;
	TBranch *jpts_emFrac_branch;
	bool jpts_emFrac_isLoaded;
	vector<float> evt_ecalmet_etaslice_;
	TBranch *evt_ecalmet_etaslice_branch;
	bool evt_ecalmet_etaslice_isLoaded;
	vector<float> evt_ecalmet_etaslicePhi_;
	TBranch *evt_ecalmet_etaslicePhi_branch;
	bool evt_ecalmet_etaslicePhi_isLoaded;
	vector<float> evt_hcalmet_etaslice_;
	TBranch *evt_hcalmet_etaslice_branch;
	bool evt_hcalmet_etaslice_isLoaded;
	vector<float> evt_hcalmet_etaslicePhi_;
	TBranch *evt_hcalmet_etaslicePhi_branch;
	bool evt_hcalmet_etaslicePhi_isLoaded;
	vector<float> evt_towermet_etaslice_;
	TBranch *evt_towermet_etaslice_branch;
	bool evt_towermet_etaslice_isLoaded;
	vector<float> evt_towermet_etaslicePhi_;
	TBranch *evt_towermet_etaslicePhi_branch;
	bool evt_towermet_etaslicePhi_isLoaded;
	vector<float> mus_met_deltax_;
	TBranch *mus_met_deltax_branch;
	bool mus_met_deltax_isLoaded;
	vector<float> mus_met_deltay_;
	TBranch *mus_met_deltay_branch;
	bool mus_met_deltay_isLoaded;
	vector<float> mus_eledr_;
	TBranch *mus_eledr_branch;
	bool mus_eledr_isLoaded;
	vector<float> mus_jetdr_;
	TBranch *mus_jetdr_branch;
	bool mus_jetdr_isLoaded;
	vector<float> mus_caloCompatibility_;
	TBranch *mus_caloCompatibility_branch;
	bool mus_caloCompatibility_isLoaded;
	vector<float> mus_chi2_;
	TBranch *mus_chi2_branch;
	bool mus_chi2_isLoaded;
	vector<float> mus_d0_;
	TBranch *mus_d0_branch;
	bool mus_d0_isLoaded;
	vector<float> mus_d0Err_;
	TBranch *mus_d0Err_branch;
	bool mus_d0Err_isLoaded;
	vector<float> mus_d0corr_;
	TBranch *mus_d0corr_branch;
	bool mus_d0corr_isLoaded;
	vector<float> mus_e_em_;
	TBranch *mus_e_em_branch;
	bool mus_e_em_isLoaded;
	vector<float> mus_e_emS9_;
	TBranch *mus_e_emS9_branch;
	bool mus_e_emS9_isLoaded;
	vector<float> mus_e_had_;
	TBranch *mus_e_had_branch;
	bool mus_e_had_isLoaded;
	vector<float> mus_e_hadS9_;
	TBranch *mus_e_hadS9_branch;
	bool mus_e_hadS9_isLoaded;
	vector<float> mus_e_ho_;
	TBranch *mus_e_ho_branch;
	bool mus_e_ho_isLoaded;
	vector<float> mus_e_hoS9_;
	TBranch *mus_e_hoS9_branch;
	bool mus_e_hoS9_isLoaded;
	vector<float> mus_etaErr_;
	TBranch *mus_etaErr_branch;
	bool mus_etaErr_isLoaded;
	vector<float> mus_gfit_chi2_;
	TBranch *mus_gfit_chi2_branch;
	bool mus_gfit_chi2_isLoaded;
	vector<float> mus_gfit_d0_;
	TBranch *mus_gfit_d0_branch;
	bool mus_gfit_d0_isLoaded;
	vector<float> mus_gfit_d0Err_;
	TBranch *mus_gfit_d0Err_branch;
	bool mus_gfit_d0Err_isLoaded;
	vector<float> mus_gfit_d0corr_;
	TBranch *mus_gfit_d0corr_branch;
	bool mus_gfit_d0corr_isLoaded;
	vector<float> mus_gfit_ndof_;
	TBranch *mus_gfit_ndof_branch;
	bool mus_gfit_ndof_isLoaded;
	vector<float> mus_gfit_qoverp_;
	TBranch *mus_gfit_qoverp_branch;
	bool mus_gfit_qoverp_isLoaded;
	vector<float> mus_gfit_qoverpError_;
	TBranch *mus_gfit_qoverpError_branch;
	bool mus_gfit_qoverpError_isLoaded;
	vector<float> mus_gfit_z0_;
	TBranch *mus_gfit_z0_branch;
	bool mus_gfit_z0_isLoaded;
	vector<float> mus_gfit_z0Err_;
	TBranch *mus_gfit_z0Err_branch;
	bool mus_gfit_z0Err_isLoaded;
	vector<float> mus_gfit_z0corr_;
	TBranch *mus_gfit_z0corr_branch;
	bool mus_gfit_z0corr_isLoaded;
	vector<float> mus_iso03_emEt_;
	TBranch *mus_iso03_emEt_branch;
	bool mus_iso03_emEt_isLoaded;
	vector<float> mus_iso03_hadEt_;
	TBranch *mus_iso03_hadEt_branch;
	bool mus_iso03_hadEt_isLoaded;
	vector<float> mus_iso03_hoEt_;
	TBranch *mus_iso03_hoEt_branch;
	bool mus_iso03_hoEt_isLoaded;
	vector<float> mus_iso03_sumPt_;
	TBranch *mus_iso03_sumPt_branch;
	bool mus_iso03_sumPt_isLoaded;
	vector<float> mus_iso05_emEt_;
	TBranch *mus_iso05_emEt_branch;
	bool mus_iso05_emEt_isLoaded;
	vector<float> mus_iso05_hadEt_;
	TBranch *mus_iso05_hadEt_branch;
	bool mus_iso05_hadEt_isLoaded;
	vector<float> mus_iso05_hoEt_;
	TBranch *mus_iso05_hoEt_branch;
	bool mus_iso05_hoEt_isLoaded;
	vector<float> mus_iso05_sumPt_;
	TBranch *mus_iso05_sumPt_branch;
	bool mus_iso05_sumPt_isLoaded;
	vector<float> mus_iso_ecalvetoDep_;
	TBranch *mus_iso_ecalvetoDep_branch;
	bool mus_iso_ecalvetoDep_isLoaded;
	vector<float> mus_iso_hcalvetoDep_;
	TBranch *mus_iso_hcalvetoDep_branch;
	bool mus_iso_hcalvetoDep_isLoaded;
	vector<float> mus_iso_hovetoDep_;
	TBranch *mus_iso_hovetoDep_branch;
	bool mus_iso_hovetoDep_isLoaded;
	vector<float> mus_iso_trckvetoDep_;
	TBranch *mus_iso_trckvetoDep_branch;
	bool mus_iso_trckvetoDep_isLoaded;
	vector<float> mus_ndof_;
	TBranch *mus_ndof_branch;
	bool mus_ndof_isLoaded;
	vector<float> mus_phiErr_;
	TBranch *mus_phiErr_branch;
	bool mus_phiErr_isLoaded;
	vector<float> mus_ptErr_;
	TBranch *mus_ptErr_branch;
	bool mus_ptErr_isLoaded;
	vector<float> mus_qoverp_;
	TBranch *mus_qoverp_branch;
	bool mus_qoverp_isLoaded;
	vector<float> mus_qoverpError_;
	TBranch *mus_qoverpError_branch;
	bool mus_qoverpError_isLoaded;
	vector<float> mus_sta_chi2_;
	TBranch *mus_sta_chi2_branch;
	bool mus_sta_chi2_isLoaded;
	vector<float> mus_sta_d0_;
	TBranch *mus_sta_d0_branch;
	bool mus_sta_d0_isLoaded;
	vector<float> mus_sta_d0Err_;
	TBranch *mus_sta_d0Err_branch;
	bool mus_sta_d0Err_isLoaded;
	vector<float> mus_sta_d0corr_;
	TBranch *mus_sta_d0corr_branch;
	bool mus_sta_d0corr_isLoaded;
	vector<float> mus_sta_ndof_;
	TBranch *mus_sta_ndof_branch;
	bool mus_sta_ndof_isLoaded;
	vector<float> mus_sta_qoverp_;
	TBranch *mus_sta_qoverp_branch;
	bool mus_sta_qoverp_isLoaded;
	vector<float> mus_sta_qoverpError_;
	TBranch *mus_sta_qoverpError_branch;
	bool mus_sta_qoverpError_isLoaded;
	vector<float> mus_sta_z0_;
	TBranch *mus_sta_z0_branch;
	bool mus_sta_z0_isLoaded;
	vector<float> mus_sta_z0Err_;
	TBranch *mus_sta_z0Err_branch;
	bool mus_sta_z0Err_isLoaded;
	vector<float> mus_sta_z0corr_;
	TBranch *mus_sta_z0corr_branch;
	bool mus_sta_z0corr_isLoaded;
	vector<float> mus_timeAtIpInOut_;
	TBranch *mus_timeAtIpInOut_branch;
	bool mus_timeAtIpInOut_isLoaded;
	vector<float> mus_timeAtIpInOutErr_;
	TBranch *mus_timeAtIpInOutErr_branch;
	bool mus_timeAtIpInOutErr_isLoaded;
	vector<float> mus_timeAtIpOutIn_;
	TBranch *mus_timeAtIpOutIn_branch;
	bool mus_timeAtIpOutIn_isLoaded;
	vector<float> mus_timeAtIpOutInErr_;
	TBranch *mus_timeAtIpOutInErr_branch;
	bool mus_timeAtIpOutInErr_isLoaded;
	vector<float> mus_vertexphi_;
	TBranch *mus_vertexphi_branch;
	bool mus_vertexphi_isLoaded;
	vector<float> mus_z0_;
	TBranch *mus_z0_branch;
	bool mus_z0_isLoaded;
	vector<float> mus_z0Err_;
	TBranch *mus_z0Err_branch;
	bool mus_z0Err_isLoaded;
	vector<float> mus_z0corr_;
	TBranch *mus_z0corr_branch;
	bool mus_z0corr_isLoaded;
	vector<float> pfjets_chargedEmE_;
	TBranch *pfjets_chargedEmE_branch;
	bool pfjets_chargedEmE_isLoaded;
	vector<float> pfjets_chargedHadronE_;
	TBranch *pfjets_chargedHadronE_branch;
	bool pfjets_chargedHadronE_isLoaded;
	vector<float> pfjets_cor_;
	TBranch *pfjets_cor_branch;
	bool pfjets_cor_isLoaded;
	vector<float> pfjets_neutralEmE_;
	TBranch *pfjets_neutralEmE_branch;
	bool pfjets_neutralEmE_isLoaded;
	vector<float> pfjets_neutralHadronE_;
	TBranch *pfjets_neutralHadronE_branch;
	bool pfjets_neutralHadronE_isLoaded;
	vector<float> taus_pf_caloComp_;
	TBranch *taus_pf_caloComp_branch;
	bool taus_pf_caloComp_isLoaded;
	vector<float> taus_pf_ecalStripSumEOverPLead_;
	TBranch *taus_pf_ecalStripSumEOverPLead_branch;
	bool taus_pf_ecalStripSumEOverPLead_isLoaded;
	vector<float> taus_pf_electronPreIDOutput_;
	TBranch *taus_pf_electronPreIDOutput_branch;
	bool taus_pf_electronPreIDOutput_isLoaded;
	vector<float> taus_pf_emf_;
	TBranch *taus_pf_emf_branch;
	bool taus_pf_emf_isLoaded;
	vector<float> taus_pf_hcal3x3OverPLead_;
	TBranch *taus_pf_hcal3x3OverPLead_branch;
	bool taus_pf_hcal3x3OverPLead_isLoaded;
	vector<float> taus_pf_hcalMaxOverPLead_;
	TBranch *taus_pf_hcalMaxOverPLead_branch;
	bool taus_pf_hcalMaxOverPLead_isLoaded;
	vector<float> taus_pf_hcalTotOverPLead_;
	TBranch *taus_pf_hcalTotOverPLead_branch;
	bool taus_pf_hcalTotOverPLead_isLoaded;
	vector<float> taus_pf_isolationchargecandPtSum_;
	TBranch *taus_pf_isolationchargecandPtSum_branch;
	bool taus_pf_isolationchargecandPtSum_isLoaded;
	vector<float> taus_pf_isolationgammacandEtSum_;
	TBranch *taus_pf_isolationgammacandEtSum_branch;
	bool taus_pf_isolationgammacandEtSum_isLoaded;
	vector<float> taus_pf_lead_chargecand_Signed_Sipt_;
	TBranch *taus_pf_lead_chargecand_Signed_Sipt_branch;
	bool taus_pf_lead_chargecand_Signed_Sipt_isLoaded;
	vector<float> taus_pf_maximumHCALPFClusterEt_;
	TBranch *taus_pf_maximumHCALPFClusterEt_branch;
	bool taus_pf_maximumHCALPFClusterEt_isLoaded;
	vector<float> taus_pf_segComp_;
	TBranch *taus_pf_segComp_branch;
	bool taus_pf_segComp_isLoaded;
	vector<float> photons_e1x5_;
	TBranch *photons_e1x5_branch;
	bool photons_e1x5_isLoaded;
	vector<float> photons_e2x5Max_;
	TBranch *photons_e2x5Max_branch;
	bool photons_e2x5Max_isLoaded;
	vector<float> photons_e3x3_;
	TBranch *photons_e3x3_branch;
	bool photons_e3x3_isLoaded;
	vector<float> photons_e5x5_;
	TBranch *photons_e5x5_branch;
	bool photons_e5x5_isLoaded;
	vector<float> photons_eMax_;
	TBranch *photons_eMax_branch;
	bool photons_eMax_isLoaded;
	vector<float> photons_eSC_;
	TBranch *photons_eSC_branch;
	bool photons_eSC_isLoaded;
	vector<float> photons_eSCPresh_;
	TBranch *photons_eSCPresh_branch;
	bool photons_eSCPresh_isLoaded;
	vector<float> photons_eSCRaw_;
	TBranch *photons_eSCRaw_branch;
	bool photons_eSCRaw_isLoaded;
	vector<float> photons_eSeed_;
	TBranch *photons_eSeed_branch;
	bool photons_eSeed_isLoaded;
	vector<float> photons_ecalIso_;
	TBranch *photons_ecalIso_branch;
	bool photons_ecalIso_isLoaded;
	vector<float> photons_hOverE_;
	TBranch *photons_hOverE_branch;
	bool photons_hOverE_isLoaded;
	vector<float> photons_hcalIso_;
	TBranch *photons_hcalIso_branch;
	bool photons_hcalIso_isLoaded;
	vector<float> photons_sigmaEtaEta_;
	TBranch *photons_sigmaEtaEta_branch;
	bool photons_sigmaEtaEta_isLoaded;
	vector<float> photons_sigmaIEtaIEta_;
	TBranch *photons_sigmaIEtaIEta_branch;
	bool photons_sigmaIEtaIEta_isLoaded;
	vector<float> photons_sigmaIPhiIPhi_;
	TBranch *photons_sigmaIPhiIPhi_branch;
	bool photons_sigmaIPhiIPhi_isLoaded;
	vector<float> photons_sigmaPhiPhi_;
	TBranch *photons_sigmaPhiPhi_branch;
	bool photons_sigmaPhiPhi_isLoaded;
	vector<float> photons_tkIsoHollow_;
	TBranch *photons_tkIsoHollow_branch;
	bool photons_tkIsoHollow_isLoaded;
	vector<float> photons_tkIsoSolid_;
	TBranch *photons_tkIsoSolid_branch;
	bool photons_tkIsoSolid_isLoaded;
	vector<float> ran_dRClosestTower_;
	TBranch *ran_dRClosestTower_branch;
	bool ran_dRClosestTower_isLoaded;
	vector<float> ran_dRClosestTowerEmEt_;
	TBranch *ran_dRClosestTowerEmEt_branch;
	bool ran_dRClosestTowerEmEt_isLoaded;
	vector<float> ran_ecalIso03_egamma_;
	TBranch *ran_ecalIso03_egamma_branch;
	bool ran_ecalIso03_egamma_isLoaded;
	vector<float> ran_ecalIso03_mu_;
	TBranch *ran_ecalIso03_mu_branch;
	bool ran_ecalIso03_mu_isLoaded;
	vector<float> ran_hcalD1Iso03_egamma_;
	TBranch *ran_hcalD1Iso03_egamma_branch;
	bool ran_hcalD1Iso03_egamma_isLoaded;
	vector<float> ran_hcalD2Iso03_egamma_;
	TBranch *ran_hcalD2Iso03_egamma_branch;
	bool ran_hcalD2Iso03_egamma_isLoaded;
	vector<float> ran_hcalIso03_egamma_;
	TBranch *ran_hcalIso03_egamma_branch;
	bool ran_hcalIso03_egamma_isLoaded;
	vector<float> ran_hcalIso03_mu_;
	TBranch *ran_hcalIso03_mu_branch;
	bool ran_hcalIso03_mu_isLoaded;
	vector<float> ran_hoIso03_mu_;
	TBranch *ran_hoIso03_mu_branch;
	bool ran_hoIso03_mu_isLoaded;
	vector<float> ran_towerEmEt_;
	TBranch *ran_towerEmEt_branch;
	bool ran_towerEmEt_isLoaded;
	vector<float> ran_towerHadEt_;
	TBranch *ran_towerHadEt_branch;
	bool ran_towerHadEt_isLoaded;
	vector<float> ran_trkIso03_egamma_;
	TBranch *ran_trkIso03_egamma_branch;
	bool ran_trkIso03_egamma_isLoaded;
	vector<float> ran_trkIso03_mu_;
	TBranch *ran_trkIso03_mu_branch;
	bool ran_trkIso03_mu_isLoaded;
	vector<float> scs_clustersSize_;
	TBranch *scs_clustersSize_branch;
	bool scs_clustersSize_isLoaded;
	vector<float> scs_crystalsSize_;
	TBranch *scs_crystalsSize_branch;
	bool scs_crystalsSize_isLoaded;
	vector<float> scs_e1x3_;
	TBranch *scs_e1x3_branch;
	bool scs_e1x3_isLoaded;
	vector<float> scs_e1x5_;
	TBranch *scs_e1x5_branch;
	bool scs_e1x5_isLoaded;
	vector<float> scs_e2nd_;
	TBranch *scs_e2nd_branch;
	bool scs_e2nd_isLoaded;
	vector<float> scs_e2x2_;
	TBranch *scs_e2x2_branch;
	bool scs_e2x2_isLoaded;
	vector<float> scs_e2x5Max_;
	TBranch *scs_e2x5Max_branch;
	bool scs_e2x5Max_isLoaded;
	vector<float> scs_e3x1_;
	TBranch *scs_e3x1_branch;
	bool scs_e3x1_isLoaded;
	vector<float> scs_e3x2_;
	TBranch *scs_e3x2_branch;
	bool scs_e3x2_isLoaded;
	vector<float> scs_e3x3_;
	TBranch *scs_e3x3_branch;
	bool scs_e3x3_isLoaded;
	vector<float> scs_e4x4_;
	TBranch *scs_e4x4_branch;
	bool scs_e4x4_isLoaded;
	vector<float> scs_e5x5_;
	TBranch *scs_e5x5_branch;
	bool scs_e5x5_isLoaded;
	vector<float> scs_eMax_;
	TBranch *scs_eMax_branch;
	bool scs_eMax_isLoaded;
	vector<float> scs_eSeed_;
	TBranch *scs_eSeed_branch;
	bool scs_eSeed_isLoaded;
	vector<float> scs_energy_;
	TBranch *scs_energy_branch;
	bool scs_energy_isLoaded;
	vector<float> scs_eta_;
	TBranch *scs_eta_branch;
	bool scs_eta_isLoaded;
	vector<float> scs_hoe_;
	TBranch *scs_hoe_branch;
	bool scs_hoe_isLoaded;
	vector<float> scs_phi_;
	TBranch *scs_phi_branch;
	bool scs_phi_isLoaded;
	vector<float> scs_preshowerEnergy_;
	TBranch *scs_preshowerEnergy_branch;
	bool scs_preshowerEnergy_isLoaded;
	vector<float> scs_rawEnergy_;
	TBranch *scs_rawEnergy_branch;
	bool scs_rawEnergy_isLoaded;
	vector<float> scs_sigmaEtaEta_;
	TBranch *scs_sigmaEtaEta_branch;
	bool scs_sigmaEtaEta_isLoaded;
	vector<float> scs_sigmaEtaPhi_;
	TBranch *scs_sigmaEtaPhi_branch;
	bool scs_sigmaEtaPhi_isLoaded;
	vector<float> scs_sigmaIEtaIEta_;
	TBranch *scs_sigmaIEtaIEta_branch;
	bool scs_sigmaIEtaIEta_isLoaded;
	vector<float> scs_sigmaIEtaIPhi_;
	TBranch *scs_sigmaIEtaIPhi_branch;
	bool scs_sigmaIEtaIPhi_isLoaded;
	vector<float> scs_sigmaIPhiIPhi_;
	TBranch *scs_sigmaIPhiIPhi_branch;
	bool scs_sigmaIPhiIPhi_isLoaded;
	vector<float> scs_sigmaPhiPhi_;
	TBranch *scs_sigmaPhiPhi_branch;
	bool scs_sigmaPhiPhi_isLoaded;
	vector<float> scs_timeSeed_;
	TBranch *scs_timeSeed_branch;
	bool scs_timeSeed_isLoaded;
	vector<float> scjets_approximatefHPD_;
	TBranch *scjets_approximatefHPD_branch;
	bool scjets_approximatefHPD_isLoaded;
	vector<float> scjets_approximatefRBX_;
	TBranch *scjets_approximatefRBX_branch;
	bool scjets_approximatefRBX_isLoaded;
	vector<float> scjets_cor_;
	TBranch *scjets_cor_branch;
	bool scjets_cor_isLoaded;
	vector<float> scjets_emFrac_;
	TBranch *scjets_emFrac_branch;
	bool scjets_emFrac_isLoaded;
	vector<float> scjets_fHPD_;
	TBranch *scjets_fHPD_branch;
	bool scjets_fHPD_isLoaded;
	vector<float> scjets_fRBX_;
	TBranch *scjets_fRBX_branch;
	bool scjets_fRBX_isLoaded;
	vector<float> scjets_fSubDetector1_;
	TBranch *scjets_fSubDetector1_branch;
	bool scjets_fSubDetector1_isLoaded;
	vector<float> scjets_fSubDetector2_;
	TBranch *scjets_fSubDetector2_branch;
	bool scjets_fSubDetector2_isLoaded;
	vector<float> scjets_fSubDetector3_;
	TBranch *scjets_fSubDetector3_branch;
	bool scjets_fSubDetector3_isLoaded;
	vector<float> scjets_fSubDetector4_;
	TBranch *scjets_fSubDetector4_branch;
	bool scjets_fSubDetector4_isLoaded;
	vector<float> scjets_hitsInN90_;
	TBranch *scjets_hitsInN90_branch;
	bool scjets_hitsInN90_isLoaded;
	vector<float> scjets_n90Hits_;
	TBranch *scjets_n90Hits_branch;
	bool scjets_n90Hits_isLoaded;
	vector<float> scjets_nECALTowers_;
	TBranch *scjets_nECALTowers_branch;
	bool scjets_nECALTowers_isLoaded;
	vector<float> scjets_nHCALTowers_;
	TBranch *scjets_nHCALTowers_branch;
	bool scjets_nHCALTowers_isLoaded;
	vector<float> scjets_restrictedEMF_;
	TBranch *scjets_restrictedEMF_branch;
	bool scjets_restrictedEMF_isLoaded;
	vector<float> mus_tcmet_deltax_;
	TBranch *mus_tcmet_deltax_branch;
	bool mus_tcmet_deltax_isLoaded;
	vector<float> mus_tcmet_deltay_;
	TBranch *mus_tcmet_deltay_branch;
	bool mus_tcmet_deltay_isLoaded;
	vector<float> trks_chi2_;
	TBranch *trks_chi2_branch;
	bool trks_chi2_isLoaded;
	vector<float> trks_d0_;
	TBranch *trks_d0_branch;
	bool trks_d0_isLoaded;
	vector<float> trks_d0Err_;
	TBranch *trks_d0Err_branch;
	bool trks_d0Err_isLoaded;
	vector<float> trks_d0corr_;
	TBranch *trks_d0corr_branch;
	bool trks_d0corr_isLoaded;
	vector<float> trks_d0corrPhi_;
	TBranch *trks_d0corrPhi_branch;
	bool trks_d0corrPhi_isLoaded;
	vector<float> trks_d0phiCov_;
	TBranch *trks_d0phiCov_branch;
	bool trks_d0phiCov_isLoaded;
	vector<float> trks_etaErr_;
	TBranch *trks_etaErr_branch;
	bool trks_etaErr_isLoaded;
	vector<float> trks_layer1_charge_;
	TBranch *trks_layer1_charge_branch;
	bool trks_layer1_charge_isLoaded;
	vector<float> trks_ndof_;
	TBranch *trks_ndof_branch;
	bool trks_ndof_isLoaded;
	vector<float> trks_phiErr_;
	TBranch *trks_phiErr_branch;
	bool trks_phiErr_isLoaded;
	vector<float> trks_ptErr_;
	TBranch *trks_ptErr_branch;
	bool trks_ptErr_isLoaded;
	vector<float> trks_z0_;
	TBranch *trks_z0_branch;
	bool trks_z0_isLoaded;
	vector<float> trks_z0Err_;
	TBranch *trks_z0Err_branch;
	bool trks_z0Err_isLoaded;
	vector<float> trks_z0corr_;
	TBranch *trks_z0corr_branch;
	bool trks_z0corr_isLoaded;
	vector<float> trks_d0Errvtx_;
	TBranch *trks_d0Errvtx_branch;
	bool trks_d0Errvtx_isLoaded;
	vector<float> trks_d0vtx_;
	TBranch *trks_d0vtx_branch;
	bool trks_d0vtx_isLoaded;
	vector<float> vtxs_chi2_;
	TBranch *vtxs_chi2_branch;
	bool vtxs_chi2_isLoaded;
	vector<float> vtxs_ndof_;
	TBranch *vtxs_ndof_branch;
	bool vtxs_ndof_isLoaded;
	vector<float> vtxs_sumpt_;
	TBranch *vtxs_sumpt_branch;
	bool vtxs_sumpt_isLoaded;
	vector<float> vtxs_xError_;
	TBranch *vtxs_xError_branch;
	bool vtxs_xError_isLoaded;
	vector<float> vtxs_yError_;
	TBranch *vtxs_yError_branch;
	bool vtxs_yError_isLoaded;
	vector<float> vtxs_zError_;
	TBranch *vtxs_zError_branch;
	bool vtxs_zError_isLoaded;
	vector<vector<float> > twrs_em3x3_;
	TBranch *twrs_em3x3_branch;
	bool twrs_em3x3_isLoaded;
	vector<vector<float> > twrs_em5x5_;
	TBranch *twrs_em5x5_branch;
	bool twrs_em5x5_isLoaded;
	vector<vector<float> > twrs_emSwiss_;
	TBranch *twrs_emSwiss_branch;
	bool twrs_emSwiss_isLoaded;
	vector<vector<float> > twrs_emThresh_;
	TBranch *twrs_emThresh_branch;
	bool twrs_emThresh_isLoaded;
	vector<vector<float> > twrs_emThreshChi2_;
	TBranch *twrs_emThreshChi2_branch;
	bool twrs_emThreshChi2_isLoaded;
	vector<vector<float> > twrs_emThreshEta_;
	TBranch *twrs_emThreshEta_branch;
	bool twrs_emThreshEta_isLoaded;
	vector<vector<float> > twrs_emThreshTime_;
	TBranch *twrs_emThreshTime_branch;
	bool twrs_emThreshTime_isLoaded;
	vector<vector<float> > twrsUncleaned_em3x3_;
	TBranch *twrsUncleaned_em3x3_branch;
	bool twrsUncleaned_em3x3_isLoaded;
	vector<vector<float> > twrsUncleaned_em5x5_;
	TBranch *twrsUncleaned_em5x5_branch;
	bool twrsUncleaned_em5x5_isLoaded;
	vector<vector<float> > twrsUncleaned_emSwiss_;
	TBranch *twrsUncleaned_emSwiss_branch;
	bool twrsUncleaned_emSwiss_isLoaded;
	vector<vector<float> > twrsUncleaned_emThresh_;
	TBranch *twrsUncleaned_emThresh_branch;
	bool twrsUncleaned_emThresh_isLoaded;
	vector<vector<float> > twrsUncleaned_emThreshChi2_;
	TBranch *twrsUncleaned_emThreshChi2_branch;
	bool twrsUncleaned_emThreshChi2_isLoaded;
	vector<vector<float> > twrsUncleaned_emThreshEta_;
	TBranch *twrsUncleaned_emThreshEta_branch;
	bool twrsUncleaned_emThreshEta_isLoaded;
	vector<vector<float> > twrsUncleaned_emThreshTime_;
	TBranch *twrsUncleaned_emThreshTime_branch;
	bool twrsUncleaned_emThreshTime_isLoaded;
	vector<vector<float> > vtxs_covMatrix_;
	TBranch *vtxs_covMatrix_branch;
	bool vtxs_covMatrix_isLoaded;
	int evt_cscLooseHaloId_;
	TBranch *evt_cscLooseHaloId_branch;
	bool evt_cscLooseHaloId_isLoaded;
	int evt_cscTightHaloId_;
	TBranch *evt_cscTightHaloId_branch;
	bool evt_cscTightHaloId_isLoaded;
	int evt_ecalLooseHaloId_;
	TBranch *evt_ecalLooseHaloId_branch;
	bool evt_ecalLooseHaloId_isLoaded;
	int evt_ecalTightHaloId_;
	TBranch *evt_ecalTightHaloId_branch;
	bool evt_ecalTightHaloId_isLoaded;
	int evt_extremeTightHaloId_;
	TBranch *evt_extremeTightHaloId_branch;
	bool evt_extremeTightHaloId_isLoaded;
	int evt_globalLooseHaloId_;
	TBranch *evt_globalLooseHaloId_branch;
	bool evt_globalLooseHaloId_isLoaded;
	int evt_globalTightHaloId_;
	TBranch *evt_globalTightHaloId_branch;
	bool evt_globalTightHaloId_isLoaded;
	int evt_hcalLooseHaloId_;
	TBranch *evt_hcalLooseHaloId_branch;
	bool evt_hcalLooseHaloId_isLoaded;
	int evt_hcalTightHaloId_;
	TBranch *evt_hcalTightHaloId_branch;
	bool evt_hcalTightHaloId_isLoaded;
	int evt_looseHaloId_;
	TBranch *evt_looseHaloId_branch;
	bool evt_looseHaloId_isLoaded;
	int evt_tightHaloId_;
	TBranch *evt_tightHaloId_branch;
	bool evt_tightHaloId_isLoaded;
	int evt_bsType_;
	TBranch *evt_bsType_branch;
	bool evt_bsType_isLoaded;
	int evt_bunchCrossing_;
	TBranch *evt_bunchCrossing_branch;
	bool evt_bunchCrossing_isLoaded;
	int evt_experimentType_;
	TBranch *evt_experimentType_branch;
	bool evt_experimentType_isLoaded;
	int evt_orbitNumber_;
	TBranch *evt_orbitNumber_branch;
	bool evt_orbitNumber_isLoaded;
	int evt_storeNumber_;
	TBranch *evt_storeNumber_branch;
	bool evt_storeNumber_isLoaded;
	int hcalnoise_maxHPDHits_;
	TBranch *hcalnoise_maxHPDHits_branch;
	bool hcalnoise_maxHPDHits_isLoaded;
	int hcalnoise_maxRBXHits_;
	TBranch *hcalnoise_maxRBXHits_branch;
	bool hcalnoise_maxRBXHits_isLoaded;
	int hcalnoise_maxZeros_;
	TBranch *hcalnoise_maxZeros_branch;
	bool hcalnoise_maxZeros_isLoaded;
	int hcalnoise_noiseFilterStatus_;
	TBranch *hcalnoise_noiseFilterStatus_branch;
	bool hcalnoise_noiseFilterStatus_isLoaded;
	int hcalnoise_noiseType_;
	TBranch *hcalnoise_noiseType_branch;
	bool hcalnoise_noiseType_isLoaded;
	int hcalnoise_num10GeVHits_;
	TBranch *hcalnoise_num10GeVHits_branch;
	bool hcalnoise_num10GeVHits_isLoaded;
	int hcalnoise_num25GeVHits_;
	TBranch *hcalnoise_num25GeVHits_branch;
	bool hcalnoise_num25GeVHits_isLoaded;
	int hcalnoise_numProblematicRBXs_;
	TBranch *hcalnoise_numProblematicRBXs_branch;
	bool hcalnoise_numProblematicRBXs_isLoaded;
	int hcalnoise_passHighLevelNoiseFilter_;
	TBranch *hcalnoise_passHighLevelNoiseFilter_branch;
	bool hcalnoise_passHighLevelNoiseFilter_isLoaded;
	int hcalnoise_passLooseNoiseFilter_;
	TBranch *hcalnoise_passLooseNoiseFilter_branch;
	bool hcalnoise_passLooseNoiseFilter_isLoaded;
	int hcalnoise_passTightNoiseFilter_;
	TBranch *hcalnoise_passTightNoiseFilter_branch;
	bool hcalnoise_passTightNoiseFilter_isLoaded;
	int l1_nemiso_;
	TBranch *l1_nemiso_branch;
	bool l1_nemiso_isLoaded;
	int l1_nemnoiso_;
	TBranch *l1_nemnoiso_branch;
	bool l1_nemnoiso_isLoaded;
	int l1_njetsc_;
	TBranch *l1_njetsc_branch;
	bool l1_njetsc_isLoaded;
	int l1_njetsf_;
	TBranch *l1_njetsf_branch;
	bool l1_njetsf_isLoaded;
	int l1_njetst_;
	TBranch *l1_njetst_branch;
	bool l1_njetst_isLoaded;
	int l1_nmus_;
	TBranch *l1_nmus_branch;
	bool l1_nmus_isLoaded;
	int pdfinfo_id1_;
	TBranch *pdfinfo_id1_branch;
	bool pdfinfo_id1_isLoaded;
	int pdfinfo_id2_;
	TBranch *pdfinfo_id2_branch;
	bool pdfinfo_id2_isLoaded;
	vector<int> evt_ecaliPhiSuspects_;
	TBranch *evt_ecaliPhiSuspects_branch;
	bool evt_ecaliPhiSuspects_isLoaded;
	vector<int> evt_globaliPhiSuspects_;
	TBranch *evt_globaliPhiSuspects_branch;
	bool evt_globaliPhiSuspects_isLoaded;
	vector<int> evt_hcaliPhiSuspects_;
	TBranch *evt_hcaliPhiSuspects_branch;
	bool evt_hcaliPhiSuspects_isLoaded;
	vector<int> twrs_numCrystals_;
	TBranch *twrs_numCrystals_branch;
	bool twrs_numCrystals_isLoaded;
	vector<int> twrsUncleaned_numCrystals_;
	TBranch *twrsUncleaned_numCrystals_branch;
	bool twrsUncleaned_numCrystals_isLoaded;
	vector<int> taus_calo_charge_;
	TBranch *taus_calo_charge_branch;
	bool taus_calo_charge_isLoaded;
	vector<int> taus_calo_leadtrk_idx_;
	TBranch *taus_calo_leadtrk_idx_branch;
	bool taus_calo_leadtrk_idx_isLoaded;
	vector<int> taus_calo_tightId_;
	TBranch *taus_calo_tightId_branch;
	bool taus_calo_tightId_isLoaded;
	vector<int> els_mc3_id_;
	TBranch *els_mc3_id_branch;
	bool els_mc3_id_isLoaded;
	vector<int> els_mc3idx_;
	TBranch *els_mc3idx_branch;
	bool els_mc3idx_isLoaded;
	vector<int> els_mc3_motherid_;
	TBranch *els_mc3_motherid_branch;
	bool els_mc3_motherid_isLoaded;
	vector<int> els_mc3_motheridx_;
	TBranch *els_mc3_motheridx_branch;
	bool els_mc3_motheridx_isLoaded;
	vector<int> els_mc_id_;
	TBranch *els_mc_id_branch;
	bool els_mc_id_isLoaded;
	vector<int> els_mcidx_;
	TBranch *els_mcidx_branch;
	bool els_mcidx_isLoaded;
	vector<int> els_mc_motherid_;
	TBranch *els_mc_motherid_branch;
	bool els_mc_motherid_isLoaded;
	vector<int> jets_mc3_id_;
	TBranch *jets_mc3_id_branch;
	bool jets_mc3_id_isLoaded;
	vector<int> jets_mc3idx_;
	TBranch *jets_mc3idx_branch;
	bool jets_mc3idx_isLoaded;
	vector<int> jets_mc_gpidx_;
	TBranch *jets_mc_gpidx_branch;
	bool jets_mc_gpidx_isLoaded;
	vector<int> jets_mc_id_;
	TBranch *jets_mc_id_branch;
	bool jets_mc_id_isLoaded;
	vector<int> jets_mcidx_;
	TBranch *jets_mcidx_branch;
	bool jets_mcidx_isLoaded;
	vector<int> mus_mc3_id_;
	TBranch *mus_mc3_id_branch;
	bool mus_mc3_id_isLoaded;
	vector<int> mus_mc3idx_;
	TBranch *mus_mc3idx_branch;
	bool mus_mc3idx_isLoaded;
	vector<int> mus_mc3_motherid_;
	TBranch *mus_mc3_motherid_branch;
	bool mus_mc3_motherid_isLoaded;
	vector<int> mus_mc3_motheridx_;
	TBranch *mus_mc3_motheridx_branch;
	bool mus_mc3_motheridx_isLoaded;
	vector<int> mus_mc_id_;
	TBranch *mus_mc_id_branch;
	bool mus_mc_id_isLoaded;
	vector<int> mus_mcidx_;
	TBranch *mus_mcidx_branch;
	bool mus_mcidx_isLoaded;
	vector<int> mus_mc_motherid_;
	TBranch *mus_mc_motherid_branch;
	bool mus_mc_motherid_isLoaded;
	vector<int> trk_mc3_id_;
	TBranch *trk_mc3_id_branch;
	bool trk_mc3_id_isLoaded;
	vector<int> trk_mc3idx_;
	TBranch *trk_mc3idx_branch;
	bool trk_mc3idx_isLoaded;
	vector<int> trk_mc3_motherid_;
	TBranch *trk_mc3_motherid_branch;
	bool trk_mc3_motherid_isLoaded;
	vector<int> trk_mc3_motheridx_;
	TBranch *trk_mc3_motheridx_branch;
	bool trk_mc3_motheridx_isLoaded;
	vector<int> trk_mc_id_;
	TBranch *trk_mc_id_branch;
	bool trk_mc_id_isLoaded;
	vector<int> trk_mcidx_;
	TBranch *trk_mcidx_branch;
	bool trk_mcidx_isLoaded;
	vector<int> trk_mc_motherid_;
	TBranch *trk_mc_motherid_branch;
	bool trk_mc_motherid_isLoaded;
	vector<int> els_closestJet_;
	TBranch *els_closestJet_branch;
	bool els_closestJet_isLoaded;
	vector<int> els_closestMuon_;
	TBranch *els_closestMuon_branch;
	bool els_closestMuon_isLoaded;
	vector<int> els_category_;
	TBranch *els_category_branch;
	bool els_category_isLoaded;
	vector<int> els_charge_;
	TBranch *els_charge_branch;
	bool els_charge_isLoaded;
	vector<int> els_class_;
	TBranch *els_class_branch;
	bool els_class_isLoaded;
	vector<int> els_conv_tkidx_;
	TBranch *els_conv_tkidx_branch;
	bool els_conv_tkidx_isLoaded;
	vector<int> els_exp_innerlayers_;
	TBranch *els_exp_innerlayers_branch;
	bool els_exp_innerlayers_isLoaded;
	vector<int> els_exp_outerlayers_;
	TBranch *els_exp_outerlayers_branch;
	bool els_exp_outerlayers_isLoaded;
	vector<int> els_fiduciality_;
	TBranch *els_fiduciality_branch;
	bool els_fiduciality_isLoaded;
	vector<int> els_layer1_det_;
	TBranch *els_layer1_det_branch;
	bool els_layer1_det_isLoaded;
	vector<int> els_layer1_layer_;
	TBranch *els_layer1_layer_branch;
	bool els_layer1_layer_isLoaded;
	vector<int> els_layer1_sizerphi_;
	TBranch *els_layer1_sizerphi_branch;
	bool els_layer1_sizerphi_isLoaded;
	vector<int> els_layer1_sizerz_;
	TBranch *els_layer1_sizerz_branch;
	bool els_layer1_sizerz_isLoaded;
	vector<int> els_lostHits_;
	TBranch *els_lostHits_branch;
	bool els_lostHits_isLoaded;
	vector<int> els_lost_pixelhits_;
	TBranch *els_lost_pixelhits_branch;
	bool els_lost_pixelhits_isLoaded;
	vector<int> els_nSeed_;
	TBranch *els_nSeed_branch;
	bool els_nSeed_isLoaded;
	vector<int> els_sccharge_;
	TBranch *els_sccharge_branch;
	bool els_sccharge_isLoaded;
	vector<int> els_trk_charge_;
	TBranch *els_trk_charge_branch;
	bool els_trk_charge_isLoaded;
	vector<int> els_trkidx_;
	TBranch *els_trkidx_branch;
	bool els_trkidx_isLoaded;
	vector<int> els_type_;
	TBranch *els_type_branch;
	bool els_type_isLoaded;
	vector<int> els_validHits_;
	TBranch *els_validHits_branch;
	bool els_validHits_isLoaded;
	vector<int> els_valid_pixelhits_;
	TBranch *els_valid_pixelhits_branch;
	bool els_valid_pixelhits_isLoaded;
	vector<int> genps_id_;
	TBranch *genps_id_branch;
	bool genps_id_isLoaded;
	vector<int> genps_id_mother_;
	TBranch *genps_id_mother_branch;
	bool genps_id_mother_isLoaded;
	vector<int> genps_status_;
	TBranch *genps_status_branch;
	bool genps_status_isLoaded;
	vector<int> hyp_ll_charge_;
	TBranch *hyp_ll_charge_branch;
	bool hyp_ll_charge_isLoaded;
	vector<int> hyp_ll_id_;
	TBranch *hyp_ll_id_branch;
	bool hyp_ll_id_isLoaded;
	vector<int> hyp_ll_index_;
	TBranch *hyp_ll_index_branch;
	bool hyp_ll_index_isLoaded;
	vector<int> hyp_ll_lostHits_;
	TBranch *hyp_ll_lostHits_branch;
	bool hyp_ll_lostHits_isLoaded;
	vector<int> hyp_ll_validHits_;
	TBranch *hyp_ll_validHits_branch;
	bool hyp_ll_validHits_isLoaded;
	vector<int> hyp_lt_charge_;
	TBranch *hyp_lt_charge_branch;
	bool hyp_lt_charge_isLoaded;
	vector<int> hyp_lt_id_;
	TBranch *hyp_lt_id_branch;
	bool hyp_lt_id_isLoaded;
	vector<int> hyp_lt_index_;
	TBranch *hyp_lt_index_branch;
	bool hyp_lt_index_isLoaded;
	vector<int> hyp_lt_lostHits_;
	TBranch *hyp_lt_lostHits_branch;
	bool hyp_lt_lostHits_isLoaded;
	vector<int> hyp_lt_validHits_;
	TBranch *hyp_lt_validHits_branch;
	bool hyp_lt_validHits_isLoaded;
	vector<int> hyp_njets_;
	TBranch *hyp_njets_branch;
	bool hyp_njets_isLoaded;
	vector<int> hyp_nojets_;
	TBranch *hyp_nojets_branch;
	bool hyp_nojets_isLoaded;
	vector<int> hyp_type_;
	TBranch *hyp_type_branch;
	bool hyp_type_isLoaded;
	vector<int> hyp_FVFit_ndf_;
	TBranch *hyp_FVFit_ndf_branch;
	bool hyp_FVFit_ndf_isLoaded;
	vector<int> hyp_FVFit_status_;
	TBranch *hyp_FVFit_status_branch;
	bool hyp_FVFit_status_isLoaded;
	vector<int> hyp_ll_mc_id_;
	TBranch *hyp_ll_mc_id_branch;
	bool hyp_ll_mc_id_isLoaded;
	vector<int> hyp_ll_mc_motherid_;
	TBranch *hyp_ll_mc_motherid_branch;
	bool hyp_ll_mc_motherid_isLoaded;
	vector<int> hyp_lt_mc_id_;
	TBranch *hyp_lt_mc_id_branch;
	bool hyp_lt_mc_id_isLoaded;
	vector<int> hyp_lt_mc_motherid_;
	TBranch *hyp_lt_mc_motherid_branch;
	bool hyp_lt_mc_motherid_isLoaded;
	vector<int> hyp_quadlep_first_type_;
	TBranch *hyp_quadlep_first_type_branch;
	bool hyp_quadlep_first_type_isLoaded;
	vector<int> hyp_quadlep_fourth_type_;
	TBranch *hyp_quadlep_fourth_type_branch;
	bool hyp_quadlep_fourth_type_isLoaded;
	vector<int> hyp_quadlep_second_type_;
	TBranch *hyp_quadlep_second_type_branch;
	bool hyp_quadlep_second_type_isLoaded;
	vector<int> hyp_quadlep_third_type_;
	TBranch *hyp_quadlep_third_type_branch;
	bool hyp_quadlep_third_type_isLoaded;
	vector<int> hyp_trilep_first_type_;
	TBranch *hyp_trilep_first_type_branch;
	bool hyp_trilep_first_type_isLoaded;
	vector<int> hyp_trilep_second_type_;
	TBranch *hyp_trilep_second_type_branch;
	bool hyp_trilep_second_type_isLoaded;
	vector<int> hyp_trilep_third_type_;
	TBranch *hyp_trilep_third_type_branch;
	bool hyp_trilep_third_type_isLoaded;
	vector<int> jets_closestElectron_;
	TBranch *jets_closestElectron_branch;
	bool jets_closestElectron_isLoaded;
	vector<int> jets_closestMuon_;
	TBranch *jets_closestMuon_branch;
	bool jets_closestMuon_isLoaded;
	vector<int> l1_emiso_ieta_;
	TBranch *l1_emiso_ieta_branch;
	bool l1_emiso_ieta_isLoaded;
	vector<int> l1_emiso_iphi_;
	TBranch *l1_emiso_iphi_branch;
	bool l1_emiso_iphi_isLoaded;
	vector<int> l1_emiso_rawId_;
	TBranch *l1_emiso_rawId_branch;
	bool l1_emiso_rawId_isLoaded;
	vector<int> l1_emiso_type_;
	TBranch *l1_emiso_type_branch;
	bool l1_emiso_type_isLoaded;
	vector<int> l1_emnoiso_ieta_;
	TBranch *l1_emnoiso_ieta_branch;
	bool l1_emnoiso_ieta_isLoaded;
	vector<int> l1_emnoiso_iphi_;
	TBranch *l1_emnoiso_iphi_branch;
	bool l1_emnoiso_iphi_isLoaded;
	vector<int> l1_emnoiso_rawId_;
	TBranch *l1_emnoiso_rawId_branch;
	bool l1_emnoiso_rawId_isLoaded;
	vector<int> l1_emnoiso_type_;
	TBranch *l1_emnoiso_type_branch;
	bool l1_emnoiso_type_isLoaded;
	vector<int> l1_jetsc_ieta_;
	TBranch *l1_jetsc_ieta_branch;
	bool l1_jetsc_ieta_isLoaded;
	vector<int> l1_jetsc_iphi_;
	TBranch *l1_jetsc_iphi_branch;
	bool l1_jetsc_iphi_isLoaded;
	vector<int> l1_jetsc_rawId_;
	TBranch *l1_jetsc_rawId_branch;
	bool l1_jetsc_rawId_isLoaded;
	vector<int> l1_jetsc_type_;
	TBranch *l1_jetsc_type_branch;
	bool l1_jetsc_type_isLoaded;
	vector<int> l1_jetsf_ieta_;
	TBranch *l1_jetsf_ieta_branch;
	bool l1_jetsf_ieta_isLoaded;
	vector<int> l1_jetsf_iphi_;
	TBranch *l1_jetsf_iphi_branch;
	bool l1_jetsf_iphi_isLoaded;
	vector<int> l1_jetsf_rawId_;
	TBranch *l1_jetsf_rawId_branch;
	bool l1_jetsf_rawId_isLoaded;
	vector<int> l1_jetsf_type_;
	TBranch *l1_jetsf_type_branch;
	bool l1_jetsf_type_isLoaded;
	vector<int> l1_jetst_ieta_;
	TBranch *l1_jetst_ieta_branch;
	bool l1_jetst_ieta_isLoaded;
	vector<int> l1_jetst_iphi_;
	TBranch *l1_jetst_iphi_branch;
	bool l1_jetst_iphi_isLoaded;
	vector<int> l1_jetst_rawId_;
	TBranch *l1_jetst_rawId_branch;
	bool l1_jetst_rawId_isLoaded;
	vector<int> l1_jetst_type_;
	TBranch *l1_jetst_type_branch;
	bool l1_jetst_type_isLoaded;
	vector<int> l1_mus_flags_;
	TBranch *l1_mus_flags_branch;
	bool l1_mus_flags_isLoaded;
	vector<int> l1_mus_q_;
	TBranch *l1_mus_q_branch;
	bool l1_mus_q_isLoaded;
	vector<int> l1_mus_qual_;
	TBranch *l1_mus_qual_branch;
	bool l1_mus_qual_isLoaded;
	vector<int> l1_mus_qualFlags_;
	TBranch *l1_mus_qualFlags_branch;
	bool l1_mus_qualFlags_isLoaded;
	vector<int> mus_met_flag_;
	TBranch *mus_met_flag_branch;
	bool mus_met_flag_isLoaded;
	vector<int> mus_closestEle_;
	TBranch *mus_closestEle_branch;
	bool mus_closestEle_isLoaded;
	vector<int> mus_closestJet_;
	TBranch *mus_closestJet_branch;
	bool mus_closestJet_isLoaded;
	vector<int> mus_charge_;
	TBranch *mus_charge_branch;
	bool mus_charge_isLoaded;
	vector<int> mus_gfit_validHits_;
	TBranch *mus_gfit_validHits_branch;
	bool mus_gfit_validHits_isLoaded;
	vector<int> mus_gfit_validSTAHits_;
	TBranch *mus_gfit_validSTAHits_branch;
	bool mus_gfit_validSTAHits_isLoaded;
	vector<int> mus_gfit_validSiHits_;
	TBranch *mus_gfit_validSiHits_branch;
	bool mus_gfit_validSiHits_isLoaded;
	vector<int> mus_goodmask_;
	TBranch *mus_goodmask_branch;
	bool mus_goodmask_isLoaded;
	vector<int> mus_iso03_ntrk_;
	TBranch *mus_iso03_ntrk_branch;
	bool mus_iso03_ntrk_isLoaded;
	vector<int> mus_iso05_ntrk_;
	TBranch *mus_iso05_ntrk_branch;
	bool mus_iso05_ntrk_isLoaded;
	vector<int> mus_lostHits_;
	TBranch *mus_lostHits_branch;
	bool mus_lostHits_isLoaded;
	vector<int> mus_nmatches_;
	TBranch *mus_nmatches_branch;
	bool mus_nmatches_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityLoose_;
	TBranch *mus_pid_TM2DCompatibilityLoose_branch;
	bool mus_pid_TM2DCompatibilityLoose_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityTight_;
	TBranch *mus_pid_TM2DCompatibilityTight_branch;
	bool mus_pid_TM2DCompatibilityTight_isLoaded;
	vector<int> mus_pid_TMLastStationLoose_;
	TBranch *mus_pid_TMLastStationLoose_branch;
	bool mus_pid_TMLastStationLoose_isLoaded;
	vector<int> mus_pid_TMLastStationTight_;
	TBranch *mus_pid_TMLastStationTight_branch;
	bool mus_pid_TMLastStationTight_isLoaded;
	vector<int> mus_sta_validHits_;
	TBranch *mus_sta_validHits_branch;
	bool mus_sta_validHits_isLoaded;
	vector<int> mus_timeDirection_;
	TBranch *mus_timeDirection_branch;
	bool mus_timeDirection_isLoaded;
	vector<int> mus_timeNumStationsUsed_;
	TBranch *mus_timeNumStationsUsed_branch;
	bool mus_timeNumStationsUsed_isLoaded;
	vector<int> mus_trk_charge_;
	TBranch *mus_trk_charge_branch;
	bool mus_trk_charge_isLoaded;
	vector<int> mus_trkidx_;
	TBranch *mus_trkidx_branch;
	bool mus_trkidx_isLoaded;
	vector<int> mus_type_;
	TBranch *mus_type_branch;
	bool mus_type_isLoaded;
	vector<int> mus_validHits_;
	TBranch *mus_validHits_branch;
	bool mus_validHits_isLoaded;
	vector<int> pfjets_chargedMultiplicity_;
	TBranch *pfjets_chargedMultiplicity_branch;
	bool pfjets_chargedMultiplicity_isLoaded;
	vector<int> pfjets_muonMultiplicity_;
	TBranch *pfjets_muonMultiplicity_branch;
	bool pfjets_muonMultiplicity_isLoaded;
	vector<int> pfjets_neutralMultiplicity_;
	TBranch *pfjets_neutralMultiplicity_branch;
	bool pfjets_neutralMultiplicity_isLoaded;
	vector<int> taus_pf_charge_;
	TBranch *taus_pf_charge_branch;
	bool taus_pf_charge_isLoaded;
	vector<int> taus_pf_electronPreID_;
	TBranch *taus_pf_electronPreID_branch;
	bool taus_pf_electronPreID_isLoaded;
	vector<int> taus_pf_hasMuonReference_;
	TBranch *taus_pf_hasMuonReference_branch;
	bool taus_pf_hasMuonReference_isLoaded;
	vector<int> taus_pf_leadtrk_idx_;
	TBranch *taus_pf_leadtrk_idx_branch;
	bool taus_pf_leadtrk_idx_isLoaded;
	vector<int> taus_pf_muonPreID_;
	TBranch *taus_pf_muonPreID_branch;
	bool taus_pf_muonPreID_isLoaded;
	vector<int> taus_pf_nmuonmatch_;
	TBranch *taus_pf_nmuonmatch_branch;
	bool taus_pf_nmuonmatch_isLoaded;
	vector<int> taus_pf_tightId_;
	TBranch *taus_pf_tightId_branch;
	bool taus_pf_tightId_isLoaded;
	vector<int> photons_fiduciality_;
	TBranch *photons_fiduciality_branch;
	bool photons_fiduciality_isLoaded;
	vector<int> pxl_ndigis_pxb_;
	TBranch *pxl_ndigis_pxb_branch;
	bool pxl_ndigis_pxb_isLoaded;
	vector<int> pxl_ndigis_pxf_;
	TBranch *pxl_ndigis_pxf_branch;
	bool pxl_ndigis_pxf_isLoaded;
	vector<int> ran_srFlag_;
	TBranch *ran_srFlag_branch;
	bool ran_srFlag_isLoaded;
	vector<int> scs_detIdSeed_;
	TBranch *scs_detIdSeed_branch;
	bool scs_detIdSeed_isLoaded;
	vector<int> scs_elsidx_;
	TBranch *scs_elsidx_branch;
	bool scs_elsidx_isLoaded;
	vector<int> scs_severitySeed_;
	TBranch *scs_severitySeed_branch;
	bool scs_severitySeed_isLoaded;
	vector<int> mus_tcmet_flag_;
	TBranch *mus_tcmet_flag_branch;
	bool mus_tcmet_flag_isLoaded;
	vector<int> trks_algo_;
	TBranch *trks_algo_branch;
	bool trks_algo_isLoaded;
	vector<int> trks_charge_;
	TBranch *trks_charge_branch;
	bool trks_charge_isLoaded;
	vector<int> trks_exp_innerlayers_;
	TBranch *trks_exp_innerlayers_branch;
	bool trks_exp_innerlayers_isLoaded;
	vector<int> trks_exp_outerlayers_;
	TBranch *trks_exp_outerlayers_branch;
	bool trks_exp_outerlayers_isLoaded;
	vector<int> trks_layer1_det_;
	TBranch *trks_layer1_det_branch;
	bool trks_layer1_det_isLoaded;
	vector<int> trks_layer1_layer_;
	TBranch *trks_layer1_layer_branch;
	bool trks_layer1_layer_isLoaded;
	vector<int> trks_layer1_sizerphi_;
	TBranch *trks_layer1_sizerphi_branch;
	bool trks_layer1_sizerphi_isLoaded;
	vector<int> trks_layer1_sizerz_;
	TBranch *trks_layer1_sizerz_branch;
	bool trks_layer1_sizerz_isLoaded;
	vector<int> trks_lostHits_;
	TBranch *trks_lostHits_branch;
	bool trks_lostHits_isLoaded;
	vector<int> trks_lost_pixelhits_;
	TBranch *trks_lost_pixelhits_branch;
	bool trks_lost_pixelhits_isLoaded;
	vector<int> trks_nlayers_;
	TBranch *trks_nlayers_branch;
	bool trks_nlayers_isLoaded;
	vector<int> trks_nlayers3D_;
	TBranch *trks_nlayers3D_branch;
	bool trks_nlayers3D_isLoaded;
	vector<int> trks_nlayersLost_;
	TBranch *trks_nlayersLost_branch;
	bool trks_nlayersLost_isLoaded;
	vector<int> trks_qualityMask_;
	TBranch *trks_qualityMask_branch;
	bool trks_qualityMask_isLoaded;
	vector<int> trks_validHits_;
	TBranch *trks_validHits_branch;
	bool trks_validHits_isLoaded;
	vector<int> trks_valid_pixelhits_;
	TBranch *trks_valid_pixelhits_branch;
	bool trks_valid_pixelhits_isLoaded;
	vector<int> trks_elsidx_;
	TBranch *trks_elsidx_branch;
	bool trks_elsidx_isLoaded;
	vector<int> trk_musidx_;
	TBranch *trk_musidx_branch;
	bool trk_musidx_isLoaded;
	vector<int> vtxs_isFake_;
	TBranch *vtxs_isFake_branch;
	bool vtxs_isFake_isLoaded;
	vector<int> vtxs_isValid_;
	TBranch *vtxs_isValid_branch;
	bool vtxs_isValid_isLoaded;
	vector<int> vtxs_tracksSize_;
	TBranch *vtxs_tracksSize_branch;
	bool vtxs_tracksSize_isLoaded;
	vector<vector<int> > twrs_emMaxEcalMGPASampleADC_;
	TBranch *twrs_emMaxEcalMGPASampleADC_branch;
	bool twrs_emMaxEcalMGPASampleADC_isLoaded;
	vector<vector<int> > twrs_emThreshRecoFlag_;
	TBranch *twrs_emThreshRecoFlag_branch;
	bool twrs_emThreshRecoFlag_isLoaded;
	vector<vector<int> > twrs_emThreshSevLvl_;
	TBranch *twrs_emThreshSevLvl_branch;
	bool twrs_emThreshSevLvl_isLoaded;
	vector<vector<int> > twrsUncleaned_emMaxEcalMGPASampleADC_;
	TBranch *twrsUncleaned_emMaxEcalMGPASampleADC_branch;
	bool twrsUncleaned_emMaxEcalMGPASampleADC_isLoaded;
	vector<vector<int> > twrsUncleaned_emThreshRecoFlag_;
	TBranch *twrsUncleaned_emThreshRecoFlag_branch;
	bool twrsUncleaned_emThreshRecoFlag_isLoaded;
	vector<vector<int> > twrsUncleaned_emThreshSevLvl_;
	TBranch *twrsUncleaned_emThreshSevLvl_branch;
	bool twrsUncleaned_emThreshSevLvl_isLoaded;
	vector<vector<int> > taus_calo_isotrk_idx_;
	TBranch *taus_calo_isotrk_idx_branch;
	bool taus_calo_isotrk_idx_isLoaded;
	vector<vector<int> > taus_calo_sigtrk_idx_;
	TBranch *taus_calo_sigtrk_idx_branch;
	bool taus_calo_sigtrk_idx_isLoaded;
	vector<vector<int> > genps_lepdaughter_id_;
	TBranch *genps_lepdaughter_id_branch;
	bool genps_lepdaughter_id_isLoaded;
	vector<vector<int> > genps_lepdaughter_idx_;
	TBranch *genps_lepdaughter_idx_branch;
	bool genps_lepdaughter_idx_isLoaded;
	vector<vector<int> > hlt_trigObjs_id_;
	TBranch *hlt_trigObjs_id_branch;
	bool hlt_trigObjs_id_isLoaded;
	vector<vector<int> > hyp_jets_idx_;
	TBranch *hyp_jets_idx_branch;
	bool hyp_jets_idx_isLoaded;
	vector<vector<int> > hyp_other_jets_idx_;
	TBranch *hyp_other_jets_idx_branch;
	bool hyp_other_jets_idx_isLoaded;
	unsigned int evt_ntwrs_;
	TBranch *evt_ntwrs_branch;
	bool evt_ntwrs_isLoaded;
	unsigned int evt_nels_;
	TBranch *evt_nels_branch;
	bool evt_nels_isLoaded;
	unsigned int evt_detectorStatus_;
	TBranch *evt_detectorStatus_branch;
	bool evt_detectorStatus_isLoaded;
	unsigned int evt_event_;
	TBranch *evt_event_branch;
	bool evt_event_isLoaded;
	unsigned int evt_lumiBlock_;
	TBranch *evt_lumiBlock_branch;
	bool evt_lumiBlock_isLoaded;
	unsigned int evt_run_;
	TBranch *evt_run_branch;
	bool evt_run_isLoaded;
	unsigned int genps_flavorHistoryFilterResult_;
	TBranch *genps_flavorHistoryFilterResult_branch;
	bool genps_flavorHistoryFilterResult_isLoaded;
	unsigned int evt_ngenjets_;
	TBranch *evt_ngenjets_branch;
	bool evt_ngenjets_isLoaded;
	unsigned int genps_signalProcessID_;
	TBranch *genps_signalProcessID_branch;
	bool genps_signalProcessID_isLoaded;
	unsigned int hlt_bits1_;
	TBranch *hlt_bits1_branch;
	bool hlt_bits1_isLoaded;
	unsigned int hlt_bits2_;
	TBranch *hlt_bits2_branch;
	bool hlt_bits2_isLoaded;
	unsigned int hlt_bits3_;
	TBranch *hlt_bits3_branch;
	bool hlt_bits3_isLoaded;
	unsigned int hlt_bits4_;
	TBranch *hlt_bits4_branch;
	bool hlt_bits4_isLoaded;
	unsigned int hlt_bits5_;
	TBranch *hlt_bits5_branch;
	bool hlt_bits5_isLoaded;
	unsigned int hlt_bits6_;
	TBranch *hlt_bits6_branch;
	bool hlt_bits6_isLoaded;
	unsigned int hlt_bits7_;
	TBranch *hlt_bits7_branch;
	bool hlt_bits7_isLoaded;
	unsigned int hlt_bits8_;
	TBranch *hlt_bits8_branch;
	bool hlt_bits8_isLoaded;
	unsigned int evt_njets_;
	TBranch *evt_njets_branch;
	bool evt_njets_isLoaded;
	unsigned int evt_njpts_;
	TBranch *evt_njpts_branch;
	bool evt_njpts_isLoaded;
	unsigned int l1_bits1_;
	TBranch *l1_bits1_branch;
	bool l1_bits1_isLoaded;
	unsigned int l1_bits2_;
	TBranch *l1_bits2_branch;
	bool l1_bits2_isLoaded;
	unsigned int l1_bits3_;
	TBranch *l1_bits3_branch;
	bool l1_bits3_isLoaded;
	unsigned int l1_bits4_;
	TBranch *l1_bits4_branch;
	bool l1_bits4_isLoaded;
	unsigned int l1_techbits1_;
	TBranch *l1_techbits1_branch;
	bool l1_techbits1_isLoaded;
	unsigned int l1_techbits2_;
	TBranch *l1_techbits2_branch;
	bool l1_techbits2_isLoaded;
	unsigned int evt_nphotons_;
	TBranch *evt_nphotons_branch;
	bool evt_nphotons_isLoaded;
	unsigned int evt_nscs_;
	TBranch *evt_nscs_branch;
	bool evt_nscs_isLoaded;
	unsigned int evt_nscjets_;
	TBranch *evt_nscjets_branch;
	bool evt_nscjets_isLoaded;
	unsigned int evt_ntrkjets_;
	TBranch *evt_ntrkjets_branch;
	bool evt_ntrkjets_isLoaded;
	unsigned int evt_nvtxs_;
	TBranch *evt_nvtxs_branch;
	bool evt_nvtxs_isLoaded;
	vector<unsigned int> twrs_detid_;
	TBranch *twrs_detid_branch;
	bool twrs_detid_isLoaded;
	vector<unsigned int> twrs_numBadEcalCells_;
	TBranch *twrs_numBadEcalCells_branch;
	bool twrs_numBadEcalCells_isLoaded;
	vector<unsigned int> twrs_numBadHcalCells_;
	TBranch *twrs_numBadHcalCells_branch;
	bool twrs_numBadHcalCells_isLoaded;
	vector<unsigned int> twrs_numProblematicEcalCells_;
	TBranch *twrs_numProblematicEcalCells_branch;
	bool twrs_numProblematicEcalCells_isLoaded;
	vector<unsigned int> twrs_numProblematicHcalCells_;
	TBranch *twrs_numProblematicHcalCells_branch;
	bool twrs_numProblematicHcalCells_isLoaded;
	vector<unsigned int> twrs_numRecoveredEcalCells_;
	TBranch *twrs_numRecoveredEcalCells_branch;
	bool twrs_numRecoveredEcalCells_isLoaded;
	vector<unsigned int> twrs_numRecoveredHcalCells_;
	TBranch *twrs_numRecoveredHcalCells_branch;
	bool twrs_numRecoveredHcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_detid_;
	TBranch *twrsUncleaned_detid_branch;
	bool twrsUncleaned_detid_isLoaded;
	vector<unsigned int> twrsUncleaned_numBadEcalCells_;
	TBranch *twrsUncleaned_numBadEcalCells_branch;
	bool twrsUncleaned_numBadEcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_numBadHcalCells_;
	TBranch *twrsUncleaned_numBadHcalCells_branch;
	bool twrsUncleaned_numBadHcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_numProblematicEcalCells_;
	TBranch *twrsUncleaned_numProblematicEcalCells_branch;
	bool twrsUncleaned_numProblematicEcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_numProblematicHcalCells_;
	TBranch *twrsUncleaned_numProblematicHcalCells_branch;
	bool twrsUncleaned_numProblematicHcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_numRecoveredEcalCells_;
	TBranch *twrsUncleaned_numRecoveredEcalCells_branch;
	bool twrsUncleaned_numRecoveredEcalCells_isLoaded;
	vector<unsigned int> twrsUncleaned_numRecoveredHcalCells_;
	TBranch *twrsUncleaned_numRecoveredHcalCells_branch;
	bool twrsUncleaned_numRecoveredHcalCells_isLoaded;
	vector<unsigned int> hyp_quadlep_bucket_;
	TBranch *hyp_quadlep_bucket_branch;
	bool hyp_quadlep_bucket_isLoaded;
	vector<unsigned int> hyp_quadlep_first_index_;
	TBranch *hyp_quadlep_first_index_branch;
	bool hyp_quadlep_first_index_isLoaded;
	vector<unsigned int> hyp_quadlep_fourth_index_;
	TBranch *hyp_quadlep_fourth_index_branch;
	bool hyp_quadlep_fourth_index_isLoaded;
	vector<unsigned int> hyp_quadlep_second_index_;
	TBranch *hyp_quadlep_second_index_branch;
	bool hyp_quadlep_second_index_isLoaded;
	vector<unsigned int> hyp_quadlep_third_index_;
	TBranch *hyp_quadlep_third_index_branch;
	bool hyp_quadlep_third_index_isLoaded;
	vector<unsigned int> hyp_trilep_bucket_;
	TBranch *hyp_trilep_bucket_branch;
	bool hyp_trilep_bucket_isLoaded;
	vector<unsigned int> hyp_trilep_first_index_;
	TBranch *hyp_trilep_first_index_branch;
	bool hyp_trilep_first_index_isLoaded;
	vector<unsigned int> hyp_trilep_second_index_;
	TBranch *hyp_trilep_second_index_branch;
	bool hyp_trilep_second_index_isLoaded;
	vector<unsigned int> hyp_trilep_third_index_;
	TBranch *hyp_trilep_third_index_branch;
	bool hyp_trilep_third_index_isLoaded;
	int	evt_nEvts_;
	TBranch *evt_nEvts_branch;
	bool evt_nEvts_isLoaded;
	float	evt_filt_eff_;
	TBranch *evt_filt_eff_branch;
	bool evt_filt_eff_isLoaded;
public: 
int ScanChain(class TChain* chain, int nEvents=-1, std::string skimFilePrefix="");
void Init(TTree *tree) {
	evt_bsp4_branch = 0;
	if (tree->GetAlias("evt_bsp4") != 0) {
		evt_bsp4_branch = tree->GetBranch(tree->GetAlias("evt_bsp4"));
		evt_bsp4_branch->SetAddress(&evt_bsp4_);
	}
	if(evt_bsp4_branch == 0 ) {
	cout << "Branch evt_bsp4 does not exist." << endl;
	}
	l1_met_p4_branch = 0;
	if (tree->GetAlias("l1_met_p4") != 0) {
		l1_met_p4_branch = tree->GetBranch(tree->GetAlias("l1_met_p4"));
		l1_met_p4_branch->SetAddress(&l1_met_p4_);
	}
	if(l1_met_p4_branch == 0 ) {
	cout << "Branch l1_met_p4 does not exist." << endl;
	}
	l1_mht_p4_branch = 0;
	if (tree->GetAlias("l1_mht_p4") != 0) {
		l1_mht_p4_branch = tree->GetBranch(tree->GetAlias("l1_mht_p4"));
		l1_mht_p4_branch->SetAddress(&l1_mht_p4_);
	}
	if(l1_mht_p4_branch == 0 ) {
	cout << "Branch l1_mht_p4 does not exist." << endl;
	}
	taus_calo_p4_branch = 0;
	if (tree->GetAlias("taus_calo_p4") != 0) {
		taus_calo_p4_branch = tree->GetBranch(tree->GetAlias("taus_calo_p4"));
		taus_calo_p4_branch->SetAddress(&taus_calo_p4_);
	}
	if(taus_calo_p4_branch == 0 ) {
	cout << "Branch taus_calo_p4 does not exist." << endl;
	}
	els_mc_motherp4_branch = 0;
	if (tree->GetAlias("els_mc_motherp4") != 0) {
		els_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("els_mc_motherp4"));
		els_mc_motherp4_branch->SetAddress(&els_mc_motherp4_);
	}
	if(els_mc_motherp4_branch == 0 ) {
	cout << "Branch els_mc_motherp4 does not exist." << endl;
	}
	els_mc_p4_branch = 0;
	if (tree->GetAlias("els_mc_p4") != 0) {
		els_mc_p4_branch = tree->GetBranch(tree->GetAlias("els_mc_p4"));
		els_mc_p4_branch->SetAddress(&els_mc_p4_);
	}
	if(els_mc_p4_branch == 0 ) {
	cout << "Branch els_mc_p4 does not exist." << endl;
	}
	jets_mc_gp_p4_branch = 0;
	if (tree->GetAlias("jets_mc_gp_p4") != 0) {
		jets_mc_gp_p4_branch = tree->GetBranch(tree->GetAlias("jets_mc_gp_p4"));
		jets_mc_gp_p4_branch->SetAddress(&jets_mc_gp_p4_);
	}
	if(jets_mc_gp_p4_branch == 0 ) {
	cout << "Branch jets_mc_gp_p4 does not exist." << endl;
	}
	jets_mc_p4_branch = 0;
	if (tree->GetAlias("jets_mc_p4") != 0) {
		jets_mc_p4_branch = tree->GetBranch(tree->GetAlias("jets_mc_p4"));
		jets_mc_p4_branch->SetAddress(&jets_mc_p4_);
	}
	if(jets_mc_p4_branch == 0 ) {
	cout << "Branch jets_mc_p4 does not exist." << endl;
	}
	mus_mc_motherp4_branch = 0;
	if (tree->GetAlias("mus_mc_motherp4") != 0) {
		mus_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("mus_mc_motherp4"));
		mus_mc_motherp4_branch->SetAddress(&mus_mc_motherp4_);
	}
	if(mus_mc_motherp4_branch == 0 ) {
	cout << "Branch mus_mc_motherp4 does not exist." << endl;
	}
	mus_mc_p4_branch = 0;
	if (tree->GetAlias("mus_mc_p4") != 0) {
		mus_mc_p4_branch = tree->GetBranch(tree->GetAlias("mus_mc_p4"));
		mus_mc_p4_branch->SetAddress(&mus_mc_p4_);
	}
	if(mus_mc_p4_branch == 0 ) {
	cout << "Branch mus_mc_p4 does not exist." << endl;
	}
	trk_mcp4_branch = 0;
	if (tree->GetAlias("trk_mcp4") != 0) {
		trk_mcp4_branch = tree->GetBranch(tree->GetAlias("trk_mcp4"));
		trk_mcp4_branch->SetAddress(&trk_mcp4_);
	}
	if(trk_mcp4_branch == 0 ) {
	cout << "Branch trk_mcp4 does not exist." << endl;
	}
	els_inner_position_branch = 0;
	if (tree->GetAlias("els_inner_position") != 0) {
		els_inner_position_branch = tree->GetBranch(tree->GetAlias("els_inner_position"));
		els_inner_position_branch->SetAddress(&els_inner_position_);
	}
	if(els_inner_position_branch == 0 ) {
	cout << "Branch els_inner_position does not exist." << endl;
	}
	els_outer_position_branch = 0;
	if (tree->GetAlias("els_outer_position") != 0) {
		els_outer_position_branch = tree->GetBranch(tree->GetAlias("els_outer_position"));
		els_outer_position_branch->SetAddress(&els_outer_position_);
	}
	if(els_outer_position_branch == 0 ) {
	cout << "Branch els_outer_position does not exist." << endl;
	}
	els_p4_branch = 0;
	if (tree->GetAlias("els_p4") != 0) {
		els_p4_branch = tree->GetBranch(tree->GetAlias("els_p4"));
		els_p4_branch->SetAddress(&els_p4_);
	}
	if(els_p4_branch == 0 ) {
	cout << "Branch els_p4 does not exist." << endl;
	}
	els_p4In_branch = 0;
	if (tree->GetAlias("els_p4In") != 0) {
		els_p4In_branch = tree->GetBranch(tree->GetAlias("els_p4In"));
		els_p4In_branch->SetAddress(&els_p4In_);
	}
	if(els_p4In_branch == 0 ) {
	cout << "Branch els_p4In does not exist." << endl;
	}
	els_p4Out_branch = 0;
	if (tree->GetAlias("els_p4Out") != 0) {
		els_p4Out_branch = tree->GetBranch(tree->GetAlias("els_p4Out"));
		els_p4Out_branch->SetAddress(&els_p4Out_);
	}
	if(els_p4Out_branch == 0 ) {
	cout << "Branch els_p4Out does not exist." << endl;
	}
	els_trk_p4_branch = 0;
	if (tree->GetAlias("els_trk_p4") != 0) {
		els_trk_p4_branch = tree->GetBranch(tree->GetAlias("els_trk_p4"));
		els_trk_p4_branch->SetAddress(&els_trk_p4_);
	}
	if(els_trk_p4_branch == 0 ) {
	cout << "Branch els_trk_p4 does not exist." << endl;
	}
	els_vertex_p4_branch = 0;
	if (tree->GetAlias("els_vertex_p4") != 0) {
		els_vertex_p4_branch = tree->GetBranch(tree->GetAlias("els_vertex_p4"));
		els_vertex_p4_branch->SetAddress(&els_vertex_p4_);
	}
	if(els_vertex_p4_branch == 0 ) {
	cout << "Branch els_vertex_p4 does not exist." << endl;
	}
	genjets_p4_branch = 0;
	if (tree->GetAlias("genjets_p4") != 0) {
		genjets_p4_branch = tree->GetBranch(tree->GetAlias("genjets_p4"));
		genjets_p4_branch->SetAddress(&genjets_p4_);
	}
	if(genjets_p4_branch == 0 ) {
	cout << "Branch genjets_p4 does not exist." << endl;
	}
	genps_p4_branch = 0;
	if (tree->GetAlias("genps_p4") != 0) {
		genps_p4_branch = tree->GetBranch(tree->GetAlias("genps_p4"));
		genps_p4_branch->SetAddress(&genps_p4_);
	}
	if(genps_p4_branch == 0 ) {
	cout << "Branch genps_p4 does not exist." << endl;
	}
	genps_prod_vtx_branch = 0;
	if (tree->GetAlias("genps_prod_vtx") != 0) {
		genps_prod_vtx_branch = tree->GetBranch(tree->GetAlias("genps_prod_vtx"));
		genps_prod_vtx_branch->SetAddress(&genps_prod_vtx_);
	}
	if(genps_prod_vtx_branch == 0 ) {
	cout << "Branch genps_prod_vtx does not exist." << endl;
	}
	hyp_ll_p4_branch = 0;
	if (tree->GetAlias("hyp_ll_p4") != 0) {
		hyp_ll_p4_branch = tree->GetBranch(tree->GetAlias("hyp_ll_p4"));
		hyp_ll_p4_branch->SetAddress(&hyp_ll_p4_);
	}
	if(hyp_ll_p4_branch == 0 ) {
	cout << "Branch hyp_ll_p4 does not exist." << endl;
	}
	hyp_ll_trk_p4_branch = 0;
	if (tree->GetAlias("hyp_ll_trk_p4") != 0) {
		hyp_ll_trk_p4_branch = tree->GetBranch(tree->GetAlias("hyp_ll_trk_p4"));
		hyp_ll_trk_p4_branch->SetAddress(&hyp_ll_trk_p4_);
	}
	if(hyp_ll_trk_p4_branch == 0 ) {
	cout << "Branch hyp_ll_trk_p4 does not exist." << endl;
	}
	hyp_lt_p4_branch = 0;
	if (tree->GetAlias("hyp_lt_p4") != 0) {
		hyp_lt_p4_branch = tree->GetBranch(tree->GetAlias("hyp_lt_p4"));
		hyp_lt_p4_branch->SetAddress(&hyp_lt_p4_);
	}
	if(hyp_lt_p4_branch == 0 ) {
	cout << "Branch hyp_lt_p4 does not exist." << endl;
	}
	hyp_lt_trk_p4_branch = 0;
	if (tree->GetAlias("hyp_lt_trk_p4") != 0) {
		hyp_lt_trk_p4_branch = tree->GetBranch(tree->GetAlias("hyp_lt_trk_p4"));
		hyp_lt_trk_p4_branch->SetAddress(&hyp_lt_trk_p4_);
	}
	if(hyp_lt_trk_p4_branch == 0 ) {
	cout << "Branch hyp_lt_trk_p4 does not exist." << endl;
	}
	hyp_p4_branch = 0;
	if (tree->GetAlias("hyp_p4") != 0) {
		hyp_p4_branch = tree->GetBranch(tree->GetAlias("hyp_p4"));
		hyp_p4_branch->SetAddress(&hyp_p4_);
	}
	if(hyp_p4_branch == 0 ) {
	cout << "Branch hyp_p4 does not exist." << endl;
	}
	hyp_FVFit_p4_branch = 0;
	if (tree->GetAlias("hyp_FVFit_p4") != 0) {
		hyp_FVFit_p4_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_p4"));
		hyp_FVFit_p4_branch->SetAddress(&hyp_FVFit_p4_);
	}
	if(hyp_FVFit_p4_branch == 0 ) {
	cout << "Branch hyp_FVFit_p4 does not exist." << endl;
	}
	hyp_FVFit_v4_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4") != 0) {
		hyp_FVFit_v4_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4"));
		hyp_FVFit_v4_branch->SetAddress(&hyp_FVFit_v4_);
	}
	if(hyp_FVFit_v4_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4 does not exist." << endl;
	}
	hyp_ll_mc_p4_branch = 0;
	if (tree->GetAlias("hyp_ll_mc_p4") != 0) {
		hyp_ll_mc_p4_branch = tree->GetBranch(tree->GetAlias("hyp_ll_mc_p4"));
		hyp_ll_mc_p4_branch->SetAddress(&hyp_ll_mc_p4_);
	}
	if(hyp_ll_mc_p4_branch == 0 ) {
	cout << "Branch hyp_ll_mc_p4 does not exist." << endl;
	}
	hyp_lt_mc_p4_branch = 0;
	if (tree->GetAlias("hyp_lt_mc_p4") != 0) {
		hyp_lt_mc_p4_branch = tree->GetBranch(tree->GetAlias("hyp_lt_mc_p4"));
		hyp_lt_mc_p4_branch->SetAddress(&hyp_lt_mc_p4_);
	}
	if(hyp_lt_mc_p4_branch == 0 ) {
	cout << "Branch hyp_lt_mc_p4 does not exist." << endl;
	}
	jets_p4_branch = 0;
	if (tree->GetAlias("jets_p4") != 0) {
		jets_p4_branch = tree->GetBranch(tree->GetAlias("jets_p4"));
		jets_p4_branch->SetAddress(&jets_p4_);
	}
	if(jets_p4_branch == 0 ) {
	cout << "Branch jets_p4 does not exist." << endl;
	}
	jets_vertex_p4_branch = 0;
	if (tree->GetAlias("jets_vertex_p4") != 0) {
		jets_vertex_p4_branch = tree->GetBranch(tree->GetAlias("jets_vertex_p4"));
		jets_vertex_p4_branch->SetAddress(&jets_vertex_p4_);
	}
	if(jets_vertex_p4_branch == 0 ) {
	cout << "Branch jets_vertex_p4 does not exist." << endl;
	}
	jpts_p4_branch = 0;
	if (tree->GetAlias("jpts_p4") != 0) {
		jpts_p4_branch = tree->GetBranch(tree->GetAlias("jpts_p4"));
		jpts_p4_branch->SetAddress(&jpts_p4_);
	}
	if(jpts_p4_branch == 0 ) {
	cout << "Branch jpts_p4 does not exist." << endl;
	}
	l1_emiso_p4_branch = 0;
	if (tree->GetAlias("l1_emiso_p4") != 0) {
		l1_emiso_p4_branch = tree->GetBranch(tree->GetAlias("l1_emiso_p4"));
		l1_emiso_p4_branch->SetAddress(&l1_emiso_p4_);
	}
	if(l1_emiso_p4_branch == 0 ) {
	cout << "Branch l1_emiso_p4 does not exist." << endl;
	}
	l1_emnoiso_p4_branch = 0;
	if (tree->GetAlias("l1_emnoiso_p4") != 0) {
		l1_emnoiso_p4_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_p4"));
		l1_emnoiso_p4_branch->SetAddress(&l1_emnoiso_p4_);
	}
	if(l1_emnoiso_p4_branch == 0 ) {
	cout << "Branch l1_emnoiso_p4 does not exist." << endl;
	}
	l1_jetsc_p4_branch = 0;
	if (tree->GetAlias("l1_jetsc_p4") != 0) {
		l1_jetsc_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_p4"));
		l1_jetsc_p4_branch->SetAddress(&l1_jetsc_p4_);
	}
	if(l1_jetsc_p4_branch == 0 ) {
	cout << "Branch l1_jetsc_p4 does not exist." << endl;
	}
	l1_jetsf_p4_branch = 0;
	if (tree->GetAlias("l1_jetsf_p4") != 0) {
		l1_jetsf_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_p4"));
		l1_jetsf_p4_branch->SetAddress(&l1_jetsf_p4_);
	}
	if(l1_jetsf_p4_branch == 0 ) {
	cout << "Branch l1_jetsf_p4 does not exist." << endl;
	}
	l1_jetst_p4_branch = 0;
	if (tree->GetAlias("l1_jetst_p4") != 0) {
		l1_jetst_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetst_p4"));
		l1_jetst_p4_branch->SetAddress(&l1_jetst_p4_);
	}
	if(l1_jetst_p4_branch == 0 ) {
	cout << "Branch l1_jetst_p4 does not exist." << endl;
	}
	l1_mus_p4_branch = 0;
	if (tree->GetAlias("l1_mus_p4") != 0) {
		l1_mus_p4_branch = tree->GetBranch(tree->GetAlias("l1_mus_p4"));
		l1_mus_p4_branch->SetAddress(&l1_mus_p4_);
	}
	if(l1_mus_p4_branch == 0 ) {
	cout << "Branch l1_mus_p4 does not exist." << endl;
	}
	mus_fitdefault_p4_branch = 0;
	if (tree->GetAlias("mus_fitdefault_p4") != 0) {
		mus_fitdefault_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitdefault_p4"));
		mus_fitdefault_p4_branch->SetAddress(&mus_fitdefault_p4_);
	}
	if(mus_fitdefault_p4_branch == 0 ) {
	cout << "Branch mus_fitdefault_p4 does not exist." << endl;
	}
	mus_fitfirsthit_p4_branch = 0;
	if (tree->GetAlias("mus_fitfirsthit_p4") != 0) {
		mus_fitfirsthit_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitfirsthit_p4"));
		mus_fitfirsthit_p4_branch->SetAddress(&mus_fitfirsthit_p4_);
	}
	if(mus_fitfirsthit_p4_branch == 0 ) {
	cout << "Branch mus_fitfirsthit_p4 does not exist." << endl;
	}
	mus_fitpicky_p4_branch = 0;
	if (tree->GetAlias("mus_fitpicky_p4") != 0) {
		mus_fitpicky_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitpicky_p4"));
		mus_fitpicky_p4_branch->SetAddress(&mus_fitpicky_p4_);
	}
	if(mus_fitpicky_p4_branch == 0 ) {
	cout << "Branch mus_fitpicky_p4 does not exist." << endl;
	}
	mus_fittev_p4_branch = 0;
	if (tree->GetAlias("mus_fittev_p4") != 0) {
		mus_fittev_p4_branch = tree->GetBranch(tree->GetAlias("mus_fittev_p4"));
		mus_fittev_p4_branch->SetAddress(&mus_fittev_p4_);
	}
	if(mus_fittev_p4_branch == 0 ) {
	cout << "Branch mus_fittev_p4 does not exist." << endl;
	}
	mus_gfit_outerPos_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_outerPos_p4") != 0) {
		mus_gfit_outerPos_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_outerPos_p4"));
		mus_gfit_outerPos_p4_branch->SetAddress(&mus_gfit_outerPos_p4_);
	}
	if(mus_gfit_outerPos_p4_branch == 0 ) {
	cout << "Branch mus_gfit_outerPos_p4 does not exist." << endl;
	}
	mus_gfit_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_p4") != 0) {
		mus_gfit_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_p4"));
		mus_gfit_p4_branch->SetAddress(&mus_gfit_p4_);
	}
	if(mus_gfit_p4_branch == 0 ) {
	cout << "Branch mus_gfit_p4 does not exist." << endl;
	}
	mus_gfit_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_vertex_p4") != 0) {
		mus_gfit_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_vertex_p4"));
		mus_gfit_vertex_p4_branch->SetAddress(&mus_gfit_vertex_p4_);
	}
	if(mus_gfit_vertex_p4_branch == 0 ) {
	cout << "Branch mus_gfit_vertex_p4 does not exist." << endl;
	}
	mus_p4_branch = 0;
	if (tree->GetAlias("mus_p4") != 0) {
		mus_p4_branch = tree->GetBranch(tree->GetAlias("mus_p4"));
		mus_p4_branch->SetAddress(&mus_p4_);
	}
	if(mus_p4_branch == 0 ) {
	cout << "Branch mus_p4 does not exist." << endl;
	}
	mus_sta_p4_branch = 0;
	if (tree->GetAlias("mus_sta_p4") != 0) {
		mus_sta_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_p4"));
		mus_sta_p4_branch->SetAddress(&mus_sta_p4_);
	}
	if(mus_sta_p4_branch == 0 ) {
	cout << "Branch mus_sta_p4 does not exist." << endl;
	}
	mus_sta_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_sta_vertex_p4") != 0) {
		mus_sta_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_vertex_p4"));
		mus_sta_vertex_p4_branch->SetAddress(&mus_sta_vertex_p4_);
	}
	if(mus_sta_vertex_p4_branch == 0 ) {
	cout << "Branch mus_sta_vertex_p4 does not exist." << endl;
	}
	mus_trk_p4_branch = 0;
	if (tree->GetAlias("mus_trk_p4") != 0) {
		mus_trk_p4_branch = tree->GetBranch(tree->GetAlias("mus_trk_p4"));
		mus_trk_p4_branch->SetAddress(&mus_trk_p4_);
	}
	if(mus_trk_p4_branch == 0 ) {
	cout << "Branch mus_trk_p4 does not exist." << endl;
	}
	mus_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_vertex_p4") != 0) {
		mus_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_vertex_p4"));
		mus_vertex_p4_branch->SetAddress(&mus_vertex_p4_);
	}
	if(mus_vertex_p4_branch == 0 ) {
	cout << "Branch mus_vertex_p4 does not exist." << endl;
	}
	pfjets_p4_branch = 0;
	if (tree->GetAlias("pfjets_p4") != 0) {
		pfjets_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_p4"));
		pfjets_p4_branch->SetAddress(&pfjets_p4_);
	}
	if(pfjets_p4_branch == 0 ) {
	cout << "Branch pfjets_p4 does not exist." << endl;
	}
	taus_pf_lead_chargecand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_lead_chargecand_p4") != 0) {
		taus_pf_lead_chargecand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_lead_chargecand_p4"));
		taus_pf_lead_chargecand_p4_branch->SetAddress(&taus_pf_lead_chargecand_p4_);
	}
	if(taus_pf_lead_chargecand_p4_branch == 0 ) {
	cout << "Branch taus_pf_lead_chargecand_p4 does not exist." << endl;
	}
	taus_pf_lead_neutrcand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_lead_neutrcand_p4") != 0) {
		taus_pf_lead_neutrcand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_lead_neutrcand_p4"));
		taus_pf_lead_neutrcand_p4_branch->SetAddress(&taus_pf_lead_neutrcand_p4_);
	}
	if(taus_pf_lead_neutrcand_p4_branch == 0 ) {
	cout << "Branch taus_pf_lead_neutrcand_p4 does not exist." << endl;
	}
	taus_pf_p4_branch = 0;
	if (tree->GetAlias("taus_pf_p4") != 0) {
		taus_pf_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_p4"));
		taus_pf_p4_branch->SetAddress(&taus_pf_p4_);
	}
	if(taus_pf_p4_branch == 0 ) {
	cout << "Branch taus_pf_p4 does not exist." << endl;
	}
	photons_p4_branch = 0;
	if (tree->GetAlias("photons_p4") != 0) {
		photons_p4_branch = tree->GetBranch(tree->GetAlias("photons_p4"));
		photons_p4_branch->SetAddress(&photons_p4_);
	}
	if(photons_p4_branch == 0 ) {
	cout << "Branch photons_p4 does not exist." << endl;
	}
	ran_trksecalp4_branch = 0;
	if (tree->GetAlias("ran_trksecalp4") != 0) {
		ran_trksecalp4_branch = tree->GetBranch(tree->GetAlias("ran_trksecalp4"));
		ran_trksecalp4_branch->SetAddress(&ran_trksecalp4_);
	}
	if(ran_trksecalp4_branch == 0 ) {
	cout << "Branch ran_trksecalp4 does not exist." << endl;
	}
	ran_trksp4_branch = 0;
	if (tree->GetAlias("ran_trksp4") != 0) {
		ran_trksp4_branch = tree->GetBranch(tree->GetAlias("ran_trksp4"));
		ran_trksp4_branch->SetAddress(&ran_trksp4_);
	}
	if(ran_trksp4_branch == 0 ) {
	cout << "Branch ran_trksp4 does not exist." << endl;
	}
	scs_p4_branch = 0;
	if (tree->GetAlias("scs_p4") != 0) {
		scs_p4_branch = tree->GetBranch(tree->GetAlias("scs_p4"));
		scs_p4_branch->SetAddress(&scs_p4_);
	}
	if(scs_p4_branch == 0 ) {
	cout << "Branch scs_p4 does not exist." << endl;
	}
	scs_pos_p4_branch = 0;
	if (tree->GetAlias("scs_pos_p4") != 0) {
		scs_pos_p4_branch = tree->GetBranch(tree->GetAlias("scs_pos_p4"));
		scs_pos_p4_branch->SetAddress(&scs_pos_p4_);
	}
	if(scs_pos_p4_branch == 0 ) {
	cout << "Branch scs_pos_p4 does not exist." << endl;
	}
	scs_vtx_p4_branch = 0;
	if (tree->GetAlias("scs_vtx_p4") != 0) {
		scs_vtx_p4_branch = tree->GetBranch(tree->GetAlias("scs_vtx_p4"));
		scs_vtx_p4_branch->SetAddress(&scs_vtx_p4_);
	}
	if(scs_vtx_p4_branch == 0 ) {
	cout << "Branch scs_vtx_p4 does not exist." << endl;
	}
	scjets_p4_branch = 0;
	if (tree->GetAlias("scjets_p4") != 0) {
		scjets_p4_branch = tree->GetBranch(tree->GetAlias("scjets_p4"));
		scjets_p4_branch->SetAddress(&scjets_p4_);
	}
	if(scjets_p4_branch == 0 ) {
	cout << "Branch scjets_p4 does not exist." << endl;
	}
	scjets_vertex_p4_branch = 0;
	if (tree->GetAlias("scjets_vertex_p4") != 0) {
		scjets_vertex_p4_branch = tree->GetBranch(tree->GetAlias("scjets_vertex_p4"));
		scjets_vertex_p4_branch->SetAddress(&scjets_vertex_p4_);
	}
	if(scjets_vertex_p4_branch == 0 ) {
	cout << "Branch scjets_vertex_p4 does not exist." << endl;
	}
	trks_inner_position_branch = 0;
	if (tree->GetAlias("trks_inner_position") != 0) {
		trks_inner_position_branch = tree->GetBranch(tree->GetAlias("trks_inner_position"));
		trks_inner_position_branch->SetAddress(&trks_inner_position_);
	}
	if(trks_inner_position_branch == 0 ) {
	cout << "Branch trks_inner_position does not exist." << endl;
	}
	trks_outer_p4_branch = 0;
	if (tree->GetAlias("trks_outer_p4") != 0) {
		trks_outer_p4_branch = tree->GetBranch(tree->GetAlias("trks_outer_p4"));
		trks_outer_p4_branch->SetAddress(&trks_outer_p4_);
	}
	if(trks_outer_p4_branch == 0 ) {
	cout << "Branch trks_outer_p4 does not exist." << endl;
	}
	trks_outer_position_branch = 0;
	if (tree->GetAlias("trks_outer_position") != 0) {
		trks_outer_position_branch = tree->GetBranch(tree->GetAlias("trks_outer_position"));
		trks_outer_position_branch->SetAddress(&trks_outer_position_);
	}
	if(trks_outer_position_branch == 0 ) {
	cout << "Branch trks_outer_position does not exist." << endl;
	}
	trks_trk_p4_branch = 0;
	if (tree->GetAlias("trks_trk_p4") != 0) {
		trks_trk_p4_branch = tree->GetBranch(tree->GetAlias("trks_trk_p4"));
		trks_trk_p4_branch->SetAddress(&trks_trk_p4_);
	}
	if(trks_trk_p4_branch == 0 ) {
	cout << "Branch trks_trk_p4 does not exist." << endl;
	}
	trks_vertex_p4_branch = 0;
	if (tree->GetAlias("trks_vertex_p4") != 0) {
		trks_vertex_p4_branch = tree->GetBranch(tree->GetAlias("trks_vertex_p4"));
		trks_vertex_p4_branch->SetAddress(&trks_vertex_p4_);
	}
	if(trks_vertex_p4_branch == 0 ) {
	cout << "Branch trks_vertex_p4 does not exist." << endl;
	}
	trkjets_p4_branch = 0;
	if (tree->GetAlias("trkjets_p4") != 0) {
		trkjets_p4_branch = tree->GetBranch(tree->GetAlias("trkjets_p4"));
		trkjets_p4_branch->SetAddress(&trkjets_p4_);
	}
	if(trkjets_p4_branch == 0 ) {
	cout << "Branch trkjets_p4 does not exist." << endl;
	}
	vtxs_position_branch = 0;
	if (tree->GetAlias("vtxs_position") != 0) {
		vtxs_position_branch = tree->GetBranch(tree->GetAlias("vtxs_position"));
		vtxs_position_branch->SetAddress(&vtxs_position_);
	}
	if(vtxs_position_branch == 0 ) {
	cout << "Branch vtxs_position does not exist." << endl;
	}
  tree->SetMakeClass(1);
	evt_CMS2tag_branch = 0;
	if (tree->GetAlias("evt_CMS2tag") != 0) {
		evt_CMS2tag_branch = tree->GetBranch(tree->GetAlias("evt_CMS2tag"));
		evt_CMS2tag_branch->SetAddress(&evt_CMS2tag_);
	}
	if(evt_CMS2tag_branch == 0 ) {
	cout << "Branch evt_CMS2tag does not exist." << endl;
	}
	evt_dataset_branch = 0;
	if (tree->GetAlias("evt_dataset") != 0) {
		evt_dataset_branch = tree->GetBranch(tree->GetAlias("evt_dataset"));
		evt_dataset_branch->SetAddress(&evt_dataset_);
	}
	if(evt_dataset_branch == 0 ) {
	cout << "Branch evt_dataset does not exist." << endl;
	}
	hlt_trigNames_branch = 0;
	if (tree->GetAlias("hlt_trigNames") != 0) {
		hlt_trigNames_branch = tree->GetBranch(tree->GetAlias("hlt_trigNames"));
		hlt_trigNames_branch->SetAddress(&hlt_trigNames_);
	}
	if(hlt_trigNames_branch == 0 ) {
	cout << "Branch hlt_trigNames does not exist." << endl;
	}
	l1_trigNames_branch = 0;
	if (tree->GetAlias("l1_trigNames") != 0) {
		l1_trigNames_branch = tree->GetBranch(tree->GetAlias("l1_trigNames"));
		l1_trigNames_branch->SetAddress(&l1_trigNames_);
	}
	if(l1_trigNames_branch == 0 ) {
	cout << "Branch l1_trigNames does not exist." << endl;
	}
	jets_closestElectron_DR_branch = 0;
	if (tree->GetAlias("jets_closestElectron_DR") != 0) {
		jets_closestElectron_DR_branch = tree->GetBranch(tree->GetAlias("jets_closestElectron_DR"));
		jets_closestElectron_DR_branch->SetAddress(&jets_closestElectron_DR_);
	}
	if(jets_closestElectron_DR_branch == 0 ) {
	cout << "Branch jets_closestElectron_DR does not exist." << endl;
	}
	jets_closestMuon_DR_branch = 0;
	if (tree->GetAlias("jets_closestMuon_DR") != 0) {
		jets_closestMuon_DR_branch = tree->GetBranch(tree->GetAlias("jets_closestMuon_DR"));
		jets_closestMuon_DR_branch->SetAddress(&jets_closestMuon_DR_);
	}
	if(jets_closestMuon_DR_branch == 0 ) {
	cout << "Branch jets_closestMuon_DR does not exist." << endl;
	}
	evt_bs_Xwidth_branch = 0;
	if (tree->GetAlias("evt_bs_Xwidth") != 0) {
		evt_bs_Xwidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Xwidth"));
		evt_bs_Xwidth_branch->SetAddress(&evt_bs_Xwidth_);
	}
	if(evt_bs_Xwidth_branch == 0 ) {
	cout << "Branch evt_bs_Xwidth does not exist." << endl;
	}
	evt_bs_XwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_XwidthErr") != 0) {
		evt_bs_XwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_XwidthErr"));
		evt_bs_XwidthErr_branch->SetAddress(&evt_bs_XwidthErr_);
	}
	if(evt_bs_XwidthErr_branch == 0 ) {
	cout << "Branch evt_bs_XwidthErr does not exist." << endl;
	}
	evt_bs_Ywidth_branch = 0;
	if (tree->GetAlias("evt_bs_Ywidth") != 0) {
		evt_bs_Ywidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Ywidth"));
		evt_bs_Ywidth_branch->SetAddress(&evt_bs_Ywidth_);
	}
	if(evt_bs_Ywidth_branch == 0 ) {
	cout << "Branch evt_bs_Ywidth does not exist." << endl;
	}
	evt_bs_YwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_YwidthErr") != 0) {
		evt_bs_YwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_YwidthErr"));
		evt_bs_YwidthErr_branch->SetAddress(&evt_bs_YwidthErr_);
	}
	if(evt_bs_YwidthErr_branch == 0 ) {
	cout << "Branch evt_bs_YwidthErr does not exist." << endl;
	}
	evt_bs_dxdz_branch = 0;
	if (tree->GetAlias("evt_bs_dxdz") != 0) {
		evt_bs_dxdz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdz"));
		evt_bs_dxdz_branch->SetAddress(&evt_bs_dxdz_);
	}
	if(evt_bs_dxdz_branch == 0 ) {
	cout << "Branch evt_bs_dxdz does not exist." << endl;
	}
	evt_bs_dxdzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dxdzErr") != 0) {
		evt_bs_dxdzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdzErr"));
		evt_bs_dxdzErr_branch->SetAddress(&evt_bs_dxdzErr_);
	}
	if(evt_bs_dxdzErr_branch == 0 ) {
	cout << "Branch evt_bs_dxdzErr does not exist." << endl;
	}
	evt_bs_dydz_branch = 0;
	if (tree->GetAlias("evt_bs_dydz") != 0) {
		evt_bs_dydz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydz"));
		evt_bs_dydz_branch->SetAddress(&evt_bs_dydz_);
	}
	if(evt_bs_dydz_branch == 0 ) {
	cout << "Branch evt_bs_dydz does not exist." << endl;
	}
	evt_bs_dydzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dydzErr") != 0) {
		evt_bs_dydzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydzErr"));
		evt_bs_dydzErr_branch->SetAddress(&evt_bs_dydzErr_);
	}
	if(evt_bs_dydzErr_branch == 0 ) {
	cout << "Branch evt_bs_dydzErr does not exist." << endl;
	}
	evt_bs_sigmaZ_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZ") != 0) {
		evt_bs_sigmaZ_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZ"));
		evt_bs_sigmaZ_branch->SetAddress(&evt_bs_sigmaZ_);
	}
	if(evt_bs_sigmaZ_branch == 0 ) {
	cout << "Branch evt_bs_sigmaZ does not exist." << endl;
	}
	evt_bs_sigmaZErr_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZErr") != 0) {
		evt_bs_sigmaZErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZErr"));
		evt_bs_sigmaZErr_branch->SetAddress(&evt_bs_sigmaZErr_);
	}
	if(evt_bs_sigmaZErr_branch == 0 ) {
	cout << "Branch evt_bs_sigmaZErr does not exist." << endl;
	}
	evt_bs_xErr_branch = 0;
	if (tree->GetAlias("evt_bs_xErr") != 0) {
		evt_bs_xErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_xErr"));
		evt_bs_xErr_branch->SetAddress(&evt_bs_xErr_);
	}
	if(evt_bs_xErr_branch == 0 ) {
	cout << "Branch evt_bs_xErr does not exist." << endl;
	}
	evt_bs_yErr_branch = 0;
	if (tree->GetAlias("evt_bs_yErr") != 0) {
		evt_bs_yErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_yErr"));
		evt_bs_yErr_branch->SetAddress(&evt_bs_yErr_);
	}
	if(evt_bs_yErr_branch == 0 ) {
	cout << "Branch evt_bs_yErr does not exist." << endl;
	}
	evt_bs_zErr_branch = 0;
	if (tree->GetAlias("evt_bs_zErr") != 0) {
		evt_bs_zErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_zErr"));
		evt_bs_zErr_branch->SetAddress(&evt_bs_zErr_);
	}
	if(evt_bs_zErr_branch == 0 ) {
	cout << "Branch evt_bs_zErr does not exist." << endl;
	}
	evt_bField_branch = 0;
	if (tree->GetAlias("evt_bField") != 0) {
		evt_bField_branch = tree->GetBranch(tree->GetAlias("evt_bField"));
		evt_bField_branch->SetAddress(&evt_bField_);
	}
	if(evt_bField_branch == 0 ) {
	cout << "Branch evt_bField does not exist." << endl;
	}
	evt_kfactor_branch = 0;
	if (tree->GetAlias("evt_kfactor") != 0) {
		evt_kfactor_branch = tree->GetBranch(tree->GetAlias("evt_kfactor"));
		evt_kfactor_branch->SetAddress(&evt_kfactor_);
	}
	if(evt_kfactor_branch == 0 ) {
	cout << "Branch evt_kfactor does not exist." << endl;
	}
	evt_scale1fb_branch = 0;
	if (tree->GetAlias("evt_scale1fb") != 0) {
		evt_scale1fb_branch = tree->GetBranch(tree->GetAlias("evt_scale1fb"));
		evt_scale1fb_branch->SetAddress(&evt_scale1fb_);
	}
	if(evt_scale1fb_branch == 0 ) {
	cout << "Branch evt_scale1fb does not exist." << endl;
	}
	evt_xsec_excl_branch = 0;
	if (tree->GetAlias("evt_xsec_excl") != 0) {
		evt_xsec_excl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_excl"));
		evt_xsec_excl_branch->SetAddress(&evt_xsec_excl_);
	}
	if(evt_xsec_excl_branch == 0 ) {
	cout << "Branch evt_xsec_excl does not exist." << endl;
	}
	evt_xsec_incl_branch = 0;
	if (tree->GetAlias("evt_xsec_incl") != 0) {
		evt_xsec_incl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_incl"));
		evt_xsec_incl_branch->SetAddress(&evt_xsec_incl_);
	}
	if(evt_xsec_incl_branch == 0 ) {
	cout << "Branch evt_xsec_incl does not exist." << endl;
	}
	gen_met_branch = 0;
	if (tree->GetAlias("gen_met") != 0) {
		gen_met_branch = tree->GetBranch(tree->GetAlias("gen_met"));
		gen_met_branch->SetAddress(&gen_met_);
	}
	if(gen_met_branch == 0 ) {
	cout << "Branch gen_met does not exist." << endl;
	}
	gen_metPhi_branch = 0;
	if (tree->GetAlias("gen_metPhi") != 0) {
		gen_metPhi_branch = tree->GetBranch(tree->GetAlias("gen_metPhi"));
		gen_metPhi_branch->SetAddress(&gen_metPhi_);
	}
	if(gen_metPhi_branch == 0 ) {
	cout << "Branch gen_metPhi does not exist." << endl;
	}
	genps_alphaQCD_branch = 0;
	if (tree->GetAlias("genps_alphaQCD") != 0) {
		genps_alphaQCD_branch = tree->GetBranch(tree->GetAlias("genps_alphaQCD"));
		genps_alphaQCD_branch->SetAddress(&genps_alphaQCD_);
	}
	if(genps_alphaQCD_branch == 0 ) {
	cout << "Branch genps_alphaQCD does not exist." << endl;
	}
	genps_pthat_branch = 0;
	if (tree->GetAlias("genps_pthat") != 0) {
		genps_pthat_branch = tree->GetBranch(tree->GetAlias("genps_pthat"));
		genps_pthat_branch->SetAddress(&genps_pthat_);
	}
	if(genps_pthat_branch == 0 ) {
	cout << "Branch genps_pthat does not exist." << endl;
	}
	genps_qScale_branch = 0;
	if (tree->GetAlias("genps_qScale") != 0) {
		genps_qScale_branch = tree->GetBranch(tree->GetAlias("genps_qScale"));
		genps_qScale_branch->SetAddress(&genps_qScale_);
	}
	if(genps_qScale_branch == 0 ) {
	cout << "Branch genps_qScale does not exist." << endl;
	}
	genps_weight_branch = 0;
	if (tree->GetAlias("genps_weight") != 0) {
		genps_weight_branch = tree->GetBranch(tree->GetAlias("genps_weight"));
		genps_weight_branch->SetAddress(&genps_weight_);
	}
	if(genps_weight_branch == 0 ) {
	cout << "Branch genps_weight does not exist." << endl;
	}
	gen_sumEt_branch = 0;
	if (tree->GetAlias("gen_sumEt") != 0) {
		gen_sumEt_branch = tree->GetBranch(tree->GetAlias("gen_sumEt"));
		gen_sumEt_branch->SetAddress(&gen_sumEt_);
	}
	if(gen_sumEt_branch == 0 ) {
	cout << "Branch gen_sumEt does not exist." << endl;
	}
	hcalnoise_eventChargeFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventChargeFraction") != 0) {
		hcalnoise_eventChargeFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventChargeFraction"));
		hcalnoise_eventChargeFraction_branch->SetAddress(&hcalnoise_eventChargeFraction_);
	}
	if(hcalnoise_eventChargeFraction_branch == 0 ) {
	cout << "Branch hcalnoise_eventChargeFraction does not exist." << endl;
	}
	hcalnoise_eventEMEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMEnergy") != 0) {
		hcalnoise_eventEMEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMEnergy"));
		hcalnoise_eventEMEnergy_branch->SetAddress(&hcalnoise_eventEMEnergy_);
	}
	if(hcalnoise_eventEMEnergy_branch == 0 ) {
	cout << "Branch hcalnoise_eventEMEnergy does not exist." << endl;
	}
	hcalnoise_eventEMFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMFraction") != 0) {
		hcalnoise_eventEMFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMFraction"));
		hcalnoise_eventEMFraction_branch->SetAddress(&hcalnoise_eventEMFraction_);
	}
	if(hcalnoise_eventEMFraction_branch == 0 ) {
	cout << "Branch hcalnoise_eventEMFraction does not exist." << endl;
	}
	hcalnoise_eventHadEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventHadEnergy") != 0) {
		hcalnoise_eventHadEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventHadEnergy"));
		hcalnoise_eventHadEnergy_branch->SetAddress(&hcalnoise_eventHadEnergy_);
	}
	if(hcalnoise_eventHadEnergy_branch == 0 ) {
	cout << "Branch hcalnoise_eventHadEnergy does not exist." << endl;
	}
	hcalnoise_eventTrackEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventTrackEnergy") != 0) {
		hcalnoise_eventTrackEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventTrackEnergy"));
		hcalnoise_eventTrackEnergy_branch->SetAddress(&hcalnoise_eventTrackEnergy_);
	}
	if(hcalnoise_eventTrackEnergy_branch == 0 ) {
	cout << "Branch hcalnoise_eventTrackEnergy does not exist." << endl;
	}
	hcalnoise_max10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max10GeVHitTime") != 0) {
		hcalnoise_max10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max10GeVHitTime"));
		hcalnoise_max10GeVHitTime_branch->SetAddress(&hcalnoise_max10GeVHitTime_);
	}
	if(hcalnoise_max10GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_max10GeVHitTime does not exist." << endl;
	}
	hcalnoise_max25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max25GeVHitTime") != 0) {
		hcalnoise_max25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max25GeVHitTime"));
		hcalnoise_max25GeVHitTime_branch->SetAddress(&hcalnoise_max25GeVHitTime_);
	}
	if(hcalnoise_max25GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_max25GeVHitTime does not exist." << endl;
	}
	hcalnoise_min10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min10GeVHitTime") != 0) {
		hcalnoise_min10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min10GeVHitTime"));
		hcalnoise_min10GeVHitTime_branch->SetAddress(&hcalnoise_min10GeVHitTime_);
	}
	if(hcalnoise_min10GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_min10GeVHitTime does not exist." << endl;
	}
	hcalnoise_min25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min25GeVHitTime") != 0) {
		hcalnoise_min25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min25GeVHitTime"));
		hcalnoise_min25GeVHitTime_branch->SetAddress(&hcalnoise_min25GeVHitTime_);
	}
	if(hcalnoise_min25GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_min25GeVHitTime does not exist." << endl;
	}
	hcalnoise_minE10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE10TS") != 0) {
		hcalnoise_minE10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE10TS"));
		hcalnoise_minE10TS_branch->SetAddress(&hcalnoise_minE10TS_);
	}
	if(hcalnoise_minE10TS_branch == 0 ) {
	cout << "Branch hcalnoise_minE10TS does not exist." << endl;
	}
	hcalnoise_minE2Over10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2Over10TS") != 0) {
		hcalnoise_minE2Over10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2Over10TS"));
		hcalnoise_minE2Over10TS_branch->SetAddress(&hcalnoise_minE2Over10TS_);
	}
	if(hcalnoise_minE2Over10TS_branch == 0 ) {
	cout << "Branch hcalnoise_minE2Over10TS does not exist." << endl;
	}
	hcalnoise_minE2TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2TS") != 0) {
		hcalnoise_minE2TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2TS"));
		hcalnoise_minE2TS_branch->SetAddress(&hcalnoise_minE2TS_);
	}
	if(hcalnoise_minE2TS_branch == 0 ) {
	cout << "Branch hcalnoise_minE2TS does not exist." << endl;
	}
	hcalnoise_minHPDEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minHPDEMF") != 0) {
		hcalnoise_minHPDEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minHPDEMF"));
		hcalnoise_minHPDEMF_branch->SetAddress(&hcalnoise_minHPDEMF_);
	}
	if(hcalnoise_minHPDEMF_branch == 0 ) {
	cout << "Branch hcalnoise_minHPDEMF does not exist." << endl;
	}
	hcalnoise_minRBXEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minRBXEMF") != 0) {
		hcalnoise_minRBXEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minRBXEMF"));
		hcalnoise_minRBXEMF_branch->SetAddress(&hcalnoise_minRBXEMF_);
	}
	if(hcalnoise_minRBXEMF_branch == 0 ) {
	cout << "Branch hcalnoise_minRBXEMF does not exist." << endl;
	}
	hcalnoise_rms10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms10GeVHitTime") != 0) {
		hcalnoise_rms10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms10GeVHitTime"));
		hcalnoise_rms10GeVHitTime_branch->SetAddress(&hcalnoise_rms10GeVHitTime_);
	}
	if(hcalnoise_rms10GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_rms10GeVHitTime does not exist." << endl;
	}
	hcalnoise_rms25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms25GeVHitTime") != 0) {
		hcalnoise_rms25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms25GeVHitTime"));
		hcalnoise_rms25GeVHitTime_branch->SetAddress(&hcalnoise_rms25GeVHitTime_);
	}
	if(hcalnoise_rms25GeVHitTime_branch == 0 ) {
	cout << "Branch hcalnoise_rms25GeVHitTime does not exist." << endl;
	}
	l1_met_etTot_branch = 0;
	if (tree->GetAlias("l1_met_etTot") != 0) {
		l1_met_etTot_branch = tree->GetBranch(tree->GetAlias("l1_met_etTot"));
		l1_met_etTot_branch->SetAddress(&l1_met_etTot_);
	}
	if(l1_met_etTot_branch == 0 ) {
	cout << "Branch l1_met_etTot does not exist." << endl;
	}
	l1_met_met_branch = 0;
	if (tree->GetAlias("l1_met_met") != 0) {
		l1_met_met_branch = tree->GetBranch(tree->GetAlias("l1_met_met"));
		l1_met_met_branch->SetAddress(&l1_met_met_);
	}
	if(l1_met_met_branch == 0 ) {
	cout << "Branch l1_met_met does not exist." << endl;
	}
	l1_mht_htTot_branch = 0;
	if (tree->GetAlias("l1_mht_htTot") != 0) {
		l1_mht_htTot_branch = tree->GetBranch(tree->GetAlias("l1_mht_htTot"));
		l1_mht_htTot_branch->SetAddress(&l1_mht_htTot_);
	}
	if(l1_mht_htTot_branch == 0 ) {
	cout << "Branch l1_mht_htTot does not exist." << endl;
	}
	l1_mht_mht_branch = 0;
	if (tree->GetAlias("l1_mht_mht") != 0) {
		l1_mht_mht_branch = tree->GetBranch(tree->GetAlias("l1_mht_mht"));
		l1_mht_mht_branch->SetAddress(&l1_mht_mht_);
	}
	if(l1_mht_mht_branch == 0 ) {
	cout << "Branch l1_mht_mht does not exist." << endl;
	}
	evt_ecalendcapm_met_branch = 0;
	if (tree->GetAlias("evt_ecalendcapm_met") != 0) {
		evt_ecalendcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapm_met"));
		evt_ecalendcapm_met_branch->SetAddress(&evt_ecalendcapm_met_);
	}
	if(evt_ecalendcapm_met_branch == 0 ) {
	cout << "Branch evt_ecalendcapm_met does not exist." << endl;
	}
	evt_ecalendcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_ecalendcapm_metPhi") != 0) {
		evt_ecalendcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapm_metPhi"));
		evt_ecalendcapm_metPhi_branch->SetAddress(&evt_ecalendcapm_metPhi_);
	}
	if(evt_ecalendcapm_metPhi_branch == 0 ) {
	cout << "Branch evt_ecalendcapm_metPhi does not exist." << endl;
	}
	evt_ecalendcapp_met_branch = 0;
	if (tree->GetAlias("evt_ecalendcapp_met") != 0) {
		evt_ecalendcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapp_met"));
		evt_ecalendcapp_met_branch->SetAddress(&evt_ecalendcapp_met_);
	}
	if(evt_ecalendcapp_met_branch == 0 ) {
	cout << "Branch evt_ecalendcapp_met does not exist." << endl;
	}
	evt_ecalendcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_ecalendcapp_metPhi") != 0) {
		evt_ecalendcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapp_metPhi"));
		evt_ecalendcapp_metPhi_branch->SetAddress(&evt_ecalendcapp_metPhi_);
	}
	if(evt_ecalendcapp_metPhi_branch == 0 ) {
	cout << "Branch evt_ecalendcapp_metPhi does not exist." << endl;
	}
	evt_ecalmet_branch = 0;
	if (tree->GetAlias("evt_ecalmet") != 0) {
		evt_ecalmet_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet"));
		evt_ecalmet_branch->SetAddress(&evt_ecalmet_);
	}
	if(evt_ecalmet_branch == 0 ) {
	cout << "Branch evt_ecalmet does not exist." << endl;
	}
	evt_ecalmetPhi_branch = 0;
	if (tree->GetAlias("evt_ecalmetPhi") != 0) {
		evt_ecalmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalmetPhi"));
		evt_ecalmetPhi_branch->SetAddress(&evt_ecalmetPhi_);
	}
	if(evt_ecalmetPhi_branch == 0 ) {
	cout << "Branch evt_ecalmetPhi does not exist." << endl;
	}
	evt_endcapm_met_branch = 0;
	if (tree->GetAlias("evt_endcapm_met") != 0) {
		evt_endcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_endcapm_met"));
		evt_endcapm_met_branch->SetAddress(&evt_endcapm_met_);
	}
	if(evt_endcapm_met_branch == 0 ) {
	cout << "Branch evt_endcapm_met does not exist." << endl;
	}
	evt_endcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_endcapm_metPhi") != 0) {
		evt_endcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_endcapm_metPhi"));
		evt_endcapm_metPhi_branch->SetAddress(&evt_endcapm_metPhi_);
	}
	if(evt_endcapm_metPhi_branch == 0 ) {
	cout << "Branch evt_endcapm_metPhi does not exist." << endl;
	}
	evt_endcapp_met_branch = 0;
	if (tree->GetAlias("evt_endcapp_met") != 0) {
		evt_endcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_endcapp_met"));
		evt_endcapp_met_branch->SetAddress(&evt_endcapp_met_);
	}
	if(evt_endcapp_met_branch == 0 ) {
	cout << "Branch evt_endcapp_met does not exist." << endl;
	}
	evt_endcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_endcapp_metPhi") != 0) {
		evt_endcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_endcapp_metPhi"));
		evt_endcapp_metPhi_branch->SetAddress(&evt_endcapp_metPhi_);
	}
	if(evt_endcapp_metPhi_branch == 0 ) {
	cout << "Branch evt_endcapp_metPhi does not exist." << endl;
	}
	evt_hcalendcapm_met_branch = 0;
	if (tree->GetAlias("evt_hcalendcapm_met") != 0) {
		evt_hcalendcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapm_met"));
		evt_hcalendcapm_met_branch->SetAddress(&evt_hcalendcapm_met_);
	}
	if(evt_hcalendcapm_met_branch == 0 ) {
	cout << "Branch evt_hcalendcapm_met does not exist." << endl;
	}
	evt_hcalendcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_hcalendcapm_metPhi") != 0) {
		evt_hcalendcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapm_metPhi"));
		evt_hcalendcapm_metPhi_branch->SetAddress(&evt_hcalendcapm_metPhi_);
	}
	if(evt_hcalendcapm_metPhi_branch == 0 ) {
	cout << "Branch evt_hcalendcapm_metPhi does not exist." << endl;
	}
	evt_hcalendcapp_met_branch = 0;
	if (tree->GetAlias("evt_hcalendcapp_met") != 0) {
		evt_hcalendcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapp_met"));
		evt_hcalendcapp_met_branch->SetAddress(&evt_hcalendcapp_met_);
	}
	if(evt_hcalendcapp_met_branch == 0 ) {
	cout << "Branch evt_hcalendcapp_met does not exist." << endl;
	}
	evt_hcalendcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_hcalendcapp_metPhi") != 0) {
		evt_hcalendcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapp_metPhi"));
		evt_hcalendcapp_metPhi_branch->SetAddress(&evt_hcalendcapp_metPhi_);
	}
	if(evt_hcalendcapp_metPhi_branch == 0 ) {
	cout << "Branch evt_hcalendcapp_metPhi does not exist." << endl;
	}
	evt_hcalmet_branch = 0;
	if (tree->GetAlias("evt_hcalmet") != 0) {
		evt_hcalmet_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet"));
		evt_hcalmet_branch->SetAddress(&evt_hcalmet_);
	}
	if(evt_hcalmet_branch == 0 ) {
	cout << "Branch evt_hcalmet does not exist." << endl;
	}
	evt_hcalmetPhi_branch = 0;
	if (tree->GetAlias("evt_hcalmetPhi") != 0) {
		evt_hcalmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalmetPhi"));
		evt_hcalmetPhi_branch->SetAddress(&evt_hcalmetPhi_);
	}
	if(evt_hcalmetPhi_branch == 0 ) {
	cout << "Branch evt_hcalmetPhi does not exist." << endl;
	}
	evt_met_branch = 0;
	if (tree->GetAlias("evt_met") != 0) {
		evt_met_branch = tree->GetBranch(tree->GetAlias("evt_met"));
		evt_met_branch->SetAddress(&evt_met_);
	}
	if(evt_met_branch == 0 ) {
	cout << "Branch evt_met does not exist." << endl;
	}
	evt_metHO_branch = 0;
	if (tree->GetAlias("evt_metHO") != 0) {
		evt_metHO_branch = tree->GetBranch(tree->GetAlias("evt_metHO"));
		evt_metHO_branch->SetAddress(&evt_metHO_);
	}
	if(evt_metHO_branch == 0 ) {
	cout << "Branch evt_metHO does not exist." << endl;
	}
	evt_metHOPhi_branch = 0;
	if (tree->GetAlias("evt_metHOPhi") != 0) {
		evt_metHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metHOPhi"));
		evt_metHOPhi_branch->SetAddress(&evt_metHOPhi_);
	}
	if(evt_metHOPhi_branch == 0 ) {
	cout << "Branch evt_metHOPhi does not exist." << endl;
	}
	evt_metHOSig_branch = 0;
	if (tree->GetAlias("evt_metHOSig") != 0) {
		evt_metHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metHOSig"));
		evt_metHOSig_branch->SetAddress(&evt_metHOSig_);
	}
	if(evt_metHOSig_branch == 0 ) {
	cout << "Branch evt_metHOSig does not exist." << endl;
	}
	evt_metMuonCorr_branch = 0;
	if (tree->GetAlias("evt_metMuonCorr") != 0) {
		evt_metMuonCorr_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorr"));
		evt_metMuonCorr_branch->SetAddress(&evt_metMuonCorr_);
	}
	if(evt_metMuonCorr_branch == 0 ) {
	cout << "Branch evt_metMuonCorr does not exist." << endl;
	}
	evt_metMuonCorrPhi_branch = 0;
	if (tree->GetAlias("evt_metMuonCorrPhi") != 0) {
		evt_metMuonCorrPhi_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorrPhi"));
		evt_metMuonCorrPhi_branch->SetAddress(&evt_metMuonCorrPhi_);
	}
	if(evt_metMuonCorrPhi_branch == 0 ) {
	cout << "Branch evt_metMuonCorrPhi does not exist." << endl;
	}
	evt_metMuonCorrSig_branch = 0;
	if (tree->GetAlias("evt_metMuonCorrSig") != 0) {
		evt_metMuonCorrSig_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorrSig"));
		evt_metMuonCorrSig_branch->SetAddress(&evt_metMuonCorrSig_);
	}
	if(evt_metMuonCorrSig_branch == 0 ) {
	cout << "Branch evt_metMuonCorrSig does not exist." << endl;
	}
	evt_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorr") != 0) {
		evt_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorr"));
		evt_metMuonJESCorr_branch->SetAddress(&evt_metMuonJESCorr_);
	}
	if(evt_metMuonJESCorr_branch == 0 ) {
	cout << "Branch evt_metMuonJESCorr does not exist." << endl;
	}
	evt_metMuonJESCorrPhi_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorrPhi") != 0) {
		evt_metMuonJESCorrPhi_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorrPhi"));
		evt_metMuonJESCorrPhi_branch->SetAddress(&evt_metMuonJESCorrPhi_);
	}
	if(evt_metMuonJESCorrPhi_branch == 0 ) {
	cout << "Branch evt_metMuonJESCorrPhi does not exist." << endl;
	}
	evt_metMuonJESCorrSig_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorrSig") != 0) {
		evt_metMuonJESCorrSig_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorrSig"));
		evt_metMuonJESCorrSig_branch->SetAddress(&evt_metMuonJESCorrSig_);
	}
	if(evt_metMuonJESCorrSig_branch == 0 ) {
	cout << "Branch evt_metMuonJESCorrSig does not exist." << endl;
	}
	evt_metNoHF_branch = 0;
	if (tree->GetAlias("evt_metNoHF") != 0) {
		evt_metNoHF_branch = tree->GetBranch(tree->GetAlias("evt_metNoHF"));
		evt_metNoHF_branch->SetAddress(&evt_metNoHF_);
	}
	if(evt_metNoHF_branch == 0 ) {
	cout << "Branch evt_metNoHF does not exist." << endl;
	}
	evt_metNoHFHO_branch = 0;
	if (tree->GetAlias("evt_metNoHFHO") != 0) {
		evt_metNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHO"));
		evt_metNoHFHO_branch->SetAddress(&evt_metNoHFHO_);
	}
	if(evt_metNoHFHO_branch == 0 ) {
	cout << "Branch evt_metNoHFHO does not exist." << endl;
	}
	evt_metNoHFHOPhi_branch = 0;
	if (tree->GetAlias("evt_metNoHFHOPhi") != 0) {
		evt_metNoHFHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHOPhi"));
		evt_metNoHFHOPhi_branch->SetAddress(&evt_metNoHFHOPhi_);
	}
	if(evt_metNoHFHOPhi_branch == 0 ) {
	cout << "Branch evt_metNoHFHOPhi does not exist." << endl;
	}
	evt_metNoHFHOSig_branch = 0;
	if (tree->GetAlias("evt_metNoHFHOSig") != 0) {
		evt_metNoHFHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHOSig"));
		evt_metNoHFHOSig_branch->SetAddress(&evt_metNoHFHOSig_);
	}
	if(evt_metNoHFHOSig_branch == 0 ) {
	cout << "Branch evt_metNoHFHOSig does not exist." << endl;
	}
	evt_metNoHFPhi_branch = 0;
	if (tree->GetAlias("evt_metNoHFPhi") != 0) {
		evt_metNoHFPhi_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFPhi"));
		evt_metNoHFPhi_branch->SetAddress(&evt_metNoHFPhi_);
	}
	if(evt_metNoHFPhi_branch == 0 ) {
	cout << "Branch evt_metNoHFPhi does not exist." << endl;
	}
	evt_metNoHFSig_branch = 0;
	if (tree->GetAlias("evt_metNoHFSig") != 0) {
		evt_metNoHFSig_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFSig"));
		evt_metNoHFSig_branch->SetAddress(&evt_metNoHFSig_);
	}
	if(evt_metNoHFSig_branch == 0 ) {
	cout << "Branch evt_metNoHFSig does not exist." << endl;
	}
	evt_metOpt_branch = 0;
	if (tree->GetAlias("evt_metOpt") != 0) {
		evt_metOpt_branch = tree->GetBranch(tree->GetAlias("evt_metOpt"));
		evt_metOpt_branch->SetAddress(&evt_metOpt_);
	}
	if(evt_metOpt_branch == 0 ) {
	cout << "Branch evt_metOpt does not exist." << endl;
	}
	evt_metOptHO_branch = 0;
	if (tree->GetAlias("evt_metOptHO") != 0) {
		evt_metOptHO_branch = tree->GetBranch(tree->GetAlias("evt_metOptHO"));
		evt_metOptHO_branch->SetAddress(&evt_metOptHO_);
	}
	if(evt_metOptHO_branch == 0 ) {
	cout << "Branch evt_metOptHO does not exist." << endl;
	}
	evt_metOptHOPhi_branch = 0;
	if (tree->GetAlias("evt_metOptHOPhi") != 0) {
		evt_metOptHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptHOPhi"));
		evt_metOptHOPhi_branch->SetAddress(&evt_metOptHOPhi_);
	}
	if(evt_metOptHOPhi_branch == 0 ) {
	cout << "Branch evt_metOptHOPhi does not exist." << endl;
	}
	evt_metOptHOSig_branch = 0;
	if (tree->GetAlias("evt_metOptHOSig") != 0) {
		evt_metOptHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptHOSig"));
		evt_metOptHOSig_branch->SetAddress(&evt_metOptHOSig_);
	}
	if(evt_metOptHOSig_branch == 0 ) {
	cout << "Branch evt_metOptHOSig does not exist." << endl;
	}
	evt_metOptNoHF_branch = 0;
	if (tree->GetAlias("evt_metOptNoHF") != 0) {
		evt_metOptNoHF_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHF"));
		evt_metOptNoHF_branch->SetAddress(&evt_metOptNoHF_);
	}
	if(evt_metOptNoHF_branch == 0 ) {
	cout << "Branch evt_metOptNoHF does not exist." << endl;
	}
	evt_metOptNoHFHO_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHO") != 0) {
		evt_metOptNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHO"));
		evt_metOptNoHFHO_branch->SetAddress(&evt_metOptNoHFHO_);
	}
	if(evt_metOptNoHFHO_branch == 0 ) {
	cout << "Branch evt_metOptNoHFHO does not exist." << endl;
	}
	evt_metOptNoHFHOPhi_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHOPhi") != 0) {
		evt_metOptNoHFHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHOPhi"));
		evt_metOptNoHFHOPhi_branch->SetAddress(&evt_metOptNoHFHOPhi_);
	}
	if(evt_metOptNoHFHOPhi_branch == 0 ) {
	cout << "Branch evt_metOptNoHFHOPhi does not exist." << endl;
	}
	evt_metOptNoHFHOSig_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHOSig") != 0) {
		evt_metOptNoHFHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHOSig"));
		evt_metOptNoHFHOSig_branch->SetAddress(&evt_metOptNoHFHOSig_);
	}
	if(evt_metOptNoHFHOSig_branch == 0 ) {
	cout << "Branch evt_metOptNoHFHOSig does not exist." << endl;
	}
	evt_metOptNoHFPhi_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFPhi") != 0) {
		evt_metOptNoHFPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFPhi"));
		evt_metOptNoHFPhi_branch->SetAddress(&evt_metOptNoHFPhi_);
	}
	if(evt_metOptNoHFPhi_branch == 0 ) {
	cout << "Branch evt_metOptNoHFPhi does not exist." << endl;
	}
	evt_metOptNoHFSig_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFSig") != 0) {
		evt_metOptNoHFSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFSig"));
		evt_metOptNoHFSig_branch->SetAddress(&evt_metOptNoHFSig_);
	}
	if(evt_metOptNoHFSig_branch == 0 ) {
	cout << "Branch evt_metOptNoHFSig does not exist." << endl;
	}
	evt_metOptPhi_branch = 0;
	if (tree->GetAlias("evt_metOptPhi") != 0) {
		evt_metOptPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptPhi"));
		evt_metOptPhi_branch->SetAddress(&evt_metOptPhi_);
	}
	if(evt_metOptPhi_branch == 0 ) {
	cout << "Branch evt_metOptPhi does not exist." << endl;
	}
	evt_metOptSig_branch = 0;
	if (tree->GetAlias("evt_metOptSig") != 0) {
		evt_metOptSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptSig"));
		evt_metOptSig_branch->SetAddress(&evt_metOptSig_);
	}
	if(evt_metOptSig_branch == 0 ) {
	cout << "Branch evt_metOptSig does not exist." << endl;
	}
	evt_metPhi_branch = 0;
	if (tree->GetAlias("evt_metPhi") != 0) {
		evt_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_metPhi"));
		evt_metPhi_branch->SetAddress(&evt_metPhi_);
	}
	if(evt_metPhi_branch == 0 ) {
	cout << "Branch evt_metPhi does not exist." << endl;
	}
	evt_metSig_branch = 0;
	if (tree->GetAlias("evt_metSig") != 0) {
		evt_metSig_branch = tree->GetBranch(tree->GetAlias("evt_metSig"));
		evt_metSig_branch->SetAddress(&evt_metSig_);
	}
	if(evt_metSig_branch == 0 ) {
	cout << "Branch evt_metSig does not exist." << endl;
	}
	evt_sumet_branch = 0;
	if (tree->GetAlias("evt_sumet") != 0) {
		evt_sumet_branch = tree->GetBranch(tree->GetAlias("evt_sumet"));
		evt_sumet_branch->SetAddress(&evt_sumet_);
	}
	if(evt_sumet_branch == 0 ) {
	cout << "Branch evt_sumet does not exist." << endl;
	}
	evt_sumetHO_branch = 0;
	if (tree->GetAlias("evt_sumetHO") != 0) {
		evt_sumetHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetHO"));
		evt_sumetHO_branch->SetAddress(&evt_sumetHO_);
	}
	if(evt_sumetHO_branch == 0 ) {
	cout << "Branch evt_sumetHO does not exist." << endl;
	}
	evt_sumetMuonCorr_branch = 0;
	if (tree->GetAlias("evt_sumetMuonCorr") != 0) {
		evt_sumetMuonCorr_branch = tree->GetBranch(tree->GetAlias("evt_sumetMuonCorr"));
		evt_sumetMuonCorr_branch->SetAddress(&evt_sumetMuonCorr_);
	}
	if(evt_sumetMuonCorr_branch == 0 ) {
	cout << "Branch evt_sumetMuonCorr does not exist." << endl;
	}
	evt_sumetNoHF_branch = 0;
	if (tree->GetAlias("evt_sumetNoHF") != 0) {
		evt_sumetNoHF_branch = tree->GetBranch(tree->GetAlias("evt_sumetNoHF"));
		evt_sumetNoHF_branch->SetAddress(&evt_sumetNoHF_);
	}
	if(evt_sumetNoHF_branch == 0 ) {
	cout << "Branch evt_sumetNoHF does not exist." << endl;
	}
	evt_sumetNoHFHO_branch = 0;
	if (tree->GetAlias("evt_sumetNoHFHO") != 0) {
		evt_sumetNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetNoHFHO"));
		evt_sumetNoHFHO_branch->SetAddress(&evt_sumetNoHFHO_);
	}
	if(evt_sumetNoHFHO_branch == 0 ) {
	cout << "Branch evt_sumetNoHFHO does not exist." << endl;
	}
	evt_sumetOpt_branch = 0;
	if (tree->GetAlias("evt_sumetOpt") != 0) {
		evt_sumetOpt_branch = tree->GetBranch(tree->GetAlias("evt_sumetOpt"));
		evt_sumetOpt_branch->SetAddress(&evt_sumetOpt_);
	}
	if(evt_sumetOpt_branch == 0 ) {
	cout << "Branch evt_sumetOpt does not exist." << endl;
	}
	evt_sumetOptHO_branch = 0;
	if (tree->GetAlias("evt_sumetOptHO") != 0) {
		evt_sumetOptHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptHO"));
		evt_sumetOptHO_branch->SetAddress(&evt_sumetOptHO_);
	}
	if(evt_sumetOptHO_branch == 0 ) {
	cout << "Branch evt_sumetOptHO does not exist." << endl;
	}
	evt_sumetOptNoHF_branch = 0;
	if (tree->GetAlias("evt_sumetOptNoHF") != 0) {
		evt_sumetOptNoHF_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptNoHF"));
		evt_sumetOptNoHF_branch->SetAddress(&evt_sumetOptNoHF_);
	}
	if(evt_sumetOptNoHF_branch == 0 ) {
	cout << "Branch evt_sumetOptNoHF does not exist." << endl;
	}
	evt_sumetOptNoHFHO_branch = 0;
	if (tree->GetAlias("evt_sumetOptNoHFHO") != 0) {
		evt_sumetOptNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptNoHFHO"));
		evt_sumetOptNoHFHO_branch->SetAddress(&evt_sumetOptNoHFHO_);
	}
	if(evt_sumetOptNoHFHO_branch == 0 ) {
	cout << "Branch evt_sumetOptNoHFHO does not exist." << endl;
	}
	pdfinfo_scale_branch = 0;
	if (tree->GetAlias("pdfinfo_scale") != 0) {
		pdfinfo_scale_branch = tree->GetBranch(tree->GetAlias("pdfinfo_scale"));
		pdfinfo_scale_branch->SetAddress(&pdfinfo_scale_);
	}
	if(pdfinfo_scale_branch == 0 ) {
	cout << "Branch pdfinfo_scale does not exist." << endl;
	}
	pdfinfo_x1_branch = 0;
	if (tree->GetAlias("pdfinfo_x1") != 0) {
		pdfinfo_x1_branch = tree->GetBranch(tree->GetAlias("pdfinfo_x1"));
		pdfinfo_x1_branch->SetAddress(&pdfinfo_x1_);
	}
	if(pdfinfo_x1_branch == 0 ) {
	cout << "Branch pdfinfo_x1 does not exist." << endl;
	}
	pdfinfo_x2_branch = 0;
	if (tree->GetAlias("pdfinfo_x2") != 0) {
		pdfinfo_x2_branch = tree->GetBranch(tree->GetAlias("pdfinfo_x2"));
		pdfinfo_x2_branch->SetAddress(&pdfinfo_x2_);
	}
	if(pdfinfo_x2_branch == 0 ) {
	cout << "Branch pdfinfo_x2 does not exist." << endl;
	}
	evt_pfmet_branch = 0;
	if (tree->GetAlias("evt_pfmet") != 0) {
		evt_pfmet_branch = tree->GetBranch(tree->GetAlias("evt_pfmet"));
		evt_pfmet_branch->SetAddress(&evt_pfmet_);
	}
	if(evt_pfmet_branch == 0 ) {
	cout << "Branch evt_pfmet does not exist." << endl;
	}
	evt_pfmetPhi_branch = 0;
	if (tree->GetAlias("evt_pfmetPhi") != 0) {
		evt_pfmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_pfmetPhi"));
		evt_pfmetPhi_branch->SetAddress(&evt_pfmetPhi_);
	}
	if(evt_pfmetPhi_branch == 0 ) {
	cout << "Branch evt_pfmetPhi does not exist." << endl;
	}
	evt_pfmetSig_branch = 0;
	if (tree->GetAlias("evt_pfmetSig") != 0) {
		evt_pfmetSig_branch = tree->GetBranch(tree->GetAlias("evt_pfmetSig"));
		evt_pfmetSig_branch->SetAddress(&evt_pfmetSig_);
	}
	if(evt_pfmetSig_branch == 0 ) {
	cout << "Branch evt_pfmetSig does not exist." << endl;
	}
	evt_pfsumet_branch = 0;
	if (tree->GetAlias("evt_pfsumet") != 0) {
		evt_pfsumet_branch = tree->GetBranch(tree->GetAlias("evt_pfsumet"));
		evt_pfsumet_branch->SetAddress(&evt_pfsumet_);
	}
	if(evt_pfsumet_branch == 0 ) {
	cout << "Branch evt_pfsumet does not exist." << endl;
	}
	evt_tcmet_branch = 0;
	if (tree->GetAlias("evt_tcmet") != 0) {
		evt_tcmet_branch = tree->GetBranch(tree->GetAlias("evt_tcmet"));
		evt_tcmet_branch->SetAddress(&evt_tcmet_);
	}
	if(evt_tcmet_branch == 0 ) {
	cout << "Branch evt_tcmet does not exist." << endl;
	}
	evt_tcmetPhi_branch = 0;
	if (tree->GetAlias("evt_tcmetPhi") != 0) {
		evt_tcmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_tcmetPhi"));
		evt_tcmetPhi_branch->SetAddress(&evt_tcmetPhi_);
	}
	if(evt_tcmetPhi_branch == 0 ) {
	cout << "Branch evt_tcmetPhi does not exist." << endl;
	}
	evt_tcmetSig_branch = 0;
	if (tree->GetAlias("evt_tcmetSig") != 0) {
		evt_tcmetSig_branch = tree->GetBranch(tree->GetAlias("evt_tcmetSig"));
		evt_tcmetSig_branch->SetAddress(&evt_tcmetSig_);
	}
	if(evt_tcmetSig_branch == 0 ) {
	cout << "Branch evt_tcmetSig does not exist." << endl;
	}
	evt_tcsumet_branch = 0;
	if (tree->GetAlias("evt_tcsumet") != 0) {
		evt_tcsumet_branch = tree->GetBranch(tree->GetAlias("evt_tcsumet"));
		evt_tcsumet_branch->SetAddress(&evt_tcsumet_);
	}
	if(evt_tcsumet_branch == 0 ) {
	cout << "Branch evt_tcsumet does not exist." << endl;
	}
	genps_lepdaughter_p4_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_p4") != 0) {
		genps_lepdaughter_p4_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_p4"));
		genps_lepdaughter_p4_branch->SetAddress(&genps_lepdaughter_p4_);
	}
	if(genps_lepdaughter_p4_branch == 0 ) {
	cout << "Branch genps_lepdaughter_p4 does not exist." << endl;
	}
	hlt_trigObjs_p4_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_p4") != 0) {
		hlt_trigObjs_p4_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_p4"));
		hlt_trigObjs_p4_branch->SetAddress(&hlt_trigObjs_p4_);
	}
	if(hlt_trigObjs_p4_branch == 0 ) {
	cout << "Branch hlt_trigObjs_p4 does not exist." << endl;
	}
	hyp_jets_p4_branch = 0;
	if (tree->GetAlias("hyp_jets_p4") != 0) {
		hyp_jets_p4_branch = tree->GetBranch(tree->GetAlias("hyp_jets_p4"));
		hyp_jets_p4_branch->SetAddress(&hyp_jets_p4_);
	}
	if(hyp_jets_p4_branch == 0 ) {
	cout << "Branch hyp_jets_p4 does not exist." << endl;
	}
	hyp_other_jets_p4_branch = 0;
	if (tree->GetAlias("hyp_other_jets_p4") != 0) {
		hyp_other_jets_p4_branch = tree->GetBranch(tree->GetAlias("hyp_other_jets_p4"));
		hyp_other_jets_p4_branch->SetAddress(&hyp_other_jets_p4_);
	}
	if(hyp_other_jets_p4_branch == 0 ) {
	cout << "Branch hyp_other_jets_p4 does not exist." << endl;
	}
	taus_pf_isochargecand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_isochargecand_p4") != 0) {
		taus_pf_isochargecand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_isochargecand_p4"));
		taus_pf_isochargecand_p4_branch->SetAddress(&taus_pf_isochargecand_p4_);
	}
	if(taus_pf_isochargecand_p4_branch == 0 ) {
	cout << "Branch taus_pf_isochargecand_p4 does not exist." << endl;
	}
	taus_pf_isogammacand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_isogammacand_p4") != 0) {
		taus_pf_isogammacand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_isogammacand_p4"));
		taus_pf_isogammacand_p4_branch->SetAddress(&taus_pf_isogammacand_p4_);
	}
	if(taus_pf_isogammacand_p4_branch == 0 ) {
	cout << "Branch taus_pf_isogammacand_p4 does not exist." << endl;
	}
	taus_pf_isoneutrcand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_isoneutrcand_p4") != 0) {
		taus_pf_isoneutrcand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_isoneutrcand_p4"));
		taus_pf_isoneutrcand_p4_branch->SetAddress(&taus_pf_isoneutrcand_p4_);
	}
	if(taus_pf_isoneutrcand_p4_branch == 0 ) {
	cout << "Branch taus_pf_isoneutrcand_p4 does not exist." << endl;
	}
	taus_pf_sigchargecand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_sigchargecand_p4") != 0) {
		taus_pf_sigchargecand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_sigchargecand_p4"));
		taus_pf_sigchargecand_p4_branch->SetAddress(&taus_pf_sigchargecand_p4_);
	}
	if(taus_pf_sigchargecand_p4_branch == 0 ) {
	cout << "Branch taus_pf_sigchargecand_p4 does not exist." << endl;
	}
	taus_pf_siggammacand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_siggammacand_p4") != 0) {
		taus_pf_siggammacand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_siggammacand_p4"));
		taus_pf_siggammacand_p4_branch->SetAddress(&taus_pf_siggammacand_p4_);
	}
	if(taus_pf_siggammacand_p4_branch == 0 ) {
	cout << "Branch taus_pf_siggammacand_p4 does not exist." << endl;
	}
	taus_pf_signeutrcand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_signeutrcand_p4") != 0) {
		taus_pf_signeutrcand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_signeutrcand_p4"));
		taus_pf_signeutrcand_p4_branch->SetAddress(&taus_pf_signeutrcand_p4_);
	}
	if(taus_pf_signeutrcand_p4_branch == 0 ) {
	cout << "Branch taus_pf_signeutrcand_p4 does not exist." << endl;
	}
	jets_combinedSecondaryVertexBJetTag_branch = 0;
	if (tree->GetAlias("jets_combinedSecondaryVertexBJetTag") != 0) {
		jets_combinedSecondaryVertexBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_combinedSecondaryVertexBJetTag"));
		jets_combinedSecondaryVertexBJetTag_branch->SetAddress(&jets_combinedSecondaryVertexBJetTag_);
	}
	if(jets_combinedSecondaryVertexBJetTag_branch == 0 ) {
	cout << "Branch jets_combinedSecondaryVertexBJetTag does not exist." << endl;
	}
	jets_combinedSecondaryVertexMVABJetTag_branch = 0;
	if (tree->GetAlias("jets_combinedSecondaryVertexMVABJetTag") != 0) {
		jets_combinedSecondaryVertexMVABJetTag_branch = tree->GetBranch(tree->GetAlias("jets_combinedSecondaryVertexMVABJetTag"));
		jets_combinedSecondaryVertexMVABJetTag_branch->SetAddress(&jets_combinedSecondaryVertexMVABJetTag_);
	}
	if(jets_combinedSecondaryVertexMVABJetTag_branch == 0 ) {
	cout << "Branch jets_combinedSecondaryVertexMVABJetTag does not exist." << endl;
	}
	jets_jetBProbabilityBJetTag_branch = 0;
	if (tree->GetAlias("jets_jetBProbabilityBJetTag") != 0) {
		jets_jetBProbabilityBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_jetBProbabilityBJetTag"));
		jets_jetBProbabilityBJetTag_branch->SetAddress(&jets_jetBProbabilityBJetTag_);
	}
	if(jets_jetBProbabilityBJetTag_branch == 0 ) {
	cout << "Branch jets_jetBProbabilityBJetTag does not exist." << endl;
	}
	jets_jetProbabilityBJetTag_branch = 0;
	if (tree->GetAlias("jets_jetProbabilityBJetTag") != 0) {
		jets_jetProbabilityBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_jetProbabilityBJetTag"));
		jets_jetProbabilityBJetTag_branch->SetAddress(&jets_jetProbabilityBJetTag_);
	}
	if(jets_jetProbabilityBJetTag_branch == 0 ) {
	cout << "Branch jets_jetProbabilityBJetTag does not exist." << endl;
	}
	jets_simpleSecondaryVertexBJetTag_branch = 0;
	if (tree->GetAlias("jets_simpleSecondaryVertexBJetTag") != 0) {
		jets_simpleSecondaryVertexBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_simpleSecondaryVertexBJetTag"));
		jets_simpleSecondaryVertexBJetTag_branch->SetAddress(&jets_simpleSecondaryVertexBJetTag_);
	}
	if(jets_simpleSecondaryVertexBJetTag_branch == 0 ) {
	cout << "Branch jets_simpleSecondaryVertexBJetTag does not exist." << endl;
	}
	jets_softElectronByIP3dBJetTag_branch = 0;
	if (tree->GetAlias("jets_softElectronByIP3dBJetTag") != 0) {
		jets_softElectronByIP3dBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softElectronByIP3dBJetTag"));
		jets_softElectronByIP3dBJetTag_branch->SetAddress(&jets_softElectronByIP3dBJetTag_);
	}
	if(jets_softElectronByIP3dBJetTag_branch == 0 ) {
	cout << "Branch jets_softElectronByIP3dBJetTag does not exist." << endl;
	}
	jets_softElectronByPtBJetTag_branch = 0;
	if (tree->GetAlias("jets_softElectronByPtBJetTag") != 0) {
		jets_softElectronByPtBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softElectronByPtBJetTag"));
		jets_softElectronByPtBJetTag_branch->SetAddress(&jets_softElectronByPtBJetTag_);
	}
	if(jets_softElectronByPtBJetTag_branch == 0 ) {
	cout << "Branch jets_softElectronByPtBJetTag does not exist." << endl;
	}
	jets_softMuonBJetTag_branch = 0;
	if (tree->GetAlias("jets_softMuonBJetTag") != 0) {
		jets_softMuonBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softMuonBJetTag"));
		jets_softMuonBJetTag_branch->SetAddress(&jets_softMuonBJetTag_);
	}
	if(jets_softMuonBJetTag_branch == 0 ) {
	cout << "Branch jets_softMuonBJetTag does not exist." << endl;
	}
	jets_softMuonByIP3dBJetTag_branch = 0;
	if (tree->GetAlias("jets_softMuonByIP3dBJetTag") != 0) {
		jets_softMuonByIP3dBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softMuonByIP3dBJetTag"));
		jets_softMuonByIP3dBJetTag_branch->SetAddress(&jets_softMuonByIP3dBJetTag_);
	}
	if(jets_softMuonByIP3dBJetTag_branch == 0 ) {
	cout << "Branch jets_softMuonByIP3dBJetTag does not exist." << endl;
	}
	jets_softMuonByPtBJetTag_branch = 0;
	if (tree->GetAlias("jets_softMuonByPtBJetTag") != 0) {
		jets_softMuonByPtBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softMuonByPtBJetTag"));
		jets_softMuonByPtBJetTag_branch->SetAddress(&jets_softMuonByPtBJetTag_);
	}
	if(jets_softMuonByPtBJetTag_branch == 0 ) {
	cout << "Branch jets_softMuonByPtBJetTag does not exist." << endl;
	}
	jets_softMuonNoIPBJetTag_branch = 0;
	if (tree->GetAlias("jets_softMuonNoIPBJetTag") != 0) {
		jets_softMuonNoIPBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_softMuonNoIPBJetTag"));
		jets_softMuonNoIPBJetTag_branch->SetAddress(&jets_softMuonNoIPBJetTag_);
	}
	if(jets_softMuonNoIPBJetTag_branch == 0 ) {
	cout << "Branch jets_softMuonNoIPBJetTag does not exist." << endl;
	}
	jets_trackCountingHighEffBJetTag_branch = 0;
	if (tree->GetAlias("jets_trackCountingHighEffBJetTag") != 0) {
		jets_trackCountingHighEffBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_trackCountingHighEffBJetTag"));
		jets_trackCountingHighEffBJetTag_branch->SetAddress(&jets_trackCountingHighEffBJetTag_);
	}
	if(jets_trackCountingHighEffBJetTag_branch == 0 ) {
	cout << "Branch jets_trackCountingHighEffBJetTag does not exist." << endl;
	}
	jets_trackCountingHighPurBJetTag_branch = 0;
	if (tree->GetAlias("jets_trackCountingHighPurBJetTag") != 0) {
		jets_trackCountingHighPurBJetTag_branch = tree->GetBranch(tree->GetAlias("jets_trackCountingHighPurBJetTag"));
		jets_trackCountingHighPurBJetTag_branch->SetAddress(&jets_trackCountingHighPurBJetTag_);
	}
	if(jets_trackCountingHighPurBJetTag_branch == 0 ) {
	cout << "Branch jets_trackCountingHighPurBJetTag does not exist." << endl;
	}
	trkjets_combinedSecondaryVertexBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_combinedSecondaryVertexBJetTag") != 0) {
		trkjets_combinedSecondaryVertexBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_combinedSecondaryVertexBJetTag"));
		trkjets_combinedSecondaryVertexBJetTag_branch->SetAddress(&trkjets_combinedSecondaryVertexBJetTag_);
	}
	if(trkjets_combinedSecondaryVertexBJetTag_branch == 0 ) {
	cout << "Branch trkjets_combinedSecondaryVertexBJetTag does not exist." << endl;
	}
	trkjets_combinedSecondaryVertexMVABJetTag_branch = 0;
	if (tree->GetAlias("trkjets_combinedSecondaryVertexMVABJetTag") != 0) {
		trkjets_combinedSecondaryVertexMVABJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_combinedSecondaryVertexMVABJetTag"));
		trkjets_combinedSecondaryVertexMVABJetTag_branch->SetAddress(&trkjets_combinedSecondaryVertexMVABJetTag_);
	}
	if(trkjets_combinedSecondaryVertexMVABJetTag_branch == 0 ) {
	cout << "Branch trkjets_combinedSecondaryVertexMVABJetTag does not exist." << endl;
	}
	trkjets_jetBProbabilityBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_jetBProbabilityBJetTag") != 0) {
		trkjets_jetBProbabilityBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_jetBProbabilityBJetTag"));
		trkjets_jetBProbabilityBJetTag_branch->SetAddress(&trkjets_jetBProbabilityBJetTag_);
	}
	if(trkjets_jetBProbabilityBJetTag_branch == 0 ) {
	cout << "Branch trkjets_jetBProbabilityBJetTag does not exist." << endl;
	}
	trkjets_jetProbabilityBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_jetProbabilityBJetTag") != 0) {
		trkjets_jetProbabilityBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_jetProbabilityBJetTag"));
		trkjets_jetProbabilityBJetTag_branch->SetAddress(&trkjets_jetProbabilityBJetTag_);
	}
	if(trkjets_jetProbabilityBJetTag_branch == 0 ) {
	cout << "Branch trkjets_jetProbabilityBJetTag does not exist." << endl;
	}
	trkjets_simpleSecondaryVertexBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_simpleSecondaryVertexBJetTag") != 0) {
		trkjets_simpleSecondaryVertexBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_simpleSecondaryVertexBJetTag"));
		trkjets_simpleSecondaryVertexBJetTag_branch->SetAddress(&trkjets_simpleSecondaryVertexBJetTag_);
	}
	if(trkjets_simpleSecondaryVertexBJetTag_branch == 0 ) {
	cout << "Branch trkjets_simpleSecondaryVertexBJetTag does not exist." << endl;
	}
	trkjets_softElectronByIP3dBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softElectronByIP3dBJetTag") != 0) {
		trkjets_softElectronByIP3dBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softElectronByIP3dBJetTag"));
		trkjets_softElectronByIP3dBJetTag_branch->SetAddress(&trkjets_softElectronByIP3dBJetTag_);
	}
	if(trkjets_softElectronByIP3dBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softElectronByIP3dBJetTag does not exist." << endl;
	}
	trkjets_softElectronByPtBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softElectronByPtBJetTag") != 0) {
		trkjets_softElectronByPtBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softElectronByPtBJetTag"));
		trkjets_softElectronByPtBJetTag_branch->SetAddress(&trkjets_softElectronByPtBJetTag_);
	}
	if(trkjets_softElectronByPtBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softElectronByPtBJetTag does not exist." << endl;
	}
	trkjets_softMuonBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softMuonBJetTag") != 0) {
		trkjets_softMuonBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softMuonBJetTag"));
		trkjets_softMuonBJetTag_branch->SetAddress(&trkjets_softMuonBJetTag_);
	}
	if(trkjets_softMuonBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softMuonBJetTag does not exist." << endl;
	}
	trkjets_softMuonByIP3dBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softMuonByIP3dBJetTag") != 0) {
		trkjets_softMuonByIP3dBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softMuonByIP3dBJetTag"));
		trkjets_softMuonByIP3dBJetTag_branch->SetAddress(&trkjets_softMuonByIP3dBJetTag_);
	}
	if(trkjets_softMuonByIP3dBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softMuonByIP3dBJetTag does not exist." << endl;
	}
	trkjets_softMuonByPtBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softMuonByPtBJetTag") != 0) {
		trkjets_softMuonByPtBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softMuonByPtBJetTag"));
		trkjets_softMuonByPtBJetTag_branch->SetAddress(&trkjets_softMuonByPtBJetTag_);
	}
	if(trkjets_softMuonByPtBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softMuonByPtBJetTag does not exist." << endl;
	}
	trkjets_softMuonNoIPBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_softMuonNoIPBJetTag") != 0) {
		trkjets_softMuonNoIPBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_softMuonNoIPBJetTag"));
		trkjets_softMuonNoIPBJetTag_branch->SetAddress(&trkjets_softMuonNoIPBJetTag_);
	}
	if(trkjets_softMuonNoIPBJetTag_branch == 0 ) {
	cout << "Branch trkjets_softMuonNoIPBJetTag does not exist." << endl;
	}
	trkjets_trackCountingHighEffBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_trackCountingHighEffBJetTag") != 0) {
		trkjets_trackCountingHighEffBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_trackCountingHighEffBJetTag"));
		trkjets_trackCountingHighEffBJetTag_branch->SetAddress(&trkjets_trackCountingHighEffBJetTag_);
	}
	if(trkjets_trackCountingHighEffBJetTag_branch == 0 ) {
	cout << "Branch trkjets_trackCountingHighEffBJetTag does not exist." << endl;
	}
	trkjets_trackCountingHighPurBJetTag_branch = 0;
	if (tree->GetAlias("trkjets_trackCountingHighPurBJetTag") != 0) {
		trkjets_trackCountingHighPurBJetTag_branch = tree->GetBranch(tree->GetAlias("trkjets_trackCountingHighPurBJetTag"));
		trkjets_trackCountingHighPurBJetTag_branch->SetAddress(&trkjets_trackCountingHighPurBJetTag_);
	}
	if(trkjets_trackCountingHighPurBJetTag_branch == 0 ) {
	cout << "Branch trkjets_trackCountingHighPurBJetTag does not exist." << endl;
	}
	evt_bs_covMatrix_branch = 0;
	if (tree->GetAlias("evt_bs_covMatrix") != 0) {
		evt_bs_covMatrix_branch = tree->GetBranch(tree->GetAlias("evt_bs_covMatrix"));
		evt_bs_covMatrix_branch->SetAddress(&evt_bs_covMatrix_);
	}
	if(evt_bs_covMatrix_branch == 0 ) {
	cout << "Branch evt_bs_covMatrix does not exist." << endl;
	}
	twrs_ecalTime_branch = 0;
	if (tree->GetAlias("twrs_ecalTime") != 0) {
		twrs_ecalTime_branch = tree->GetBranch(tree->GetAlias("twrs_ecalTime"));
		twrs_ecalTime_branch->SetAddress(&twrs_ecalTime_);
	}
	if(twrs_ecalTime_branch == 0 ) {
	cout << "Branch twrs_ecalTime does not exist." << endl;
	}
	twrs_emEnergy_branch = 0;
	if (tree->GetAlias("twrs_emEnergy") != 0) {
		twrs_emEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_emEnergy"));
		twrs_emEnergy_branch->SetAddress(&twrs_emEnergy_);
	}
	if(twrs_emEnergy_branch == 0 ) {
	cout << "Branch twrs_emEnergy does not exist." << endl;
	}
	twrs_emEt_branch = 0;
	if (tree->GetAlias("twrs_emEt") != 0) {
		twrs_emEt_branch = tree->GetBranch(tree->GetAlias("twrs_emEt"));
		twrs_emEt_branch->SetAddress(&twrs_emEt_);
	}
	if(twrs_emEt_branch == 0 ) {
	cout << "Branch twrs_emEt does not exist." << endl;
	}
	twrs_emEtcorr_branch = 0;
	if (tree->GetAlias("twrs_emEtcorr") != 0) {
		twrs_emEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_emEtcorr"));
		twrs_emEtcorr_branch->SetAddress(&twrs_emEtcorr_);
	}
	if(twrs_emEtcorr_branch == 0 ) {
	cout << "Branch twrs_emEtcorr does not exist." << endl;
	}
	twrs_eta_branch = 0;
	if (tree->GetAlias("twrs_eta") != 0) {
		twrs_eta_branch = tree->GetBranch(tree->GetAlias("twrs_eta"));
		twrs_eta_branch->SetAddress(&twrs_eta_);
	}
	if(twrs_eta_branch == 0 ) {
	cout << "Branch twrs_eta does not exist." << endl;
	}
	twrs_etacorr_branch = 0;
	if (tree->GetAlias("twrs_etacorr") != 0) {
		twrs_etacorr_branch = tree->GetBranch(tree->GetAlias("twrs_etacorr"));
		twrs_etacorr_branch->SetAddress(&twrs_etacorr_);
	}
	if(twrs_etacorr_branch == 0 ) {
	cout << "Branch twrs_etacorr does not exist." << endl;
	}
	twrs_etcorr_branch = 0;
	if (tree->GetAlias("twrs_etcorr") != 0) {
		twrs_etcorr_branch = tree->GetBranch(tree->GetAlias("twrs_etcorr"));
		twrs_etcorr_branch->SetAddress(&twrs_etcorr_);
	}
	if(twrs_etcorr_branch == 0 ) {
	cout << "Branch twrs_etcorr does not exist." << endl;
	}
	twrs_hadEnergy_branch = 0;
	if (tree->GetAlias("twrs_hadEnergy") != 0) {
		twrs_hadEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_hadEnergy"));
		twrs_hadEnergy_branch->SetAddress(&twrs_hadEnergy_);
	}
	if(twrs_hadEnergy_branch == 0 ) {
	cout << "Branch twrs_hadEnergy does not exist." << endl;
	}
	twrs_hadEt_branch = 0;
	if (tree->GetAlias("twrs_hadEt") != 0) {
		twrs_hadEt_branch = tree->GetBranch(tree->GetAlias("twrs_hadEt"));
		twrs_hadEt_branch->SetAddress(&twrs_hadEt_);
	}
	if(twrs_hadEt_branch == 0 ) {
	cout << "Branch twrs_hadEt does not exist." << endl;
	}
	twrs_hadEtcorr_branch = 0;
	if (tree->GetAlias("twrs_hadEtcorr") != 0) {
		twrs_hadEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_hadEtcorr"));
		twrs_hadEtcorr_branch->SetAddress(&twrs_hadEtcorr_);
	}
	if(twrs_hadEtcorr_branch == 0 ) {
	cout << "Branch twrs_hadEtcorr does not exist." << endl;
	}
	twrs_hcalTime_branch = 0;
	if (tree->GetAlias("twrs_hcalTime") != 0) {
		twrs_hcalTime_branch = tree->GetBranch(tree->GetAlias("twrs_hcalTime"));
		twrs_hcalTime_branch->SetAddress(&twrs_hcalTime_);
	}
	if(twrs_hcalTime_branch == 0 ) {
	cout << "Branch twrs_hcalTime does not exist." << endl;
	}
	twrs_outerEnergy_branch = 0;
	if (tree->GetAlias("twrs_outerEnergy") != 0) {
		twrs_outerEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_outerEnergy"));
		twrs_outerEnergy_branch->SetAddress(&twrs_outerEnergy_);
	}
	if(twrs_outerEnergy_branch == 0 ) {
	cout << "Branch twrs_outerEnergy does not exist." << endl;
	}
	twrs_outerEt_branch = 0;
	if (tree->GetAlias("twrs_outerEt") != 0) {
		twrs_outerEt_branch = tree->GetBranch(tree->GetAlias("twrs_outerEt"));
		twrs_outerEt_branch->SetAddress(&twrs_outerEt_);
	}
	if(twrs_outerEt_branch == 0 ) {
	cout << "Branch twrs_outerEt does not exist." << endl;
	}
	twrs_outerEtcorr_branch = 0;
	if (tree->GetAlias("twrs_outerEtcorr") != 0) {
		twrs_outerEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_outerEtcorr"));
		twrs_outerEtcorr_branch->SetAddress(&twrs_outerEtcorr_);
	}
	if(twrs_outerEtcorr_branch == 0 ) {
	cout << "Branch twrs_outerEtcorr does not exist." << endl;
	}
	twrs_pcorr_branch = 0;
	if (tree->GetAlias("twrs_pcorr") != 0) {
		twrs_pcorr_branch = tree->GetBranch(tree->GetAlias("twrs_pcorr"));
		twrs_pcorr_branch->SetAddress(&twrs_pcorr_);
	}
	if(twrs_pcorr_branch == 0 ) {
	cout << "Branch twrs_pcorr does not exist." << endl;
	}
	twrs_phi_branch = 0;
	if (tree->GetAlias("twrs_phi") != 0) {
		twrs_phi_branch = tree->GetBranch(tree->GetAlias("twrs_phi"));
		twrs_phi_branch->SetAddress(&twrs_phi_);
	}
	if(twrs_phi_branch == 0 ) {
	cout << "Branch twrs_phi does not exist." << endl;
	}
	twrs_phicorr_branch = 0;
	if (tree->GetAlias("twrs_phicorr") != 0) {
		twrs_phicorr_branch = tree->GetBranch(tree->GetAlias("twrs_phicorr"));
		twrs_phicorr_branch->SetAddress(&twrs_phicorr_);
	}
	if(twrs_phicorr_branch == 0 ) {
	cout << "Branch twrs_phicorr does not exist." << endl;
	}
	twrs_spikeEt_branch = 0;
	if (tree->GetAlias("twrs_spikeEt") != 0) {
		twrs_spikeEt_branch = tree->GetBranch(tree->GetAlias("twrs_spikeEt"));
		twrs_spikeEt_branch->SetAddress(&twrs_spikeEt_);
	}
	if(twrs_spikeEt_branch == 0 ) {
	cout << "Branch twrs_spikeEt does not exist." << endl;
	}
	twrs_spikeR4_branch = 0;
	if (tree->GetAlias("twrs_spikeR4") != 0) {
		twrs_spikeR4_branch = tree->GetBranch(tree->GetAlias("twrs_spikeR4"));
		twrs_spikeR4_branch->SetAddress(&twrs_spikeR4_);
	}
	if(twrs_spikeR4_branch == 0 ) {
	cout << "Branch twrs_spikeR4 does not exist." << endl;
	}
	twrsUncleaned_ecalTime_branch = 0;
	if (tree->GetAlias("twrsUncleaned_ecalTime") != 0) {
		twrsUncleaned_ecalTime_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_ecalTime"));
		twrsUncleaned_ecalTime_branch->SetAddress(&twrsUncleaned_ecalTime_);
	}
	if(twrsUncleaned_ecalTime_branch == 0 ) {
	cout << "Branch twrsUncleaned_ecalTime does not exist." << endl;
	}
	twrsUncleaned_emEnergy_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emEnergy") != 0) {
		twrsUncleaned_emEnergy_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emEnergy"));
		twrsUncleaned_emEnergy_branch->SetAddress(&twrsUncleaned_emEnergy_);
	}
	if(twrsUncleaned_emEnergy_branch == 0 ) {
	cout << "Branch twrsUncleaned_emEnergy does not exist." << endl;
	}
	twrsUncleaned_emEt_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emEt") != 0) {
		twrsUncleaned_emEt_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emEt"));
		twrsUncleaned_emEt_branch->SetAddress(&twrsUncleaned_emEt_);
	}
	if(twrsUncleaned_emEt_branch == 0 ) {
	cout << "Branch twrsUncleaned_emEt does not exist." << endl;
	}
	twrsUncleaned_emEtcorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emEtcorr") != 0) {
		twrsUncleaned_emEtcorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emEtcorr"));
		twrsUncleaned_emEtcorr_branch->SetAddress(&twrsUncleaned_emEtcorr_);
	}
	if(twrsUncleaned_emEtcorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_emEtcorr does not exist." << endl;
	}
	twrsUncleaned_eta_branch = 0;
	if (tree->GetAlias("twrsUncleaned_eta") != 0) {
		twrsUncleaned_eta_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_eta"));
		twrsUncleaned_eta_branch->SetAddress(&twrsUncleaned_eta_);
	}
	if(twrsUncleaned_eta_branch == 0 ) {
	cout << "Branch twrsUncleaned_eta does not exist." << endl;
	}
	twrsUncleaned_etacorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_etacorr") != 0) {
		twrsUncleaned_etacorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_etacorr"));
		twrsUncleaned_etacorr_branch->SetAddress(&twrsUncleaned_etacorr_);
	}
	if(twrsUncleaned_etacorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_etacorr does not exist." << endl;
	}
	twrsUncleaned_etcorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_etcorr") != 0) {
		twrsUncleaned_etcorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_etcorr"));
		twrsUncleaned_etcorr_branch->SetAddress(&twrsUncleaned_etcorr_);
	}
	if(twrsUncleaned_etcorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_etcorr does not exist." << endl;
	}
	twrsUncleaned_hadEnergy_branch = 0;
	if (tree->GetAlias("twrsUncleaned_hadEnergy") != 0) {
		twrsUncleaned_hadEnergy_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_hadEnergy"));
		twrsUncleaned_hadEnergy_branch->SetAddress(&twrsUncleaned_hadEnergy_);
	}
	if(twrsUncleaned_hadEnergy_branch == 0 ) {
	cout << "Branch twrsUncleaned_hadEnergy does not exist." << endl;
	}
	twrsUncleaned_hadEt_branch = 0;
	if (tree->GetAlias("twrsUncleaned_hadEt") != 0) {
		twrsUncleaned_hadEt_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_hadEt"));
		twrsUncleaned_hadEt_branch->SetAddress(&twrsUncleaned_hadEt_);
	}
	if(twrsUncleaned_hadEt_branch == 0 ) {
	cout << "Branch twrsUncleaned_hadEt does not exist." << endl;
	}
	twrsUncleaned_hadEtcorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_hadEtcorr") != 0) {
		twrsUncleaned_hadEtcorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_hadEtcorr"));
		twrsUncleaned_hadEtcorr_branch->SetAddress(&twrsUncleaned_hadEtcorr_);
	}
	if(twrsUncleaned_hadEtcorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_hadEtcorr does not exist." << endl;
	}
	twrsUncleaned_hcalTime_branch = 0;
	if (tree->GetAlias("twrsUncleaned_hcalTime") != 0) {
		twrsUncleaned_hcalTime_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_hcalTime"));
		twrsUncleaned_hcalTime_branch->SetAddress(&twrsUncleaned_hcalTime_);
	}
	if(twrsUncleaned_hcalTime_branch == 0 ) {
	cout << "Branch twrsUncleaned_hcalTime does not exist." << endl;
	}
	twrsUncleaned_outerEnergy_branch = 0;
	if (tree->GetAlias("twrsUncleaned_outerEnergy") != 0) {
		twrsUncleaned_outerEnergy_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_outerEnergy"));
		twrsUncleaned_outerEnergy_branch->SetAddress(&twrsUncleaned_outerEnergy_);
	}
	if(twrsUncleaned_outerEnergy_branch == 0 ) {
	cout << "Branch twrsUncleaned_outerEnergy does not exist." << endl;
	}
	twrsUncleaned_outerEt_branch = 0;
	if (tree->GetAlias("twrsUncleaned_outerEt") != 0) {
		twrsUncleaned_outerEt_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_outerEt"));
		twrsUncleaned_outerEt_branch->SetAddress(&twrsUncleaned_outerEt_);
	}
	if(twrsUncleaned_outerEt_branch == 0 ) {
	cout << "Branch twrsUncleaned_outerEt does not exist." << endl;
	}
	twrsUncleaned_outerEtcorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_outerEtcorr") != 0) {
		twrsUncleaned_outerEtcorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_outerEtcorr"));
		twrsUncleaned_outerEtcorr_branch->SetAddress(&twrsUncleaned_outerEtcorr_);
	}
	if(twrsUncleaned_outerEtcorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_outerEtcorr does not exist." << endl;
	}
	twrsUncleaned_pcorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_pcorr") != 0) {
		twrsUncleaned_pcorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_pcorr"));
		twrsUncleaned_pcorr_branch->SetAddress(&twrsUncleaned_pcorr_);
	}
	if(twrsUncleaned_pcorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_pcorr does not exist." << endl;
	}
	twrsUncleaned_phi_branch = 0;
	if (tree->GetAlias("twrsUncleaned_phi") != 0) {
		twrsUncleaned_phi_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_phi"));
		twrsUncleaned_phi_branch->SetAddress(&twrsUncleaned_phi_);
	}
	if(twrsUncleaned_phi_branch == 0 ) {
	cout << "Branch twrsUncleaned_phi does not exist." << endl;
	}
	twrsUncleaned_phicorr_branch = 0;
	if (tree->GetAlias("twrsUncleaned_phicorr") != 0) {
		twrsUncleaned_phicorr_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_phicorr"));
		twrsUncleaned_phicorr_branch->SetAddress(&twrsUncleaned_phicorr_);
	}
	if(twrsUncleaned_phicorr_branch == 0 ) {
	cout << "Branch twrsUncleaned_phicorr does not exist." << endl;
	}
	twrsUncleaned_spikeEt_branch = 0;
	if (tree->GetAlias("twrsUncleaned_spikeEt") != 0) {
		twrsUncleaned_spikeEt_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_spikeEt"));
		twrsUncleaned_spikeEt_branch->SetAddress(&twrsUncleaned_spikeEt_);
	}
	if(twrsUncleaned_spikeEt_branch == 0 ) {
	cout << "Branch twrsUncleaned_spikeEt does not exist." << endl;
	}
	twrsUncleaned_spikeR4_branch = 0;
	if (tree->GetAlias("twrsUncleaned_spikeR4") != 0) {
		twrsUncleaned_spikeR4_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_spikeR4"));
		twrsUncleaned_spikeR4_branch->SetAddress(&twrsUncleaned_spikeR4_);
	}
	if(twrsUncleaned_spikeR4_branch == 0 ) {
	cout << "Branch twrsUncleaned_spikeR4 does not exist." << endl;
	}
	taus_calo_isolationECALhitsEtSum_branch = 0;
	if (tree->GetAlias("taus_calo_isolationECALhitsEtSum") != 0) {
		taus_calo_isolationECALhitsEtSum_branch = tree->GetBranch(tree->GetAlias("taus_calo_isolationECALhitsEtSum"));
		taus_calo_isolationECALhitsEtSum_branch->SetAddress(&taus_calo_isolationECALhitsEtSum_);
	}
	if(taus_calo_isolationECALhitsEtSum_branch == 0 ) {
	cout << "Branch taus_calo_isolationECALhitsEtSum does not exist." << endl;
	}
	taus_calo_isolationtrksPtSum_branch = 0;
	if (tree->GetAlias("taus_calo_isolationtrksPtSum") != 0) {
		taus_calo_isolationtrksPtSum_branch = tree->GetBranch(tree->GetAlias("taus_calo_isolationtrksPtSum"));
		taus_calo_isolationtrksPtSum_branch->SetAddress(&taus_calo_isolationtrksPtSum_);
	}
	if(taus_calo_isolationtrksPtSum_branch == 0 ) {
	cout << "Branch taus_calo_isolationtrksPtSum does not exist." << endl;
	}
	taus_calo_leadtrk_HCAL3x3hitsEtSum_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_HCAL3x3hitsEtSum") != 0) {
		taus_calo_leadtrk_HCAL3x3hitsEtSum_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_HCAL3x3hitsEtSum"));
		taus_calo_leadtrk_HCAL3x3hitsEtSum_branch->SetAddress(&taus_calo_leadtrk_HCAL3x3hitsEtSum_);
	}
	if(taus_calo_leadtrk_HCAL3x3hitsEtSum_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_HCAL3x3hitsEtSum does not exist." << endl;
	}
	taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_HCAL3x3hottesthitDEta") != 0) {
		taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_HCAL3x3hottesthitDEta"));
		taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch->SetAddress(&taus_calo_leadtrk_HCAL3x3hottesthitDEta_);
	}
	if(taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_HCAL3x3hottesthitDEta does not exist." << endl;
	}
	taus_calo_leadtrk_Signed_Sipt_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_Signed_Sipt") != 0) {
		taus_calo_leadtrk_Signed_Sipt_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_Signed_Sipt"));
		taus_calo_leadtrk_Signed_Sipt_branch->SetAddress(&taus_calo_leadtrk_Signed_Sipt_);
	}
	if(taus_calo_leadtrk_Signed_Sipt_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_Signed_Sipt does not exist." << endl;
	}
	taus_calo_leadtrk_lostHits_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_lostHits") != 0) {
		taus_calo_leadtrk_lostHits_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_lostHits"));
		taus_calo_leadtrk_lostHits_branch->SetAddress(&taus_calo_leadtrk_lostHits_);
	}
	if(taus_calo_leadtrk_lostHits_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_lostHits does not exist." << endl;
	}
	taus_calo_leadtrk_validHits_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_validHits") != 0) {
		taus_calo_leadtrk_validHits_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_validHits"));
		taus_calo_leadtrk_validHits_branch->SetAddress(&taus_calo_leadtrk_validHits_);
	}
	if(taus_calo_leadtrk_validHits_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_validHits does not exist." << endl;
	}
	taus_calo_maximumHCALhitEt_branch = 0;
	if (tree->GetAlias("taus_calo_maximumHCALhitEt") != 0) {
		taus_calo_maximumHCALhitEt_branch = tree->GetBranch(tree->GetAlias("taus_calo_maximumHCALhitEt"));
		taus_calo_maximumHCALhitEt_branch->SetAddress(&taus_calo_maximumHCALhitEt_);
	}
	if(taus_calo_maximumHCALhitEt_branch == 0 ) {
	cout << "Branch taus_calo_maximumHCALhitEt does not exist." << endl;
	}
	taus_calo_signaltrksInvariantMass_branch = 0;
	if (tree->GetAlias("taus_calo_signaltrksInvariantMass") != 0) {
		taus_calo_signaltrksInvariantMass_branch = tree->GetBranch(tree->GetAlias("taus_calo_signaltrksInvariantMass"));
		taus_calo_signaltrksInvariantMass_branch->SetAddress(&taus_calo_signaltrksInvariantMass_);
	}
	if(taus_calo_signaltrksInvariantMass_branch == 0 ) {
	cout << "Branch taus_calo_signaltrksInvariantMass does not exist." << endl;
	}
	els_mc3dr_branch = 0;
	if (tree->GetAlias("els_mc3dr") != 0) {
		els_mc3dr_branch = tree->GetBranch(tree->GetAlias("els_mc3dr"));
		els_mc3dr_branch->SetAddress(&els_mc3dr_);
	}
	if(els_mc3dr_branch == 0 ) {
	cout << "Branch els_mc3dr does not exist." << endl;
	}
	els_mcdr_branch = 0;
	if (tree->GetAlias("els_mcdr") != 0) {
		els_mcdr_branch = tree->GetBranch(tree->GetAlias("els_mcdr"));
		els_mcdr_branch->SetAddress(&els_mcdr_);
	}
	if(els_mcdr_branch == 0 ) {
	cout << "Branch els_mcdr does not exist." << endl;
	}
	jets_mc3dr_branch = 0;
	if (tree->GetAlias("jets_mc3dr") != 0) {
		jets_mc3dr_branch = tree->GetBranch(tree->GetAlias("jets_mc3dr"));
		jets_mc3dr_branch->SetAddress(&jets_mc3dr_);
	}
	if(jets_mc3dr_branch == 0 ) {
	cout << "Branch jets_mc3dr does not exist." << endl;
	}
	jets_mcdr_branch = 0;
	if (tree->GetAlias("jets_mcdr") != 0) {
		jets_mcdr_branch = tree->GetBranch(tree->GetAlias("jets_mcdr"));
		jets_mcdr_branch->SetAddress(&jets_mcdr_);
	}
	if(jets_mcdr_branch == 0 ) {
	cout << "Branch jets_mcdr does not exist." << endl;
	}
	jets_mc_emEnergy_branch = 0;
	if (tree->GetAlias("jets_mc_emEnergy") != 0) {
		jets_mc_emEnergy_branch = tree->GetBranch(tree->GetAlias("jets_mc_emEnergy"));
		jets_mc_emEnergy_branch->SetAddress(&jets_mc_emEnergy_);
	}
	if(jets_mc_emEnergy_branch == 0 ) {
	cout << "Branch jets_mc_emEnergy does not exist." << endl;
	}
	jets_mc_gpdr_branch = 0;
	if (tree->GetAlias("jets_mc_gpdr") != 0) {
		jets_mc_gpdr_branch = tree->GetBranch(tree->GetAlias("jets_mc_gpdr"));
		jets_mc_gpdr_branch->SetAddress(&jets_mc_gpdr_);
	}
	if(jets_mc_gpdr_branch == 0 ) {
	cout << "Branch jets_mc_gpdr does not exist." << endl;
	}
	jets_mc_hadEnergy_branch = 0;
	if (tree->GetAlias("jets_mc_hadEnergy") != 0) {
		jets_mc_hadEnergy_branch = tree->GetBranch(tree->GetAlias("jets_mc_hadEnergy"));
		jets_mc_hadEnergy_branch->SetAddress(&jets_mc_hadEnergy_);
	}
	if(jets_mc_hadEnergy_branch == 0 ) {
	cout << "Branch jets_mc_hadEnergy does not exist." << endl;
	}
	jets_mc_invEnergy_branch = 0;
	if (tree->GetAlias("jets_mc_invEnergy") != 0) {
		jets_mc_invEnergy_branch = tree->GetBranch(tree->GetAlias("jets_mc_invEnergy"));
		jets_mc_invEnergy_branch->SetAddress(&jets_mc_invEnergy_);
	}
	if(jets_mc_invEnergy_branch == 0 ) {
	cout << "Branch jets_mc_invEnergy does not exist." << endl;
	}
	jets_mc_otherEnergy_branch = 0;
	if (tree->GetAlias("jets_mc_otherEnergy") != 0) {
		jets_mc_otherEnergy_branch = tree->GetBranch(tree->GetAlias("jets_mc_otherEnergy"));
		jets_mc_otherEnergy_branch->SetAddress(&jets_mc_otherEnergy_);
	}
	if(jets_mc_otherEnergy_branch == 0 ) {
	cout << "Branch jets_mc_otherEnergy does not exist." << endl;
	}
	mus_mc3dr_branch = 0;
	if (tree->GetAlias("mus_mc3dr") != 0) {
		mus_mc3dr_branch = tree->GetBranch(tree->GetAlias("mus_mc3dr"));
		mus_mc3dr_branch->SetAddress(&mus_mc3dr_);
	}
	if(mus_mc3dr_branch == 0 ) {
	cout << "Branch mus_mc3dr does not exist." << endl;
	}
	mus_mcdr_branch = 0;
	if (tree->GetAlias("mus_mcdr") != 0) {
		mus_mcdr_branch = tree->GetBranch(tree->GetAlias("mus_mcdr"));
		mus_mcdr_branch->SetAddress(&mus_mcdr_);
	}
	if(mus_mcdr_branch == 0 ) {
	cout << "Branch mus_mcdr does not exist." << endl;
	}
	trk_mc3dr_branch = 0;
	if (tree->GetAlias("trk_mc3dr") != 0) {
		trk_mc3dr_branch = tree->GetBranch(tree->GetAlias("trk_mc3dr"));
		trk_mc3dr_branch->SetAddress(&trk_mc3dr_);
	}
	if(trk_mc3dr_branch == 0 ) {
	cout << "Branch trk_mc3dr does not exist." << endl;
	}
	trk_mcdr_branch = 0;
	if (tree->GetAlias("trk_mcdr") != 0) {
		trk_mcdr_branch = tree->GetBranch(tree->GetAlias("trk_mcdr"));
		trk_mcdr_branch->SetAddress(&trk_mcdr_);
	}
	if(trk_mcdr_branch == 0 ) {
	cout << "Branch trk_mcdr does not exist." << endl;
	}
	els_ecalJuraIso_branch = 0;
	if (tree->GetAlias("els_ecalJuraIso") != 0) {
		els_ecalJuraIso_branch = tree->GetBranch(tree->GetAlias("els_ecalJuraIso"));
		els_ecalJuraIso_branch->SetAddress(&els_ecalJuraIso_);
	}
	if(els_ecalJuraIso_branch == 0 ) {
	cout << "Branch els_ecalJuraIso does not exist." << endl;
	}
	els_ecalJuraTowerIso_branch = 0;
	if (tree->GetAlias("els_ecalJuraTowerIso") != 0) {
		els_ecalJuraTowerIso_branch = tree->GetBranch(tree->GetAlias("els_ecalJuraTowerIso"));
		els_ecalJuraTowerIso_branch->SetAddress(&els_ecalJuraTowerIso_);
	}
	if(els_ecalJuraTowerIso_branch == 0 ) {
	cout << "Branch els_ecalJuraTowerIso does not exist." << endl;
	}
	els_hcalConeIso_branch = 0;
	if (tree->GetAlias("els_hcalConeIso") != 0) {
		els_hcalConeIso_branch = tree->GetBranch(tree->GetAlias("els_hcalConeIso"));
		els_hcalConeIso_branch->SetAddress(&els_hcalConeIso_);
	}
	if(els_hcalConeIso_branch == 0 ) {
	cout << "Branch els_hcalConeIso does not exist." << endl;
	}
	els_tkJuraIso_branch = 0;
	if (tree->GetAlias("els_tkJuraIso") != 0) {
		els_tkJuraIso_branch = tree->GetBranch(tree->GetAlias("els_tkJuraIso"));
		els_tkJuraIso_branch->SetAddress(&els_tkJuraIso_);
	}
	if(els_tkJuraIso_branch == 0 ) {
	cout << "Branch els_tkJuraIso does not exist." << endl;
	}
	els_jetdr_branch = 0;
	if (tree->GetAlias("els_jetdr") != 0) {
		els_jetdr_branch = tree->GetBranch(tree->GetAlias("els_jetdr"));
		els_jetdr_branch->SetAddress(&els_jetdr_);
	}
	if(els_jetdr_branch == 0 ) {
	cout << "Branch els_jetdr does not exist." << endl;
	}
	els_musdr_branch = 0;
	if (tree->GetAlias("els_musdr") != 0) {
		els_musdr_branch = tree->GetBranch(tree->GetAlias("els_musdr"));
		els_musdr_branch->SetAddress(&els_musdr_);
	}
	if(els_musdr_branch == 0 ) {
	cout << "Branch els_musdr does not exist." << endl;
	}
	els_chi2_branch = 0;
	if (tree->GetAlias("els_chi2") != 0) {
		els_chi2_branch = tree->GetBranch(tree->GetAlias("els_chi2"));
		els_chi2_branch->SetAddress(&els_chi2_);
	}
	if(els_chi2_branch == 0 ) {
	cout << "Branch els_chi2 does not exist." << endl;
	}
	els_conv_dcot_branch = 0;
	if (tree->GetAlias("els_conv_dcot") != 0) {
		els_conv_dcot_branch = tree->GetBranch(tree->GetAlias("els_conv_dcot"));
		els_conv_dcot_branch->SetAddress(&els_conv_dcot_);
	}
	if(els_conv_dcot_branch == 0 ) {
	cout << "Branch els_conv_dcot does not exist." << endl;
	}
	els_conv_dist_branch = 0;
	if (tree->GetAlias("els_conv_dist") != 0) {
		els_conv_dist_branch = tree->GetBranch(tree->GetAlias("els_conv_dist"));
		els_conv_dist_branch->SetAddress(&els_conv_dist_);
	}
	if(els_conv_dist_branch == 0 ) {
	cout << "Branch els_conv_dist does not exist." << endl;
	}
	els_d0_branch = 0;
	if (tree->GetAlias("els_d0") != 0) {
		els_d0_branch = tree->GetBranch(tree->GetAlias("els_d0"));
		els_d0_branch->SetAddress(&els_d0_);
	}
	if(els_d0_branch == 0 ) {
	cout << "Branch els_d0 does not exist." << endl;
	}
	els_d0Err_branch = 0;
	if (tree->GetAlias("els_d0Err") != 0) {
		els_d0Err_branch = tree->GetBranch(tree->GetAlias("els_d0Err"));
		els_d0Err_branch->SetAddress(&els_d0Err_);
	}
	if(els_d0Err_branch == 0 ) {
	cout << "Branch els_d0Err does not exist." << endl;
	}
	els_d0corr_branch = 0;
	if (tree->GetAlias("els_d0corr") != 0) {
		els_d0corr_branch = tree->GetBranch(tree->GetAlias("els_d0corr"));
		els_d0corr_branch->SetAddress(&els_d0corr_);
	}
	if(els_d0corr_branch == 0 ) {
	cout << "Branch els_d0corr does not exist." << endl;
	}
	els_dEtaIn_branch = 0;
	if (tree->GetAlias("els_dEtaIn") != 0) {
		els_dEtaIn_branch = tree->GetBranch(tree->GetAlias("els_dEtaIn"));
		els_dEtaIn_branch->SetAddress(&els_dEtaIn_);
	}
	if(els_dEtaIn_branch == 0 ) {
	cout << "Branch els_dEtaIn does not exist." << endl;
	}
	els_dEtaOut_branch = 0;
	if (tree->GetAlias("els_dEtaOut") != 0) {
		els_dEtaOut_branch = tree->GetBranch(tree->GetAlias("els_dEtaOut"));
		els_dEtaOut_branch->SetAddress(&els_dEtaOut_);
	}
	if(els_dEtaOut_branch == 0 ) {
	cout << "Branch els_dEtaOut does not exist." << endl;
	}
	els_dPhiIn_branch = 0;
	if (tree->GetAlias("els_dPhiIn") != 0) {
		els_dPhiIn_branch = tree->GetBranch(tree->GetAlias("els_dPhiIn"));
		els_dPhiIn_branch->SetAddress(&els_dPhiIn_);
	}
	if(els_dPhiIn_branch == 0 ) {
	cout << "Branch els_dPhiIn does not exist." << endl;
	}
	els_dPhiInPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiInPhiOut") != 0) {
		els_dPhiInPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiInPhiOut"));
		els_dPhiInPhiOut_branch->SetAddress(&els_dPhiInPhiOut_);
	}
	if(els_dPhiInPhiOut_branch == 0 ) {
	cout << "Branch els_dPhiInPhiOut does not exist." << endl;
	}
	els_dPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiOut") != 0) {
		els_dPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiOut"));
		els_dPhiOut_branch->SetAddress(&els_dPhiOut_);
	}
	if(els_dPhiOut_branch == 0 ) {
	cout << "Branch els_dPhiOut does not exist." << endl;
	}
	els_deltaEtaEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo") != 0) {
		els_deltaEtaEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo"));
		els_deltaEtaEleClusterTrackAtCalo_branch->SetAddress(&els_deltaEtaEleClusterTrackAtCalo_);
	}
	if(els_deltaEtaEleClusterTrackAtCalo_branch == 0 ) {
	cout << "Branch els_deltaEtaEleClusterTrackAtCalo does not exist." << endl;
	}
	els_deltaPhiEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo") != 0) {
		els_deltaPhiEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo"));
		els_deltaPhiEleClusterTrackAtCalo_branch->SetAddress(&els_deltaPhiEleClusterTrackAtCalo_);
	}
	if(els_deltaPhiEleClusterTrackAtCalo_branch == 0 ) {
	cout << "Branch els_deltaPhiEleClusterTrackAtCalo does not exist." << endl;
	}
	els_e1x5_branch = 0;
	if (tree->GetAlias("els_e1x5") != 0) {
		els_e1x5_branch = tree->GetBranch(tree->GetAlias("els_e1x5"));
		els_e1x5_branch->SetAddress(&els_e1x5_);
	}
	if(els_e1x5_branch == 0 ) {
	cout << "Branch els_e1x5 does not exist." << endl;
	}
	els_e2x5Max_branch = 0;
	if (tree->GetAlias("els_e2x5Max") != 0) {
		els_e2x5Max_branch = tree->GetBranch(tree->GetAlias("els_e2x5Max"));
		els_e2x5Max_branch->SetAddress(&els_e2x5Max_);
	}
	if(els_e2x5Max_branch == 0 ) {
	cout << "Branch els_e2x5Max does not exist." << endl;
	}
	els_e3x3_branch = 0;
	if (tree->GetAlias("els_e3x3") != 0) {
		els_e3x3_branch = tree->GetBranch(tree->GetAlias("els_e3x3"));
		els_e3x3_branch->SetAddress(&els_e3x3_);
	}
	if(els_e3x3_branch == 0 ) {
	cout << "Branch els_e3x3 does not exist." << endl;
	}
	els_e5x5_branch = 0;
	if (tree->GetAlias("els_e5x5") != 0) {
		els_e5x5_branch = tree->GetBranch(tree->GetAlias("els_e5x5"));
		els_e5x5_branch->SetAddress(&els_e5x5_);
	}
	if(els_e5x5_branch == 0 ) {
	cout << "Branch els_e5x5 does not exist." << endl;
	}
	els_eMax_branch = 0;
	if (tree->GetAlias("els_eMax") != 0) {
		els_eMax_branch = tree->GetBranch(tree->GetAlias("els_eMax"));
		els_eMax_branch->SetAddress(&els_eMax_);
	}
	if(els_eMax_branch == 0 ) {
	cout << "Branch els_eMax does not exist." << endl;
	}
	els_eOverPIn_branch = 0;
	if (tree->GetAlias("els_eOverPIn") != 0) {
		els_eOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eOverPIn"));
		els_eOverPIn_branch->SetAddress(&els_eOverPIn_);
	}
	if(els_eOverPIn_branch == 0 ) {
	cout << "Branch els_eOverPIn does not exist." << endl;
	}
	els_eOverPOut_branch = 0;
	if (tree->GetAlias("els_eOverPOut") != 0) {
		els_eOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eOverPOut"));
		els_eOverPOut_branch->SetAddress(&els_eOverPOut_);
	}
	if(els_eOverPOut_branch == 0 ) {
	cout << "Branch els_eOverPOut does not exist." << endl;
	}
	els_eSC_branch = 0;
	if (tree->GetAlias("els_eSC") != 0) {
		els_eSC_branch = tree->GetBranch(tree->GetAlias("els_eSC"));
		els_eSC_branch->SetAddress(&els_eSC_);
	}
	if(els_eSC_branch == 0 ) {
	cout << "Branch els_eSC does not exist." << endl;
	}
	els_eSCPresh_branch = 0;
	if (tree->GetAlias("els_eSCPresh") != 0) {
		els_eSCPresh_branch = tree->GetBranch(tree->GetAlias("els_eSCPresh"));
		els_eSCPresh_branch->SetAddress(&els_eSCPresh_);
	}
	if(els_eSCPresh_branch == 0 ) {
	cout << "Branch els_eSCPresh does not exist." << endl;
	}
	els_eSCRaw_branch = 0;
	if (tree->GetAlias("els_eSCRaw") != 0) {
		els_eSCRaw_branch = tree->GetBranch(tree->GetAlias("els_eSCRaw"));
		els_eSCRaw_branch->SetAddress(&els_eSCRaw_);
	}
	if(els_eSCRaw_branch == 0 ) {
	cout << "Branch els_eSCRaw does not exist." << endl;
	}
	els_eSeed_branch = 0;
	if (tree->GetAlias("els_eSeed") != 0) {
		els_eSeed_branch = tree->GetBranch(tree->GetAlias("els_eSeed"));
		els_eSeed_branch->SetAddress(&els_eSeed_);
	}
	if(els_eSeed_branch == 0 ) {
	cout << "Branch els_eSeed does not exist." << endl;
	}
	els_eSeedOverPIn_branch = 0;
	if (tree->GetAlias("els_eSeedOverPIn") != 0) {
		els_eSeedOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPIn"));
		els_eSeedOverPIn_branch->SetAddress(&els_eSeedOverPIn_);
	}
	if(els_eSeedOverPIn_branch == 0 ) {
	cout << "Branch els_eSeedOverPIn does not exist." << endl;
	}
	els_eSeedOverPOut_branch = 0;
	if (tree->GetAlias("els_eSeedOverPOut") != 0) {
		els_eSeedOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPOut"));
		els_eSeedOverPOut_branch->SetAddress(&els_eSeedOverPOut_);
	}
	if(els_eSeedOverPOut_branch == 0 ) {
	cout << "Branch els_eSeedOverPOut does not exist." << endl;
	}
	els_ecalEnergy_branch = 0;
	if (tree->GetAlias("els_ecalEnergy") != 0) {
		els_ecalEnergy_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergy"));
		els_ecalEnergy_branch->SetAddress(&els_ecalEnergy_);
	}
	if(els_ecalEnergy_branch == 0 ) {
	cout << "Branch els_ecalEnergy does not exist." << endl;
	}
	els_ecalEnergyError_branch = 0;
	if (tree->GetAlias("els_ecalEnergyError") != 0) {
		els_ecalEnergyError_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergyError"));
		els_ecalEnergyError_branch->SetAddress(&els_ecalEnergyError_);
	}
	if(els_ecalEnergyError_branch == 0 ) {
	cout << "Branch els_ecalEnergyError does not exist." << endl;
	}
	els_ecalIso_branch = 0;
	if (tree->GetAlias("els_ecalIso") != 0) {
		els_ecalIso_branch = tree->GetBranch(tree->GetAlias("els_ecalIso"));
		els_ecalIso_branch->SetAddress(&els_ecalIso_);
	}
	if(els_ecalIso_branch == 0 ) {
	cout << "Branch els_ecalIso does not exist." << endl;
	}
	els_ecalIso04_branch = 0;
	if (tree->GetAlias("els_ecalIso04") != 0) {
		els_ecalIso04_branch = tree->GetBranch(tree->GetAlias("els_ecalIso04"));
		els_ecalIso04_branch->SetAddress(&els_ecalIso04_);
	}
	if(els_ecalIso04_branch == 0 ) {
	cout << "Branch els_ecalIso04 does not exist." << endl;
	}
	els_egamma_looseId_branch = 0;
	if (tree->GetAlias("els_egamma_looseId") != 0) {
		els_egamma_looseId_branch = tree->GetBranch(tree->GetAlias("els_egamma_looseId"));
		els_egamma_looseId_branch->SetAddress(&els_egamma_looseId_);
	}
	if(els_egamma_looseId_branch == 0 ) {
	cout << "Branch els_egamma_looseId does not exist." << endl;
	}
	els_egamma_robustHighEnergy_branch = 0;
	if (tree->GetAlias("els_egamma_robustHighEnergy") != 0) {
		els_egamma_robustHighEnergy_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustHighEnergy"));
		els_egamma_robustHighEnergy_branch->SetAddress(&els_egamma_robustHighEnergy_);
	}
	if(els_egamma_robustHighEnergy_branch == 0 ) {
	cout << "Branch els_egamma_robustHighEnergy does not exist." << endl;
	}
	els_egamma_robustLooseId_branch = 0;
	if (tree->GetAlias("els_egamma_robustLooseId") != 0) {
		els_egamma_robustLooseId_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustLooseId"));
		els_egamma_robustLooseId_branch->SetAddress(&els_egamma_robustLooseId_);
	}
	if(els_egamma_robustLooseId_branch == 0 ) {
	cout << "Branch els_egamma_robustLooseId does not exist." << endl;
	}
	els_egamma_robustTightId_branch = 0;
	if (tree->GetAlias("els_egamma_robustTightId") != 0) {
		els_egamma_robustTightId_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustTightId"));
		els_egamma_robustTightId_branch->SetAddress(&els_egamma_robustTightId_);
	}
	if(els_egamma_robustTightId_branch == 0 ) {
	cout << "Branch els_egamma_robustTightId does not exist." << endl;
	}
	els_egamma_tightId_branch = 0;
	if (tree->GetAlias("els_egamma_tightId") != 0) {
		els_egamma_tightId_branch = tree->GetBranch(tree->GetAlias("els_egamma_tightId"));
		els_egamma_tightId_branch->SetAddress(&els_egamma_tightId_);
	}
	if(els_egamma_tightId_branch == 0 ) {
	cout << "Branch els_egamma_tightId does not exist." << endl;
	}
	els_electronMomentumError_branch = 0;
	if (tree->GetAlias("els_electronMomentumError") != 0) {
		els_electronMomentumError_branch = tree->GetBranch(tree->GetAlias("els_electronMomentumError"));
		els_electronMomentumError_branch->SetAddress(&els_electronMomentumError_);
	}
	if(els_electronMomentumError_branch == 0 ) {
	cout << "Branch els_electronMomentumError does not exist." << endl;
	}
	els_etaErr_branch = 0;
	if (tree->GetAlias("els_etaErr") != 0) {
		els_etaErr_branch = tree->GetBranch(tree->GetAlias("els_etaErr"));
		els_etaErr_branch->SetAddress(&els_etaErr_);
	}
	if(els_etaErr_branch == 0 ) {
	cout << "Branch els_etaErr does not exist." << endl;
	}
	els_etaSC_branch = 0;
	if (tree->GetAlias("els_etaSC") != 0) {
		els_etaSC_branch = tree->GetBranch(tree->GetAlias("els_etaSC"));
		els_etaSC_branch->SetAddress(&els_etaSC_);
	}
	if(els_etaSC_branch == 0 ) {
	cout << "Branch els_etaSC does not exist." << endl;
	}
	els_fbrem_branch = 0;
	if (tree->GetAlias("els_fbrem") != 0) {
		els_fbrem_branch = tree->GetBranch(tree->GetAlias("els_fbrem"));
		els_fbrem_branch->SetAddress(&els_fbrem_);
	}
	if(els_fbrem_branch == 0 ) {
	cout << "Branch els_fbrem does not exist." << endl;
	}
	els_hOverE_branch = 0;
	if (tree->GetAlias("els_hOverE") != 0) {
		els_hOverE_branch = tree->GetBranch(tree->GetAlias("els_hOverE"));
		els_hOverE_branch->SetAddress(&els_hOverE_);
	}
	if(els_hOverE_branch == 0 ) {
	cout << "Branch els_hOverE does not exist." << endl;
	}
	els_hcalDepth1OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth1OverEcal") != 0) {
		els_hcalDepth1OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1OverEcal"));
		els_hcalDepth1OverEcal_branch->SetAddress(&els_hcalDepth1OverEcal_);
	}
	if(els_hcalDepth1OverEcal_branch == 0 ) {
	cout << "Branch els_hcalDepth1OverEcal does not exist." << endl;
	}
	els_hcalDepth1TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt") != 0) {
		els_hcalDepth1TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt"));
		els_hcalDepth1TowerSumEt_branch->SetAddress(&els_hcalDepth1TowerSumEt_);
	}
	if(els_hcalDepth1TowerSumEt_branch == 0 ) {
	cout << "Branch els_hcalDepth1TowerSumEt does not exist." << endl;
	}
	els_hcalDepth1TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt04") != 0) {
		els_hcalDepth1TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt04"));
		els_hcalDepth1TowerSumEt04_branch->SetAddress(&els_hcalDepth1TowerSumEt04_);
	}
	if(els_hcalDepth1TowerSumEt04_branch == 0 ) {
	cout << "Branch els_hcalDepth1TowerSumEt04 does not exist." << endl;
	}
	els_hcalDepth2OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth2OverEcal") != 0) {
		els_hcalDepth2OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2OverEcal"));
		els_hcalDepth2OverEcal_branch->SetAddress(&els_hcalDepth2OverEcal_);
	}
	if(els_hcalDepth2OverEcal_branch == 0 ) {
	cout << "Branch els_hcalDepth2OverEcal does not exist." << endl;
	}
	els_hcalDepth2TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt") != 0) {
		els_hcalDepth2TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt"));
		els_hcalDepth2TowerSumEt_branch->SetAddress(&els_hcalDepth2TowerSumEt_);
	}
	if(els_hcalDepth2TowerSumEt_branch == 0 ) {
	cout << "Branch els_hcalDepth2TowerSumEt does not exist." << endl;
	}
	els_hcalDepth2TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt04") != 0) {
		els_hcalDepth2TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt04"));
		els_hcalDepth2TowerSumEt04_branch->SetAddress(&els_hcalDepth2TowerSumEt04_);
	}
	if(els_hcalDepth2TowerSumEt04_branch == 0 ) {
	cout << "Branch els_hcalDepth2TowerSumEt04 does not exist." << endl;
	}
	els_hcalIso_branch = 0;
	if (tree->GetAlias("els_hcalIso") != 0) {
		els_hcalIso_branch = tree->GetBranch(tree->GetAlias("els_hcalIso"));
		els_hcalIso_branch->SetAddress(&els_hcalIso_);
	}
	if(els_hcalIso_branch == 0 ) {
	cout << "Branch els_hcalIso does not exist." << endl;
	}
	els_hcalIso04_branch = 0;
	if (tree->GetAlias("els_hcalIso04") != 0) {
		els_hcalIso04_branch = tree->GetBranch(tree->GetAlias("els_hcalIso04"));
		els_hcalIso04_branch->SetAddress(&els_hcalIso04_);
	}
	if(els_hcalIso04_branch == 0 ) {
	cout << "Branch els_hcalIso04 does not exist." << endl;
	}
	els_layer1_charge_branch = 0;
	if (tree->GetAlias("els_layer1_charge") != 0) {
		els_layer1_charge_branch = tree->GetBranch(tree->GetAlias("els_layer1_charge"));
		els_layer1_charge_branch->SetAddress(&els_layer1_charge_);
	}
	if(els_layer1_charge_branch == 0 ) {
	cout << "Branch els_layer1_charge does not exist." << endl;
	}
	els_ndof_branch = 0;
	if (tree->GetAlias("els_ndof") != 0) {
		els_ndof_branch = tree->GetBranch(tree->GetAlias("els_ndof"));
		els_ndof_branch->SetAddress(&els_ndof_);
	}
	if(els_ndof_branch == 0 ) {
	cout << "Branch els_ndof does not exist." << endl;
	}
	els_phiErr_branch = 0;
	if (tree->GetAlias("els_phiErr") != 0) {
		els_phiErr_branch = tree->GetBranch(tree->GetAlias("els_phiErr"));
		els_phiErr_branch->SetAddress(&els_phiErr_);
	}
	if(els_phiErr_branch == 0 ) {
	cout << "Branch els_phiErr does not exist." << endl;
	}
	els_phiSC_branch = 0;
	if (tree->GetAlias("els_phiSC") != 0) {
		els_phiSC_branch = tree->GetBranch(tree->GetAlias("els_phiSC"));
		els_phiSC_branch->SetAddress(&els_phiSC_);
	}
	if(els_phiSC_branch == 0 ) {
	cout << "Branch els_phiSC does not exist." << endl;
	}
	els_ptErr_branch = 0;
	if (tree->GetAlias("els_ptErr") != 0) {
		els_ptErr_branch = tree->GetBranch(tree->GetAlias("els_ptErr"));
		els_ptErr_branch->SetAddress(&els_ptErr_);
	}
	if(els_ptErr_branch == 0 ) {
	cout << "Branch els_ptErr does not exist." << endl;
	}
	els_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("els_sigmaEtaEta") != 0) {
		els_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaEtaEta"));
		els_sigmaEtaEta_branch->SetAddress(&els_sigmaEtaEta_);
	}
	if(els_sigmaEtaEta_branch == 0 ) {
	cout << "Branch els_sigmaEtaEta does not exist." << endl;
	}
	els_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("els_sigmaIEtaIEta") != 0) {
		els_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaIEtaIEta"));
		els_sigmaIEtaIEta_branch->SetAddress(&els_sigmaIEtaIEta_);
	}
	if(els_sigmaIEtaIEta_branch == 0 ) {
	cout << "Branch els_sigmaIEtaIEta does not exist." << endl;
	}
	els_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("els_sigmaIPhiIPhi") != 0) {
		els_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("els_sigmaIPhiIPhi"));
		els_sigmaIPhiIPhi_branch->SetAddress(&els_sigmaIPhiIPhi_);
	}
	if(els_sigmaIPhiIPhi_branch == 0 ) {
	cout << "Branch els_sigmaIPhiIPhi does not exist." << endl;
	}
	els_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("els_sigmaPhiPhi") != 0) {
		els_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("els_sigmaPhiPhi"));
		els_sigmaPhiPhi_branch->SetAddress(&els_sigmaPhiPhi_);
	}
	if(els_sigmaPhiPhi_branch == 0 ) {
	cout << "Branch els_sigmaPhiPhi does not exist." << endl;
	}
	els_tkIso_branch = 0;
	if (tree->GetAlias("els_tkIso") != 0) {
		els_tkIso_branch = tree->GetBranch(tree->GetAlias("els_tkIso"));
		els_tkIso_branch->SetAddress(&els_tkIso_);
	}
	if(els_tkIso_branch == 0 ) {
	cout << "Branch els_tkIso does not exist." << endl;
	}
	els_tkIso04_branch = 0;
	if (tree->GetAlias("els_tkIso04") != 0) {
		els_tkIso04_branch = tree->GetBranch(tree->GetAlias("els_tkIso04"));
		els_tkIso04_branch->SetAddress(&els_tkIso04_);
	}
	if(els_tkIso04_branch == 0 ) {
	cout << "Branch els_tkIso04 does not exist." << endl;
	}
	els_trackMomentumError_branch = 0;
	if (tree->GetAlias("els_trackMomentumError") != 0) {
		els_trackMomentumError_branch = tree->GetBranch(tree->GetAlias("els_trackMomentumError"));
		els_trackMomentumError_branch->SetAddress(&els_trackMomentumError_);
	}
	if(els_trackMomentumError_branch == 0 ) {
	cout << "Branch els_trackMomentumError does not exist." << endl;
	}
	els_trkdr_branch = 0;
	if (tree->GetAlias("els_trkdr") != 0) {
		els_trkdr_branch = tree->GetBranch(tree->GetAlias("els_trkdr"));
		els_trkdr_branch->SetAddress(&els_trkdr_);
	}
	if(els_trkdr_branch == 0 ) {
	cout << "Branch els_trkdr does not exist." << endl;
	}
	els_trkshFrac_branch = 0;
	if (tree->GetAlias("els_trkshFrac") != 0) {
		els_trkshFrac_branch = tree->GetBranch(tree->GetAlias("els_trkshFrac"));
		els_trkshFrac_branch->SetAddress(&els_trkshFrac_);
	}
	if(els_trkshFrac_branch == 0 ) {
	cout << "Branch els_trkshFrac does not exist." << endl;
	}
	els_z0_branch = 0;
	if (tree->GetAlias("els_z0") != 0) {
		els_z0_branch = tree->GetBranch(tree->GetAlias("els_z0"));
		els_z0_branch->SetAddress(&els_z0_);
	}
	if(els_z0_branch == 0 ) {
	cout << "Branch els_z0 does not exist." << endl;
	}
	els_z0Err_branch = 0;
	if (tree->GetAlias("els_z0Err") != 0) {
		els_z0Err_branch = tree->GetBranch(tree->GetAlias("els_z0Err"));
		els_z0Err_branch->SetAddress(&els_z0Err_);
	}
	if(els_z0Err_branch == 0 ) {
	cout << "Branch els_z0Err does not exist." << endl;
	}
	els_z0corr_branch = 0;
	if (tree->GetAlias("els_z0corr") != 0) {
		els_z0corr_branch = tree->GetBranch(tree->GetAlias("els_z0corr"));
		els_z0corr_branch->SetAddress(&els_z0corr_);
	}
	if(els_z0corr_branch == 0 ) {
	cout << "Branch els_z0corr does not exist." << endl;
	}
	hyp_Ht_branch = 0;
	if (tree->GetAlias("hyp_Ht") != 0) {
		hyp_Ht_branch = tree->GetBranch(tree->GetAlias("hyp_Ht"));
		hyp_Ht_branch->SetAddress(&hyp_Ht_);
	}
	if(hyp_Ht_branch == 0 ) {
	cout << "Branch hyp_Ht does not exist." << endl;
	}
	hyp_dPhi_nJet_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("hyp_dPhi_nJet_metMuonJESCorr") != 0) {
		hyp_dPhi_nJet_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("hyp_dPhi_nJet_metMuonJESCorr"));
		hyp_dPhi_nJet_metMuonJESCorr_branch->SetAddress(&hyp_dPhi_nJet_metMuonJESCorr_);
	}
	if(hyp_dPhi_nJet_metMuonJESCorr_branch == 0 ) {
	cout << "Branch hyp_dPhi_nJet_metMuonJESCorr does not exist." << endl;
	}
	hyp_dPhi_nJet_muCorrMet_branch = 0;
	if (tree->GetAlias("hyp_dPhi_nJet_muCorrMet") != 0) {
		hyp_dPhi_nJet_muCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_dPhi_nJet_muCorrMet"));
		hyp_dPhi_nJet_muCorrMet_branch->SetAddress(&hyp_dPhi_nJet_muCorrMet_);
	}
	if(hyp_dPhi_nJet_muCorrMet_branch == 0 ) {
	cout << "Branch hyp_dPhi_nJet_muCorrMet does not exist." << endl;
	}
	hyp_dPhi_nJet_tcMet_branch = 0;
	if (tree->GetAlias("hyp_dPhi_nJet_tcMet") != 0) {
		hyp_dPhi_nJet_tcMet_branch = tree->GetBranch(tree->GetAlias("hyp_dPhi_nJet_tcMet"));
		hyp_dPhi_nJet_tcMet_branch->SetAddress(&hyp_dPhi_nJet_tcMet_);
	}
	if(hyp_dPhi_nJet_tcMet_branch == 0 ) {
	cout << "Branch hyp_dPhi_nJet_tcMet does not exist." << endl;
	}
	hyp_dPhi_nJet_unCorrMet_branch = 0;
	if (tree->GetAlias("hyp_dPhi_nJet_unCorrMet") != 0) {
		hyp_dPhi_nJet_unCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_dPhi_nJet_unCorrMet"));
		hyp_dPhi_nJet_unCorrMet_branch->SetAddress(&hyp_dPhi_nJet_unCorrMet_);
	}
	if(hyp_dPhi_nJet_unCorrMet_branch == 0 ) {
	cout << "Branch hyp_dPhi_nJet_unCorrMet does not exist." << endl;
	}
	hyp_ll_chi2_branch = 0;
	if (tree->GetAlias("hyp_ll_chi2") != 0) {
		hyp_ll_chi2_branch = tree->GetBranch(tree->GetAlias("hyp_ll_chi2"));
		hyp_ll_chi2_branch->SetAddress(&hyp_ll_chi2_);
	}
	if(hyp_ll_chi2_branch == 0 ) {
	cout << "Branch hyp_ll_chi2 does not exist." << endl;
	}
	hyp_ll_d0_branch = 0;
	if (tree->GetAlias("hyp_ll_d0") != 0) {
		hyp_ll_d0_branch = tree->GetBranch(tree->GetAlias("hyp_ll_d0"));
		hyp_ll_d0_branch->SetAddress(&hyp_ll_d0_);
	}
	if(hyp_ll_d0_branch == 0 ) {
	cout << "Branch hyp_ll_d0 does not exist." << endl;
	}
	hyp_ll_d0Err_branch = 0;
	if (tree->GetAlias("hyp_ll_d0Err") != 0) {
		hyp_ll_d0Err_branch = tree->GetBranch(tree->GetAlias("hyp_ll_d0Err"));
		hyp_ll_d0Err_branch->SetAddress(&hyp_ll_d0Err_);
	}
	if(hyp_ll_d0Err_branch == 0 ) {
	cout << "Branch hyp_ll_d0Err does not exist." << endl;
	}
	hyp_ll_d0corr_branch = 0;
	if (tree->GetAlias("hyp_ll_d0corr") != 0) {
		hyp_ll_d0corr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_d0corr"));
		hyp_ll_d0corr_branch->SetAddress(&hyp_ll_d0corr_);
	}
	if(hyp_ll_d0corr_branch == 0 ) {
	cout << "Branch hyp_ll_d0corr does not exist." << endl;
	}
	hyp_ll_dPhi_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("hyp_ll_dPhi_metMuonJESCorr") != 0) {
		hyp_ll_dPhi_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_dPhi_metMuonJESCorr"));
		hyp_ll_dPhi_metMuonJESCorr_branch->SetAddress(&hyp_ll_dPhi_metMuonJESCorr_);
	}
	if(hyp_ll_dPhi_metMuonJESCorr_branch == 0 ) {
	cout << "Branch hyp_ll_dPhi_metMuonJESCorr does not exist." << endl;
	}
	hyp_ll_dPhi_muCorrMet_branch = 0;
	if (tree->GetAlias("hyp_ll_dPhi_muCorrMet") != 0) {
		hyp_ll_dPhi_muCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_ll_dPhi_muCorrMet"));
		hyp_ll_dPhi_muCorrMet_branch->SetAddress(&hyp_ll_dPhi_muCorrMet_);
	}
	if(hyp_ll_dPhi_muCorrMet_branch == 0 ) {
	cout << "Branch hyp_ll_dPhi_muCorrMet does not exist." << endl;
	}
	hyp_ll_dPhi_tcMet_branch = 0;
	if (tree->GetAlias("hyp_ll_dPhi_tcMet") != 0) {
		hyp_ll_dPhi_tcMet_branch = tree->GetBranch(tree->GetAlias("hyp_ll_dPhi_tcMet"));
		hyp_ll_dPhi_tcMet_branch->SetAddress(&hyp_ll_dPhi_tcMet_);
	}
	if(hyp_ll_dPhi_tcMet_branch == 0 ) {
	cout << "Branch hyp_ll_dPhi_tcMet does not exist." << endl;
	}
	hyp_ll_dPhi_unCorrMet_branch = 0;
	if (tree->GetAlias("hyp_ll_dPhi_unCorrMet") != 0) {
		hyp_ll_dPhi_unCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_ll_dPhi_unCorrMet"));
		hyp_ll_dPhi_unCorrMet_branch->SetAddress(&hyp_ll_dPhi_unCorrMet_);
	}
	if(hyp_ll_dPhi_unCorrMet_branch == 0 ) {
	cout << "Branch hyp_ll_dPhi_unCorrMet does not exist." << endl;
	}
	hyp_ll_etaErr_branch = 0;
	if (tree->GetAlias("hyp_ll_etaErr") != 0) {
		hyp_ll_etaErr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_etaErr"));
		hyp_ll_etaErr_branch->SetAddress(&hyp_ll_etaErr_);
	}
	if(hyp_ll_etaErr_branch == 0 ) {
	cout << "Branch hyp_ll_etaErr does not exist." << endl;
	}
	hyp_ll_ndof_branch = 0;
	if (tree->GetAlias("hyp_ll_ndof") != 0) {
		hyp_ll_ndof_branch = tree->GetBranch(tree->GetAlias("hyp_ll_ndof"));
		hyp_ll_ndof_branch->SetAddress(&hyp_ll_ndof_);
	}
	if(hyp_ll_ndof_branch == 0 ) {
	cout << "Branch hyp_ll_ndof does not exist." << endl;
	}
	hyp_ll_phiErr_branch = 0;
	if (tree->GetAlias("hyp_ll_phiErr") != 0) {
		hyp_ll_phiErr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_phiErr"));
		hyp_ll_phiErr_branch->SetAddress(&hyp_ll_phiErr_);
	}
	if(hyp_ll_phiErr_branch == 0 ) {
	cout << "Branch hyp_ll_phiErr does not exist." << endl;
	}
	hyp_ll_ptErr_branch = 0;
	if (tree->GetAlias("hyp_ll_ptErr") != 0) {
		hyp_ll_ptErr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_ptErr"));
		hyp_ll_ptErr_branch->SetAddress(&hyp_ll_ptErr_);
	}
	if(hyp_ll_ptErr_branch == 0 ) {
	cout << "Branch hyp_ll_ptErr does not exist." << endl;
	}
	hyp_ll_z0_branch = 0;
	if (tree->GetAlias("hyp_ll_z0") != 0) {
		hyp_ll_z0_branch = tree->GetBranch(tree->GetAlias("hyp_ll_z0"));
		hyp_ll_z0_branch->SetAddress(&hyp_ll_z0_);
	}
	if(hyp_ll_z0_branch == 0 ) {
	cout << "Branch hyp_ll_z0 does not exist." << endl;
	}
	hyp_ll_z0Err_branch = 0;
	if (tree->GetAlias("hyp_ll_z0Err") != 0) {
		hyp_ll_z0Err_branch = tree->GetBranch(tree->GetAlias("hyp_ll_z0Err"));
		hyp_ll_z0Err_branch->SetAddress(&hyp_ll_z0Err_);
	}
	if(hyp_ll_z0Err_branch == 0 ) {
	cout << "Branch hyp_ll_z0Err does not exist." << endl;
	}
	hyp_ll_z0corr_branch = 0;
	if (tree->GetAlias("hyp_ll_z0corr") != 0) {
		hyp_ll_z0corr_branch = tree->GetBranch(tree->GetAlias("hyp_ll_z0corr"));
		hyp_ll_z0corr_branch->SetAddress(&hyp_ll_z0corr_);
	}
	if(hyp_ll_z0corr_branch == 0 ) {
	cout << "Branch hyp_ll_z0corr does not exist." << endl;
	}
	hyp_lt_chi2_branch = 0;
	if (tree->GetAlias("hyp_lt_chi2") != 0) {
		hyp_lt_chi2_branch = tree->GetBranch(tree->GetAlias("hyp_lt_chi2"));
		hyp_lt_chi2_branch->SetAddress(&hyp_lt_chi2_);
	}
	if(hyp_lt_chi2_branch == 0 ) {
	cout << "Branch hyp_lt_chi2 does not exist." << endl;
	}
	hyp_lt_d0_branch = 0;
	if (tree->GetAlias("hyp_lt_d0") != 0) {
		hyp_lt_d0_branch = tree->GetBranch(tree->GetAlias("hyp_lt_d0"));
		hyp_lt_d0_branch->SetAddress(&hyp_lt_d0_);
	}
	if(hyp_lt_d0_branch == 0 ) {
	cout << "Branch hyp_lt_d0 does not exist." << endl;
	}
	hyp_lt_d0Err_branch = 0;
	if (tree->GetAlias("hyp_lt_d0Err") != 0) {
		hyp_lt_d0Err_branch = tree->GetBranch(tree->GetAlias("hyp_lt_d0Err"));
		hyp_lt_d0Err_branch->SetAddress(&hyp_lt_d0Err_);
	}
	if(hyp_lt_d0Err_branch == 0 ) {
	cout << "Branch hyp_lt_d0Err does not exist." << endl;
	}
	hyp_lt_d0corr_branch = 0;
	if (tree->GetAlias("hyp_lt_d0corr") != 0) {
		hyp_lt_d0corr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_d0corr"));
		hyp_lt_d0corr_branch->SetAddress(&hyp_lt_d0corr_);
	}
	if(hyp_lt_d0corr_branch == 0 ) {
	cout << "Branch hyp_lt_d0corr does not exist." << endl;
	}
	hyp_lt_dPhi_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("hyp_lt_dPhi_metMuonJESCorr") != 0) {
		hyp_lt_dPhi_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_dPhi_metMuonJESCorr"));
		hyp_lt_dPhi_metMuonJESCorr_branch->SetAddress(&hyp_lt_dPhi_metMuonJESCorr_);
	}
	if(hyp_lt_dPhi_metMuonJESCorr_branch == 0 ) {
	cout << "Branch hyp_lt_dPhi_metMuonJESCorr does not exist." << endl;
	}
	hyp_lt_dPhi_muCorrMet_branch = 0;
	if (tree->GetAlias("hyp_lt_dPhi_muCorrMet") != 0) {
		hyp_lt_dPhi_muCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_lt_dPhi_muCorrMet"));
		hyp_lt_dPhi_muCorrMet_branch->SetAddress(&hyp_lt_dPhi_muCorrMet_);
	}
	if(hyp_lt_dPhi_muCorrMet_branch == 0 ) {
	cout << "Branch hyp_lt_dPhi_muCorrMet does not exist." << endl;
	}
	hyp_lt_dPhi_tcMet_branch = 0;
	if (tree->GetAlias("hyp_lt_dPhi_tcMet") != 0) {
		hyp_lt_dPhi_tcMet_branch = tree->GetBranch(tree->GetAlias("hyp_lt_dPhi_tcMet"));
		hyp_lt_dPhi_tcMet_branch->SetAddress(&hyp_lt_dPhi_tcMet_);
	}
	if(hyp_lt_dPhi_tcMet_branch == 0 ) {
	cout << "Branch hyp_lt_dPhi_tcMet does not exist." << endl;
	}
	hyp_lt_dPhi_unCorrMet_branch = 0;
	if (tree->GetAlias("hyp_lt_dPhi_unCorrMet") != 0) {
		hyp_lt_dPhi_unCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_lt_dPhi_unCorrMet"));
		hyp_lt_dPhi_unCorrMet_branch->SetAddress(&hyp_lt_dPhi_unCorrMet_);
	}
	if(hyp_lt_dPhi_unCorrMet_branch == 0 ) {
	cout << "Branch hyp_lt_dPhi_unCorrMet does not exist." << endl;
	}
	hyp_lt_etaErr_branch = 0;
	if (tree->GetAlias("hyp_lt_etaErr") != 0) {
		hyp_lt_etaErr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_etaErr"));
		hyp_lt_etaErr_branch->SetAddress(&hyp_lt_etaErr_);
	}
	if(hyp_lt_etaErr_branch == 0 ) {
	cout << "Branch hyp_lt_etaErr does not exist." << endl;
	}
	hyp_lt_ndof_branch = 0;
	if (tree->GetAlias("hyp_lt_ndof") != 0) {
		hyp_lt_ndof_branch = tree->GetBranch(tree->GetAlias("hyp_lt_ndof"));
		hyp_lt_ndof_branch->SetAddress(&hyp_lt_ndof_);
	}
	if(hyp_lt_ndof_branch == 0 ) {
	cout << "Branch hyp_lt_ndof does not exist." << endl;
	}
	hyp_lt_phiErr_branch = 0;
	if (tree->GetAlias("hyp_lt_phiErr") != 0) {
		hyp_lt_phiErr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_phiErr"));
		hyp_lt_phiErr_branch->SetAddress(&hyp_lt_phiErr_);
	}
	if(hyp_lt_phiErr_branch == 0 ) {
	cout << "Branch hyp_lt_phiErr does not exist." << endl;
	}
	hyp_lt_ptErr_branch = 0;
	if (tree->GetAlias("hyp_lt_ptErr") != 0) {
		hyp_lt_ptErr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_ptErr"));
		hyp_lt_ptErr_branch->SetAddress(&hyp_lt_ptErr_);
	}
	if(hyp_lt_ptErr_branch == 0 ) {
	cout << "Branch hyp_lt_ptErr does not exist." << endl;
	}
	hyp_lt_z0_branch = 0;
	if (tree->GetAlias("hyp_lt_z0") != 0) {
		hyp_lt_z0_branch = tree->GetBranch(tree->GetAlias("hyp_lt_z0"));
		hyp_lt_z0_branch->SetAddress(&hyp_lt_z0_);
	}
	if(hyp_lt_z0_branch == 0 ) {
	cout << "Branch hyp_lt_z0 does not exist." << endl;
	}
	hyp_lt_z0Err_branch = 0;
	if (tree->GetAlias("hyp_lt_z0Err") != 0) {
		hyp_lt_z0Err_branch = tree->GetBranch(tree->GetAlias("hyp_lt_z0Err"));
		hyp_lt_z0Err_branch->SetAddress(&hyp_lt_z0Err_);
	}
	if(hyp_lt_z0Err_branch == 0 ) {
	cout << "Branch hyp_lt_z0Err does not exist." << endl;
	}
	hyp_lt_z0corr_branch = 0;
	if (tree->GetAlias("hyp_lt_z0corr") != 0) {
		hyp_lt_z0corr_branch = tree->GetBranch(tree->GetAlias("hyp_lt_z0corr"));
		hyp_lt_z0corr_branch->SetAddress(&hyp_lt_z0corr_);
	}
	if(hyp_lt_z0corr_branch == 0 ) {
	cout << "Branch hyp_lt_z0corr does not exist." << endl;
	}
	hyp_mt2_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("hyp_mt2_metMuonJESCorr") != 0) {
		hyp_mt2_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("hyp_mt2_metMuonJESCorr"));
		hyp_mt2_metMuonJESCorr_branch->SetAddress(&hyp_mt2_metMuonJESCorr_);
	}
	if(hyp_mt2_metMuonJESCorr_branch == 0 ) {
	cout << "Branch hyp_mt2_metMuonJESCorr does not exist." << endl;
	}
	hyp_mt2_muCorrMet_branch = 0;
	if (tree->GetAlias("hyp_mt2_muCorrMet") != 0) {
		hyp_mt2_muCorrMet_branch = tree->GetBranch(tree->GetAlias("hyp_mt2_muCorrMet"));
		hyp_mt2_muCorrMet_branch->SetAddress(&hyp_mt2_muCorrMet_);
	}
	if(hyp_mt2_muCorrMet_branch == 0 ) {
	cout << "Branch hyp_mt2_muCorrMet does not exist." << endl;
	}
	hyp_mt2_tcMet_branch = 0;
	if (tree->GetAlias("hyp_mt2_tcMet") != 0) {
		hyp_mt2_tcMet_branch = tree->GetBranch(tree->GetAlias("hyp_mt2_tcMet"));
		hyp_mt2_tcMet_branch->SetAddress(&hyp_mt2_tcMet_);
	}
	if(hyp_mt2_tcMet_branch == 0 ) {
	cout << "Branch hyp_mt2_tcMet does not exist." << endl;
	}
	hyp_sumJetPt_branch = 0;
	if (tree->GetAlias("hyp_sumJetPt") != 0) {
		hyp_sumJetPt_branch = tree->GetBranch(tree->GetAlias("hyp_sumJetPt"));
		hyp_sumJetPt_branch->SetAddress(&hyp_sumJetPt_);
	}
	if(hyp_sumJetPt_branch == 0 ) {
	cout << "Branch hyp_sumJetPt does not exist." << endl;
	}
	hyp_FVFit_chi2ndf_branch = 0;
	if (tree->GetAlias("hyp_FVFit_chi2ndf") != 0) {
		hyp_FVFit_chi2ndf_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_chi2ndf"));
		hyp_FVFit_chi2ndf_branch->SetAddress(&hyp_FVFit_chi2ndf_);
	}
	if(hyp_FVFit_chi2ndf_branch == 0 ) {
	cout << "Branch hyp_FVFit_chi2ndf does not exist." << endl;
	}
	hyp_FVFit_prob_branch = 0;
	if (tree->GetAlias("hyp_FVFit_prob") != 0) {
		hyp_FVFit_prob_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_prob"));
		hyp_FVFit_prob_branch->SetAddress(&hyp_FVFit_prob_);
	}
	if(hyp_FVFit_prob_branch == 0 ) {
	cout << "Branch hyp_FVFit_prob does not exist." << endl;
	}
	hyp_FVFit_v4cxx_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4cxx") != 0) {
		hyp_FVFit_v4cxx_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4cxx"));
		hyp_FVFit_v4cxx_branch->SetAddress(&hyp_FVFit_v4cxx_);
	}
	if(hyp_FVFit_v4cxx_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4cxx does not exist." << endl;
	}
	hyp_FVFit_v4cxy_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4cxy") != 0) {
		hyp_FVFit_v4cxy_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4cxy"));
		hyp_FVFit_v4cxy_branch->SetAddress(&hyp_FVFit_v4cxy_);
	}
	if(hyp_FVFit_v4cxy_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4cxy does not exist." << endl;
	}
	hyp_FVFit_v4cyy_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4cyy") != 0) {
		hyp_FVFit_v4cyy_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4cyy"));
		hyp_FVFit_v4cyy_branch->SetAddress(&hyp_FVFit_v4cyy_);
	}
	if(hyp_FVFit_v4cyy_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4cyy does not exist." << endl;
	}
	hyp_FVFit_v4czx_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4czx") != 0) {
		hyp_FVFit_v4czx_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4czx"));
		hyp_FVFit_v4czx_branch->SetAddress(&hyp_FVFit_v4czx_);
	}
	if(hyp_FVFit_v4czx_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4czx does not exist." << endl;
	}
	hyp_FVFit_v4czy_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4czy") != 0) {
		hyp_FVFit_v4czy_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4czy"));
		hyp_FVFit_v4czy_branch->SetAddress(&hyp_FVFit_v4czy_);
	}
	if(hyp_FVFit_v4czy_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4czy does not exist." << endl;
	}
	hyp_FVFit_v4czz_branch = 0;
	if (tree->GetAlias("hyp_FVFit_v4czz") != 0) {
		hyp_FVFit_v4czz_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_v4czz"));
		hyp_FVFit_v4czz_branch->SetAddress(&hyp_FVFit_v4czz_);
	}
	if(hyp_FVFit_v4czz_branch == 0 ) {
	cout << "Branch hyp_FVFit_v4czz does not exist." << endl;
	}
	hyp_ll_ecaliso_branch = 0;
	if (tree->GetAlias("hyp_ll_ecaliso") != 0) {
		hyp_ll_ecaliso_branch = tree->GetBranch(tree->GetAlias("hyp_ll_ecaliso"));
		hyp_ll_ecaliso_branch->SetAddress(&hyp_ll_ecaliso_);
	}
	if(hyp_ll_ecaliso_branch == 0 ) {
	cout << "Branch hyp_ll_ecaliso does not exist." << endl;
	}
	hyp_ll_trkiso_branch = 0;
	if (tree->GetAlias("hyp_ll_trkiso") != 0) {
		hyp_ll_trkiso_branch = tree->GetBranch(tree->GetAlias("hyp_ll_trkiso"));
		hyp_ll_trkiso_branch->SetAddress(&hyp_ll_trkiso_);
	}
	if(hyp_ll_trkiso_branch == 0 ) {
	cout << "Branch hyp_ll_trkiso does not exist." << endl;
	}
	hyp_lt_ecaliso_branch = 0;
	if (tree->GetAlias("hyp_lt_ecaliso") != 0) {
		hyp_lt_ecaliso_branch = tree->GetBranch(tree->GetAlias("hyp_lt_ecaliso"));
		hyp_lt_ecaliso_branch->SetAddress(&hyp_lt_ecaliso_);
	}
	if(hyp_lt_ecaliso_branch == 0 ) {
	cout << "Branch hyp_lt_ecaliso does not exist." << endl;
	}
	hyp_lt_trkiso_branch = 0;
	if (tree->GetAlias("hyp_lt_trkiso") != 0) {
		hyp_lt_trkiso_branch = tree->GetBranch(tree->GetAlias("hyp_lt_trkiso"));
		hyp_lt_trkiso_branch->SetAddress(&hyp_lt_trkiso_);
	}
	if(hyp_lt_trkiso_branch == 0 ) {
	cout << "Branch hyp_lt_trkiso does not exist." << endl;
	}
	jets_approximatefHPD_branch = 0;
	if (tree->GetAlias("jets_approximatefHPD") != 0) {
		jets_approximatefHPD_branch = tree->GetBranch(tree->GetAlias("jets_approximatefHPD"));
		jets_approximatefHPD_branch->SetAddress(&jets_approximatefHPD_);
	}
	if(jets_approximatefHPD_branch == 0 ) {
	cout << "Branch jets_approximatefHPD does not exist." << endl;
	}
	jets_approximatefRBX_branch = 0;
	if (tree->GetAlias("jets_approximatefRBX") != 0) {
		jets_approximatefRBX_branch = tree->GetBranch(tree->GetAlias("jets_approximatefRBX"));
		jets_approximatefRBX_branch->SetAddress(&jets_approximatefRBX_);
	}
	if(jets_approximatefRBX_branch == 0 ) {
	cout << "Branch jets_approximatefRBX does not exist." << endl;
	}
	jets_cor_branch = 0;
	if (tree->GetAlias("jets_cor") != 0) {
		jets_cor_branch = tree->GetBranch(tree->GetAlias("jets_cor"));
		jets_cor_branch->SetAddress(&jets_cor_);
	}
	if(jets_cor_branch == 0 ) {
	cout << "Branch jets_cor does not exist." << endl;
	}
	jets_emFrac_branch = 0;
	if (tree->GetAlias("jets_emFrac") != 0) {
		jets_emFrac_branch = tree->GetBranch(tree->GetAlias("jets_emFrac"));
		jets_emFrac_branch->SetAddress(&jets_emFrac_);
	}
	if(jets_emFrac_branch == 0 ) {
	cout << "Branch jets_emFrac does not exist." << endl;
	}
	jets_fHPD_branch = 0;
	if (tree->GetAlias("jets_fHPD") != 0) {
		jets_fHPD_branch = tree->GetBranch(tree->GetAlias("jets_fHPD"));
		jets_fHPD_branch->SetAddress(&jets_fHPD_);
	}
	if(jets_fHPD_branch == 0 ) {
	cout << "Branch jets_fHPD does not exist." << endl;
	}
	jets_fRBX_branch = 0;
	if (tree->GetAlias("jets_fRBX") != 0) {
		jets_fRBX_branch = tree->GetBranch(tree->GetAlias("jets_fRBX"));
		jets_fRBX_branch->SetAddress(&jets_fRBX_);
	}
	if(jets_fRBX_branch == 0 ) {
	cout << "Branch jets_fRBX does not exist." << endl;
	}
	jets_fSubDetector1_branch = 0;
	if (tree->GetAlias("jets_fSubDetector1") != 0) {
		jets_fSubDetector1_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector1"));
		jets_fSubDetector1_branch->SetAddress(&jets_fSubDetector1_);
	}
	if(jets_fSubDetector1_branch == 0 ) {
	cout << "Branch jets_fSubDetector1 does not exist." << endl;
	}
	jets_fSubDetector2_branch = 0;
	if (tree->GetAlias("jets_fSubDetector2") != 0) {
		jets_fSubDetector2_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector2"));
		jets_fSubDetector2_branch->SetAddress(&jets_fSubDetector2_);
	}
	if(jets_fSubDetector2_branch == 0 ) {
	cout << "Branch jets_fSubDetector2 does not exist." << endl;
	}
	jets_fSubDetector3_branch = 0;
	if (tree->GetAlias("jets_fSubDetector3") != 0) {
		jets_fSubDetector3_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector3"));
		jets_fSubDetector3_branch->SetAddress(&jets_fSubDetector3_);
	}
	if(jets_fSubDetector3_branch == 0 ) {
	cout << "Branch jets_fSubDetector3 does not exist." << endl;
	}
	jets_fSubDetector4_branch = 0;
	if (tree->GetAlias("jets_fSubDetector4") != 0) {
		jets_fSubDetector4_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector4"));
		jets_fSubDetector4_branch->SetAddress(&jets_fSubDetector4_);
	}
	if(jets_fSubDetector4_branch == 0 ) {
	cout << "Branch jets_fSubDetector4 does not exist." << endl;
	}
	jets_hitsInN90_branch = 0;
	if (tree->GetAlias("jets_hitsInN90") != 0) {
		jets_hitsInN90_branch = tree->GetBranch(tree->GetAlias("jets_hitsInN90"));
		jets_hitsInN90_branch->SetAddress(&jets_hitsInN90_);
	}
	if(jets_hitsInN90_branch == 0 ) {
	cout << "Branch jets_hitsInN90 does not exist." << endl;
	}
	jets_n90Hits_branch = 0;
	if (tree->GetAlias("jets_n90Hits") != 0) {
		jets_n90Hits_branch = tree->GetBranch(tree->GetAlias("jets_n90Hits"));
		jets_n90Hits_branch->SetAddress(&jets_n90Hits_);
	}
	if(jets_n90Hits_branch == 0 ) {
	cout << "Branch jets_n90Hits does not exist." << endl;
	}
	jets_nECALTowers_branch = 0;
	if (tree->GetAlias("jets_nECALTowers") != 0) {
		jets_nECALTowers_branch = tree->GetBranch(tree->GetAlias("jets_nECALTowers"));
		jets_nECALTowers_branch->SetAddress(&jets_nECALTowers_);
	}
	if(jets_nECALTowers_branch == 0 ) {
	cout << "Branch jets_nECALTowers does not exist." << endl;
	}
	jets_nHCALTowers_branch = 0;
	if (tree->GetAlias("jets_nHCALTowers") != 0) {
		jets_nHCALTowers_branch = tree->GetBranch(tree->GetAlias("jets_nHCALTowers"));
		jets_nHCALTowers_branch->SetAddress(&jets_nHCALTowers_);
	}
	if(jets_nHCALTowers_branch == 0 ) {
	cout << "Branch jets_nHCALTowers does not exist." << endl;
	}
	jets_restrictedEMF_branch = 0;
	if (tree->GetAlias("jets_restrictedEMF") != 0) {
		jets_restrictedEMF_branch = tree->GetBranch(tree->GetAlias("jets_restrictedEMF"));
		jets_restrictedEMF_branch->SetAddress(&jets_restrictedEMF_);
	}
	if(jets_restrictedEMF_branch == 0 ) {
	cout << "Branch jets_restrictedEMF does not exist." << endl;
	}
	jpts_emFrac_branch = 0;
	if (tree->GetAlias("jpts_emFrac") != 0) {
		jpts_emFrac_branch = tree->GetBranch(tree->GetAlias("jpts_emFrac"));
		jpts_emFrac_branch->SetAddress(&jpts_emFrac_);
	}
	if(jpts_emFrac_branch == 0 ) {
	cout << "Branch jpts_emFrac does not exist." << endl;
	}
	evt_ecalmet_etaslice_branch = 0;
	if (tree->GetAlias("evt_ecalmet_etaslice") != 0) {
		evt_ecalmet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet_etaslice"));
		evt_ecalmet_etaslice_branch->SetAddress(&evt_ecalmet_etaslice_);
	}
	if(evt_ecalmet_etaslice_branch == 0 ) {
	cout << "Branch evt_ecalmet_etaslice does not exist." << endl;
	}
	evt_ecalmet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_ecalmet_etaslicePhi") != 0) {
		evt_ecalmet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet_etaslicePhi"));
		evt_ecalmet_etaslicePhi_branch->SetAddress(&evt_ecalmet_etaslicePhi_);
	}
	if(evt_ecalmet_etaslicePhi_branch == 0 ) {
	cout << "Branch evt_ecalmet_etaslicePhi does not exist." << endl;
	}
	evt_hcalmet_etaslice_branch = 0;
	if (tree->GetAlias("evt_hcalmet_etaslice") != 0) {
		evt_hcalmet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet_etaslice"));
		evt_hcalmet_etaslice_branch->SetAddress(&evt_hcalmet_etaslice_);
	}
	if(evt_hcalmet_etaslice_branch == 0 ) {
	cout << "Branch evt_hcalmet_etaslice does not exist." << endl;
	}
	evt_hcalmet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_hcalmet_etaslicePhi") != 0) {
		evt_hcalmet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet_etaslicePhi"));
		evt_hcalmet_etaslicePhi_branch->SetAddress(&evt_hcalmet_etaslicePhi_);
	}
	if(evt_hcalmet_etaslicePhi_branch == 0 ) {
	cout << "Branch evt_hcalmet_etaslicePhi does not exist." << endl;
	}
	evt_towermet_etaslice_branch = 0;
	if (tree->GetAlias("evt_towermet_etaslice") != 0) {
		evt_towermet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_towermet_etaslice"));
		evt_towermet_etaslice_branch->SetAddress(&evt_towermet_etaslice_);
	}
	if(evt_towermet_etaslice_branch == 0 ) {
	cout << "Branch evt_towermet_etaslice does not exist." << endl;
	}
	evt_towermet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_towermet_etaslicePhi") != 0) {
		evt_towermet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_towermet_etaslicePhi"));
		evt_towermet_etaslicePhi_branch->SetAddress(&evt_towermet_etaslicePhi_);
	}
	if(evt_towermet_etaslicePhi_branch == 0 ) {
	cout << "Branch evt_towermet_etaslicePhi does not exist." << endl;
	}
	mus_met_deltax_branch = 0;
	if (tree->GetAlias("mus_met_deltax") != 0) {
		mus_met_deltax_branch = tree->GetBranch(tree->GetAlias("mus_met_deltax"));
		mus_met_deltax_branch->SetAddress(&mus_met_deltax_);
	}
	if(mus_met_deltax_branch == 0 ) {
	cout << "Branch mus_met_deltax does not exist." << endl;
	}
	mus_met_deltay_branch = 0;
	if (tree->GetAlias("mus_met_deltay") != 0) {
		mus_met_deltay_branch = tree->GetBranch(tree->GetAlias("mus_met_deltay"));
		mus_met_deltay_branch->SetAddress(&mus_met_deltay_);
	}
	if(mus_met_deltay_branch == 0 ) {
	cout << "Branch mus_met_deltay does not exist." << endl;
	}
	mus_eledr_branch = 0;
	if (tree->GetAlias("mus_eledr") != 0) {
		mus_eledr_branch = tree->GetBranch(tree->GetAlias("mus_eledr"));
		mus_eledr_branch->SetAddress(&mus_eledr_);
	}
	if(mus_eledr_branch == 0 ) {
	cout << "Branch mus_eledr does not exist." << endl;
	}
	mus_jetdr_branch = 0;
	if (tree->GetAlias("mus_jetdr") != 0) {
		mus_jetdr_branch = tree->GetBranch(tree->GetAlias("mus_jetdr"));
		mus_jetdr_branch->SetAddress(&mus_jetdr_);
	}
	if(mus_jetdr_branch == 0 ) {
	cout << "Branch mus_jetdr does not exist." << endl;
	}
	mus_caloCompatibility_branch = 0;
	if (tree->GetAlias("mus_caloCompatibility") != 0) {
		mus_caloCompatibility_branch = tree->GetBranch(tree->GetAlias("mus_caloCompatibility"));
		mus_caloCompatibility_branch->SetAddress(&mus_caloCompatibility_);
	}
	if(mus_caloCompatibility_branch == 0 ) {
	cout << "Branch mus_caloCompatibility does not exist." << endl;
	}
	mus_chi2_branch = 0;
	if (tree->GetAlias("mus_chi2") != 0) {
		mus_chi2_branch = tree->GetBranch(tree->GetAlias("mus_chi2"));
		mus_chi2_branch->SetAddress(&mus_chi2_);
	}
	if(mus_chi2_branch == 0 ) {
	cout << "Branch mus_chi2 does not exist." << endl;
	}
	mus_d0_branch = 0;
	if (tree->GetAlias("mus_d0") != 0) {
		mus_d0_branch = tree->GetBranch(tree->GetAlias("mus_d0"));
		mus_d0_branch->SetAddress(&mus_d0_);
	}
	if(mus_d0_branch == 0 ) {
	cout << "Branch mus_d0 does not exist." << endl;
	}
	mus_d0Err_branch = 0;
	if (tree->GetAlias("mus_d0Err") != 0) {
		mus_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_d0Err"));
		mus_d0Err_branch->SetAddress(&mus_d0Err_);
	}
	if(mus_d0Err_branch == 0 ) {
	cout << "Branch mus_d0Err does not exist." << endl;
	}
	mus_d0corr_branch = 0;
	if (tree->GetAlias("mus_d0corr") != 0) {
		mus_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_d0corr"));
		mus_d0corr_branch->SetAddress(&mus_d0corr_);
	}
	if(mus_d0corr_branch == 0 ) {
	cout << "Branch mus_d0corr does not exist." << endl;
	}
	mus_e_em_branch = 0;
	if (tree->GetAlias("mus_e_em") != 0) {
		mus_e_em_branch = tree->GetBranch(tree->GetAlias("mus_e_em"));
		mus_e_em_branch->SetAddress(&mus_e_em_);
	}
	if(mus_e_em_branch == 0 ) {
	cout << "Branch mus_e_em does not exist." << endl;
	}
	mus_e_emS9_branch = 0;
	if (tree->GetAlias("mus_e_emS9") != 0) {
		mus_e_emS9_branch = tree->GetBranch(tree->GetAlias("mus_e_emS9"));
		mus_e_emS9_branch->SetAddress(&mus_e_emS9_);
	}
	if(mus_e_emS9_branch == 0 ) {
	cout << "Branch mus_e_emS9 does not exist." << endl;
	}
	mus_e_had_branch = 0;
	if (tree->GetAlias("mus_e_had") != 0) {
		mus_e_had_branch = tree->GetBranch(tree->GetAlias("mus_e_had"));
		mus_e_had_branch->SetAddress(&mus_e_had_);
	}
	if(mus_e_had_branch == 0 ) {
	cout << "Branch mus_e_had does not exist." << endl;
	}
	mus_e_hadS9_branch = 0;
	if (tree->GetAlias("mus_e_hadS9") != 0) {
		mus_e_hadS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hadS9"));
		mus_e_hadS9_branch->SetAddress(&mus_e_hadS9_);
	}
	if(mus_e_hadS9_branch == 0 ) {
	cout << "Branch mus_e_hadS9 does not exist." << endl;
	}
	mus_e_ho_branch = 0;
	if (tree->GetAlias("mus_e_ho") != 0) {
		mus_e_ho_branch = tree->GetBranch(tree->GetAlias("mus_e_ho"));
		mus_e_ho_branch->SetAddress(&mus_e_ho_);
	}
	if(mus_e_ho_branch == 0 ) {
	cout << "Branch mus_e_ho does not exist." << endl;
	}
	mus_e_hoS9_branch = 0;
	if (tree->GetAlias("mus_e_hoS9") != 0) {
		mus_e_hoS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hoS9"));
		mus_e_hoS9_branch->SetAddress(&mus_e_hoS9_);
	}
	if(mus_e_hoS9_branch == 0 ) {
	cout << "Branch mus_e_hoS9 does not exist." << endl;
	}
	mus_etaErr_branch = 0;
	if (tree->GetAlias("mus_etaErr") != 0) {
		mus_etaErr_branch = tree->GetBranch(tree->GetAlias("mus_etaErr"));
		mus_etaErr_branch->SetAddress(&mus_etaErr_);
	}
	if(mus_etaErr_branch == 0 ) {
	cout << "Branch mus_etaErr does not exist." << endl;
	}
	mus_gfit_chi2_branch = 0;
	if (tree->GetAlias("mus_gfit_chi2") != 0) {
		mus_gfit_chi2_branch = tree->GetBranch(tree->GetAlias("mus_gfit_chi2"));
		mus_gfit_chi2_branch->SetAddress(&mus_gfit_chi2_);
	}
	if(mus_gfit_chi2_branch == 0 ) {
	cout << "Branch mus_gfit_chi2 does not exist." << endl;
	}
	mus_gfit_d0_branch = 0;
	if (tree->GetAlias("mus_gfit_d0") != 0) {
		mus_gfit_d0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0"));
		mus_gfit_d0_branch->SetAddress(&mus_gfit_d0_);
	}
	if(mus_gfit_d0_branch == 0 ) {
	cout << "Branch mus_gfit_d0 does not exist." << endl;
	}
	mus_gfit_d0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_d0Err") != 0) {
		mus_gfit_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0Err"));
		mus_gfit_d0Err_branch->SetAddress(&mus_gfit_d0Err_);
	}
	if(mus_gfit_d0Err_branch == 0 ) {
	cout << "Branch mus_gfit_d0Err does not exist." << endl;
	}
	mus_gfit_d0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_d0corr") != 0) {
		mus_gfit_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0corr"));
		mus_gfit_d0corr_branch->SetAddress(&mus_gfit_d0corr_);
	}
	if(mus_gfit_d0corr_branch == 0 ) {
	cout << "Branch mus_gfit_d0corr does not exist." << endl;
	}
	mus_gfit_ndof_branch = 0;
	if (tree->GetAlias("mus_gfit_ndof") != 0) {
		mus_gfit_ndof_branch = tree->GetBranch(tree->GetAlias("mus_gfit_ndof"));
		mus_gfit_ndof_branch->SetAddress(&mus_gfit_ndof_);
	}
	if(mus_gfit_ndof_branch == 0 ) {
	cout << "Branch mus_gfit_ndof does not exist." << endl;
	}
	mus_gfit_qoverp_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverp") != 0) {
		mus_gfit_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverp"));
		mus_gfit_qoverp_branch->SetAddress(&mus_gfit_qoverp_);
	}
	if(mus_gfit_qoverp_branch == 0 ) {
	cout << "Branch mus_gfit_qoverp does not exist." << endl;
	}
	mus_gfit_qoverpError_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverpError") != 0) {
		mus_gfit_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverpError"));
		mus_gfit_qoverpError_branch->SetAddress(&mus_gfit_qoverpError_);
	}
	if(mus_gfit_qoverpError_branch == 0 ) {
	cout << "Branch mus_gfit_qoverpError does not exist." << endl;
	}
	mus_gfit_z0_branch = 0;
	if (tree->GetAlias("mus_gfit_z0") != 0) {
		mus_gfit_z0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0"));
		mus_gfit_z0_branch->SetAddress(&mus_gfit_z0_);
	}
	if(mus_gfit_z0_branch == 0 ) {
	cout << "Branch mus_gfit_z0 does not exist." << endl;
	}
	mus_gfit_z0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_z0Err") != 0) {
		mus_gfit_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0Err"));
		mus_gfit_z0Err_branch->SetAddress(&mus_gfit_z0Err_);
	}
	if(mus_gfit_z0Err_branch == 0 ) {
	cout << "Branch mus_gfit_z0Err does not exist." << endl;
	}
	mus_gfit_z0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_z0corr") != 0) {
		mus_gfit_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0corr"));
		mus_gfit_z0corr_branch->SetAddress(&mus_gfit_z0corr_);
	}
	if(mus_gfit_z0corr_branch == 0 ) {
	cout << "Branch mus_gfit_z0corr does not exist." << endl;
	}
	mus_iso03_emEt_branch = 0;
	if (tree->GetAlias("mus_iso03_emEt") != 0) {
		mus_iso03_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_emEt"));
		mus_iso03_emEt_branch->SetAddress(&mus_iso03_emEt_);
	}
	if(mus_iso03_emEt_branch == 0 ) {
	cout << "Branch mus_iso03_emEt does not exist." << endl;
	}
	mus_iso03_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hadEt") != 0) {
		mus_iso03_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hadEt"));
		mus_iso03_hadEt_branch->SetAddress(&mus_iso03_hadEt_);
	}
	if(mus_iso03_hadEt_branch == 0 ) {
	cout << "Branch mus_iso03_hadEt does not exist." << endl;
	}
	mus_iso03_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hoEt") != 0) {
		mus_iso03_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hoEt"));
		mus_iso03_hoEt_branch->SetAddress(&mus_iso03_hoEt_);
	}
	if(mus_iso03_hoEt_branch == 0 ) {
	cout << "Branch mus_iso03_hoEt does not exist." << endl;
	}
	mus_iso03_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso03_sumPt") != 0) {
		mus_iso03_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_sumPt"));
		mus_iso03_sumPt_branch->SetAddress(&mus_iso03_sumPt_);
	}
	if(mus_iso03_sumPt_branch == 0 ) {
	cout << "Branch mus_iso03_sumPt does not exist." << endl;
	}
	mus_iso05_emEt_branch = 0;
	if (tree->GetAlias("mus_iso05_emEt") != 0) {
		mus_iso05_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_emEt"));
		mus_iso05_emEt_branch->SetAddress(&mus_iso05_emEt_);
	}
	if(mus_iso05_emEt_branch == 0 ) {
	cout << "Branch mus_iso05_emEt does not exist." << endl;
	}
	mus_iso05_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hadEt") != 0) {
		mus_iso05_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hadEt"));
		mus_iso05_hadEt_branch->SetAddress(&mus_iso05_hadEt_);
	}
	if(mus_iso05_hadEt_branch == 0 ) {
	cout << "Branch mus_iso05_hadEt does not exist." << endl;
	}
	mus_iso05_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hoEt") != 0) {
		mus_iso05_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hoEt"));
		mus_iso05_hoEt_branch->SetAddress(&mus_iso05_hoEt_);
	}
	if(mus_iso05_hoEt_branch == 0 ) {
	cout << "Branch mus_iso05_hoEt does not exist." << endl;
	}
	mus_iso05_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso05_sumPt") != 0) {
		mus_iso05_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_sumPt"));
		mus_iso05_sumPt_branch->SetAddress(&mus_iso05_sumPt_);
	}
	if(mus_iso05_sumPt_branch == 0 ) {
	cout << "Branch mus_iso05_sumPt does not exist." << endl;
	}
	mus_iso_ecalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_ecalvetoDep") != 0) {
		mus_iso_ecalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_ecalvetoDep"));
		mus_iso_ecalvetoDep_branch->SetAddress(&mus_iso_ecalvetoDep_);
	}
	if(mus_iso_ecalvetoDep_branch == 0 ) {
	cout << "Branch mus_iso_ecalvetoDep does not exist." << endl;
	}
	mus_iso_hcalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hcalvetoDep") != 0) {
		mus_iso_hcalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hcalvetoDep"));
		mus_iso_hcalvetoDep_branch->SetAddress(&mus_iso_hcalvetoDep_);
	}
	if(mus_iso_hcalvetoDep_branch == 0 ) {
	cout << "Branch mus_iso_hcalvetoDep does not exist." << endl;
	}
	mus_iso_hovetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hovetoDep") != 0) {
		mus_iso_hovetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hovetoDep"));
		mus_iso_hovetoDep_branch->SetAddress(&mus_iso_hovetoDep_);
	}
	if(mus_iso_hovetoDep_branch == 0 ) {
	cout << "Branch mus_iso_hovetoDep does not exist." << endl;
	}
	mus_iso_trckvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_trckvetoDep") != 0) {
		mus_iso_trckvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_trckvetoDep"));
		mus_iso_trckvetoDep_branch->SetAddress(&mus_iso_trckvetoDep_);
	}
	if(mus_iso_trckvetoDep_branch == 0 ) {
	cout << "Branch mus_iso_trckvetoDep does not exist." << endl;
	}
	mus_ndof_branch = 0;
	if (tree->GetAlias("mus_ndof") != 0) {
		mus_ndof_branch = tree->GetBranch(tree->GetAlias("mus_ndof"));
		mus_ndof_branch->SetAddress(&mus_ndof_);
	}
	if(mus_ndof_branch == 0 ) {
	cout << "Branch mus_ndof does not exist." << endl;
	}
	mus_phiErr_branch = 0;
	if (tree->GetAlias("mus_phiErr") != 0) {
		mus_phiErr_branch = tree->GetBranch(tree->GetAlias("mus_phiErr"));
		mus_phiErr_branch->SetAddress(&mus_phiErr_);
	}
	if(mus_phiErr_branch == 0 ) {
	cout << "Branch mus_phiErr does not exist." << endl;
	}
	mus_ptErr_branch = 0;
	if (tree->GetAlias("mus_ptErr") != 0) {
		mus_ptErr_branch = tree->GetBranch(tree->GetAlias("mus_ptErr"));
		mus_ptErr_branch->SetAddress(&mus_ptErr_);
	}
	if(mus_ptErr_branch == 0 ) {
	cout << "Branch mus_ptErr does not exist." << endl;
	}
	mus_qoverp_branch = 0;
	if (tree->GetAlias("mus_qoverp") != 0) {
		mus_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_qoverp"));
		mus_qoverp_branch->SetAddress(&mus_qoverp_);
	}
	if(mus_qoverp_branch == 0 ) {
	cout << "Branch mus_qoverp does not exist." << endl;
	}
	mus_qoverpError_branch = 0;
	if (tree->GetAlias("mus_qoverpError") != 0) {
		mus_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_qoverpError"));
		mus_qoverpError_branch->SetAddress(&mus_qoverpError_);
	}
	if(mus_qoverpError_branch == 0 ) {
	cout << "Branch mus_qoverpError does not exist." << endl;
	}
	mus_sta_chi2_branch = 0;
	if (tree->GetAlias("mus_sta_chi2") != 0) {
		mus_sta_chi2_branch = tree->GetBranch(tree->GetAlias("mus_sta_chi2"));
		mus_sta_chi2_branch->SetAddress(&mus_sta_chi2_);
	}
	if(mus_sta_chi2_branch == 0 ) {
	cout << "Branch mus_sta_chi2 does not exist." << endl;
	}
	mus_sta_d0_branch = 0;
	if (tree->GetAlias("mus_sta_d0") != 0) {
		mus_sta_d0_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0"));
		mus_sta_d0_branch->SetAddress(&mus_sta_d0_);
	}
	if(mus_sta_d0_branch == 0 ) {
	cout << "Branch mus_sta_d0 does not exist." << endl;
	}
	mus_sta_d0Err_branch = 0;
	if (tree->GetAlias("mus_sta_d0Err") != 0) {
		mus_sta_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0Err"));
		mus_sta_d0Err_branch->SetAddress(&mus_sta_d0Err_);
	}
	if(mus_sta_d0Err_branch == 0 ) {
	cout << "Branch mus_sta_d0Err does not exist." << endl;
	}
	mus_sta_d0corr_branch = 0;
	if (tree->GetAlias("mus_sta_d0corr") != 0) {
		mus_sta_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0corr"));
		mus_sta_d0corr_branch->SetAddress(&mus_sta_d0corr_);
	}
	if(mus_sta_d0corr_branch == 0 ) {
	cout << "Branch mus_sta_d0corr does not exist." << endl;
	}
	mus_sta_ndof_branch = 0;
	if (tree->GetAlias("mus_sta_ndof") != 0) {
		mus_sta_ndof_branch = tree->GetBranch(tree->GetAlias("mus_sta_ndof"));
		mus_sta_ndof_branch->SetAddress(&mus_sta_ndof_);
	}
	if(mus_sta_ndof_branch == 0 ) {
	cout << "Branch mus_sta_ndof does not exist." << endl;
	}
	mus_sta_qoverp_branch = 0;
	if (tree->GetAlias("mus_sta_qoverp") != 0) {
		mus_sta_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverp"));
		mus_sta_qoverp_branch->SetAddress(&mus_sta_qoverp_);
	}
	if(mus_sta_qoverp_branch == 0 ) {
	cout << "Branch mus_sta_qoverp does not exist." << endl;
	}
	mus_sta_qoverpError_branch = 0;
	if (tree->GetAlias("mus_sta_qoverpError") != 0) {
		mus_sta_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverpError"));
		mus_sta_qoverpError_branch->SetAddress(&mus_sta_qoverpError_);
	}
	if(mus_sta_qoverpError_branch == 0 ) {
	cout << "Branch mus_sta_qoverpError does not exist." << endl;
	}
	mus_sta_z0_branch = 0;
	if (tree->GetAlias("mus_sta_z0") != 0) {
		mus_sta_z0_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0"));
		mus_sta_z0_branch->SetAddress(&mus_sta_z0_);
	}
	if(mus_sta_z0_branch == 0 ) {
	cout << "Branch mus_sta_z0 does not exist." << endl;
	}
	mus_sta_z0Err_branch = 0;
	if (tree->GetAlias("mus_sta_z0Err") != 0) {
		mus_sta_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0Err"));
		mus_sta_z0Err_branch->SetAddress(&mus_sta_z0Err_);
	}
	if(mus_sta_z0Err_branch == 0 ) {
	cout << "Branch mus_sta_z0Err does not exist." << endl;
	}
	mus_sta_z0corr_branch = 0;
	if (tree->GetAlias("mus_sta_z0corr") != 0) {
		mus_sta_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0corr"));
		mus_sta_z0corr_branch->SetAddress(&mus_sta_z0corr_);
	}
	if(mus_sta_z0corr_branch == 0 ) {
	cout << "Branch mus_sta_z0corr does not exist." << endl;
	}
	mus_timeAtIpInOut_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOut") != 0) {
		mus_timeAtIpInOut_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOut"));
		mus_timeAtIpInOut_branch->SetAddress(&mus_timeAtIpInOut_);
	}
	if(mus_timeAtIpInOut_branch == 0 ) {
	cout << "Branch mus_timeAtIpInOut does not exist." << endl;
	}
	mus_timeAtIpInOutErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOutErr") != 0) {
		mus_timeAtIpInOutErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOutErr"));
		mus_timeAtIpInOutErr_branch->SetAddress(&mus_timeAtIpInOutErr_);
	}
	if(mus_timeAtIpInOutErr_branch == 0 ) {
	cout << "Branch mus_timeAtIpInOutErr does not exist." << endl;
	}
	mus_timeAtIpOutIn_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutIn") != 0) {
		mus_timeAtIpOutIn_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutIn"));
		mus_timeAtIpOutIn_branch->SetAddress(&mus_timeAtIpOutIn_);
	}
	if(mus_timeAtIpOutIn_branch == 0 ) {
	cout << "Branch mus_timeAtIpOutIn does not exist." << endl;
	}
	mus_timeAtIpOutInErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutInErr") != 0) {
		mus_timeAtIpOutInErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutInErr"));
		mus_timeAtIpOutInErr_branch->SetAddress(&mus_timeAtIpOutInErr_);
	}
	if(mus_timeAtIpOutInErr_branch == 0 ) {
	cout << "Branch mus_timeAtIpOutInErr does not exist." << endl;
	}
	mus_vertexphi_branch = 0;
	if (tree->GetAlias("mus_vertexphi") != 0) {
		mus_vertexphi_branch = tree->GetBranch(tree->GetAlias("mus_vertexphi"));
		mus_vertexphi_branch->SetAddress(&mus_vertexphi_);
	}
	if(mus_vertexphi_branch == 0 ) {
	cout << "Branch mus_vertexphi does not exist." << endl;
	}
	mus_z0_branch = 0;
	if (tree->GetAlias("mus_z0") != 0) {
		mus_z0_branch = tree->GetBranch(tree->GetAlias("mus_z0"));
		mus_z0_branch->SetAddress(&mus_z0_);
	}
	if(mus_z0_branch == 0 ) {
	cout << "Branch mus_z0 does not exist." << endl;
	}
	mus_z0Err_branch = 0;
	if (tree->GetAlias("mus_z0Err") != 0) {
		mus_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_z0Err"));
		mus_z0Err_branch->SetAddress(&mus_z0Err_);
	}
	if(mus_z0Err_branch == 0 ) {
	cout << "Branch mus_z0Err does not exist." << endl;
	}
	mus_z0corr_branch = 0;
	if (tree->GetAlias("mus_z0corr") != 0) {
		mus_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_z0corr"));
		mus_z0corr_branch->SetAddress(&mus_z0corr_);
	}
	if(mus_z0corr_branch == 0 ) {
	cout << "Branch mus_z0corr does not exist." << endl;
	}
	pfjets_chargedEmE_branch = 0;
	if (tree->GetAlias("pfjets_chargedEmE") != 0) {
		pfjets_chargedEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedEmE"));
		pfjets_chargedEmE_branch->SetAddress(&pfjets_chargedEmE_);
	}
	if(pfjets_chargedEmE_branch == 0 ) {
	cout << "Branch pfjets_chargedEmE does not exist." << endl;
	}
	pfjets_chargedHadronE_branch = 0;
	if (tree->GetAlias("pfjets_chargedHadronE") != 0) {
		pfjets_chargedHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedHadronE"));
		pfjets_chargedHadronE_branch->SetAddress(&pfjets_chargedHadronE_);
	}
	if(pfjets_chargedHadronE_branch == 0 ) {
	cout << "Branch pfjets_chargedHadronE does not exist." << endl;
	}
	pfjets_cor_branch = 0;
	if (tree->GetAlias("pfjets_cor") != 0) {
		pfjets_cor_branch = tree->GetBranch(tree->GetAlias("pfjets_cor"));
		pfjets_cor_branch->SetAddress(&pfjets_cor_);
	}
	if(pfjets_cor_branch == 0 ) {
	cout << "Branch pfjets_cor does not exist." << endl;
	}
	pfjets_neutralEmE_branch = 0;
	if (tree->GetAlias("pfjets_neutralEmE") != 0) {
		pfjets_neutralEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralEmE"));
		pfjets_neutralEmE_branch->SetAddress(&pfjets_neutralEmE_);
	}
	if(pfjets_neutralEmE_branch == 0 ) {
	cout << "Branch pfjets_neutralEmE does not exist." << endl;
	}
	pfjets_neutralHadronE_branch = 0;
	if (tree->GetAlias("pfjets_neutralHadronE") != 0) {
		pfjets_neutralHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralHadronE"));
		pfjets_neutralHadronE_branch->SetAddress(&pfjets_neutralHadronE_);
	}
	if(pfjets_neutralHadronE_branch == 0 ) {
	cout << "Branch pfjets_neutralHadronE does not exist." << endl;
	}
	taus_pf_caloComp_branch = 0;
	if (tree->GetAlias("taus_pf_caloComp") != 0) {
		taus_pf_caloComp_branch = tree->GetBranch(tree->GetAlias("taus_pf_caloComp"));
		taus_pf_caloComp_branch->SetAddress(&taus_pf_caloComp_);
	}
	if(taus_pf_caloComp_branch == 0 ) {
	cout << "Branch taus_pf_caloComp does not exist." << endl;
	}
	taus_pf_ecalStripSumEOverPLead_branch = 0;
	if (tree->GetAlias("taus_pf_ecalStripSumEOverPLead") != 0) {
		taus_pf_ecalStripSumEOverPLead_branch = tree->GetBranch(tree->GetAlias("taus_pf_ecalStripSumEOverPLead"));
		taus_pf_ecalStripSumEOverPLead_branch->SetAddress(&taus_pf_ecalStripSumEOverPLead_);
	}
	if(taus_pf_ecalStripSumEOverPLead_branch == 0 ) {
	cout << "Branch taus_pf_ecalStripSumEOverPLead does not exist." << endl;
	}
	taus_pf_electronPreIDOutput_branch = 0;
	if (tree->GetAlias("taus_pf_electronPreIDOutput") != 0) {
		taus_pf_electronPreIDOutput_branch = tree->GetBranch(tree->GetAlias("taus_pf_electronPreIDOutput"));
		taus_pf_electronPreIDOutput_branch->SetAddress(&taus_pf_electronPreIDOutput_);
	}
	if(taus_pf_electronPreIDOutput_branch == 0 ) {
	cout << "Branch taus_pf_electronPreIDOutput does not exist." << endl;
	}
	taus_pf_emf_branch = 0;
	if (tree->GetAlias("taus_pf_emf") != 0) {
		taus_pf_emf_branch = tree->GetBranch(tree->GetAlias("taus_pf_emf"));
		taus_pf_emf_branch->SetAddress(&taus_pf_emf_);
	}
	if(taus_pf_emf_branch == 0 ) {
	cout << "Branch taus_pf_emf does not exist." << endl;
	}
	taus_pf_hcal3x3OverPLead_branch = 0;
	if (tree->GetAlias("taus_pf_hcal3x3OverPLead") != 0) {
		taus_pf_hcal3x3OverPLead_branch = tree->GetBranch(tree->GetAlias("taus_pf_hcal3x3OverPLead"));
		taus_pf_hcal3x3OverPLead_branch->SetAddress(&taus_pf_hcal3x3OverPLead_);
	}
	if(taus_pf_hcal3x3OverPLead_branch == 0 ) {
	cout << "Branch taus_pf_hcal3x3OverPLead does not exist." << endl;
	}
	taus_pf_hcalMaxOverPLead_branch = 0;
	if (tree->GetAlias("taus_pf_hcalMaxOverPLead") != 0) {
		taus_pf_hcalMaxOverPLead_branch = tree->GetBranch(tree->GetAlias("taus_pf_hcalMaxOverPLead"));
		taus_pf_hcalMaxOverPLead_branch->SetAddress(&taus_pf_hcalMaxOverPLead_);
	}
	if(taus_pf_hcalMaxOverPLead_branch == 0 ) {
	cout << "Branch taus_pf_hcalMaxOverPLead does not exist." << endl;
	}
	taus_pf_hcalTotOverPLead_branch = 0;
	if (tree->GetAlias("taus_pf_hcalTotOverPLead") != 0) {
		taus_pf_hcalTotOverPLead_branch = tree->GetBranch(tree->GetAlias("taus_pf_hcalTotOverPLead"));
		taus_pf_hcalTotOverPLead_branch->SetAddress(&taus_pf_hcalTotOverPLead_);
	}
	if(taus_pf_hcalTotOverPLead_branch == 0 ) {
	cout << "Branch taus_pf_hcalTotOverPLead does not exist." << endl;
	}
	taus_pf_isolationchargecandPtSum_branch = 0;
	if (tree->GetAlias("taus_pf_isolationchargecandPtSum") != 0) {
		taus_pf_isolationchargecandPtSum_branch = tree->GetBranch(tree->GetAlias("taus_pf_isolationchargecandPtSum"));
		taus_pf_isolationchargecandPtSum_branch->SetAddress(&taus_pf_isolationchargecandPtSum_);
	}
	if(taus_pf_isolationchargecandPtSum_branch == 0 ) {
	cout << "Branch taus_pf_isolationchargecandPtSum does not exist." << endl;
	}
	taus_pf_isolationgammacandEtSum_branch = 0;
	if (tree->GetAlias("taus_pf_isolationgammacandEtSum") != 0) {
		taus_pf_isolationgammacandEtSum_branch = tree->GetBranch(tree->GetAlias("taus_pf_isolationgammacandEtSum"));
		taus_pf_isolationgammacandEtSum_branch->SetAddress(&taus_pf_isolationgammacandEtSum_);
	}
	if(taus_pf_isolationgammacandEtSum_branch == 0 ) {
	cout << "Branch taus_pf_isolationgammacandEtSum does not exist." << endl;
	}
	taus_pf_lead_chargecand_Signed_Sipt_branch = 0;
	if (tree->GetAlias("taus_pf_lead_chargecand_Signed_Sipt") != 0) {
		taus_pf_lead_chargecand_Signed_Sipt_branch = tree->GetBranch(tree->GetAlias("taus_pf_lead_chargecand_Signed_Sipt"));
		taus_pf_lead_chargecand_Signed_Sipt_branch->SetAddress(&taus_pf_lead_chargecand_Signed_Sipt_);
	}
	if(taus_pf_lead_chargecand_Signed_Sipt_branch == 0 ) {
	cout << "Branch taus_pf_lead_chargecand_Signed_Sipt does not exist." << endl;
	}
	taus_pf_maximumHCALPFClusterEt_branch = 0;
	if (tree->GetAlias("taus_pf_maximumHCALPFClusterEt") != 0) {
		taus_pf_maximumHCALPFClusterEt_branch = tree->GetBranch(tree->GetAlias("taus_pf_maximumHCALPFClusterEt"));
		taus_pf_maximumHCALPFClusterEt_branch->SetAddress(&taus_pf_maximumHCALPFClusterEt_);
	}
	if(taus_pf_maximumHCALPFClusterEt_branch == 0 ) {
	cout << "Branch taus_pf_maximumHCALPFClusterEt does not exist." << endl;
	}
	taus_pf_segComp_branch = 0;
	if (tree->GetAlias("taus_pf_segComp") != 0) {
		taus_pf_segComp_branch = tree->GetBranch(tree->GetAlias("taus_pf_segComp"));
		taus_pf_segComp_branch->SetAddress(&taus_pf_segComp_);
	}
	if(taus_pf_segComp_branch == 0 ) {
	cout << "Branch taus_pf_segComp does not exist." << endl;
	}
	photons_e1x5_branch = 0;
	if (tree->GetAlias("photons_e1x5") != 0) {
		photons_e1x5_branch = tree->GetBranch(tree->GetAlias("photons_e1x5"));
		photons_e1x5_branch->SetAddress(&photons_e1x5_);
	}
	if(photons_e1x5_branch == 0 ) {
	cout << "Branch photons_e1x5 does not exist." << endl;
	}
	photons_e2x5Max_branch = 0;
	if (tree->GetAlias("photons_e2x5Max") != 0) {
		photons_e2x5Max_branch = tree->GetBranch(tree->GetAlias("photons_e2x5Max"));
		photons_e2x5Max_branch->SetAddress(&photons_e2x5Max_);
	}
	if(photons_e2x5Max_branch == 0 ) {
	cout << "Branch photons_e2x5Max does not exist." << endl;
	}
	photons_e3x3_branch = 0;
	if (tree->GetAlias("photons_e3x3") != 0) {
		photons_e3x3_branch = tree->GetBranch(tree->GetAlias("photons_e3x3"));
		photons_e3x3_branch->SetAddress(&photons_e3x3_);
	}
	if(photons_e3x3_branch == 0 ) {
	cout << "Branch photons_e3x3 does not exist." << endl;
	}
	photons_e5x5_branch = 0;
	if (tree->GetAlias("photons_e5x5") != 0) {
		photons_e5x5_branch = tree->GetBranch(tree->GetAlias("photons_e5x5"));
		photons_e5x5_branch->SetAddress(&photons_e5x5_);
	}
	if(photons_e5x5_branch == 0 ) {
	cout << "Branch photons_e5x5 does not exist." << endl;
	}
	photons_eMax_branch = 0;
	if (tree->GetAlias("photons_eMax") != 0) {
		photons_eMax_branch = tree->GetBranch(tree->GetAlias("photons_eMax"));
		photons_eMax_branch->SetAddress(&photons_eMax_);
	}
	if(photons_eMax_branch == 0 ) {
	cout << "Branch photons_eMax does not exist." << endl;
	}
	photons_eSC_branch = 0;
	if (tree->GetAlias("photons_eSC") != 0) {
		photons_eSC_branch = tree->GetBranch(tree->GetAlias("photons_eSC"));
		photons_eSC_branch->SetAddress(&photons_eSC_);
	}
	if(photons_eSC_branch == 0 ) {
	cout << "Branch photons_eSC does not exist." << endl;
	}
	photons_eSCPresh_branch = 0;
	if (tree->GetAlias("photons_eSCPresh") != 0) {
		photons_eSCPresh_branch = tree->GetBranch(tree->GetAlias("photons_eSCPresh"));
		photons_eSCPresh_branch->SetAddress(&photons_eSCPresh_);
	}
	if(photons_eSCPresh_branch == 0 ) {
	cout << "Branch photons_eSCPresh does not exist." << endl;
	}
	photons_eSCRaw_branch = 0;
	if (tree->GetAlias("photons_eSCRaw") != 0) {
		photons_eSCRaw_branch = tree->GetBranch(tree->GetAlias("photons_eSCRaw"));
		photons_eSCRaw_branch->SetAddress(&photons_eSCRaw_);
	}
	if(photons_eSCRaw_branch == 0 ) {
	cout << "Branch photons_eSCRaw does not exist." << endl;
	}
	photons_eSeed_branch = 0;
	if (tree->GetAlias("photons_eSeed") != 0) {
		photons_eSeed_branch = tree->GetBranch(tree->GetAlias("photons_eSeed"));
		photons_eSeed_branch->SetAddress(&photons_eSeed_);
	}
	if(photons_eSeed_branch == 0 ) {
	cout << "Branch photons_eSeed does not exist." << endl;
	}
	photons_ecalIso_branch = 0;
	if (tree->GetAlias("photons_ecalIso") != 0) {
		photons_ecalIso_branch = tree->GetBranch(tree->GetAlias("photons_ecalIso"));
		photons_ecalIso_branch->SetAddress(&photons_ecalIso_);
	}
	if(photons_ecalIso_branch == 0 ) {
	cout << "Branch photons_ecalIso does not exist." << endl;
	}
	photons_hOverE_branch = 0;
	if (tree->GetAlias("photons_hOverE") != 0) {
		photons_hOverE_branch = tree->GetBranch(tree->GetAlias("photons_hOverE"));
		photons_hOverE_branch->SetAddress(&photons_hOverE_);
	}
	if(photons_hOverE_branch == 0 ) {
	cout << "Branch photons_hOverE does not exist." << endl;
	}
	photons_hcalIso_branch = 0;
	if (tree->GetAlias("photons_hcalIso") != 0) {
		photons_hcalIso_branch = tree->GetBranch(tree->GetAlias("photons_hcalIso"));
		photons_hcalIso_branch->SetAddress(&photons_hcalIso_);
	}
	if(photons_hcalIso_branch == 0 ) {
	cout << "Branch photons_hcalIso does not exist." << endl;
	}
	photons_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("photons_sigmaEtaEta") != 0) {
		photons_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaEtaEta"));
		photons_sigmaEtaEta_branch->SetAddress(&photons_sigmaEtaEta_);
	}
	if(photons_sigmaEtaEta_branch == 0 ) {
	cout << "Branch photons_sigmaEtaEta does not exist." << endl;
	}
	photons_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("photons_sigmaIEtaIEta") != 0) {
		photons_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaIEtaIEta"));
		photons_sigmaIEtaIEta_branch->SetAddress(&photons_sigmaIEtaIEta_);
	}
	if(photons_sigmaIEtaIEta_branch == 0 ) {
	cout << "Branch photons_sigmaIEtaIEta does not exist." << endl;
	}
	photons_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("photons_sigmaIPhiIPhi") != 0) {
		photons_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("photons_sigmaIPhiIPhi"));
		photons_sigmaIPhiIPhi_branch->SetAddress(&photons_sigmaIPhiIPhi_);
	}
	if(photons_sigmaIPhiIPhi_branch == 0 ) {
	cout << "Branch photons_sigmaIPhiIPhi does not exist." << endl;
	}
	photons_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("photons_sigmaPhiPhi") != 0) {
		photons_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("photons_sigmaPhiPhi"));
		photons_sigmaPhiPhi_branch->SetAddress(&photons_sigmaPhiPhi_);
	}
	if(photons_sigmaPhiPhi_branch == 0 ) {
	cout << "Branch photons_sigmaPhiPhi does not exist." << endl;
	}
	photons_tkIsoHollow_branch = 0;
	if (tree->GetAlias("photons_tkIsoHollow") != 0) {
		photons_tkIsoHollow_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoHollow"));
		photons_tkIsoHollow_branch->SetAddress(&photons_tkIsoHollow_);
	}
	if(photons_tkIsoHollow_branch == 0 ) {
	cout << "Branch photons_tkIsoHollow does not exist." << endl;
	}
	photons_tkIsoSolid_branch = 0;
	if (tree->GetAlias("photons_tkIsoSolid") != 0) {
		photons_tkIsoSolid_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoSolid"));
		photons_tkIsoSolid_branch->SetAddress(&photons_tkIsoSolid_);
	}
	if(photons_tkIsoSolid_branch == 0 ) {
	cout << "Branch photons_tkIsoSolid does not exist." << endl;
	}
	ran_dRClosestTower_branch = 0;
	if (tree->GetAlias("ran_dRClosestTower") != 0) {
		ran_dRClosestTower_branch = tree->GetBranch(tree->GetAlias("ran_dRClosestTower"));
		ran_dRClosestTower_branch->SetAddress(&ran_dRClosestTower_);
	}
	if(ran_dRClosestTower_branch == 0 ) {
	cout << "Branch ran_dRClosestTower does not exist." << endl;
	}
	ran_dRClosestTowerEmEt_branch = 0;
	if (tree->GetAlias("ran_dRClosestTowerEmEt") != 0) {
		ran_dRClosestTowerEmEt_branch = tree->GetBranch(tree->GetAlias("ran_dRClosestTowerEmEt"));
		ran_dRClosestTowerEmEt_branch->SetAddress(&ran_dRClosestTowerEmEt_);
	}
	if(ran_dRClosestTowerEmEt_branch == 0 ) {
	cout << "Branch ran_dRClosestTowerEmEt does not exist." << endl;
	}
	ran_ecalIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_ecalIso03_egamma") != 0) {
		ran_ecalIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_ecalIso03_egamma"));
		ran_ecalIso03_egamma_branch->SetAddress(&ran_ecalIso03_egamma_);
	}
	if(ran_ecalIso03_egamma_branch == 0 ) {
	cout << "Branch ran_ecalIso03_egamma does not exist." << endl;
	}
	ran_ecalIso03_mu_branch = 0;
	if (tree->GetAlias("ran_ecalIso03_mu") != 0) {
		ran_ecalIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_ecalIso03_mu"));
		ran_ecalIso03_mu_branch->SetAddress(&ran_ecalIso03_mu_);
	}
	if(ran_ecalIso03_mu_branch == 0 ) {
	cout << "Branch ran_ecalIso03_mu does not exist." << endl;
	}
	ran_hcalD1Iso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalD1Iso03_egamma") != 0) {
		ran_hcalD1Iso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalD1Iso03_egamma"));
		ran_hcalD1Iso03_egamma_branch->SetAddress(&ran_hcalD1Iso03_egamma_);
	}
	if(ran_hcalD1Iso03_egamma_branch == 0 ) {
	cout << "Branch ran_hcalD1Iso03_egamma does not exist." << endl;
	}
	ran_hcalD2Iso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalD2Iso03_egamma") != 0) {
		ran_hcalD2Iso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalD2Iso03_egamma"));
		ran_hcalD2Iso03_egamma_branch->SetAddress(&ran_hcalD2Iso03_egamma_);
	}
	if(ran_hcalD2Iso03_egamma_branch == 0 ) {
	cout << "Branch ran_hcalD2Iso03_egamma does not exist." << endl;
	}
	ran_hcalIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalIso03_egamma") != 0) {
		ran_hcalIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalIso03_egamma"));
		ran_hcalIso03_egamma_branch->SetAddress(&ran_hcalIso03_egamma_);
	}
	if(ran_hcalIso03_egamma_branch == 0 ) {
	cout << "Branch ran_hcalIso03_egamma does not exist." << endl;
	}
	ran_hcalIso03_mu_branch = 0;
	if (tree->GetAlias("ran_hcalIso03_mu") != 0) {
		ran_hcalIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_hcalIso03_mu"));
		ran_hcalIso03_mu_branch->SetAddress(&ran_hcalIso03_mu_);
	}
	if(ran_hcalIso03_mu_branch == 0 ) {
	cout << "Branch ran_hcalIso03_mu does not exist." << endl;
	}
	ran_hoIso03_mu_branch = 0;
	if (tree->GetAlias("ran_hoIso03_mu") != 0) {
		ran_hoIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_hoIso03_mu"));
		ran_hoIso03_mu_branch->SetAddress(&ran_hoIso03_mu_);
	}
	if(ran_hoIso03_mu_branch == 0 ) {
	cout << "Branch ran_hoIso03_mu does not exist." << endl;
	}
	ran_towerEmEt_branch = 0;
	if (tree->GetAlias("ran_towerEmEt") != 0) {
		ran_towerEmEt_branch = tree->GetBranch(tree->GetAlias("ran_towerEmEt"));
		ran_towerEmEt_branch->SetAddress(&ran_towerEmEt_);
	}
	if(ran_towerEmEt_branch == 0 ) {
	cout << "Branch ran_towerEmEt does not exist." << endl;
	}
	ran_towerHadEt_branch = 0;
	if (tree->GetAlias("ran_towerHadEt") != 0) {
		ran_towerHadEt_branch = tree->GetBranch(tree->GetAlias("ran_towerHadEt"));
		ran_towerHadEt_branch->SetAddress(&ran_towerHadEt_);
	}
	if(ran_towerHadEt_branch == 0 ) {
	cout << "Branch ran_towerHadEt does not exist." << endl;
	}
	ran_trkIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_trkIso03_egamma") != 0) {
		ran_trkIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_trkIso03_egamma"));
		ran_trkIso03_egamma_branch->SetAddress(&ran_trkIso03_egamma_);
	}
	if(ran_trkIso03_egamma_branch == 0 ) {
	cout << "Branch ran_trkIso03_egamma does not exist." << endl;
	}
	ran_trkIso03_mu_branch = 0;
	if (tree->GetAlias("ran_trkIso03_mu") != 0) {
		ran_trkIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_trkIso03_mu"));
		ran_trkIso03_mu_branch->SetAddress(&ran_trkIso03_mu_);
	}
	if(ran_trkIso03_mu_branch == 0 ) {
	cout << "Branch ran_trkIso03_mu does not exist." << endl;
	}
	scs_clustersSize_branch = 0;
	if (tree->GetAlias("scs_clustersSize") != 0) {
		scs_clustersSize_branch = tree->GetBranch(tree->GetAlias("scs_clustersSize"));
		scs_clustersSize_branch->SetAddress(&scs_clustersSize_);
	}
	if(scs_clustersSize_branch == 0 ) {
	cout << "Branch scs_clustersSize does not exist." << endl;
	}
	scs_crystalsSize_branch = 0;
	if (tree->GetAlias("scs_crystalsSize") != 0) {
		scs_crystalsSize_branch = tree->GetBranch(tree->GetAlias("scs_crystalsSize"));
		scs_crystalsSize_branch->SetAddress(&scs_crystalsSize_);
	}
	if(scs_crystalsSize_branch == 0 ) {
	cout << "Branch scs_crystalsSize does not exist." << endl;
	}
	scs_e1x3_branch = 0;
	if (tree->GetAlias("scs_e1x3") != 0) {
		scs_e1x3_branch = tree->GetBranch(tree->GetAlias("scs_e1x3"));
		scs_e1x3_branch->SetAddress(&scs_e1x3_);
	}
	if(scs_e1x3_branch == 0 ) {
	cout << "Branch scs_e1x3 does not exist." << endl;
	}
	scs_e1x5_branch = 0;
	if (tree->GetAlias("scs_e1x5") != 0) {
		scs_e1x5_branch = tree->GetBranch(tree->GetAlias("scs_e1x5"));
		scs_e1x5_branch->SetAddress(&scs_e1x5_);
	}
	if(scs_e1x5_branch == 0 ) {
	cout << "Branch scs_e1x5 does not exist." << endl;
	}
	scs_e2nd_branch = 0;
	if (tree->GetAlias("scs_e2nd") != 0) {
		scs_e2nd_branch = tree->GetBranch(tree->GetAlias("scs_e2nd"));
		scs_e2nd_branch->SetAddress(&scs_e2nd_);
	}
	if(scs_e2nd_branch == 0 ) {
	cout << "Branch scs_e2nd does not exist." << endl;
	}
	scs_e2x2_branch = 0;
	if (tree->GetAlias("scs_e2x2") != 0) {
		scs_e2x2_branch = tree->GetBranch(tree->GetAlias("scs_e2x2"));
		scs_e2x2_branch->SetAddress(&scs_e2x2_);
	}
	if(scs_e2x2_branch == 0 ) {
	cout << "Branch scs_e2x2 does not exist." << endl;
	}
	scs_e2x5Max_branch = 0;
	if (tree->GetAlias("scs_e2x5Max") != 0) {
		scs_e2x5Max_branch = tree->GetBranch(tree->GetAlias("scs_e2x5Max"));
		scs_e2x5Max_branch->SetAddress(&scs_e2x5Max_);
	}
	if(scs_e2x5Max_branch == 0 ) {
	cout << "Branch scs_e2x5Max does not exist." << endl;
	}
	scs_e3x1_branch = 0;
	if (tree->GetAlias("scs_e3x1") != 0) {
		scs_e3x1_branch = tree->GetBranch(tree->GetAlias("scs_e3x1"));
		scs_e3x1_branch->SetAddress(&scs_e3x1_);
	}
	if(scs_e3x1_branch == 0 ) {
	cout << "Branch scs_e3x1 does not exist." << endl;
	}
	scs_e3x2_branch = 0;
	if (tree->GetAlias("scs_e3x2") != 0) {
		scs_e3x2_branch = tree->GetBranch(tree->GetAlias("scs_e3x2"));
		scs_e3x2_branch->SetAddress(&scs_e3x2_);
	}
	if(scs_e3x2_branch == 0 ) {
	cout << "Branch scs_e3x2 does not exist." << endl;
	}
	scs_e3x3_branch = 0;
	if (tree->GetAlias("scs_e3x3") != 0) {
		scs_e3x3_branch = tree->GetBranch(tree->GetAlias("scs_e3x3"));
		scs_e3x3_branch->SetAddress(&scs_e3x3_);
	}
	if(scs_e3x3_branch == 0 ) {
	cout << "Branch scs_e3x3 does not exist." << endl;
	}
	scs_e4x4_branch = 0;
	if (tree->GetAlias("scs_e4x4") != 0) {
		scs_e4x4_branch = tree->GetBranch(tree->GetAlias("scs_e4x4"));
		scs_e4x4_branch->SetAddress(&scs_e4x4_);
	}
	if(scs_e4x4_branch == 0 ) {
	cout << "Branch scs_e4x4 does not exist." << endl;
	}
	scs_e5x5_branch = 0;
	if (tree->GetAlias("scs_e5x5") != 0) {
		scs_e5x5_branch = tree->GetBranch(tree->GetAlias("scs_e5x5"));
		scs_e5x5_branch->SetAddress(&scs_e5x5_);
	}
	if(scs_e5x5_branch == 0 ) {
	cout << "Branch scs_e5x5 does not exist." << endl;
	}
	scs_eMax_branch = 0;
	if (tree->GetAlias("scs_eMax") != 0) {
		scs_eMax_branch = tree->GetBranch(tree->GetAlias("scs_eMax"));
		scs_eMax_branch->SetAddress(&scs_eMax_);
	}
	if(scs_eMax_branch == 0 ) {
	cout << "Branch scs_eMax does not exist." << endl;
	}
	scs_eSeed_branch = 0;
	if (tree->GetAlias("scs_eSeed") != 0) {
		scs_eSeed_branch = tree->GetBranch(tree->GetAlias("scs_eSeed"));
		scs_eSeed_branch->SetAddress(&scs_eSeed_);
	}
	if(scs_eSeed_branch == 0 ) {
	cout << "Branch scs_eSeed does not exist." << endl;
	}
	scs_energy_branch = 0;
	if (tree->GetAlias("scs_energy") != 0) {
		scs_energy_branch = tree->GetBranch(tree->GetAlias("scs_energy"));
		scs_energy_branch->SetAddress(&scs_energy_);
	}
	if(scs_energy_branch == 0 ) {
	cout << "Branch scs_energy does not exist." << endl;
	}
	scs_eta_branch = 0;
	if (tree->GetAlias("scs_eta") != 0) {
		scs_eta_branch = tree->GetBranch(tree->GetAlias("scs_eta"));
		scs_eta_branch->SetAddress(&scs_eta_);
	}
	if(scs_eta_branch == 0 ) {
	cout << "Branch scs_eta does not exist." << endl;
	}
	scs_hoe_branch = 0;
	if (tree->GetAlias("scs_hoe") != 0) {
		scs_hoe_branch = tree->GetBranch(tree->GetAlias("scs_hoe"));
		scs_hoe_branch->SetAddress(&scs_hoe_);
	}
	if(scs_hoe_branch == 0 ) {
	cout << "Branch scs_hoe does not exist." << endl;
	}
	scs_phi_branch = 0;
	if (tree->GetAlias("scs_phi") != 0) {
		scs_phi_branch = tree->GetBranch(tree->GetAlias("scs_phi"));
		scs_phi_branch->SetAddress(&scs_phi_);
	}
	if(scs_phi_branch == 0 ) {
	cout << "Branch scs_phi does not exist." << endl;
	}
	scs_preshowerEnergy_branch = 0;
	if (tree->GetAlias("scs_preshowerEnergy") != 0) {
		scs_preshowerEnergy_branch = tree->GetBranch(tree->GetAlias("scs_preshowerEnergy"));
		scs_preshowerEnergy_branch->SetAddress(&scs_preshowerEnergy_);
	}
	if(scs_preshowerEnergy_branch == 0 ) {
	cout << "Branch scs_preshowerEnergy does not exist." << endl;
	}
	scs_rawEnergy_branch = 0;
	if (tree->GetAlias("scs_rawEnergy") != 0) {
		scs_rawEnergy_branch = tree->GetBranch(tree->GetAlias("scs_rawEnergy"));
		scs_rawEnergy_branch->SetAddress(&scs_rawEnergy_);
	}
	if(scs_rawEnergy_branch == 0 ) {
	cout << "Branch scs_rawEnergy does not exist." << endl;
	}
	scs_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("scs_sigmaEtaEta") != 0) {
		scs_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("scs_sigmaEtaEta"));
		scs_sigmaEtaEta_branch->SetAddress(&scs_sigmaEtaEta_);
	}
	if(scs_sigmaEtaEta_branch == 0 ) {
	cout << "Branch scs_sigmaEtaEta does not exist." << endl;
	}
	scs_sigmaEtaPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaEtaPhi") != 0) {
		scs_sigmaEtaPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaEtaPhi"));
		scs_sigmaEtaPhi_branch->SetAddress(&scs_sigmaEtaPhi_);
	}
	if(scs_sigmaEtaPhi_branch == 0 ) {
	cout << "Branch scs_sigmaEtaPhi does not exist." << endl;
	}
	scs_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("scs_sigmaIEtaIEta") != 0) {
		scs_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIEtaIEta"));
		scs_sigmaIEtaIEta_branch->SetAddress(&scs_sigmaIEtaIEta_);
	}
	if(scs_sigmaIEtaIEta_branch == 0 ) {
	cout << "Branch scs_sigmaIEtaIEta does not exist." << endl;
	}
	scs_sigmaIEtaIPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaIEtaIPhi") != 0) {
		scs_sigmaIEtaIPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIEtaIPhi"));
		scs_sigmaIEtaIPhi_branch->SetAddress(&scs_sigmaIEtaIPhi_);
	}
	if(scs_sigmaIEtaIPhi_branch == 0 ) {
	cout << "Branch scs_sigmaIEtaIPhi does not exist." << endl;
	}
	scs_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaIPhiIPhi") != 0) {
		scs_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIPhiIPhi"));
		scs_sigmaIPhiIPhi_branch->SetAddress(&scs_sigmaIPhiIPhi_);
	}
	if(scs_sigmaIPhiIPhi_branch == 0 ) {
	cout << "Branch scs_sigmaIPhiIPhi does not exist." << endl;
	}
	scs_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaPhiPhi") != 0) {
		scs_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaPhiPhi"));
		scs_sigmaPhiPhi_branch->SetAddress(&scs_sigmaPhiPhi_);
	}
	if(scs_sigmaPhiPhi_branch == 0 ) {
	cout << "Branch scs_sigmaPhiPhi does not exist." << endl;
	}
	scs_timeSeed_branch = 0;
	if (tree->GetAlias("scs_timeSeed") != 0) {
		scs_timeSeed_branch = tree->GetBranch(tree->GetAlias("scs_timeSeed"));
		scs_timeSeed_branch->SetAddress(&scs_timeSeed_);
	}
	if(scs_timeSeed_branch == 0 ) {
	cout << "Branch scs_timeSeed does not exist." << endl;
	}
	scjets_approximatefHPD_branch = 0;
	if (tree->GetAlias("scjets_approximatefHPD") != 0) {
		scjets_approximatefHPD_branch = tree->GetBranch(tree->GetAlias("scjets_approximatefHPD"));
		scjets_approximatefHPD_branch->SetAddress(&scjets_approximatefHPD_);
	}
	if(scjets_approximatefHPD_branch == 0 ) {
	cout << "Branch scjets_approximatefHPD does not exist." << endl;
	}
	scjets_approximatefRBX_branch = 0;
	if (tree->GetAlias("scjets_approximatefRBX") != 0) {
		scjets_approximatefRBX_branch = tree->GetBranch(tree->GetAlias("scjets_approximatefRBX"));
		scjets_approximatefRBX_branch->SetAddress(&scjets_approximatefRBX_);
	}
	if(scjets_approximatefRBX_branch == 0 ) {
	cout << "Branch scjets_approximatefRBX does not exist." << endl;
	}
	scjets_cor_branch = 0;
	if (tree->GetAlias("scjets_cor") != 0) {
		scjets_cor_branch = tree->GetBranch(tree->GetAlias("scjets_cor"));
		scjets_cor_branch->SetAddress(&scjets_cor_);
	}
	if(scjets_cor_branch == 0 ) {
	cout << "Branch scjets_cor does not exist." << endl;
	}
	scjets_emFrac_branch = 0;
	if (tree->GetAlias("scjets_emFrac") != 0) {
		scjets_emFrac_branch = tree->GetBranch(tree->GetAlias("scjets_emFrac"));
		scjets_emFrac_branch->SetAddress(&scjets_emFrac_);
	}
	if(scjets_emFrac_branch == 0 ) {
	cout << "Branch scjets_emFrac does not exist." << endl;
	}
	scjets_fHPD_branch = 0;
	if (tree->GetAlias("scjets_fHPD") != 0) {
		scjets_fHPD_branch = tree->GetBranch(tree->GetAlias("scjets_fHPD"));
		scjets_fHPD_branch->SetAddress(&scjets_fHPD_);
	}
	if(scjets_fHPD_branch == 0 ) {
	cout << "Branch scjets_fHPD does not exist." << endl;
	}
	scjets_fRBX_branch = 0;
	if (tree->GetAlias("scjets_fRBX") != 0) {
		scjets_fRBX_branch = tree->GetBranch(tree->GetAlias("scjets_fRBX"));
		scjets_fRBX_branch->SetAddress(&scjets_fRBX_);
	}
	if(scjets_fRBX_branch == 0 ) {
	cout << "Branch scjets_fRBX does not exist." << endl;
	}
	scjets_fSubDetector1_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector1") != 0) {
		scjets_fSubDetector1_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector1"));
		scjets_fSubDetector1_branch->SetAddress(&scjets_fSubDetector1_);
	}
	if(scjets_fSubDetector1_branch == 0 ) {
	cout << "Branch scjets_fSubDetector1 does not exist." << endl;
	}
	scjets_fSubDetector2_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector2") != 0) {
		scjets_fSubDetector2_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector2"));
		scjets_fSubDetector2_branch->SetAddress(&scjets_fSubDetector2_);
	}
	if(scjets_fSubDetector2_branch == 0 ) {
	cout << "Branch scjets_fSubDetector2 does not exist." << endl;
	}
	scjets_fSubDetector3_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector3") != 0) {
		scjets_fSubDetector3_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector3"));
		scjets_fSubDetector3_branch->SetAddress(&scjets_fSubDetector3_);
	}
	if(scjets_fSubDetector3_branch == 0 ) {
	cout << "Branch scjets_fSubDetector3 does not exist." << endl;
	}
	scjets_fSubDetector4_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector4") != 0) {
		scjets_fSubDetector4_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector4"));
		scjets_fSubDetector4_branch->SetAddress(&scjets_fSubDetector4_);
	}
	if(scjets_fSubDetector4_branch == 0 ) {
	cout << "Branch scjets_fSubDetector4 does not exist." << endl;
	}
	scjets_hitsInN90_branch = 0;
	if (tree->GetAlias("scjets_hitsInN90") != 0) {
		scjets_hitsInN90_branch = tree->GetBranch(tree->GetAlias("scjets_hitsInN90"));
		scjets_hitsInN90_branch->SetAddress(&scjets_hitsInN90_);
	}
	if(scjets_hitsInN90_branch == 0 ) {
	cout << "Branch scjets_hitsInN90 does not exist." << endl;
	}
	scjets_n90Hits_branch = 0;
	if (tree->GetAlias("scjets_n90Hits") != 0) {
		scjets_n90Hits_branch = tree->GetBranch(tree->GetAlias("scjets_n90Hits"));
		scjets_n90Hits_branch->SetAddress(&scjets_n90Hits_);
	}
	if(scjets_n90Hits_branch == 0 ) {
	cout << "Branch scjets_n90Hits does not exist." << endl;
	}
	scjets_nECALTowers_branch = 0;
	if (tree->GetAlias("scjets_nECALTowers") != 0) {
		scjets_nECALTowers_branch = tree->GetBranch(tree->GetAlias("scjets_nECALTowers"));
		scjets_nECALTowers_branch->SetAddress(&scjets_nECALTowers_);
	}
	if(scjets_nECALTowers_branch == 0 ) {
	cout << "Branch scjets_nECALTowers does not exist." << endl;
	}
	scjets_nHCALTowers_branch = 0;
	if (tree->GetAlias("scjets_nHCALTowers") != 0) {
		scjets_nHCALTowers_branch = tree->GetBranch(tree->GetAlias("scjets_nHCALTowers"));
		scjets_nHCALTowers_branch->SetAddress(&scjets_nHCALTowers_);
	}
	if(scjets_nHCALTowers_branch == 0 ) {
	cout << "Branch scjets_nHCALTowers does not exist." << endl;
	}
	scjets_restrictedEMF_branch = 0;
	if (tree->GetAlias("scjets_restrictedEMF") != 0) {
		scjets_restrictedEMF_branch = tree->GetBranch(tree->GetAlias("scjets_restrictedEMF"));
		scjets_restrictedEMF_branch->SetAddress(&scjets_restrictedEMF_);
	}
	if(scjets_restrictedEMF_branch == 0 ) {
	cout << "Branch scjets_restrictedEMF does not exist." << endl;
	}
	mus_tcmet_deltax_branch = 0;
	if (tree->GetAlias("mus_tcmet_deltax") != 0) {
		mus_tcmet_deltax_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_deltax"));
		mus_tcmet_deltax_branch->SetAddress(&mus_tcmet_deltax_);
	}
	if(mus_tcmet_deltax_branch == 0 ) {
	cout << "Branch mus_tcmet_deltax does not exist." << endl;
	}
	mus_tcmet_deltay_branch = 0;
	if (tree->GetAlias("mus_tcmet_deltay") != 0) {
		mus_tcmet_deltay_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_deltay"));
		mus_tcmet_deltay_branch->SetAddress(&mus_tcmet_deltay_);
	}
	if(mus_tcmet_deltay_branch == 0 ) {
	cout << "Branch mus_tcmet_deltay does not exist." << endl;
	}
	trks_chi2_branch = 0;
	if (tree->GetAlias("trks_chi2") != 0) {
		trks_chi2_branch = tree->GetBranch(tree->GetAlias("trks_chi2"));
		trks_chi2_branch->SetAddress(&trks_chi2_);
	}
	if(trks_chi2_branch == 0 ) {
	cout << "Branch trks_chi2 does not exist." << endl;
	}
	trks_d0_branch = 0;
	if (tree->GetAlias("trks_d0") != 0) {
		trks_d0_branch = tree->GetBranch(tree->GetAlias("trks_d0"));
		trks_d0_branch->SetAddress(&trks_d0_);
	}
	if(trks_d0_branch == 0 ) {
	cout << "Branch trks_d0 does not exist." << endl;
	}
	trks_d0Err_branch = 0;
	if (tree->GetAlias("trks_d0Err") != 0) {
		trks_d0Err_branch = tree->GetBranch(tree->GetAlias("trks_d0Err"));
		trks_d0Err_branch->SetAddress(&trks_d0Err_);
	}
	if(trks_d0Err_branch == 0 ) {
	cout << "Branch trks_d0Err does not exist." << endl;
	}
	trks_d0corr_branch = 0;
	if (tree->GetAlias("trks_d0corr") != 0) {
		trks_d0corr_branch = tree->GetBranch(tree->GetAlias("trks_d0corr"));
		trks_d0corr_branch->SetAddress(&trks_d0corr_);
	}
	if(trks_d0corr_branch == 0 ) {
	cout << "Branch trks_d0corr does not exist." << endl;
	}
	trks_d0corrPhi_branch = 0;
	if (tree->GetAlias("trks_d0corrPhi") != 0) {
		trks_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("trks_d0corrPhi"));
		trks_d0corrPhi_branch->SetAddress(&trks_d0corrPhi_);
	}
	if(trks_d0corrPhi_branch == 0 ) {
	cout << "Branch trks_d0corrPhi does not exist." << endl;
	}
	trks_d0phiCov_branch = 0;
	if (tree->GetAlias("trks_d0phiCov") != 0) {
		trks_d0phiCov_branch = tree->GetBranch(tree->GetAlias("trks_d0phiCov"));
		trks_d0phiCov_branch->SetAddress(&trks_d0phiCov_);
	}
	if(trks_d0phiCov_branch == 0 ) {
	cout << "Branch trks_d0phiCov does not exist." << endl;
	}
	trks_etaErr_branch = 0;
	if (tree->GetAlias("trks_etaErr") != 0) {
		trks_etaErr_branch = tree->GetBranch(tree->GetAlias("trks_etaErr"));
		trks_etaErr_branch->SetAddress(&trks_etaErr_);
	}
	if(trks_etaErr_branch == 0 ) {
	cout << "Branch trks_etaErr does not exist." << endl;
	}
	trks_layer1_charge_branch = 0;
	if (tree->GetAlias("trks_layer1_charge") != 0) {
		trks_layer1_charge_branch = tree->GetBranch(tree->GetAlias("trks_layer1_charge"));
		trks_layer1_charge_branch->SetAddress(&trks_layer1_charge_);
	}
	if(trks_layer1_charge_branch == 0 ) {
	cout << "Branch trks_layer1_charge does not exist." << endl;
	}
	trks_ndof_branch = 0;
	if (tree->GetAlias("trks_ndof") != 0) {
		trks_ndof_branch = tree->GetBranch(tree->GetAlias("trks_ndof"));
		trks_ndof_branch->SetAddress(&trks_ndof_);
	}
	if(trks_ndof_branch == 0 ) {
	cout << "Branch trks_ndof does not exist." << endl;
	}
	trks_phiErr_branch = 0;
	if (tree->GetAlias("trks_phiErr") != 0) {
		trks_phiErr_branch = tree->GetBranch(tree->GetAlias("trks_phiErr"));
		trks_phiErr_branch->SetAddress(&trks_phiErr_);
	}
	if(trks_phiErr_branch == 0 ) {
	cout << "Branch trks_phiErr does not exist." << endl;
	}
	trks_ptErr_branch = 0;
	if (tree->GetAlias("trks_ptErr") != 0) {
		trks_ptErr_branch = tree->GetBranch(tree->GetAlias("trks_ptErr"));
		trks_ptErr_branch->SetAddress(&trks_ptErr_);
	}
	if(trks_ptErr_branch == 0 ) {
	cout << "Branch trks_ptErr does not exist." << endl;
	}
	trks_z0_branch = 0;
	if (tree->GetAlias("trks_z0") != 0) {
		trks_z0_branch = tree->GetBranch(tree->GetAlias("trks_z0"));
		trks_z0_branch->SetAddress(&trks_z0_);
	}
	if(trks_z0_branch == 0 ) {
	cout << "Branch trks_z0 does not exist." << endl;
	}
	trks_z0Err_branch = 0;
	if (tree->GetAlias("trks_z0Err") != 0) {
		trks_z0Err_branch = tree->GetBranch(tree->GetAlias("trks_z0Err"));
		trks_z0Err_branch->SetAddress(&trks_z0Err_);
	}
	if(trks_z0Err_branch == 0 ) {
	cout << "Branch trks_z0Err does not exist." << endl;
	}
	trks_z0corr_branch = 0;
	if (tree->GetAlias("trks_z0corr") != 0) {
		trks_z0corr_branch = tree->GetBranch(tree->GetAlias("trks_z0corr"));
		trks_z0corr_branch->SetAddress(&trks_z0corr_);
	}
	if(trks_z0corr_branch == 0 ) {
	cout << "Branch trks_z0corr does not exist." << endl;
	}
	trks_d0Errvtx_branch = 0;
	if (tree->GetAlias("trks_d0Errvtx") != 0) {
		trks_d0Errvtx_branch = tree->GetBranch(tree->GetAlias("trks_d0Errvtx"));
		trks_d0Errvtx_branch->SetAddress(&trks_d0Errvtx_);
	}
	if(trks_d0Errvtx_branch == 0 ) {
	cout << "Branch trks_d0Errvtx does not exist." << endl;
	}
	trks_d0vtx_branch = 0;
	if (tree->GetAlias("trks_d0vtx") != 0) {
		trks_d0vtx_branch = tree->GetBranch(tree->GetAlias("trks_d0vtx"));
		trks_d0vtx_branch->SetAddress(&trks_d0vtx_);
	}
	if(trks_d0vtx_branch == 0 ) {
	cout << "Branch trks_d0vtx does not exist." << endl;
	}
	vtxs_chi2_branch = 0;
	if (tree->GetAlias("vtxs_chi2") != 0) {
		vtxs_chi2_branch = tree->GetBranch(tree->GetAlias("vtxs_chi2"));
		vtxs_chi2_branch->SetAddress(&vtxs_chi2_);
	}
	if(vtxs_chi2_branch == 0 ) {
	cout << "Branch vtxs_chi2 does not exist." << endl;
	}
	vtxs_ndof_branch = 0;
	if (tree->GetAlias("vtxs_ndof") != 0) {
		vtxs_ndof_branch = tree->GetBranch(tree->GetAlias("vtxs_ndof"));
		vtxs_ndof_branch->SetAddress(&vtxs_ndof_);
	}
	if(vtxs_ndof_branch == 0 ) {
	cout << "Branch vtxs_ndof does not exist." << endl;
	}
	vtxs_sumpt_branch = 0;
	if (tree->GetAlias("vtxs_sumpt") != 0) {
		vtxs_sumpt_branch = tree->GetBranch(tree->GetAlias("vtxs_sumpt"));
		vtxs_sumpt_branch->SetAddress(&vtxs_sumpt_);
	}
	if(vtxs_sumpt_branch == 0 ) {
	cout << "Branch vtxs_sumpt does not exist." << endl;
	}
	vtxs_xError_branch = 0;
	if (tree->GetAlias("vtxs_xError") != 0) {
		vtxs_xError_branch = tree->GetBranch(tree->GetAlias("vtxs_xError"));
		vtxs_xError_branch->SetAddress(&vtxs_xError_);
	}
	if(vtxs_xError_branch == 0 ) {
	cout << "Branch vtxs_xError does not exist." << endl;
	}
	vtxs_yError_branch = 0;
	if (tree->GetAlias("vtxs_yError") != 0) {
		vtxs_yError_branch = tree->GetBranch(tree->GetAlias("vtxs_yError"));
		vtxs_yError_branch->SetAddress(&vtxs_yError_);
	}
	if(vtxs_yError_branch == 0 ) {
	cout << "Branch vtxs_yError does not exist." << endl;
	}
	vtxs_zError_branch = 0;
	if (tree->GetAlias("vtxs_zError") != 0) {
		vtxs_zError_branch = tree->GetBranch(tree->GetAlias("vtxs_zError"));
		vtxs_zError_branch->SetAddress(&vtxs_zError_);
	}
	if(vtxs_zError_branch == 0 ) {
	cout << "Branch vtxs_zError does not exist." << endl;
	}
	twrs_em3x3_branch = 0;
	if (tree->GetAlias("twrs_em3x3") != 0) {
		twrs_em3x3_branch = tree->GetBranch(tree->GetAlias("twrs_em3x3"));
		twrs_em3x3_branch->SetAddress(&twrs_em3x3_);
	}
	if(twrs_em3x3_branch == 0 ) {
	cout << "Branch twrs_em3x3 does not exist." << endl;
	}
	twrs_em5x5_branch = 0;
	if (tree->GetAlias("twrs_em5x5") != 0) {
		twrs_em5x5_branch = tree->GetBranch(tree->GetAlias("twrs_em5x5"));
		twrs_em5x5_branch->SetAddress(&twrs_em5x5_);
	}
	if(twrs_em5x5_branch == 0 ) {
	cout << "Branch twrs_em5x5 does not exist." << endl;
	}
	twrs_emSwiss_branch = 0;
	if (tree->GetAlias("twrs_emSwiss") != 0) {
		twrs_emSwiss_branch = tree->GetBranch(tree->GetAlias("twrs_emSwiss"));
		twrs_emSwiss_branch->SetAddress(&twrs_emSwiss_);
	}
	if(twrs_emSwiss_branch == 0 ) {
	cout << "Branch twrs_emSwiss does not exist." << endl;
	}
	twrs_emThresh_branch = 0;
	if (tree->GetAlias("twrs_emThresh") != 0) {
		twrs_emThresh_branch = tree->GetBranch(tree->GetAlias("twrs_emThresh"));
		twrs_emThresh_branch->SetAddress(&twrs_emThresh_);
	}
	if(twrs_emThresh_branch == 0 ) {
	cout << "Branch twrs_emThresh does not exist." << endl;
	}
	twrs_emThreshChi2_branch = 0;
	if (tree->GetAlias("twrs_emThreshChi2") != 0) {
		twrs_emThreshChi2_branch = tree->GetBranch(tree->GetAlias("twrs_emThreshChi2"));
		twrs_emThreshChi2_branch->SetAddress(&twrs_emThreshChi2_);
	}
	if(twrs_emThreshChi2_branch == 0 ) {
	cout << "Branch twrs_emThreshChi2 does not exist." << endl;
	}
	twrs_emThreshEta_branch = 0;
	if (tree->GetAlias("twrs_emThreshEta") != 0) {
		twrs_emThreshEta_branch = tree->GetBranch(tree->GetAlias("twrs_emThreshEta"));
		twrs_emThreshEta_branch->SetAddress(&twrs_emThreshEta_);
	}
	if(twrs_emThreshEta_branch == 0 ) {
	cout << "Branch twrs_emThreshEta does not exist." << endl;
	}
	twrs_emThreshTime_branch = 0;
	if (tree->GetAlias("twrs_emThreshTime") != 0) {
		twrs_emThreshTime_branch = tree->GetBranch(tree->GetAlias("twrs_emThreshTime"));
		twrs_emThreshTime_branch->SetAddress(&twrs_emThreshTime_);
	}
	if(twrs_emThreshTime_branch == 0 ) {
	cout << "Branch twrs_emThreshTime does not exist." << endl;
	}
	twrsUncleaned_em3x3_branch = 0;
	if (tree->GetAlias("twrsUncleaned_em3x3") != 0) {
		twrsUncleaned_em3x3_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_em3x3"));
		twrsUncleaned_em3x3_branch->SetAddress(&twrsUncleaned_em3x3_);
	}
	if(twrsUncleaned_em3x3_branch == 0 ) {
	cout << "Branch twrsUncleaned_em3x3 does not exist." << endl;
	}
	twrsUncleaned_em5x5_branch = 0;
	if (tree->GetAlias("twrsUncleaned_em5x5") != 0) {
		twrsUncleaned_em5x5_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_em5x5"));
		twrsUncleaned_em5x5_branch->SetAddress(&twrsUncleaned_em5x5_);
	}
	if(twrsUncleaned_em5x5_branch == 0 ) {
	cout << "Branch twrsUncleaned_em5x5 does not exist." << endl;
	}
	twrsUncleaned_emSwiss_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emSwiss") != 0) {
		twrsUncleaned_emSwiss_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emSwiss"));
		twrsUncleaned_emSwiss_branch->SetAddress(&twrsUncleaned_emSwiss_);
	}
	if(twrsUncleaned_emSwiss_branch == 0 ) {
	cout << "Branch twrsUncleaned_emSwiss does not exist." << endl;
	}
	twrsUncleaned_emThresh_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThresh") != 0) {
		twrsUncleaned_emThresh_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThresh"));
		twrsUncleaned_emThresh_branch->SetAddress(&twrsUncleaned_emThresh_);
	}
	if(twrsUncleaned_emThresh_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThresh does not exist." << endl;
	}
	twrsUncleaned_emThreshChi2_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThreshChi2") != 0) {
		twrsUncleaned_emThreshChi2_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThreshChi2"));
		twrsUncleaned_emThreshChi2_branch->SetAddress(&twrsUncleaned_emThreshChi2_);
	}
	if(twrsUncleaned_emThreshChi2_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThreshChi2 does not exist." << endl;
	}
	twrsUncleaned_emThreshEta_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThreshEta") != 0) {
		twrsUncleaned_emThreshEta_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThreshEta"));
		twrsUncleaned_emThreshEta_branch->SetAddress(&twrsUncleaned_emThreshEta_);
	}
	if(twrsUncleaned_emThreshEta_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThreshEta does not exist." << endl;
	}
	twrsUncleaned_emThreshTime_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThreshTime") != 0) {
		twrsUncleaned_emThreshTime_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThreshTime"));
		twrsUncleaned_emThreshTime_branch->SetAddress(&twrsUncleaned_emThreshTime_);
	}
	if(twrsUncleaned_emThreshTime_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThreshTime does not exist." << endl;
	}
	vtxs_covMatrix_branch = 0;
	if (tree->GetAlias("vtxs_covMatrix") != 0) {
		vtxs_covMatrix_branch = tree->GetBranch(tree->GetAlias("vtxs_covMatrix"));
		vtxs_covMatrix_branch->SetAddress(&vtxs_covMatrix_);
	}
	if(vtxs_covMatrix_branch == 0 ) {
	cout << "Branch vtxs_covMatrix does not exist." << endl;
	}
	evt_cscLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_cscLooseHaloId") != 0) {
		evt_cscLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_cscLooseHaloId"));
		evt_cscLooseHaloId_branch->SetAddress(&evt_cscLooseHaloId_);
	}
	if(evt_cscLooseHaloId_branch == 0 ) {
	cout << "Branch evt_cscLooseHaloId does not exist." << endl;
	}
	evt_cscTightHaloId_branch = 0;
	if (tree->GetAlias("evt_cscTightHaloId") != 0) {
		evt_cscTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_cscTightHaloId"));
		evt_cscTightHaloId_branch->SetAddress(&evt_cscTightHaloId_);
	}
	if(evt_cscTightHaloId_branch == 0 ) {
	cout << "Branch evt_cscTightHaloId does not exist." << endl;
	}
	evt_ecalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_ecalLooseHaloId") != 0) {
		evt_ecalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_ecalLooseHaloId"));
		evt_ecalLooseHaloId_branch->SetAddress(&evt_ecalLooseHaloId_);
	}
	if(evt_ecalLooseHaloId_branch == 0 ) {
	cout << "Branch evt_ecalLooseHaloId does not exist." << endl;
	}
	evt_ecalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_ecalTightHaloId") != 0) {
		evt_ecalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_ecalTightHaloId"));
		evt_ecalTightHaloId_branch->SetAddress(&evt_ecalTightHaloId_);
	}
	if(evt_ecalTightHaloId_branch == 0 ) {
	cout << "Branch evt_ecalTightHaloId does not exist." << endl;
	}
	evt_extremeTightHaloId_branch = 0;
	if (tree->GetAlias("evt_extremeTightHaloId") != 0) {
		evt_extremeTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_extremeTightHaloId"));
		evt_extremeTightHaloId_branch->SetAddress(&evt_extremeTightHaloId_);
	}
	if(evt_extremeTightHaloId_branch == 0 ) {
	cout << "Branch evt_extremeTightHaloId does not exist." << endl;
	}
	evt_globalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_globalLooseHaloId") != 0) {
		evt_globalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_globalLooseHaloId"));
		evt_globalLooseHaloId_branch->SetAddress(&evt_globalLooseHaloId_);
	}
	if(evt_globalLooseHaloId_branch == 0 ) {
	cout << "Branch evt_globalLooseHaloId does not exist." << endl;
	}
	evt_globalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_globalTightHaloId") != 0) {
		evt_globalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_globalTightHaloId"));
		evt_globalTightHaloId_branch->SetAddress(&evt_globalTightHaloId_);
	}
	if(evt_globalTightHaloId_branch == 0 ) {
	cout << "Branch evt_globalTightHaloId does not exist." << endl;
	}
	evt_hcalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_hcalLooseHaloId") != 0) {
		evt_hcalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_hcalLooseHaloId"));
		evt_hcalLooseHaloId_branch->SetAddress(&evt_hcalLooseHaloId_);
	}
	if(evt_hcalLooseHaloId_branch == 0 ) {
	cout << "Branch evt_hcalLooseHaloId does not exist." << endl;
	}
	evt_hcalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_hcalTightHaloId") != 0) {
		evt_hcalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_hcalTightHaloId"));
		evt_hcalTightHaloId_branch->SetAddress(&evt_hcalTightHaloId_);
	}
	if(evt_hcalTightHaloId_branch == 0 ) {
	cout << "Branch evt_hcalTightHaloId does not exist." << endl;
	}
	evt_looseHaloId_branch = 0;
	if (tree->GetAlias("evt_looseHaloId") != 0) {
		evt_looseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_looseHaloId"));
		evt_looseHaloId_branch->SetAddress(&evt_looseHaloId_);
	}
	if(evt_looseHaloId_branch == 0 ) {
	cout << "Branch evt_looseHaloId does not exist." << endl;
	}
	evt_tightHaloId_branch = 0;
	if (tree->GetAlias("evt_tightHaloId") != 0) {
		evt_tightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_tightHaloId"));
		evt_tightHaloId_branch->SetAddress(&evt_tightHaloId_);
	}
	if(evt_tightHaloId_branch == 0 ) {
	cout << "Branch evt_tightHaloId does not exist." << endl;
	}
	evt_bsType_branch = 0;
	if (tree->GetAlias("evt_bsType") != 0) {
		evt_bsType_branch = tree->GetBranch(tree->GetAlias("evt_bsType"));
		evt_bsType_branch->SetAddress(&evt_bsType_);
	}
	if(evt_bsType_branch == 0 ) {
	cout << "Branch evt_bsType does not exist." << endl;
	}
	evt_bunchCrossing_branch = 0;
	if (tree->GetAlias("evt_bunchCrossing") != 0) {
		evt_bunchCrossing_branch = tree->GetBranch(tree->GetAlias("evt_bunchCrossing"));
		evt_bunchCrossing_branch->SetAddress(&evt_bunchCrossing_);
	}
	if(evt_bunchCrossing_branch == 0 ) {
	cout << "Branch evt_bunchCrossing does not exist." << endl;
	}
	evt_experimentType_branch = 0;
	if (tree->GetAlias("evt_experimentType") != 0) {
		evt_experimentType_branch = tree->GetBranch(tree->GetAlias("evt_experimentType"));
		evt_experimentType_branch->SetAddress(&evt_experimentType_);
	}
	if(evt_experimentType_branch == 0 ) {
	cout << "Branch evt_experimentType does not exist." << endl;
	}
	evt_orbitNumber_branch = 0;
	if (tree->GetAlias("evt_orbitNumber") != 0) {
		evt_orbitNumber_branch = tree->GetBranch(tree->GetAlias("evt_orbitNumber"));
		evt_orbitNumber_branch->SetAddress(&evt_orbitNumber_);
	}
	if(evt_orbitNumber_branch == 0 ) {
	cout << "Branch evt_orbitNumber does not exist." << endl;
	}
	evt_storeNumber_branch = 0;
	if (tree->GetAlias("evt_storeNumber") != 0) {
		evt_storeNumber_branch = tree->GetBranch(tree->GetAlias("evt_storeNumber"));
		evt_storeNumber_branch->SetAddress(&evt_storeNumber_);
	}
	if(evt_storeNumber_branch == 0 ) {
	cout << "Branch evt_storeNumber does not exist." << endl;
	}
	hcalnoise_maxHPDHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxHPDHits") != 0) {
		hcalnoise_maxHPDHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxHPDHits"));
		hcalnoise_maxHPDHits_branch->SetAddress(&hcalnoise_maxHPDHits_);
	}
	if(hcalnoise_maxHPDHits_branch == 0 ) {
	cout << "Branch hcalnoise_maxHPDHits does not exist." << endl;
	}
	hcalnoise_maxRBXHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxRBXHits") != 0) {
		hcalnoise_maxRBXHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxRBXHits"));
		hcalnoise_maxRBXHits_branch->SetAddress(&hcalnoise_maxRBXHits_);
	}
	if(hcalnoise_maxRBXHits_branch == 0 ) {
	cout << "Branch hcalnoise_maxRBXHits does not exist." << endl;
	}
	hcalnoise_maxZeros_branch = 0;
	if (tree->GetAlias("hcalnoise_maxZeros") != 0) {
		hcalnoise_maxZeros_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxZeros"));
		hcalnoise_maxZeros_branch->SetAddress(&hcalnoise_maxZeros_);
	}
	if(hcalnoise_maxZeros_branch == 0 ) {
	cout << "Branch hcalnoise_maxZeros does not exist." << endl;
	}
	hcalnoise_noiseFilterStatus_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseFilterStatus") != 0) {
		hcalnoise_noiseFilterStatus_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseFilterStatus"));
		hcalnoise_noiseFilterStatus_branch->SetAddress(&hcalnoise_noiseFilterStatus_);
	}
	if(hcalnoise_noiseFilterStatus_branch == 0 ) {
	cout << "Branch hcalnoise_noiseFilterStatus does not exist." << endl;
	}
	hcalnoise_noiseType_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseType") != 0) {
		hcalnoise_noiseType_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseType"));
		hcalnoise_noiseType_branch->SetAddress(&hcalnoise_noiseType_);
	}
	if(hcalnoise_noiseType_branch == 0 ) {
	cout << "Branch hcalnoise_noiseType does not exist." << endl;
	}
	hcalnoise_num10GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num10GeVHits") != 0) {
		hcalnoise_num10GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num10GeVHits"));
		hcalnoise_num10GeVHits_branch->SetAddress(&hcalnoise_num10GeVHits_);
	}
	if(hcalnoise_num10GeVHits_branch == 0 ) {
	cout << "Branch hcalnoise_num10GeVHits does not exist." << endl;
	}
	hcalnoise_num25GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num25GeVHits") != 0) {
		hcalnoise_num25GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num25GeVHits"));
		hcalnoise_num25GeVHits_branch->SetAddress(&hcalnoise_num25GeVHits_);
	}
	if(hcalnoise_num25GeVHits_branch == 0 ) {
	cout << "Branch hcalnoise_num25GeVHits does not exist." << endl;
	}
	hcalnoise_numProblematicRBXs_branch = 0;
	if (tree->GetAlias("hcalnoise_numProblematicRBXs") != 0) {
		hcalnoise_numProblematicRBXs_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numProblematicRBXs"));
		hcalnoise_numProblematicRBXs_branch->SetAddress(&hcalnoise_numProblematicRBXs_);
	}
	if(hcalnoise_numProblematicRBXs_branch == 0 ) {
	cout << "Branch hcalnoise_numProblematicRBXs does not exist." << endl;
	}
	hcalnoise_passHighLevelNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passHighLevelNoiseFilter") != 0) {
		hcalnoise_passHighLevelNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passHighLevelNoiseFilter"));
		hcalnoise_passHighLevelNoiseFilter_branch->SetAddress(&hcalnoise_passHighLevelNoiseFilter_);
	}
	if(hcalnoise_passHighLevelNoiseFilter_branch == 0 ) {
	cout << "Branch hcalnoise_passHighLevelNoiseFilter does not exist." << endl;
	}
	hcalnoise_passLooseNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passLooseNoiseFilter") != 0) {
		hcalnoise_passLooseNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passLooseNoiseFilter"));
		hcalnoise_passLooseNoiseFilter_branch->SetAddress(&hcalnoise_passLooseNoiseFilter_);
	}
	if(hcalnoise_passLooseNoiseFilter_branch == 0 ) {
	cout << "Branch hcalnoise_passLooseNoiseFilter does not exist." << endl;
	}
	hcalnoise_passTightNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passTightNoiseFilter") != 0) {
		hcalnoise_passTightNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passTightNoiseFilter"));
		hcalnoise_passTightNoiseFilter_branch->SetAddress(&hcalnoise_passTightNoiseFilter_);
	}
	if(hcalnoise_passTightNoiseFilter_branch == 0 ) {
	cout << "Branch hcalnoise_passTightNoiseFilter does not exist." << endl;
	}
	l1_nemiso_branch = 0;
	if (tree->GetAlias("l1_nemiso") != 0) {
		l1_nemiso_branch = tree->GetBranch(tree->GetAlias("l1_nemiso"));
		l1_nemiso_branch->SetAddress(&l1_nemiso_);
	}
	if(l1_nemiso_branch == 0 ) {
	cout << "Branch l1_nemiso does not exist." << endl;
	}
	l1_nemnoiso_branch = 0;
	if (tree->GetAlias("l1_nemnoiso") != 0) {
		l1_nemnoiso_branch = tree->GetBranch(tree->GetAlias("l1_nemnoiso"));
		l1_nemnoiso_branch->SetAddress(&l1_nemnoiso_);
	}
	if(l1_nemnoiso_branch == 0 ) {
	cout << "Branch l1_nemnoiso does not exist." << endl;
	}
	l1_njetsc_branch = 0;
	if (tree->GetAlias("l1_njetsc") != 0) {
		l1_njetsc_branch = tree->GetBranch(tree->GetAlias("l1_njetsc"));
		l1_njetsc_branch->SetAddress(&l1_njetsc_);
	}
	if(l1_njetsc_branch == 0 ) {
	cout << "Branch l1_njetsc does not exist." << endl;
	}
	l1_njetsf_branch = 0;
	if (tree->GetAlias("l1_njetsf") != 0) {
		l1_njetsf_branch = tree->GetBranch(tree->GetAlias("l1_njetsf"));
		l1_njetsf_branch->SetAddress(&l1_njetsf_);
	}
	if(l1_njetsf_branch == 0 ) {
	cout << "Branch l1_njetsf does not exist." << endl;
	}
	l1_njetst_branch = 0;
	if (tree->GetAlias("l1_njetst") != 0) {
		l1_njetst_branch = tree->GetBranch(tree->GetAlias("l1_njetst"));
		l1_njetst_branch->SetAddress(&l1_njetst_);
	}
	if(l1_njetst_branch == 0 ) {
	cout << "Branch l1_njetst does not exist." << endl;
	}
	l1_nmus_branch = 0;
	if (tree->GetAlias("l1_nmus") != 0) {
		l1_nmus_branch = tree->GetBranch(tree->GetAlias("l1_nmus"));
		l1_nmus_branch->SetAddress(&l1_nmus_);
	}
	if(l1_nmus_branch == 0 ) {
	cout << "Branch l1_nmus does not exist." << endl;
	}
	pdfinfo_id1_branch = 0;
	if (tree->GetAlias("pdfinfo_id1") != 0) {
		pdfinfo_id1_branch = tree->GetBranch(tree->GetAlias("pdfinfo_id1"));
		pdfinfo_id1_branch->SetAddress(&pdfinfo_id1_);
	}
	if(pdfinfo_id1_branch == 0 ) {
	cout << "Branch pdfinfo_id1 does not exist." << endl;
	}
	pdfinfo_id2_branch = 0;
	if (tree->GetAlias("pdfinfo_id2") != 0) {
		pdfinfo_id2_branch = tree->GetBranch(tree->GetAlias("pdfinfo_id2"));
		pdfinfo_id2_branch->SetAddress(&pdfinfo_id2_);
	}
	if(pdfinfo_id2_branch == 0 ) {
	cout << "Branch pdfinfo_id2 does not exist." << endl;
	}
	evt_ecaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_ecaliPhiSuspects") != 0) {
		evt_ecaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_ecaliPhiSuspects"));
		evt_ecaliPhiSuspects_branch->SetAddress(&evt_ecaliPhiSuspects_);
	}
	if(evt_ecaliPhiSuspects_branch == 0 ) {
	cout << "Branch evt_ecaliPhiSuspects does not exist." << endl;
	}
	evt_globaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_globaliPhiSuspects") != 0) {
		evt_globaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_globaliPhiSuspects"));
		evt_globaliPhiSuspects_branch->SetAddress(&evt_globaliPhiSuspects_);
	}
	if(evt_globaliPhiSuspects_branch == 0 ) {
	cout << "Branch evt_globaliPhiSuspects does not exist." << endl;
	}
	evt_hcaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_hcaliPhiSuspects") != 0) {
		evt_hcaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_hcaliPhiSuspects"));
		evt_hcaliPhiSuspects_branch->SetAddress(&evt_hcaliPhiSuspects_);
	}
	if(evt_hcaliPhiSuspects_branch == 0 ) {
	cout << "Branch evt_hcaliPhiSuspects does not exist." << endl;
	}
	twrs_numCrystals_branch = 0;
	if (tree->GetAlias("twrs_numCrystals") != 0) {
		twrs_numCrystals_branch = tree->GetBranch(tree->GetAlias("twrs_numCrystals"));
		twrs_numCrystals_branch->SetAddress(&twrs_numCrystals_);
	}
	if(twrs_numCrystals_branch == 0 ) {
	cout << "Branch twrs_numCrystals does not exist." << endl;
	}
	twrsUncleaned_numCrystals_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numCrystals") != 0) {
		twrsUncleaned_numCrystals_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numCrystals"));
		twrsUncleaned_numCrystals_branch->SetAddress(&twrsUncleaned_numCrystals_);
	}
	if(twrsUncleaned_numCrystals_branch == 0 ) {
	cout << "Branch twrsUncleaned_numCrystals does not exist." << endl;
	}
	taus_calo_charge_branch = 0;
	if (tree->GetAlias("taus_calo_charge") != 0) {
		taus_calo_charge_branch = tree->GetBranch(tree->GetAlias("taus_calo_charge"));
		taus_calo_charge_branch->SetAddress(&taus_calo_charge_);
	}
	if(taus_calo_charge_branch == 0 ) {
	cout << "Branch taus_calo_charge does not exist." << endl;
	}
	taus_calo_leadtrk_idx_branch = 0;
	if (tree->GetAlias("taus_calo_leadtrk_idx") != 0) {
		taus_calo_leadtrk_idx_branch = tree->GetBranch(tree->GetAlias("taus_calo_leadtrk_idx"));
		taus_calo_leadtrk_idx_branch->SetAddress(&taus_calo_leadtrk_idx_);
	}
	if(taus_calo_leadtrk_idx_branch == 0 ) {
	cout << "Branch taus_calo_leadtrk_idx does not exist." << endl;
	}
	taus_calo_tightId_branch = 0;
	if (tree->GetAlias("taus_calo_tightId") != 0) {
		taus_calo_tightId_branch = tree->GetBranch(tree->GetAlias("taus_calo_tightId"));
		taus_calo_tightId_branch->SetAddress(&taus_calo_tightId_);
	}
	if(taus_calo_tightId_branch == 0 ) {
	cout << "Branch taus_calo_tightId does not exist." << endl;
	}
	els_mc3_id_branch = 0;
	if (tree->GetAlias("els_mc3_id") != 0) {
		els_mc3_id_branch = tree->GetBranch(tree->GetAlias("els_mc3_id"));
		els_mc3_id_branch->SetAddress(&els_mc3_id_);
	}
	if(els_mc3_id_branch == 0 ) {
	cout << "Branch els_mc3_id does not exist." << endl;
	}
	els_mc3idx_branch = 0;
	if (tree->GetAlias("els_mc3idx") != 0) {
		els_mc3idx_branch = tree->GetBranch(tree->GetAlias("els_mc3idx"));
		els_mc3idx_branch->SetAddress(&els_mc3idx_);
	}
	if(els_mc3idx_branch == 0 ) {
	cout << "Branch els_mc3idx does not exist." << endl;
	}
	els_mc3_motherid_branch = 0;
	if (tree->GetAlias("els_mc3_motherid") != 0) {
		els_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("els_mc3_motherid"));
		els_mc3_motherid_branch->SetAddress(&els_mc3_motherid_);
	}
	if(els_mc3_motherid_branch == 0 ) {
	cout << "Branch els_mc3_motherid does not exist." << endl;
	}
	els_mc3_motheridx_branch = 0;
	if (tree->GetAlias("els_mc3_motheridx") != 0) {
		els_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("els_mc3_motheridx"));
		els_mc3_motheridx_branch->SetAddress(&els_mc3_motheridx_);
	}
	if(els_mc3_motheridx_branch == 0 ) {
	cout << "Branch els_mc3_motheridx does not exist." << endl;
	}
	els_mc_id_branch = 0;
	if (tree->GetAlias("els_mc_id") != 0) {
		els_mc_id_branch = tree->GetBranch(tree->GetAlias("els_mc_id"));
		els_mc_id_branch->SetAddress(&els_mc_id_);
	}
	if(els_mc_id_branch == 0 ) {
	cout << "Branch els_mc_id does not exist." << endl;
	}
	els_mcidx_branch = 0;
	if (tree->GetAlias("els_mcidx") != 0) {
		els_mcidx_branch = tree->GetBranch(tree->GetAlias("els_mcidx"));
		els_mcidx_branch->SetAddress(&els_mcidx_);
	}
	if(els_mcidx_branch == 0 ) {
	cout << "Branch els_mcidx does not exist." << endl;
	}
	els_mc_motherid_branch = 0;
	if (tree->GetAlias("els_mc_motherid") != 0) {
		els_mc_motherid_branch = tree->GetBranch(tree->GetAlias("els_mc_motherid"));
		els_mc_motherid_branch->SetAddress(&els_mc_motherid_);
	}
	if(els_mc_motherid_branch == 0 ) {
	cout << "Branch els_mc_motherid does not exist." << endl;
	}
	jets_mc3_id_branch = 0;
	if (tree->GetAlias("jets_mc3_id") != 0) {
		jets_mc3_id_branch = tree->GetBranch(tree->GetAlias("jets_mc3_id"));
		jets_mc3_id_branch->SetAddress(&jets_mc3_id_);
	}
	if(jets_mc3_id_branch == 0 ) {
	cout << "Branch jets_mc3_id does not exist." << endl;
	}
	jets_mc3idx_branch = 0;
	if (tree->GetAlias("jets_mc3idx") != 0) {
		jets_mc3idx_branch = tree->GetBranch(tree->GetAlias("jets_mc3idx"));
		jets_mc3idx_branch->SetAddress(&jets_mc3idx_);
	}
	if(jets_mc3idx_branch == 0 ) {
	cout << "Branch jets_mc3idx does not exist." << endl;
	}
	jets_mc_gpidx_branch = 0;
	if (tree->GetAlias("jets_mc_gpidx") != 0) {
		jets_mc_gpidx_branch = tree->GetBranch(tree->GetAlias("jets_mc_gpidx"));
		jets_mc_gpidx_branch->SetAddress(&jets_mc_gpidx_);
	}
	if(jets_mc_gpidx_branch == 0 ) {
	cout << "Branch jets_mc_gpidx does not exist." << endl;
	}
	jets_mc_id_branch = 0;
	if (tree->GetAlias("jets_mc_id") != 0) {
		jets_mc_id_branch = tree->GetBranch(tree->GetAlias("jets_mc_id"));
		jets_mc_id_branch->SetAddress(&jets_mc_id_);
	}
	if(jets_mc_id_branch == 0 ) {
	cout << "Branch jets_mc_id does not exist." << endl;
	}
	jets_mcidx_branch = 0;
	if (tree->GetAlias("jets_mcidx") != 0) {
		jets_mcidx_branch = tree->GetBranch(tree->GetAlias("jets_mcidx"));
		jets_mcidx_branch->SetAddress(&jets_mcidx_);
	}
	if(jets_mcidx_branch == 0 ) {
	cout << "Branch jets_mcidx does not exist." << endl;
	}
	mus_mc3_id_branch = 0;
	if (tree->GetAlias("mus_mc3_id") != 0) {
		mus_mc3_id_branch = tree->GetBranch(tree->GetAlias("mus_mc3_id"));
		mus_mc3_id_branch->SetAddress(&mus_mc3_id_);
	}
	if(mus_mc3_id_branch == 0 ) {
	cout << "Branch mus_mc3_id does not exist." << endl;
	}
	mus_mc3idx_branch = 0;
	if (tree->GetAlias("mus_mc3idx") != 0) {
		mus_mc3idx_branch = tree->GetBranch(tree->GetAlias("mus_mc3idx"));
		mus_mc3idx_branch->SetAddress(&mus_mc3idx_);
	}
	if(mus_mc3idx_branch == 0 ) {
	cout << "Branch mus_mc3idx does not exist." << endl;
	}
	mus_mc3_motherid_branch = 0;
	if (tree->GetAlias("mus_mc3_motherid") != 0) {
		mus_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("mus_mc3_motherid"));
		mus_mc3_motherid_branch->SetAddress(&mus_mc3_motherid_);
	}
	if(mus_mc3_motherid_branch == 0 ) {
	cout << "Branch mus_mc3_motherid does not exist." << endl;
	}
	mus_mc3_motheridx_branch = 0;
	if (tree->GetAlias("mus_mc3_motheridx") != 0) {
		mus_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("mus_mc3_motheridx"));
		mus_mc3_motheridx_branch->SetAddress(&mus_mc3_motheridx_);
	}
	if(mus_mc3_motheridx_branch == 0 ) {
	cout << "Branch mus_mc3_motheridx does not exist." << endl;
	}
	mus_mc_id_branch = 0;
	if (tree->GetAlias("mus_mc_id") != 0) {
		mus_mc_id_branch = tree->GetBranch(tree->GetAlias("mus_mc_id"));
		mus_mc_id_branch->SetAddress(&mus_mc_id_);
	}
	if(mus_mc_id_branch == 0 ) {
	cout << "Branch mus_mc_id does not exist." << endl;
	}
	mus_mcidx_branch = 0;
	if (tree->GetAlias("mus_mcidx") != 0) {
		mus_mcidx_branch = tree->GetBranch(tree->GetAlias("mus_mcidx"));
		mus_mcidx_branch->SetAddress(&mus_mcidx_);
	}
	if(mus_mcidx_branch == 0 ) {
	cout << "Branch mus_mcidx does not exist." << endl;
	}
	mus_mc_motherid_branch = 0;
	if (tree->GetAlias("mus_mc_motherid") != 0) {
		mus_mc_motherid_branch = tree->GetBranch(tree->GetAlias("mus_mc_motherid"));
		mus_mc_motherid_branch->SetAddress(&mus_mc_motherid_);
	}
	if(mus_mc_motherid_branch == 0 ) {
	cout << "Branch mus_mc_motherid does not exist." << endl;
	}
	trk_mc3_id_branch = 0;
	if (tree->GetAlias("trk_mc3_id") != 0) {
		trk_mc3_id_branch = tree->GetBranch(tree->GetAlias("trk_mc3_id"));
		trk_mc3_id_branch->SetAddress(&trk_mc3_id_);
	}
	if(trk_mc3_id_branch == 0 ) {
	cout << "Branch trk_mc3_id does not exist." << endl;
	}
	trk_mc3idx_branch = 0;
	if (tree->GetAlias("trk_mc3idx") != 0) {
		trk_mc3idx_branch = tree->GetBranch(tree->GetAlias("trk_mc3idx"));
		trk_mc3idx_branch->SetAddress(&trk_mc3idx_);
	}
	if(trk_mc3idx_branch == 0 ) {
	cout << "Branch trk_mc3idx does not exist." << endl;
	}
	trk_mc3_motherid_branch = 0;
	if (tree->GetAlias("trk_mc3_motherid") != 0) {
		trk_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("trk_mc3_motherid"));
		trk_mc3_motherid_branch->SetAddress(&trk_mc3_motherid_);
	}
	if(trk_mc3_motherid_branch == 0 ) {
	cout << "Branch trk_mc3_motherid does not exist." << endl;
	}
	trk_mc3_motheridx_branch = 0;
	if (tree->GetAlias("trk_mc3_motheridx") != 0) {
		trk_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("trk_mc3_motheridx"));
		trk_mc3_motheridx_branch->SetAddress(&trk_mc3_motheridx_);
	}
	if(trk_mc3_motheridx_branch == 0 ) {
	cout << "Branch trk_mc3_motheridx does not exist." << endl;
	}
	trk_mc_id_branch = 0;
	if (tree->GetAlias("trk_mc_id") != 0) {
		trk_mc_id_branch = tree->GetBranch(tree->GetAlias("trk_mc_id"));
		trk_mc_id_branch->SetAddress(&trk_mc_id_);
	}
	if(trk_mc_id_branch == 0 ) {
	cout << "Branch trk_mc_id does not exist." << endl;
	}
	trk_mcidx_branch = 0;
	if (tree->GetAlias("trk_mcidx") != 0) {
		trk_mcidx_branch = tree->GetBranch(tree->GetAlias("trk_mcidx"));
		trk_mcidx_branch->SetAddress(&trk_mcidx_);
	}
	if(trk_mcidx_branch == 0 ) {
	cout << "Branch trk_mcidx does not exist." << endl;
	}
	trk_mc_motherid_branch = 0;
	if (tree->GetAlias("trk_mc_motherid") != 0) {
		trk_mc_motherid_branch = tree->GetBranch(tree->GetAlias("trk_mc_motherid"));
		trk_mc_motherid_branch->SetAddress(&trk_mc_motherid_);
	}
	if(trk_mc_motherid_branch == 0 ) {
	cout << "Branch trk_mc_motherid does not exist." << endl;
	}
	els_closestJet_branch = 0;
	if (tree->GetAlias("els_closestJet") != 0) {
		els_closestJet_branch = tree->GetBranch(tree->GetAlias("els_closestJet"));
		els_closestJet_branch->SetAddress(&els_closestJet_);
	}
	if(els_closestJet_branch == 0 ) {
	cout << "Branch els_closestJet does not exist." << endl;
	}
	els_closestMuon_branch = 0;
	if (tree->GetAlias("els_closestMuon") != 0) {
		els_closestMuon_branch = tree->GetBranch(tree->GetAlias("els_closestMuon"));
		els_closestMuon_branch->SetAddress(&els_closestMuon_);
	}
	if(els_closestMuon_branch == 0 ) {
	cout << "Branch els_closestMuon does not exist." << endl;
	}
	els_category_branch = 0;
	if (tree->GetAlias("els_category") != 0) {
		els_category_branch = tree->GetBranch(tree->GetAlias("els_category"));
		els_category_branch->SetAddress(&els_category_);
	}
	if(els_category_branch == 0 ) {
	cout << "Branch els_category does not exist." << endl;
	}
	els_charge_branch = 0;
	if (tree->GetAlias("els_charge") != 0) {
		els_charge_branch = tree->GetBranch(tree->GetAlias("els_charge"));
		els_charge_branch->SetAddress(&els_charge_);
	}
	if(els_charge_branch == 0 ) {
	cout << "Branch els_charge does not exist." << endl;
	}
	els_class_branch = 0;
	if (tree->GetAlias("els_class") != 0) {
		els_class_branch = tree->GetBranch(tree->GetAlias("els_class"));
		els_class_branch->SetAddress(&els_class_);
	}
	if(els_class_branch == 0 ) {
	cout << "Branch els_class does not exist." << endl;
	}
	els_conv_tkidx_branch = 0;
	if (tree->GetAlias("els_conv_tkidx") != 0) {
		els_conv_tkidx_branch = tree->GetBranch(tree->GetAlias("els_conv_tkidx"));
		els_conv_tkidx_branch->SetAddress(&els_conv_tkidx_);
	}
	if(els_conv_tkidx_branch == 0 ) {
	cout << "Branch els_conv_tkidx does not exist." << endl;
	}
	els_exp_innerlayers_branch = 0;
	if (tree->GetAlias("els_exp_innerlayers") != 0) {
		els_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_innerlayers"));
		els_exp_innerlayers_branch->SetAddress(&els_exp_innerlayers_);
	}
	if(els_exp_innerlayers_branch == 0 ) {
	cout << "Branch els_exp_innerlayers does not exist." << endl;
	}
	els_exp_outerlayers_branch = 0;
	if (tree->GetAlias("els_exp_outerlayers") != 0) {
		els_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_outerlayers"));
		els_exp_outerlayers_branch->SetAddress(&els_exp_outerlayers_);
	}
	if(els_exp_outerlayers_branch == 0 ) {
	cout << "Branch els_exp_outerlayers does not exist." << endl;
	}
	els_fiduciality_branch = 0;
	if (tree->GetAlias("els_fiduciality") != 0) {
		els_fiduciality_branch = tree->GetBranch(tree->GetAlias("els_fiduciality"));
		els_fiduciality_branch->SetAddress(&els_fiduciality_);
	}
	if(els_fiduciality_branch == 0 ) {
	cout << "Branch els_fiduciality does not exist." << endl;
	}
	els_layer1_det_branch = 0;
	if (tree->GetAlias("els_layer1_det") != 0) {
		els_layer1_det_branch = tree->GetBranch(tree->GetAlias("els_layer1_det"));
		els_layer1_det_branch->SetAddress(&els_layer1_det_);
	}
	if(els_layer1_det_branch == 0 ) {
	cout << "Branch els_layer1_det does not exist." << endl;
	}
	els_layer1_layer_branch = 0;
	if (tree->GetAlias("els_layer1_layer") != 0) {
		els_layer1_layer_branch = tree->GetBranch(tree->GetAlias("els_layer1_layer"));
		els_layer1_layer_branch->SetAddress(&els_layer1_layer_);
	}
	if(els_layer1_layer_branch == 0 ) {
	cout << "Branch els_layer1_layer does not exist." << endl;
	}
	els_layer1_sizerphi_branch = 0;
	if (tree->GetAlias("els_layer1_sizerphi") != 0) {
		els_layer1_sizerphi_branch = tree->GetBranch(tree->GetAlias("els_layer1_sizerphi"));
		els_layer1_sizerphi_branch->SetAddress(&els_layer1_sizerphi_);
	}
	if(els_layer1_sizerphi_branch == 0 ) {
	cout << "Branch els_layer1_sizerphi does not exist." << endl;
	}
	els_layer1_sizerz_branch = 0;
	if (tree->GetAlias("els_layer1_sizerz") != 0) {
		els_layer1_sizerz_branch = tree->GetBranch(tree->GetAlias("els_layer1_sizerz"));
		els_layer1_sizerz_branch->SetAddress(&els_layer1_sizerz_);
	}
	if(els_layer1_sizerz_branch == 0 ) {
	cout << "Branch els_layer1_sizerz does not exist." << endl;
	}
	els_lostHits_branch = 0;
	if (tree->GetAlias("els_lostHits") != 0) {
		els_lostHits_branch = tree->GetBranch(tree->GetAlias("els_lostHits"));
		els_lostHits_branch->SetAddress(&els_lostHits_);
	}
	if(els_lostHits_branch == 0 ) {
	cout << "Branch els_lostHits does not exist." << endl;
	}
	els_lost_pixelhits_branch = 0;
	if (tree->GetAlias("els_lost_pixelhits") != 0) {
		els_lost_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_lost_pixelhits"));
		els_lost_pixelhits_branch->SetAddress(&els_lost_pixelhits_);
	}
	if(els_lost_pixelhits_branch == 0 ) {
	cout << "Branch els_lost_pixelhits does not exist." << endl;
	}
	els_nSeed_branch = 0;
	if (tree->GetAlias("els_nSeed") != 0) {
		els_nSeed_branch = tree->GetBranch(tree->GetAlias("els_nSeed"));
		els_nSeed_branch->SetAddress(&els_nSeed_);
	}
	if(els_nSeed_branch == 0 ) {
	cout << "Branch els_nSeed does not exist." << endl;
	}
	els_sccharge_branch = 0;
	if (tree->GetAlias("els_sccharge") != 0) {
		els_sccharge_branch = tree->GetBranch(tree->GetAlias("els_sccharge"));
		els_sccharge_branch->SetAddress(&els_sccharge_);
	}
	if(els_sccharge_branch == 0 ) {
	cout << "Branch els_sccharge does not exist." << endl;
	}
	els_trk_charge_branch = 0;
	if (tree->GetAlias("els_trk_charge") != 0) {
		els_trk_charge_branch = tree->GetBranch(tree->GetAlias("els_trk_charge"));
		els_trk_charge_branch->SetAddress(&els_trk_charge_);
	}
	if(els_trk_charge_branch == 0 ) {
	cout << "Branch els_trk_charge does not exist." << endl;
	}
	els_trkidx_branch = 0;
	if (tree->GetAlias("els_trkidx") != 0) {
		els_trkidx_branch = tree->GetBranch(tree->GetAlias("els_trkidx"));
		els_trkidx_branch->SetAddress(&els_trkidx_);
	}
	if(els_trkidx_branch == 0 ) {
	cout << "Branch els_trkidx does not exist." << endl;
	}
	els_type_branch = 0;
	if (tree->GetAlias("els_type") != 0) {
		els_type_branch = tree->GetBranch(tree->GetAlias("els_type"));
		els_type_branch->SetAddress(&els_type_);
	}
	if(els_type_branch == 0 ) {
	cout << "Branch els_type does not exist." << endl;
	}
	els_validHits_branch = 0;
	if (tree->GetAlias("els_validHits") != 0) {
		els_validHits_branch = tree->GetBranch(tree->GetAlias("els_validHits"));
		els_validHits_branch->SetAddress(&els_validHits_);
	}
	if(els_validHits_branch == 0 ) {
	cout << "Branch els_validHits does not exist." << endl;
	}
	els_valid_pixelhits_branch = 0;
	if (tree->GetAlias("els_valid_pixelhits") != 0) {
		els_valid_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_valid_pixelhits"));
		els_valid_pixelhits_branch->SetAddress(&els_valid_pixelhits_);
	}
	if(els_valid_pixelhits_branch == 0 ) {
	cout << "Branch els_valid_pixelhits does not exist." << endl;
	}
	genps_id_branch = 0;
	if (tree->GetAlias("genps_id") != 0) {
		genps_id_branch = tree->GetBranch(tree->GetAlias("genps_id"));
		genps_id_branch->SetAddress(&genps_id_);
	}
	if(genps_id_branch == 0 ) {
	cout << "Branch genps_id does not exist." << endl;
	}
	genps_id_mother_branch = 0;
	if (tree->GetAlias("genps_id_mother") != 0) {
		genps_id_mother_branch = tree->GetBranch(tree->GetAlias("genps_id_mother"));
		genps_id_mother_branch->SetAddress(&genps_id_mother_);
	}
	if(genps_id_mother_branch == 0 ) {
	cout << "Branch genps_id_mother does not exist." << endl;
	}
	genps_status_branch = 0;
	if (tree->GetAlias("genps_status") != 0) {
		genps_status_branch = tree->GetBranch(tree->GetAlias("genps_status"));
		genps_status_branch->SetAddress(&genps_status_);
	}
	if(genps_status_branch == 0 ) {
	cout << "Branch genps_status does not exist." << endl;
	}
	hyp_ll_charge_branch = 0;
	if (tree->GetAlias("hyp_ll_charge") != 0) {
		hyp_ll_charge_branch = tree->GetBranch(tree->GetAlias("hyp_ll_charge"));
		hyp_ll_charge_branch->SetAddress(&hyp_ll_charge_);
	}
	if(hyp_ll_charge_branch == 0 ) {
	cout << "Branch hyp_ll_charge does not exist." << endl;
	}
	hyp_ll_id_branch = 0;
	if (tree->GetAlias("hyp_ll_id") != 0) {
		hyp_ll_id_branch = tree->GetBranch(tree->GetAlias("hyp_ll_id"));
		hyp_ll_id_branch->SetAddress(&hyp_ll_id_);
	}
	if(hyp_ll_id_branch == 0 ) {
	cout << "Branch hyp_ll_id does not exist." << endl;
	}
	hyp_ll_index_branch = 0;
	if (tree->GetAlias("hyp_ll_index") != 0) {
		hyp_ll_index_branch = tree->GetBranch(tree->GetAlias("hyp_ll_index"));
		hyp_ll_index_branch->SetAddress(&hyp_ll_index_);
	}
	if(hyp_ll_index_branch == 0 ) {
	cout << "Branch hyp_ll_index does not exist." << endl;
	}
	hyp_ll_lostHits_branch = 0;
	if (tree->GetAlias("hyp_ll_lostHits") != 0) {
		hyp_ll_lostHits_branch = tree->GetBranch(tree->GetAlias("hyp_ll_lostHits"));
		hyp_ll_lostHits_branch->SetAddress(&hyp_ll_lostHits_);
	}
	if(hyp_ll_lostHits_branch == 0 ) {
	cout << "Branch hyp_ll_lostHits does not exist." << endl;
	}
	hyp_ll_validHits_branch = 0;
	if (tree->GetAlias("hyp_ll_validHits") != 0) {
		hyp_ll_validHits_branch = tree->GetBranch(tree->GetAlias("hyp_ll_validHits"));
		hyp_ll_validHits_branch->SetAddress(&hyp_ll_validHits_);
	}
	if(hyp_ll_validHits_branch == 0 ) {
	cout << "Branch hyp_ll_validHits does not exist." << endl;
	}
	hyp_lt_charge_branch = 0;
	if (tree->GetAlias("hyp_lt_charge") != 0) {
		hyp_lt_charge_branch = tree->GetBranch(tree->GetAlias("hyp_lt_charge"));
		hyp_lt_charge_branch->SetAddress(&hyp_lt_charge_);
	}
	if(hyp_lt_charge_branch == 0 ) {
	cout << "Branch hyp_lt_charge does not exist." << endl;
	}
	hyp_lt_id_branch = 0;
	if (tree->GetAlias("hyp_lt_id") != 0) {
		hyp_lt_id_branch = tree->GetBranch(tree->GetAlias("hyp_lt_id"));
		hyp_lt_id_branch->SetAddress(&hyp_lt_id_);
	}
	if(hyp_lt_id_branch == 0 ) {
	cout << "Branch hyp_lt_id does not exist." << endl;
	}
	hyp_lt_index_branch = 0;
	if (tree->GetAlias("hyp_lt_index") != 0) {
		hyp_lt_index_branch = tree->GetBranch(tree->GetAlias("hyp_lt_index"));
		hyp_lt_index_branch->SetAddress(&hyp_lt_index_);
	}
	if(hyp_lt_index_branch == 0 ) {
	cout << "Branch hyp_lt_index does not exist." << endl;
	}
	hyp_lt_lostHits_branch = 0;
	if (tree->GetAlias("hyp_lt_lostHits") != 0) {
		hyp_lt_lostHits_branch = tree->GetBranch(tree->GetAlias("hyp_lt_lostHits"));
		hyp_lt_lostHits_branch->SetAddress(&hyp_lt_lostHits_);
	}
	if(hyp_lt_lostHits_branch == 0 ) {
	cout << "Branch hyp_lt_lostHits does not exist." << endl;
	}
	hyp_lt_validHits_branch = 0;
	if (tree->GetAlias("hyp_lt_validHits") != 0) {
		hyp_lt_validHits_branch = tree->GetBranch(tree->GetAlias("hyp_lt_validHits"));
		hyp_lt_validHits_branch->SetAddress(&hyp_lt_validHits_);
	}
	if(hyp_lt_validHits_branch == 0 ) {
	cout << "Branch hyp_lt_validHits does not exist." << endl;
	}
	hyp_njets_branch = 0;
	if (tree->GetAlias("hyp_njets") != 0) {
		hyp_njets_branch = tree->GetBranch(tree->GetAlias("hyp_njets"));
		hyp_njets_branch->SetAddress(&hyp_njets_);
	}
	if(hyp_njets_branch == 0 ) {
	cout << "Branch hyp_njets does not exist." << endl;
	}
	hyp_nojets_branch = 0;
	if (tree->GetAlias("hyp_nojets") != 0) {
		hyp_nojets_branch = tree->GetBranch(tree->GetAlias("hyp_nojets"));
		hyp_nojets_branch->SetAddress(&hyp_nojets_);
	}
	if(hyp_nojets_branch == 0 ) {
	cout << "Branch hyp_nojets does not exist." << endl;
	}
	hyp_type_branch = 0;
	if (tree->GetAlias("hyp_type") != 0) {
		hyp_type_branch = tree->GetBranch(tree->GetAlias("hyp_type"));
		hyp_type_branch->SetAddress(&hyp_type_);
	}
	if(hyp_type_branch == 0 ) {
	cout << "Branch hyp_type does not exist." << endl;
	}
	hyp_FVFit_ndf_branch = 0;
	if (tree->GetAlias("hyp_FVFit_ndf") != 0) {
		hyp_FVFit_ndf_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_ndf"));
		hyp_FVFit_ndf_branch->SetAddress(&hyp_FVFit_ndf_);
	}
	if(hyp_FVFit_ndf_branch == 0 ) {
	cout << "Branch hyp_FVFit_ndf does not exist." << endl;
	}
	hyp_FVFit_status_branch = 0;
	if (tree->GetAlias("hyp_FVFit_status") != 0) {
		hyp_FVFit_status_branch = tree->GetBranch(tree->GetAlias("hyp_FVFit_status"));
		hyp_FVFit_status_branch->SetAddress(&hyp_FVFit_status_);
	}
	if(hyp_FVFit_status_branch == 0 ) {
	cout << "Branch hyp_FVFit_status does not exist." << endl;
	}
	hyp_ll_mc_id_branch = 0;
	if (tree->GetAlias("hyp_ll_mc_id") != 0) {
		hyp_ll_mc_id_branch = tree->GetBranch(tree->GetAlias("hyp_ll_mc_id"));
		hyp_ll_mc_id_branch->SetAddress(&hyp_ll_mc_id_);
	}
	if(hyp_ll_mc_id_branch == 0 ) {
	cout << "Branch hyp_ll_mc_id does not exist." << endl;
	}
	hyp_ll_mc_motherid_branch = 0;
	if (tree->GetAlias("hyp_ll_mc_motherid") != 0) {
		hyp_ll_mc_motherid_branch = tree->GetBranch(tree->GetAlias("hyp_ll_mc_motherid"));
		hyp_ll_mc_motherid_branch->SetAddress(&hyp_ll_mc_motherid_);
	}
	if(hyp_ll_mc_motherid_branch == 0 ) {
	cout << "Branch hyp_ll_mc_motherid does not exist." << endl;
	}
	hyp_lt_mc_id_branch = 0;
	if (tree->GetAlias("hyp_lt_mc_id") != 0) {
		hyp_lt_mc_id_branch = tree->GetBranch(tree->GetAlias("hyp_lt_mc_id"));
		hyp_lt_mc_id_branch->SetAddress(&hyp_lt_mc_id_);
	}
	if(hyp_lt_mc_id_branch == 0 ) {
	cout << "Branch hyp_lt_mc_id does not exist." << endl;
	}
	hyp_lt_mc_motherid_branch = 0;
	if (tree->GetAlias("hyp_lt_mc_motherid") != 0) {
		hyp_lt_mc_motherid_branch = tree->GetBranch(tree->GetAlias("hyp_lt_mc_motherid"));
		hyp_lt_mc_motherid_branch->SetAddress(&hyp_lt_mc_motherid_);
	}
	if(hyp_lt_mc_motherid_branch == 0 ) {
	cout << "Branch hyp_lt_mc_motherid does not exist." << endl;
	}
	hyp_quadlep_first_type_branch = 0;
	if (tree->GetAlias("hyp_quadlep_first_type") != 0) {
		hyp_quadlep_first_type_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_first_type"));
		hyp_quadlep_first_type_branch->SetAddress(&hyp_quadlep_first_type_);
	}
	if(hyp_quadlep_first_type_branch == 0 ) {
	cout << "Branch hyp_quadlep_first_type does not exist." << endl;
	}
	hyp_quadlep_fourth_type_branch = 0;
	if (tree->GetAlias("hyp_quadlep_fourth_type") != 0) {
		hyp_quadlep_fourth_type_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_fourth_type"));
		hyp_quadlep_fourth_type_branch->SetAddress(&hyp_quadlep_fourth_type_);
	}
	if(hyp_quadlep_fourth_type_branch == 0 ) {
	cout << "Branch hyp_quadlep_fourth_type does not exist." << endl;
	}
	hyp_quadlep_second_type_branch = 0;
	if (tree->GetAlias("hyp_quadlep_second_type") != 0) {
		hyp_quadlep_second_type_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_second_type"));
		hyp_quadlep_second_type_branch->SetAddress(&hyp_quadlep_second_type_);
	}
	if(hyp_quadlep_second_type_branch == 0 ) {
	cout << "Branch hyp_quadlep_second_type does not exist." << endl;
	}
	hyp_quadlep_third_type_branch = 0;
	if (tree->GetAlias("hyp_quadlep_third_type") != 0) {
		hyp_quadlep_third_type_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_third_type"));
		hyp_quadlep_third_type_branch->SetAddress(&hyp_quadlep_third_type_);
	}
	if(hyp_quadlep_third_type_branch == 0 ) {
	cout << "Branch hyp_quadlep_third_type does not exist." << endl;
	}
	hyp_trilep_first_type_branch = 0;
	if (tree->GetAlias("hyp_trilep_first_type") != 0) {
		hyp_trilep_first_type_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_first_type"));
		hyp_trilep_first_type_branch->SetAddress(&hyp_trilep_first_type_);
	}
	if(hyp_trilep_first_type_branch == 0 ) {
	cout << "Branch hyp_trilep_first_type does not exist." << endl;
	}
	hyp_trilep_second_type_branch = 0;
	if (tree->GetAlias("hyp_trilep_second_type") != 0) {
		hyp_trilep_second_type_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_second_type"));
		hyp_trilep_second_type_branch->SetAddress(&hyp_trilep_second_type_);
	}
	if(hyp_trilep_second_type_branch == 0 ) {
	cout << "Branch hyp_trilep_second_type does not exist." << endl;
	}
	hyp_trilep_third_type_branch = 0;
	if (tree->GetAlias("hyp_trilep_third_type") != 0) {
		hyp_trilep_third_type_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_third_type"));
		hyp_trilep_third_type_branch->SetAddress(&hyp_trilep_third_type_);
	}
	if(hyp_trilep_third_type_branch == 0 ) {
	cout << "Branch hyp_trilep_third_type does not exist." << endl;
	}
	jets_closestElectron_branch = 0;
	if (tree->GetAlias("jets_closestElectron") != 0) {
		jets_closestElectron_branch = tree->GetBranch(tree->GetAlias("jets_closestElectron"));
		jets_closestElectron_branch->SetAddress(&jets_closestElectron_);
	}
	if(jets_closestElectron_branch == 0 ) {
	cout << "Branch jets_closestElectron does not exist." << endl;
	}
	jets_closestMuon_branch = 0;
	if (tree->GetAlias("jets_closestMuon") != 0) {
		jets_closestMuon_branch = tree->GetBranch(tree->GetAlias("jets_closestMuon"));
		jets_closestMuon_branch->SetAddress(&jets_closestMuon_);
	}
	if(jets_closestMuon_branch == 0 ) {
	cout << "Branch jets_closestMuon does not exist." << endl;
	}
	l1_emiso_ieta_branch = 0;
	if (tree->GetAlias("l1_emiso_ieta") != 0) {
		l1_emiso_ieta_branch = tree->GetBranch(tree->GetAlias("l1_emiso_ieta"));
		l1_emiso_ieta_branch->SetAddress(&l1_emiso_ieta_);
	}
	if(l1_emiso_ieta_branch == 0 ) {
	cout << "Branch l1_emiso_ieta does not exist." << endl;
	}
	l1_emiso_iphi_branch = 0;
	if (tree->GetAlias("l1_emiso_iphi") != 0) {
		l1_emiso_iphi_branch = tree->GetBranch(tree->GetAlias("l1_emiso_iphi"));
		l1_emiso_iphi_branch->SetAddress(&l1_emiso_iphi_);
	}
	if(l1_emiso_iphi_branch == 0 ) {
	cout << "Branch l1_emiso_iphi does not exist." << endl;
	}
	l1_emiso_rawId_branch = 0;
	if (tree->GetAlias("l1_emiso_rawId") != 0) {
		l1_emiso_rawId_branch = tree->GetBranch(tree->GetAlias("l1_emiso_rawId"));
		l1_emiso_rawId_branch->SetAddress(&l1_emiso_rawId_);
	}
	if(l1_emiso_rawId_branch == 0 ) {
	cout << "Branch l1_emiso_rawId does not exist." << endl;
	}
	l1_emiso_type_branch = 0;
	if (tree->GetAlias("l1_emiso_type") != 0) {
		l1_emiso_type_branch = tree->GetBranch(tree->GetAlias("l1_emiso_type"));
		l1_emiso_type_branch->SetAddress(&l1_emiso_type_);
	}
	if(l1_emiso_type_branch == 0 ) {
	cout << "Branch l1_emiso_type does not exist." << endl;
	}
	l1_emnoiso_ieta_branch = 0;
	if (tree->GetAlias("l1_emnoiso_ieta") != 0) {
		l1_emnoiso_ieta_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_ieta"));
		l1_emnoiso_ieta_branch->SetAddress(&l1_emnoiso_ieta_);
	}
	if(l1_emnoiso_ieta_branch == 0 ) {
	cout << "Branch l1_emnoiso_ieta does not exist." << endl;
	}
	l1_emnoiso_iphi_branch = 0;
	if (tree->GetAlias("l1_emnoiso_iphi") != 0) {
		l1_emnoiso_iphi_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_iphi"));
		l1_emnoiso_iphi_branch->SetAddress(&l1_emnoiso_iphi_);
	}
	if(l1_emnoiso_iphi_branch == 0 ) {
	cout << "Branch l1_emnoiso_iphi does not exist." << endl;
	}
	l1_emnoiso_rawId_branch = 0;
	if (tree->GetAlias("l1_emnoiso_rawId") != 0) {
		l1_emnoiso_rawId_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_rawId"));
		l1_emnoiso_rawId_branch->SetAddress(&l1_emnoiso_rawId_);
	}
	if(l1_emnoiso_rawId_branch == 0 ) {
	cout << "Branch l1_emnoiso_rawId does not exist." << endl;
	}
	l1_emnoiso_type_branch = 0;
	if (tree->GetAlias("l1_emnoiso_type") != 0) {
		l1_emnoiso_type_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_type"));
		l1_emnoiso_type_branch->SetAddress(&l1_emnoiso_type_);
	}
	if(l1_emnoiso_type_branch == 0 ) {
	cout << "Branch l1_emnoiso_type does not exist." << endl;
	}
	l1_jetsc_ieta_branch = 0;
	if (tree->GetAlias("l1_jetsc_ieta") != 0) {
		l1_jetsc_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_ieta"));
		l1_jetsc_ieta_branch->SetAddress(&l1_jetsc_ieta_);
	}
	if(l1_jetsc_ieta_branch == 0 ) {
	cout << "Branch l1_jetsc_ieta does not exist." << endl;
	}
	l1_jetsc_iphi_branch = 0;
	if (tree->GetAlias("l1_jetsc_iphi") != 0) {
		l1_jetsc_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_iphi"));
		l1_jetsc_iphi_branch->SetAddress(&l1_jetsc_iphi_);
	}
	if(l1_jetsc_iphi_branch == 0 ) {
	cout << "Branch l1_jetsc_iphi does not exist." << endl;
	}
	l1_jetsc_rawId_branch = 0;
	if (tree->GetAlias("l1_jetsc_rawId") != 0) {
		l1_jetsc_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_rawId"));
		l1_jetsc_rawId_branch->SetAddress(&l1_jetsc_rawId_);
	}
	if(l1_jetsc_rawId_branch == 0 ) {
	cout << "Branch l1_jetsc_rawId does not exist." << endl;
	}
	l1_jetsc_type_branch = 0;
	if (tree->GetAlias("l1_jetsc_type") != 0) {
		l1_jetsc_type_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_type"));
		l1_jetsc_type_branch->SetAddress(&l1_jetsc_type_);
	}
	if(l1_jetsc_type_branch == 0 ) {
	cout << "Branch l1_jetsc_type does not exist." << endl;
	}
	l1_jetsf_ieta_branch = 0;
	if (tree->GetAlias("l1_jetsf_ieta") != 0) {
		l1_jetsf_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_ieta"));
		l1_jetsf_ieta_branch->SetAddress(&l1_jetsf_ieta_);
	}
	if(l1_jetsf_ieta_branch == 0 ) {
	cout << "Branch l1_jetsf_ieta does not exist." << endl;
	}
	l1_jetsf_iphi_branch = 0;
	if (tree->GetAlias("l1_jetsf_iphi") != 0) {
		l1_jetsf_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_iphi"));
		l1_jetsf_iphi_branch->SetAddress(&l1_jetsf_iphi_);
	}
	if(l1_jetsf_iphi_branch == 0 ) {
	cout << "Branch l1_jetsf_iphi does not exist." << endl;
	}
	l1_jetsf_rawId_branch = 0;
	if (tree->GetAlias("l1_jetsf_rawId") != 0) {
		l1_jetsf_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_rawId"));
		l1_jetsf_rawId_branch->SetAddress(&l1_jetsf_rawId_);
	}
	if(l1_jetsf_rawId_branch == 0 ) {
	cout << "Branch l1_jetsf_rawId does not exist." << endl;
	}
	l1_jetsf_type_branch = 0;
	if (tree->GetAlias("l1_jetsf_type") != 0) {
		l1_jetsf_type_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_type"));
		l1_jetsf_type_branch->SetAddress(&l1_jetsf_type_);
	}
	if(l1_jetsf_type_branch == 0 ) {
	cout << "Branch l1_jetsf_type does not exist." << endl;
	}
	l1_jetst_ieta_branch = 0;
	if (tree->GetAlias("l1_jetst_ieta") != 0) {
		l1_jetst_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetst_ieta"));
		l1_jetst_ieta_branch->SetAddress(&l1_jetst_ieta_);
	}
	if(l1_jetst_ieta_branch == 0 ) {
	cout << "Branch l1_jetst_ieta does not exist." << endl;
	}
	l1_jetst_iphi_branch = 0;
	if (tree->GetAlias("l1_jetst_iphi") != 0) {
		l1_jetst_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetst_iphi"));
		l1_jetst_iphi_branch->SetAddress(&l1_jetst_iphi_);
	}
	if(l1_jetst_iphi_branch == 0 ) {
	cout << "Branch l1_jetst_iphi does not exist." << endl;
	}
	l1_jetst_rawId_branch = 0;
	if (tree->GetAlias("l1_jetst_rawId") != 0) {
		l1_jetst_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetst_rawId"));
		l1_jetst_rawId_branch->SetAddress(&l1_jetst_rawId_);
	}
	if(l1_jetst_rawId_branch == 0 ) {
	cout << "Branch l1_jetst_rawId does not exist." << endl;
	}
	l1_jetst_type_branch = 0;
	if (tree->GetAlias("l1_jetst_type") != 0) {
		l1_jetst_type_branch = tree->GetBranch(tree->GetAlias("l1_jetst_type"));
		l1_jetst_type_branch->SetAddress(&l1_jetst_type_);
	}
	if(l1_jetst_type_branch == 0 ) {
	cout << "Branch l1_jetst_type does not exist." << endl;
	}
	l1_mus_flags_branch = 0;
	if (tree->GetAlias("l1_mus_flags") != 0) {
		l1_mus_flags_branch = tree->GetBranch(tree->GetAlias("l1_mus_flags"));
		l1_mus_flags_branch->SetAddress(&l1_mus_flags_);
	}
	if(l1_mus_flags_branch == 0 ) {
	cout << "Branch l1_mus_flags does not exist." << endl;
	}
	l1_mus_q_branch = 0;
	if (tree->GetAlias("l1_mus_q") != 0) {
		l1_mus_q_branch = tree->GetBranch(tree->GetAlias("l1_mus_q"));
		l1_mus_q_branch->SetAddress(&l1_mus_q_);
	}
	if(l1_mus_q_branch == 0 ) {
	cout << "Branch l1_mus_q does not exist." << endl;
	}
	l1_mus_qual_branch = 0;
	if (tree->GetAlias("l1_mus_qual") != 0) {
		l1_mus_qual_branch = tree->GetBranch(tree->GetAlias("l1_mus_qual"));
		l1_mus_qual_branch->SetAddress(&l1_mus_qual_);
	}
	if(l1_mus_qual_branch == 0 ) {
	cout << "Branch l1_mus_qual does not exist." << endl;
	}
	l1_mus_qualFlags_branch = 0;
	if (tree->GetAlias("l1_mus_qualFlags") != 0) {
		l1_mus_qualFlags_branch = tree->GetBranch(tree->GetAlias("l1_mus_qualFlags"));
		l1_mus_qualFlags_branch->SetAddress(&l1_mus_qualFlags_);
	}
	if(l1_mus_qualFlags_branch == 0 ) {
	cout << "Branch l1_mus_qualFlags does not exist." << endl;
	}
	mus_met_flag_branch = 0;
	if (tree->GetAlias("mus_met_flag") != 0) {
		mus_met_flag_branch = tree->GetBranch(tree->GetAlias("mus_met_flag"));
		mus_met_flag_branch->SetAddress(&mus_met_flag_);
	}
	if(mus_met_flag_branch == 0 ) {
	cout << "Branch mus_met_flag does not exist." << endl;
	}
	mus_closestEle_branch = 0;
	if (tree->GetAlias("mus_closestEle") != 0) {
		mus_closestEle_branch = tree->GetBranch(tree->GetAlias("mus_closestEle"));
		mus_closestEle_branch->SetAddress(&mus_closestEle_);
	}
	if(mus_closestEle_branch == 0 ) {
	cout << "Branch mus_closestEle does not exist." << endl;
	}
	mus_closestJet_branch = 0;
	if (tree->GetAlias("mus_closestJet") != 0) {
		mus_closestJet_branch = tree->GetBranch(tree->GetAlias("mus_closestJet"));
		mus_closestJet_branch->SetAddress(&mus_closestJet_);
	}
	if(mus_closestJet_branch == 0 ) {
	cout << "Branch mus_closestJet does not exist." << endl;
	}
	mus_charge_branch = 0;
	if (tree->GetAlias("mus_charge") != 0) {
		mus_charge_branch = tree->GetBranch(tree->GetAlias("mus_charge"));
		mus_charge_branch->SetAddress(&mus_charge_);
	}
	if(mus_charge_branch == 0 ) {
	cout << "Branch mus_charge does not exist." << endl;
	}
	mus_gfit_validHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validHits") != 0) {
		mus_gfit_validHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validHits"));
		mus_gfit_validHits_branch->SetAddress(&mus_gfit_validHits_);
	}
	if(mus_gfit_validHits_branch == 0 ) {
	cout << "Branch mus_gfit_validHits does not exist." << endl;
	}
	mus_gfit_validSTAHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSTAHits") != 0) {
		mus_gfit_validSTAHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSTAHits"));
		mus_gfit_validSTAHits_branch->SetAddress(&mus_gfit_validSTAHits_);
	}
	if(mus_gfit_validSTAHits_branch == 0 ) {
	cout << "Branch mus_gfit_validSTAHits does not exist." << endl;
	}
	mus_gfit_validSiHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSiHits") != 0) {
		mus_gfit_validSiHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSiHits"));
		mus_gfit_validSiHits_branch->SetAddress(&mus_gfit_validSiHits_);
	}
	if(mus_gfit_validSiHits_branch == 0 ) {
	cout << "Branch mus_gfit_validSiHits does not exist." << endl;
	}
	mus_goodmask_branch = 0;
	if (tree->GetAlias("mus_goodmask") != 0) {
		mus_goodmask_branch = tree->GetBranch(tree->GetAlias("mus_goodmask"));
		mus_goodmask_branch->SetAddress(&mus_goodmask_);
	}
	if(mus_goodmask_branch == 0 ) {
	cout << "Branch mus_goodmask does not exist." << endl;
	}
	mus_iso03_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso03_ntrk") != 0) {
		mus_iso03_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso03_ntrk"));
		mus_iso03_ntrk_branch->SetAddress(&mus_iso03_ntrk_);
	}
	if(mus_iso03_ntrk_branch == 0 ) {
	cout << "Branch mus_iso03_ntrk does not exist." << endl;
	}
	mus_iso05_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso05_ntrk") != 0) {
		mus_iso05_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso05_ntrk"));
		mus_iso05_ntrk_branch->SetAddress(&mus_iso05_ntrk_);
	}
	if(mus_iso05_ntrk_branch == 0 ) {
	cout << "Branch mus_iso05_ntrk does not exist." << endl;
	}
	mus_lostHits_branch = 0;
	if (tree->GetAlias("mus_lostHits") != 0) {
		mus_lostHits_branch = tree->GetBranch(tree->GetAlias("mus_lostHits"));
		mus_lostHits_branch->SetAddress(&mus_lostHits_);
	}
	if(mus_lostHits_branch == 0 ) {
	cout << "Branch mus_lostHits does not exist." << endl;
	}
	mus_nmatches_branch = 0;
	if (tree->GetAlias("mus_nmatches") != 0) {
		mus_nmatches_branch = tree->GetBranch(tree->GetAlias("mus_nmatches"));
		mus_nmatches_branch->SetAddress(&mus_nmatches_);
	}
	if(mus_nmatches_branch == 0 ) {
	cout << "Branch mus_nmatches does not exist." << endl;
	}
	mus_pid_TM2DCompatibilityLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityLoose") != 0) {
		mus_pid_TM2DCompatibilityLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityLoose"));
		mus_pid_TM2DCompatibilityLoose_branch->SetAddress(&mus_pid_TM2DCompatibilityLoose_);
	}
	if(mus_pid_TM2DCompatibilityLoose_branch == 0 ) {
	cout << "Branch mus_pid_TM2DCompatibilityLoose does not exist." << endl;
	}
	mus_pid_TM2DCompatibilityTight_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityTight") != 0) {
		mus_pid_TM2DCompatibilityTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityTight"));
		mus_pid_TM2DCompatibilityTight_branch->SetAddress(&mus_pid_TM2DCompatibilityTight_);
	}
	if(mus_pid_TM2DCompatibilityTight_branch == 0 ) {
	cout << "Branch mus_pid_TM2DCompatibilityTight does not exist." << endl;
	}
	mus_pid_TMLastStationLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationLoose") != 0) {
		mus_pid_TMLastStationLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationLoose"));
		mus_pid_TMLastStationLoose_branch->SetAddress(&mus_pid_TMLastStationLoose_);
	}
	if(mus_pid_TMLastStationLoose_branch == 0 ) {
	cout << "Branch mus_pid_TMLastStationLoose does not exist." << endl;
	}
	mus_pid_TMLastStationTight_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationTight") != 0) {
		mus_pid_TMLastStationTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationTight"));
		mus_pid_TMLastStationTight_branch->SetAddress(&mus_pid_TMLastStationTight_);
	}
	if(mus_pid_TMLastStationTight_branch == 0 ) {
	cout << "Branch mus_pid_TMLastStationTight does not exist." << endl;
	}
	mus_sta_validHits_branch = 0;
	if (tree->GetAlias("mus_sta_validHits") != 0) {
		mus_sta_validHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_validHits"));
		mus_sta_validHits_branch->SetAddress(&mus_sta_validHits_);
	}
	if(mus_sta_validHits_branch == 0 ) {
	cout << "Branch mus_sta_validHits does not exist." << endl;
	}
	mus_timeDirection_branch = 0;
	if (tree->GetAlias("mus_timeDirection") != 0) {
		mus_timeDirection_branch = tree->GetBranch(tree->GetAlias("mus_timeDirection"));
		mus_timeDirection_branch->SetAddress(&mus_timeDirection_);
	}
	if(mus_timeDirection_branch == 0 ) {
	cout << "Branch mus_timeDirection does not exist." << endl;
	}
	mus_timeNumStationsUsed_branch = 0;
	if (tree->GetAlias("mus_timeNumStationsUsed") != 0) {
		mus_timeNumStationsUsed_branch = tree->GetBranch(tree->GetAlias("mus_timeNumStationsUsed"));
		mus_timeNumStationsUsed_branch->SetAddress(&mus_timeNumStationsUsed_);
	}
	if(mus_timeNumStationsUsed_branch == 0 ) {
	cout << "Branch mus_timeNumStationsUsed does not exist." << endl;
	}
	mus_trk_charge_branch = 0;
	if (tree->GetAlias("mus_trk_charge") != 0) {
		mus_trk_charge_branch = tree->GetBranch(tree->GetAlias("mus_trk_charge"));
		mus_trk_charge_branch->SetAddress(&mus_trk_charge_);
	}
	if(mus_trk_charge_branch == 0 ) {
	cout << "Branch mus_trk_charge does not exist." << endl;
	}
	mus_trkidx_branch = 0;
	if (tree->GetAlias("mus_trkidx") != 0) {
		mus_trkidx_branch = tree->GetBranch(tree->GetAlias("mus_trkidx"));
		mus_trkidx_branch->SetAddress(&mus_trkidx_);
	}
	if(mus_trkidx_branch == 0 ) {
	cout << "Branch mus_trkidx does not exist." << endl;
	}
	mus_type_branch = 0;
	if (tree->GetAlias("mus_type") != 0) {
		mus_type_branch = tree->GetBranch(tree->GetAlias("mus_type"));
		mus_type_branch->SetAddress(&mus_type_);
	}
	if(mus_type_branch == 0 ) {
	cout << "Branch mus_type does not exist." << endl;
	}
	mus_validHits_branch = 0;
	if (tree->GetAlias("mus_validHits") != 0) {
		mus_validHits_branch = tree->GetBranch(tree->GetAlias("mus_validHits"));
		mus_validHits_branch->SetAddress(&mus_validHits_);
	}
	if(mus_validHits_branch == 0 ) {
	cout << "Branch mus_validHits does not exist." << endl;
	}
	pfjets_chargedMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_chargedMultiplicity") != 0) {
		pfjets_chargedMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedMultiplicity"));
		pfjets_chargedMultiplicity_branch->SetAddress(&pfjets_chargedMultiplicity_);
	}
	if(pfjets_chargedMultiplicity_branch == 0 ) {
	cout << "Branch pfjets_chargedMultiplicity does not exist." << endl;
	}
	pfjets_muonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_muonMultiplicity") != 0) {
		pfjets_muonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_muonMultiplicity"));
		pfjets_muonMultiplicity_branch->SetAddress(&pfjets_muonMultiplicity_);
	}
	if(pfjets_muonMultiplicity_branch == 0 ) {
	cout << "Branch pfjets_muonMultiplicity does not exist." << endl;
	}
	pfjets_neutralMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_neutralMultiplicity") != 0) {
		pfjets_neutralMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralMultiplicity"));
		pfjets_neutralMultiplicity_branch->SetAddress(&pfjets_neutralMultiplicity_);
	}
	if(pfjets_neutralMultiplicity_branch == 0 ) {
	cout << "Branch pfjets_neutralMultiplicity does not exist." << endl;
	}
	taus_pf_charge_branch = 0;
	if (tree->GetAlias("taus_pf_charge") != 0) {
		taus_pf_charge_branch = tree->GetBranch(tree->GetAlias("taus_pf_charge"));
		taus_pf_charge_branch->SetAddress(&taus_pf_charge_);
	}
	if(taus_pf_charge_branch == 0 ) {
	cout << "Branch taus_pf_charge does not exist." << endl;
	}
	taus_pf_electronPreID_branch = 0;
	if (tree->GetAlias("taus_pf_electronPreID") != 0) {
		taus_pf_electronPreID_branch = tree->GetBranch(tree->GetAlias("taus_pf_electronPreID"));
		taus_pf_electronPreID_branch->SetAddress(&taus_pf_electronPreID_);
	}
	if(taus_pf_electronPreID_branch == 0 ) {
	cout << "Branch taus_pf_electronPreID does not exist." << endl;
	}
	taus_pf_hasMuonReference_branch = 0;
	if (tree->GetAlias("taus_pf_hasMuonReference") != 0) {
		taus_pf_hasMuonReference_branch = tree->GetBranch(tree->GetAlias("taus_pf_hasMuonReference"));
		taus_pf_hasMuonReference_branch->SetAddress(&taus_pf_hasMuonReference_);
	}
	if(taus_pf_hasMuonReference_branch == 0 ) {
	cout << "Branch taus_pf_hasMuonReference does not exist." << endl;
	}
	taus_pf_leadtrk_idx_branch = 0;
	if (tree->GetAlias("taus_pf_leadtrk_idx") != 0) {
		taus_pf_leadtrk_idx_branch = tree->GetBranch(tree->GetAlias("taus_pf_leadtrk_idx"));
		taus_pf_leadtrk_idx_branch->SetAddress(&taus_pf_leadtrk_idx_);
	}
	if(taus_pf_leadtrk_idx_branch == 0 ) {
	cout << "Branch taus_pf_leadtrk_idx does not exist." << endl;
	}
	taus_pf_muonPreID_branch = 0;
	if (tree->GetAlias("taus_pf_muonPreID") != 0) {
		taus_pf_muonPreID_branch = tree->GetBranch(tree->GetAlias("taus_pf_muonPreID"));
		taus_pf_muonPreID_branch->SetAddress(&taus_pf_muonPreID_);
	}
	if(taus_pf_muonPreID_branch == 0 ) {
	cout << "Branch taus_pf_muonPreID does not exist." << endl;
	}
	taus_pf_nmuonmatch_branch = 0;
	if (tree->GetAlias("taus_pf_nmuonmatch") != 0) {
		taus_pf_nmuonmatch_branch = tree->GetBranch(tree->GetAlias("taus_pf_nmuonmatch"));
		taus_pf_nmuonmatch_branch->SetAddress(&taus_pf_nmuonmatch_);
	}
	if(taus_pf_nmuonmatch_branch == 0 ) {
	cout << "Branch taus_pf_nmuonmatch does not exist." << endl;
	}
	taus_pf_tightId_branch = 0;
	if (tree->GetAlias("taus_pf_tightId") != 0) {
		taus_pf_tightId_branch = tree->GetBranch(tree->GetAlias("taus_pf_tightId"));
		taus_pf_tightId_branch->SetAddress(&taus_pf_tightId_);
	}
	if(taus_pf_tightId_branch == 0 ) {
	cout << "Branch taus_pf_tightId does not exist." << endl;
	}
	photons_fiduciality_branch = 0;
	if (tree->GetAlias("photons_fiduciality") != 0) {
		photons_fiduciality_branch = tree->GetBranch(tree->GetAlias("photons_fiduciality"));
		photons_fiduciality_branch->SetAddress(&photons_fiduciality_);
	}
	if(photons_fiduciality_branch == 0 ) {
	cout << "Branch photons_fiduciality does not exist." << endl;
	}
	pxl_ndigis_pxb_branch = 0;
	if (tree->GetAlias("pxl_ndigis_pxb") != 0) {
		pxl_ndigis_pxb_branch = tree->GetBranch(tree->GetAlias("pxl_ndigis_pxb"));
		pxl_ndigis_pxb_branch->SetAddress(&pxl_ndigis_pxb_);
	}
	if(pxl_ndigis_pxb_branch == 0 ) {
	cout << "Branch pxl_ndigis_pxb does not exist." << endl;
	}
	pxl_ndigis_pxf_branch = 0;
	if (tree->GetAlias("pxl_ndigis_pxf") != 0) {
		pxl_ndigis_pxf_branch = tree->GetBranch(tree->GetAlias("pxl_ndigis_pxf"));
		pxl_ndigis_pxf_branch->SetAddress(&pxl_ndigis_pxf_);
	}
	if(pxl_ndigis_pxf_branch == 0 ) {
	cout << "Branch pxl_ndigis_pxf does not exist." << endl;
	}
	ran_srFlag_branch = 0;
	if (tree->GetAlias("ran_srFlag") != 0) {
		ran_srFlag_branch = tree->GetBranch(tree->GetAlias("ran_srFlag"));
		ran_srFlag_branch->SetAddress(&ran_srFlag_);
	}
	if(ran_srFlag_branch == 0 ) {
	cout << "Branch ran_srFlag does not exist." << endl;
	}
	scs_detIdSeed_branch = 0;
	if (tree->GetAlias("scs_detIdSeed") != 0) {
		scs_detIdSeed_branch = tree->GetBranch(tree->GetAlias("scs_detIdSeed"));
		scs_detIdSeed_branch->SetAddress(&scs_detIdSeed_);
	}
	if(scs_detIdSeed_branch == 0 ) {
	cout << "Branch scs_detIdSeed does not exist." << endl;
	}
	scs_elsidx_branch = 0;
	if (tree->GetAlias("scs_elsidx") != 0) {
		scs_elsidx_branch = tree->GetBranch(tree->GetAlias("scs_elsidx"));
		scs_elsidx_branch->SetAddress(&scs_elsidx_);
	}
	if(scs_elsidx_branch == 0 ) {
	cout << "Branch scs_elsidx does not exist." << endl;
	}
	scs_severitySeed_branch = 0;
	if (tree->GetAlias("scs_severitySeed") != 0) {
		scs_severitySeed_branch = tree->GetBranch(tree->GetAlias("scs_severitySeed"));
		scs_severitySeed_branch->SetAddress(&scs_severitySeed_);
	}
	if(scs_severitySeed_branch == 0 ) {
	cout << "Branch scs_severitySeed does not exist." << endl;
	}
	mus_tcmet_flag_branch = 0;
	if (tree->GetAlias("mus_tcmet_flag") != 0) {
		mus_tcmet_flag_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_flag"));
		mus_tcmet_flag_branch->SetAddress(&mus_tcmet_flag_);
	}
	if(mus_tcmet_flag_branch == 0 ) {
	cout << "Branch mus_tcmet_flag does not exist." << endl;
	}
	trks_algo_branch = 0;
	if (tree->GetAlias("trks_algo") != 0) {
		trks_algo_branch = tree->GetBranch(tree->GetAlias("trks_algo"));
		trks_algo_branch->SetAddress(&trks_algo_);
	}
	if(trks_algo_branch == 0 ) {
	cout << "Branch trks_algo does not exist." << endl;
	}
	trks_charge_branch = 0;
	if (tree->GetAlias("trks_charge") != 0) {
		trks_charge_branch = tree->GetBranch(tree->GetAlias("trks_charge"));
		trks_charge_branch->SetAddress(&trks_charge_);
	}
	if(trks_charge_branch == 0 ) {
	cout << "Branch trks_charge does not exist." << endl;
	}
	trks_exp_innerlayers_branch = 0;
	if (tree->GetAlias("trks_exp_innerlayers") != 0) {
		trks_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("trks_exp_innerlayers"));
		trks_exp_innerlayers_branch->SetAddress(&trks_exp_innerlayers_);
	}
	if(trks_exp_innerlayers_branch == 0 ) {
	cout << "Branch trks_exp_innerlayers does not exist." << endl;
	}
	trks_exp_outerlayers_branch = 0;
	if (tree->GetAlias("trks_exp_outerlayers") != 0) {
		trks_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("trks_exp_outerlayers"));
		trks_exp_outerlayers_branch->SetAddress(&trks_exp_outerlayers_);
	}
	if(trks_exp_outerlayers_branch == 0 ) {
	cout << "Branch trks_exp_outerlayers does not exist." << endl;
	}
	trks_layer1_det_branch = 0;
	if (tree->GetAlias("trks_layer1_det") != 0) {
		trks_layer1_det_branch = tree->GetBranch(tree->GetAlias("trks_layer1_det"));
		trks_layer1_det_branch->SetAddress(&trks_layer1_det_);
	}
	if(trks_layer1_det_branch == 0 ) {
	cout << "Branch trks_layer1_det does not exist." << endl;
	}
	trks_layer1_layer_branch = 0;
	if (tree->GetAlias("trks_layer1_layer") != 0) {
		trks_layer1_layer_branch = tree->GetBranch(tree->GetAlias("trks_layer1_layer"));
		trks_layer1_layer_branch->SetAddress(&trks_layer1_layer_);
	}
	if(trks_layer1_layer_branch == 0 ) {
	cout << "Branch trks_layer1_layer does not exist." << endl;
	}
	trks_layer1_sizerphi_branch = 0;
	if (tree->GetAlias("trks_layer1_sizerphi") != 0) {
		trks_layer1_sizerphi_branch = tree->GetBranch(tree->GetAlias("trks_layer1_sizerphi"));
		trks_layer1_sizerphi_branch->SetAddress(&trks_layer1_sizerphi_);
	}
	if(trks_layer1_sizerphi_branch == 0 ) {
	cout << "Branch trks_layer1_sizerphi does not exist." << endl;
	}
	trks_layer1_sizerz_branch = 0;
	if (tree->GetAlias("trks_layer1_sizerz") != 0) {
		trks_layer1_sizerz_branch = tree->GetBranch(tree->GetAlias("trks_layer1_sizerz"));
		trks_layer1_sizerz_branch->SetAddress(&trks_layer1_sizerz_);
	}
	if(trks_layer1_sizerz_branch == 0 ) {
	cout << "Branch trks_layer1_sizerz does not exist." << endl;
	}
	trks_lostHits_branch = 0;
	if (tree->GetAlias("trks_lostHits") != 0) {
		trks_lostHits_branch = tree->GetBranch(tree->GetAlias("trks_lostHits"));
		trks_lostHits_branch->SetAddress(&trks_lostHits_);
	}
	if(trks_lostHits_branch == 0 ) {
	cout << "Branch trks_lostHits does not exist." << endl;
	}
	trks_lost_pixelhits_branch = 0;
	if (tree->GetAlias("trks_lost_pixelhits") != 0) {
		trks_lost_pixelhits_branch = tree->GetBranch(tree->GetAlias("trks_lost_pixelhits"));
		trks_lost_pixelhits_branch->SetAddress(&trks_lost_pixelhits_);
	}
	if(trks_lost_pixelhits_branch == 0 ) {
	cout << "Branch trks_lost_pixelhits does not exist." << endl;
	}
	trks_nlayers_branch = 0;
	if (tree->GetAlias("trks_nlayers") != 0) {
		trks_nlayers_branch = tree->GetBranch(tree->GetAlias("trks_nlayers"));
		trks_nlayers_branch->SetAddress(&trks_nlayers_);
	}
	if(trks_nlayers_branch == 0 ) {
	cout << "Branch trks_nlayers does not exist." << endl;
	}
	trks_nlayers3D_branch = 0;
	if (tree->GetAlias("trks_nlayers3D") != 0) {
		trks_nlayers3D_branch = tree->GetBranch(tree->GetAlias("trks_nlayers3D"));
		trks_nlayers3D_branch->SetAddress(&trks_nlayers3D_);
	}
	if(trks_nlayers3D_branch == 0 ) {
	cout << "Branch trks_nlayers3D does not exist." << endl;
	}
	trks_nlayersLost_branch = 0;
	if (tree->GetAlias("trks_nlayersLost") != 0) {
		trks_nlayersLost_branch = tree->GetBranch(tree->GetAlias("trks_nlayersLost"));
		trks_nlayersLost_branch->SetAddress(&trks_nlayersLost_);
	}
	if(trks_nlayersLost_branch == 0 ) {
	cout << "Branch trks_nlayersLost does not exist." << endl;
	}
	trks_qualityMask_branch = 0;
	if (tree->GetAlias("trks_qualityMask") != 0) {
		trks_qualityMask_branch = tree->GetBranch(tree->GetAlias("trks_qualityMask"));
		trks_qualityMask_branch->SetAddress(&trks_qualityMask_);
	}
	if(trks_qualityMask_branch == 0 ) {
	cout << "Branch trks_qualityMask does not exist." << endl;
	}
	trks_validHits_branch = 0;
	if (tree->GetAlias("trks_validHits") != 0) {
		trks_validHits_branch = tree->GetBranch(tree->GetAlias("trks_validHits"));
		trks_validHits_branch->SetAddress(&trks_validHits_);
	}
	if(trks_validHits_branch == 0 ) {
	cout << "Branch trks_validHits does not exist." << endl;
	}
	trks_valid_pixelhits_branch = 0;
	if (tree->GetAlias("trks_valid_pixelhits") != 0) {
		trks_valid_pixelhits_branch = tree->GetBranch(tree->GetAlias("trks_valid_pixelhits"));
		trks_valid_pixelhits_branch->SetAddress(&trks_valid_pixelhits_);
	}
	if(trks_valid_pixelhits_branch == 0 ) {
	cout << "Branch trks_valid_pixelhits does not exist." << endl;
	}
	trks_elsidx_branch = 0;
	if (tree->GetAlias("trks_elsidx") != 0) {
		trks_elsidx_branch = tree->GetBranch(tree->GetAlias("trks_elsidx"));
		trks_elsidx_branch->SetAddress(&trks_elsidx_);
	}
	if(trks_elsidx_branch == 0 ) {
	cout << "Branch trks_elsidx does not exist." << endl;
	}
	trk_musidx_branch = 0;
	if (tree->GetAlias("trk_musidx") != 0) {
		trk_musidx_branch = tree->GetBranch(tree->GetAlias("trk_musidx"));
		trk_musidx_branch->SetAddress(&trk_musidx_);
	}
	if(trk_musidx_branch == 0 ) {
	cout << "Branch trk_musidx does not exist." << endl;
	}
	vtxs_isFake_branch = 0;
	if (tree->GetAlias("vtxs_isFake") != 0) {
		vtxs_isFake_branch = tree->GetBranch(tree->GetAlias("vtxs_isFake"));
		vtxs_isFake_branch->SetAddress(&vtxs_isFake_);
	}
	if(vtxs_isFake_branch == 0 ) {
	cout << "Branch vtxs_isFake does not exist." << endl;
	}
	vtxs_isValid_branch = 0;
	if (tree->GetAlias("vtxs_isValid") != 0) {
		vtxs_isValid_branch = tree->GetBranch(tree->GetAlias("vtxs_isValid"));
		vtxs_isValid_branch->SetAddress(&vtxs_isValid_);
	}
	if(vtxs_isValid_branch == 0 ) {
	cout << "Branch vtxs_isValid does not exist." << endl;
	}
	vtxs_tracksSize_branch = 0;
	if (tree->GetAlias("vtxs_tracksSize") != 0) {
		vtxs_tracksSize_branch = tree->GetBranch(tree->GetAlias("vtxs_tracksSize"));
		vtxs_tracksSize_branch->SetAddress(&vtxs_tracksSize_);
	}
	if(vtxs_tracksSize_branch == 0 ) {
	cout << "Branch vtxs_tracksSize does not exist." << endl;
	}
	twrs_emMaxEcalMGPASampleADC_branch = 0;
	if (tree->GetAlias("twrs_emMaxEcalMGPASampleADC") != 0) {
		twrs_emMaxEcalMGPASampleADC_branch = tree->GetBranch(tree->GetAlias("twrs_emMaxEcalMGPASampleADC"));
		twrs_emMaxEcalMGPASampleADC_branch->SetAddress(&twrs_emMaxEcalMGPASampleADC_);
	}
	if(twrs_emMaxEcalMGPASampleADC_branch == 0 ) {
	cout << "Branch twrs_emMaxEcalMGPASampleADC does not exist." << endl;
	}
	twrs_emThreshRecoFlag_branch = 0;
	if (tree->GetAlias("twrs_emThreshRecoFlag") != 0) {
		twrs_emThreshRecoFlag_branch = tree->GetBranch(tree->GetAlias("twrs_emThreshRecoFlag"));
		twrs_emThreshRecoFlag_branch->SetAddress(&twrs_emThreshRecoFlag_);
	}
	if(twrs_emThreshRecoFlag_branch == 0 ) {
	cout << "Branch twrs_emThreshRecoFlag does not exist." << endl;
	}
	twrs_emThreshSevLvl_branch = 0;
	if (tree->GetAlias("twrs_emThreshSevLvl") != 0) {
		twrs_emThreshSevLvl_branch = tree->GetBranch(tree->GetAlias("twrs_emThreshSevLvl"));
		twrs_emThreshSevLvl_branch->SetAddress(&twrs_emThreshSevLvl_);
	}
	if(twrs_emThreshSevLvl_branch == 0 ) {
	cout << "Branch twrs_emThreshSevLvl does not exist." << endl;
	}
	twrsUncleaned_emMaxEcalMGPASampleADC_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emMaxEcalMGPASampleADC") != 0) {
		twrsUncleaned_emMaxEcalMGPASampleADC_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emMaxEcalMGPASampleADC"));
		twrsUncleaned_emMaxEcalMGPASampleADC_branch->SetAddress(&twrsUncleaned_emMaxEcalMGPASampleADC_);
	}
	if(twrsUncleaned_emMaxEcalMGPASampleADC_branch == 0 ) {
	cout << "Branch twrsUncleaned_emMaxEcalMGPASampleADC does not exist." << endl;
	}
	twrsUncleaned_emThreshRecoFlag_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThreshRecoFlag") != 0) {
		twrsUncleaned_emThreshRecoFlag_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThreshRecoFlag"));
		twrsUncleaned_emThreshRecoFlag_branch->SetAddress(&twrsUncleaned_emThreshRecoFlag_);
	}
	if(twrsUncleaned_emThreshRecoFlag_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThreshRecoFlag does not exist." << endl;
	}
	twrsUncleaned_emThreshSevLvl_branch = 0;
	if (tree->GetAlias("twrsUncleaned_emThreshSevLvl") != 0) {
		twrsUncleaned_emThreshSevLvl_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_emThreshSevLvl"));
		twrsUncleaned_emThreshSevLvl_branch->SetAddress(&twrsUncleaned_emThreshSevLvl_);
	}
	if(twrsUncleaned_emThreshSevLvl_branch == 0 ) {
	cout << "Branch twrsUncleaned_emThreshSevLvl does not exist." << endl;
	}
	taus_calo_isotrk_idx_branch = 0;
	if (tree->GetAlias("taus_calo_isotrk_idx") != 0) {
		taus_calo_isotrk_idx_branch = tree->GetBranch(tree->GetAlias("taus_calo_isotrk_idx"));
		taus_calo_isotrk_idx_branch->SetAddress(&taus_calo_isotrk_idx_);
	}
	if(taus_calo_isotrk_idx_branch == 0 ) {
	cout << "Branch taus_calo_isotrk_idx does not exist." << endl;
	}
	taus_calo_sigtrk_idx_branch = 0;
	if (tree->GetAlias("taus_calo_sigtrk_idx") != 0) {
		taus_calo_sigtrk_idx_branch = tree->GetBranch(tree->GetAlias("taus_calo_sigtrk_idx"));
		taus_calo_sigtrk_idx_branch->SetAddress(&taus_calo_sigtrk_idx_);
	}
	if(taus_calo_sigtrk_idx_branch == 0 ) {
	cout << "Branch taus_calo_sigtrk_idx does not exist." << endl;
	}
	genps_lepdaughter_id_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_id") != 0) {
		genps_lepdaughter_id_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_id"));
		genps_lepdaughter_id_branch->SetAddress(&genps_lepdaughter_id_);
	}
	if(genps_lepdaughter_id_branch == 0 ) {
	cout << "Branch genps_lepdaughter_id does not exist." << endl;
	}
	genps_lepdaughter_idx_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_idx") != 0) {
		genps_lepdaughter_idx_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_idx"));
		genps_lepdaughter_idx_branch->SetAddress(&genps_lepdaughter_idx_);
	}
	if(genps_lepdaughter_idx_branch == 0 ) {
	cout << "Branch genps_lepdaughter_idx does not exist." << endl;
	}
	hlt_trigObjs_id_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_id") != 0) {
		hlt_trigObjs_id_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_id"));
		hlt_trigObjs_id_branch->SetAddress(&hlt_trigObjs_id_);
	}
	if(hlt_trigObjs_id_branch == 0 ) {
	cout << "Branch hlt_trigObjs_id does not exist." << endl;
	}
	hyp_jets_idx_branch = 0;
	if (tree->GetAlias("hyp_jets_idx") != 0) {
		hyp_jets_idx_branch = tree->GetBranch(tree->GetAlias("hyp_jets_idx"));
		hyp_jets_idx_branch->SetAddress(&hyp_jets_idx_);
	}
	if(hyp_jets_idx_branch == 0 ) {
	cout << "Branch hyp_jets_idx does not exist." << endl;
	}
	hyp_other_jets_idx_branch = 0;
	if (tree->GetAlias("hyp_other_jets_idx") != 0) {
		hyp_other_jets_idx_branch = tree->GetBranch(tree->GetAlias("hyp_other_jets_idx"));
		hyp_other_jets_idx_branch->SetAddress(&hyp_other_jets_idx_);
	}
	if(hyp_other_jets_idx_branch == 0 ) {
	cout << "Branch hyp_other_jets_idx does not exist." << endl;
	}
	evt_ntwrs_branch = 0;
	if (tree->GetAlias("evt_ntwrs") != 0) {
		evt_ntwrs_branch = tree->GetBranch(tree->GetAlias("evt_ntwrs"));
		evt_ntwrs_branch->SetAddress(&evt_ntwrs_);
	}
	if(evt_ntwrs_branch == 0 ) {
	cout << "Branch evt_ntwrs does not exist." << endl;
	}
	evt_nels_branch = 0;
	if (tree->GetAlias("evt_nels") != 0) {
		evt_nels_branch = tree->GetBranch(tree->GetAlias("evt_nels"));
		evt_nels_branch->SetAddress(&evt_nels_);
	}
	if(evt_nels_branch == 0 ) {
	cout << "Branch evt_nels does not exist." << endl;
	}
	evt_detectorStatus_branch = 0;
	if (tree->GetAlias("evt_detectorStatus") != 0) {
		evt_detectorStatus_branch = tree->GetBranch(tree->GetAlias("evt_detectorStatus"));
		evt_detectorStatus_branch->SetAddress(&evt_detectorStatus_);
	}
	if(evt_detectorStatus_branch == 0 ) {
	cout << "Branch evt_detectorStatus does not exist." << endl;
	}
	evt_event_branch = 0;
	if (tree->GetAlias("evt_event") != 0) {
		evt_event_branch = tree->GetBranch(tree->GetAlias("evt_event"));
		evt_event_branch->SetAddress(&evt_event_);
	}
	if(evt_event_branch == 0 ) {
	cout << "Branch evt_event does not exist." << endl;
	}
	evt_lumiBlock_branch = 0;
	if (tree->GetAlias("evt_lumiBlock") != 0) {
		evt_lumiBlock_branch = tree->GetBranch(tree->GetAlias("evt_lumiBlock"));
		evt_lumiBlock_branch->SetAddress(&evt_lumiBlock_);
	}
	if(evt_lumiBlock_branch == 0 ) {
	cout << "Branch evt_lumiBlock does not exist." << endl;
	}
	evt_run_branch = 0;
	if (tree->GetAlias("evt_run") != 0) {
		evt_run_branch = tree->GetBranch(tree->GetAlias("evt_run"));
		evt_run_branch->SetAddress(&evt_run_);
	}
	if(evt_run_branch == 0 ) {
	cout << "Branch evt_run does not exist." << endl;
	}
	genps_flavorHistoryFilterResult_branch = 0;
	if (tree->GetAlias("genps_flavorHistoryFilterResult") != 0) {
		genps_flavorHistoryFilterResult_branch = tree->GetBranch(tree->GetAlias("genps_flavorHistoryFilterResult"));
		genps_flavorHistoryFilterResult_branch->SetAddress(&genps_flavorHistoryFilterResult_);
	}
	if(genps_flavorHistoryFilterResult_branch == 0 ) {
	cout << "Branch genps_flavorHistoryFilterResult does not exist." << endl;
	}
	evt_ngenjets_branch = 0;
	if (tree->GetAlias("evt_ngenjets") != 0) {
		evt_ngenjets_branch = tree->GetBranch(tree->GetAlias("evt_ngenjets"));
		evt_ngenjets_branch->SetAddress(&evt_ngenjets_);
	}
	if(evt_ngenjets_branch == 0 ) {
	cout << "Branch evt_ngenjets does not exist." << endl;
	}
	genps_signalProcessID_branch = 0;
	if (tree->GetAlias("genps_signalProcessID") != 0) {
		genps_signalProcessID_branch = tree->GetBranch(tree->GetAlias("genps_signalProcessID"));
		genps_signalProcessID_branch->SetAddress(&genps_signalProcessID_);
	}
	if(genps_signalProcessID_branch == 0 ) {
	cout << "Branch genps_signalProcessID does not exist." << endl;
	}
	hlt_bits1_branch = 0;
	if (tree->GetAlias("hlt_bits1") != 0) {
		hlt_bits1_branch = tree->GetBranch(tree->GetAlias("hlt_bits1"));
		hlt_bits1_branch->SetAddress(&hlt_bits1_);
	}
	if(hlt_bits1_branch == 0 ) {
	cout << "Branch hlt_bits1 does not exist." << endl;
	}
	hlt_bits2_branch = 0;
	if (tree->GetAlias("hlt_bits2") != 0) {
		hlt_bits2_branch = tree->GetBranch(tree->GetAlias("hlt_bits2"));
		hlt_bits2_branch->SetAddress(&hlt_bits2_);
	}
	if(hlt_bits2_branch == 0 ) {
	cout << "Branch hlt_bits2 does not exist." << endl;
	}
	hlt_bits3_branch = 0;
	if (tree->GetAlias("hlt_bits3") != 0) {
		hlt_bits3_branch = tree->GetBranch(tree->GetAlias("hlt_bits3"));
		hlt_bits3_branch->SetAddress(&hlt_bits3_);
	}
	if(hlt_bits3_branch == 0 ) {
	cout << "Branch hlt_bits3 does not exist." << endl;
	}
	hlt_bits4_branch = 0;
	if (tree->GetAlias("hlt_bits4") != 0) {
		hlt_bits4_branch = tree->GetBranch(tree->GetAlias("hlt_bits4"));
		hlt_bits4_branch->SetAddress(&hlt_bits4_);
	}
	if(hlt_bits4_branch == 0 ) {
	cout << "Branch hlt_bits4 does not exist." << endl;
	}
	hlt_bits5_branch = 0;
	if (tree->GetAlias("hlt_bits5") != 0) {
		hlt_bits5_branch = tree->GetBranch(tree->GetAlias("hlt_bits5"));
		hlt_bits5_branch->SetAddress(&hlt_bits5_);
	}
	if(hlt_bits5_branch == 0 ) {
	cout << "Branch hlt_bits5 does not exist." << endl;
	}
	hlt_bits6_branch = 0;
	if (tree->GetAlias("hlt_bits6") != 0) {
		hlt_bits6_branch = tree->GetBranch(tree->GetAlias("hlt_bits6"));
		hlt_bits6_branch->SetAddress(&hlt_bits6_);
	}
	if(hlt_bits6_branch == 0 ) {
	cout << "Branch hlt_bits6 does not exist." << endl;
	}
	hlt_bits7_branch = 0;
	if (tree->GetAlias("hlt_bits7") != 0) {
		hlt_bits7_branch = tree->GetBranch(tree->GetAlias("hlt_bits7"));
		hlt_bits7_branch->SetAddress(&hlt_bits7_);
	}
	if(hlt_bits7_branch == 0 ) {
	cout << "Branch hlt_bits7 does not exist." << endl;
	}
	hlt_bits8_branch = 0;
	if (tree->GetAlias("hlt_bits8") != 0) {
		hlt_bits8_branch = tree->GetBranch(tree->GetAlias("hlt_bits8"));
		hlt_bits8_branch->SetAddress(&hlt_bits8_);
	}
	if(hlt_bits8_branch == 0 ) {
	cout << "Branch hlt_bits8 does not exist." << endl;
	}
	evt_njets_branch = 0;
	if (tree->GetAlias("evt_njets") != 0) {
		evt_njets_branch = tree->GetBranch(tree->GetAlias("evt_njets"));
		evt_njets_branch->SetAddress(&evt_njets_);
	}
	if(evt_njets_branch == 0 ) {
	cout << "Branch evt_njets does not exist." << endl;
	}
	evt_njpts_branch = 0;
	if (tree->GetAlias("evt_njpts") != 0) {
		evt_njpts_branch = tree->GetBranch(tree->GetAlias("evt_njpts"));
		evt_njpts_branch->SetAddress(&evt_njpts_);
	}
	if(evt_njpts_branch == 0 ) {
	cout << "Branch evt_njpts does not exist." << endl;
	}
	l1_bits1_branch = 0;
	if (tree->GetAlias("l1_bits1") != 0) {
		l1_bits1_branch = tree->GetBranch(tree->GetAlias("l1_bits1"));
		l1_bits1_branch->SetAddress(&l1_bits1_);
	}
	if(l1_bits1_branch == 0 ) {
	cout << "Branch l1_bits1 does not exist." << endl;
	}
	l1_bits2_branch = 0;
	if (tree->GetAlias("l1_bits2") != 0) {
		l1_bits2_branch = tree->GetBranch(tree->GetAlias("l1_bits2"));
		l1_bits2_branch->SetAddress(&l1_bits2_);
	}
	if(l1_bits2_branch == 0 ) {
	cout << "Branch l1_bits2 does not exist." << endl;
	}
	l1_bits3_branch = 0;
	if (tree->GetAlias("l1_bits3") != 0) {
		l1_bits3_branch = tree->GetBranch(tree->GetAlias("l1_bits3"));
		l1_bits3_branch->SetAddress(&l1_bits3_);
	}
	if(l1_bits3_branch == 0 ) {
	cout << "Branch l1_bits3 does not exist." << endl;
	}
	l1_bits4_branch = 0;
	if (tree->GetAlias("l1_bits4") != 0) {
		l1_bits4_branch = tree->GetBranch(tree->GetAlias("l1_bits4"));
		l1_bits4_branch->SetAddress(&l1_bits4_);
	}
	if(l1_bits4_branch == 0 ) {
	cout << "Branch l1_bits4 does not exist." << endl;
	}
	l1_techbits1_branch = 0;
	if (tree->GetAlias("l1_techbits1") != 0) {
		l1_techbits1_branch = tree->GetBranch(tree->GetAlias("l1_techbits1"));
		l1_techbits1_branch->SetAddress(&l1_techbits1_);
	}
	if(l1_techbits1_branch == 0 ) {
	cout << "Branch l1_techbits1 does not exist." << endl;
	}
	l1_techbits2_branch = 0;
	if (tree->GetAlias("l1_techbits2") != 0) {
		l1_techbits2_branch = tree->GetBranch(tree->GetAlias("l1_techbits2"));
		l1_techbits2_branch->SetAddress(&l1_techbits2_);
	}
	if(l1_techbits2_branch == 0 ) {
	cout << "Branch l1_techbits2 does not exist." << endl;
	}
	evt_nphotons_branch = 0;
	if (tree->GetAlias("evt_nphotons") != 0) {
		evt_nphotons_branch = tree->GetBranch(tree->GetAlias("evt_nphotons"));
		evt_nphotons_branch->SetAddress(&evt_nphotons_);
	}
	if(evt_nphotons_branch == 0 ) {
	cout << "Branch evt_nphotons does not exist." << endl;
	}
	evt_nscs_branch = 0;
	if (tree->GetAlias("evt_nscs") != 0) {
		evt_nscs_branch = tree->GetBranch(tree->GetAlias("evt_nscs"));
		evt_nscs_branch->SetAddress(&evt_nscs_);
	}
	if(evt_nscs_branch == 0 ) {
	cout << "Branch evt_nscs does not exist." << endl;
	}
	evt_nscjets_branch = 0;
	if (tree->GetAlias("evt_nscjets") != 0) {
		evt_nscjets_branch = tree->GetBranch(tree->GetAlias("evt_nscjets"));
		evt_nscjets_branch->SetAddress(&evt_nscjets_);
	}
	if(evt_nscjets_branch == 0 ) {
	cout << "Branch evt_nscjets does not exist." << endl;
	}
	evt_ntrkjets_branch = 0;
	if (tree->GetAlias("evt_ntrkjets") != 0) {
		evt_ntrkjets_branch = tree->GetBranch(tree->GetAlias("evt_ntrkjets"));
		evt_ntrkjets_branch->SetAddress(&evt_ntrkjets_);
	}
	if(evt_ntrkjets_branch == 0 ) {
	cout << "Branch evt_ntrkjets does not exist." << endl;
	}
	evt_nvtxs_branch = 0;
	if (tree->GetAlias("evt_nvtxs") != 0) {
		evt_nvtxs_branch = tree->GetBranch(tree->GetAlias("evt_nvtxs"));
		evt_nvtxs_branch->SetAddress(&evt_nvtxs_);
	}
	if(evt_nvtxs_branch == 0 ) {
	cout << "Branch evt_nvtxs does not exist." << endl;
	}
	twrs_detid_branch = 0;
	if (tree->GetAlias("twrs_detid") != 0) {
		twrs_detid_branch = tree->GetBranch(tree->GetAlias("twrs_detid"));
		twrs_detid_branch->SetAddress(&twrs_detid_);
	}
	if(twrs_detid_branch == 0 ) {
	cout << "Branch twrs_detid does not exist." << endl;
	}
	twrs_numBadEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numBadEcalCells") != 0) {
		twrs_numBadEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numBadEcalCells"));
		twrs_numBadEcalCells_branch->SetAddress(&twrs_numBadEcalCells_);
	}
	if(twrs_numBadEcalCells_branch == 0 ) {
	cout << "Branch twrs_numBadEcalCells does not exist." << endl;
	}
	twrs_numBadHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numBadHcalCells") != 0) {
		twrs_numBadHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numBadHcalCells"));
		twrs_numBadHcalCells_branch->SetAddress(&twrs_numBadHcalCells_);
	}
	if(twrs_numBadHcalCells_branch == 0 ) {
	cout << "Branch twrs_numBadHcalCells does not exist." << endl;
	}
	twrs_numProblematicEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numProblematicEcalCells") != 0) {
		twrs_numProblematicEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numProblematicEcalCells"));
		twrs_numProblematicEcalCells_branch->SetAddress(&twrs_numProblematicEcalCells_);
	}
	if(twrs_numProblematicEcalCells_branch == 0 ) {
	cout << "Branch twrs_numProblematicEcalCells does not exist." << endl;
	}
	twrs_numProblematicHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numProblematicHcalCells") != 0) {
		twrs_numProblematicHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numProblematicHcalCells"));
		twrs_numProblematicHcalCells_branch->SetAddress(&twrs_numProblematicHcalCells_);
	}
	if(twrs_numProblematicHcalCells_branch == 0 ) {
	cout << "Branch twrs_numProblematicHcalCells does not exist." << endl;
	}
	twrs_numRecoveredEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numRecoveredEcalCells") != 0) {
		twrs_numRecoveredEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numRecoveredEcalCells"));
		twrs_numRecoveredEcalCells_branch->SetAddress(&twrs_numRecoveredEcalCells_);
	}
	if(twrs_numRecoveredEcalCells_branch == 0 ) {
	cout << "Branch twrs_numRecoveredEcalCells does not exist." << endl;
	}
	twrs_numRecoveredHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numRecoveredHcalCells") != 0) {
		twrs_numRecoveredHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numRecoveredHcalCells"));
		twrs_numRecoveredHcalCells_branch->SetAddress(&twrs_numRecoveredHcalCells_);
	}
	if(twrs_numRecoveredHcalCells_branch == 0 ) {
	cout << "Branch twrs_numRecoveredHcalCells does not exist." << endl;
	}
	twrsUncleaned_detid_branch = 0;
	if (tree->GetAlias("twrsUncleaned_detid") != 0) {
		twrsUncleaned_detid_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_detid"));
		twrsUncleaned_detid_branch->SetAddress(&twrsUncleaned_detid_);
	}
	if(twrsUncleaned_detid_branch == 0 ) {
	cout << "Branch twrsUncleaned_detid does not exist." << endl;
	}
	twrsUncleaned_numBadEcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numBadEcalCells") != 0) {
		twrsUncleaned_numBadEcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numBadEcalCells"));
		twrsUncleaned_numBadEcalCells_branch->SetAddress(&twrsUncleaned_numBadEcalCells_);
	}
	if(twrsUncleaned_numBadEcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numBadEcalCells does not exist." << endl;
	}
	twrsUncleaned_numBadHcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numBadHcalCells") != 0) {
		twrsUncleaned_numBadHcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numBadHcalCells"));
		twrsUncleaned_numBadHcalCells_branch->SetAddress(&twrsUncleaned_numBadHcalCells_);
	}
	if(twrsUncleaned_numBadHcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numBadHcalCells does not exist." << endl;
	}
	twrsUncleaned_numProblematicEcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numProblematicEcalCells") != 0) {
		twrsUncleaned_numProblematicEcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numProblematicEcalCells"));
		twrsUncleaned_numProblematicEcalCells_branch->SetAddress(&twrsUncleaned_numProblematicEcalCells_);
	}
	if(twrsUncleaned_numProblematicEcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numProblematicEcalCells does not exist." << endl;
	}
	twrsUncleaned_numProblematicHcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numProblematicHcalCells") != 0) {
		twrsUncleaned_numProblematicHcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numProblematicHcalCells"));
		twrsUncleaned_numProblematicHcalCells_branch->SetAddress(&twrsUncleaned_numProblematicHcalCells_);
	}
	if(twrsUncleaned_numProblematicHcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numProblematicHcalCells does not exist." << endl;
	}
	twrsUncleaned_numRecoveredEcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numRecoveredEcalCells") != 0) {
		twrsUncleaned_numRecoveredEcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numRecoveredEcalCells"));
		twrsUncleaned_numRecoveredEcalCells_branch->SetAddress(&twrsUncleaned_numRecoveredEcalCells_);
	}
	if(twrsUncleaned_numRecoveredEcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numRecoveredEcalCells does not exist." << endl;
	}
	twrsUncleaned_numRecoveredHcalCells_branch = 0;
	if (tree->GetAlias("twrsUncleaned_numRecoveredHcalCells") != 0) {
		twrsUncleaned_numRecoveredHcalCells_branch = tree->GetBranch(tree->GetAlias("twrsUncleaned_numRecoveredHcalCells"));
		twrsUncleaned_numRecoveredHcalCells_branch->SetAddress(&twrsUncleaned_numRecoveredHcalCells_);
	}
	if(twrsUncleaned_numRecoveredHcalCells_branch == 0 ) {
	cout << "Branch twrsUncleaned_numRecoveredHcalCells does not exist." << endl;
	}
	hyp_quadlep_bucket_branch = 0;
	if (tree->GetAlias("hyp_quadlep_bucket") != 0) {
		hyp_quadlep_bucket_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_bucket"));
		hyp_quadlep_bucket_branch->SetAddress(&hyp_quadlep_bucket_);
	}
	if(hyp_quadlep_bucket_branch == 0 ) {
	cout << "Branch hyp_quadlep_bucket does not exist." << endl;
	}
	hyp_quadlep_first_index_branch = 0;
	if (tree->GetAlias("hyp_quadlep_first_index") != 0) {
		hyp_quadlep_first_index_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_first_index"));
		hyp_quadlep_first_index_branch->SetAddress(&hyp_quadlep_first_index_);
	}
	if(hyp_quadlep_first_index_branch == 0 ) {
	cout << "Branch hyp_quadlep_first_index does not exist." << endl;
	}
	hyp_quadlep_fourth_index_branch = 0;
	if (tree->GetAlias("hyp_quadlep_fourth_index") != 0) {
		hyp_quadlep_fourth_index_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_fourth_index"));
		hyp_quadlep_fourth_index_branch->SetAddress(&hyp_quadlep_fourth_index_);
	}
	if(hyp_quadlep_fourth_index_branch == 0 ) {
	cout << "Branch hyp_quadlep_fourth_index does not exist." << endl;
	}
	hyp_quadlep_second_index_branch = 0;
	if (tree->GetAlias("hyp_quadlep_second_index") != 0) {
		hyp_quadlep_second_index_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_second_index"));
		hyp_quadlep_second_index_branch->SetAddress(&hyp_quadlep_second_index_);
	}
	if(hyp_quadlep_second_index_branch == 0 ) {
	cout << "Branch hyp_quadlep_second_index does not exist." << endl;
	}
	hyp_quadlep_third_index_branch = 0;
	if (tree->GetAlias("hyp_quadlep_third_index") != 0) {
		hyp_quadlep_third_index_branch = tree->GetBranch(tree->GetAlias("hyp_quadlep_third_index"));
		hyp_quadlep_third_index_branch->SetAddress(&hyp_quadlep_third_index_);
	}
	if(hyp_quadlep_third_index_branch == 0 ) {
	cout << "Branch hyp_quadlep_third_index does not exist." << endl;
	}
	hyp_trilep_bucket_branch = 0;
	if (tree->GetAlias("hyp_trilep_bucket") != 0) {
		hyp_trilep_bucket_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_bucket"));
		hyp_trilep_bucket_branch->SetAddress(&hyp_trilep_bucket_);
	}
	if(hyp_trilep_bucket_branch == 0 ) {
	cout << "Branch hyp_trilep_bucket does not exist." << endl;
	}
	hyp_trilep_first_index_branch = 0;
	if (tree->GetAlias("hyp_trilep_first_index") != 0) {
		hyp_trilep_first_index_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_first_index"));
		hyp_trilep_first_index_branch->SetAddress(&hyp_trilep_first_index_);
	}
	if(hyp_trilep_first_index_branch == 0 ) {
	cout << "Branch hyp_trilep_first_index does not exist." << endl;
	}
	hyp_trilep_second_index_branch = 0;
	if (tree->GetAlias("hyp_trilep_second_index") != 0) {
		hyp_trilep_second_index_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_second_index"));
		hyp_trilep_second_index_branch->SetAddress(&hyp_trilep_second_index_);
	}
	if(hyp_trilep_second_index_branch == 0 ) {
	cout << "Branch hyp_trilep_second_index does not exist." << endl;
	}
	hyp_trilep_third_index_branch = 0;
	if (tree->GetAlias("hyp_trilep_third_index") != 0) {
		hyp_trilep_third_index_branch = tree->GetBranch(tree->GetAlias("hyp_trilep_third_index"));
		hyp_trilep_third_index_branch->SetAddress(&hyp_trilep_third_index_);
	}
	if(hyp_trilep_third_index_branch == 0 ) {
	cout << "Branch hyp_trilep_third_index does not exist." << endl;
	}
	evt_nEvts_branch = 0;
	if (tree->GetAlias("evt_nEvts") != 0) {
		evt_nEvts_branch = tree->GetBranch(tree->GetAlias("evt_nEvts"));
		evt_nEvts_branch->SetAddress(&evt_nEvts_);
	}
	if(evt_nEvts_branch == 0 ) {
	cout << "Branch evt_nEvts does not exist." << endl;
	}
	evt_filt_eff_branch = 0;
	if (tree->GetAlias("evt_filt_eff") != 0) {
		evt_filt_eff_branch = tree->GetBranch(tree->GetAlias("evt_filt_eff"));
		evt_filt_eff_branch->SetAddress(&evt_filt_eff_);
	}
	if(evt_filt_eff_branch == 0 ) {
	cout << "Branch evt_filt_eff does not exist." << endl;
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		evt_CMS2tag_isLoaded = false;
		evt_dataset_isLoaded = false;
		hlt_trigNames_isLoaded = false;
		l1_trigNames_isLoaded = false;
		jets_closestElectron_DR_isLoaded = false;
		jets_closestMuon_DR_isLoaded = false;
		evt_bs_Xwidth_isLoaded = false;
		evt_bs_XwidthErr_isLoaded = false;
		evt_bs_Ywidth_isLoaded = false;
		evt_bs_YwidthErr_isLoaded = false;
		evt_bs_dxdz_isLoaded = false;
		evt_bs_dxdzErr_isLoaded = false;
		evt_bs_dydz_isLoaded = false;
		evt_bs_dydzErr_isLoaded = false;
		evt_bs_sigmaZ_isLoaded = false;
		evt_bs_sigmaZErr_isLoaded = false;
		evt_bs_xErr_isLoaded = false;
		evt_bs_yErr_isLoaded = false;
		evt_bs_zErr_isLoaded = false;
		evt_bField_isLoaded = false;
		evt_kfactor_isLoaded = false;
		evt_scale1fb_isLoaded = false;
		evt_xsec_excl_isLoaded = false;
		evt_xsec_incl_isLoaded = false;
		gen_met_isLoaded = false;
		gen_metPhi_isLoaded = false;
		genps_alphaQCD_isLoaded = false;
		genps_pthat_isLoaded = false;
		genps_qScale_isLoaded = false;
		genps_weight_isLoaded = false;
		gen_sumEt_isLoaded = false;
		hcalnoise_eventChargeFraction_isLoaded = false;
		hcalnoise_eventEMEnergy_isLoaded = false;
		hcalnoise_eventEMFraction_isLoaded = false;
		hcalnoise_eventHadEnergy_isLoaded = false;
		hcalnoise_eventTrackEnergy_isLoaded = false;
		hcalnoise_max10GeVHitTime_isLoaded = false;
		hcalnoise_max25GeVHitTime_isLoaded = false;
		hcalnoise_min10GeVHitTime_isLoaded = false;
		hcalnoise_min25GeVHitTime_isLoaded = false;
		hcalnoise_minE10TS_isLoaded = false;
		hcalnoise_minE2Over10TS_isLoaded = false;
		hcalnoise_minE2TS_isLoaded = false;
		hcalnoise_minHPDEMF_isLoaded = false;
		hcalnoise_minRBXEMF_isLoaded = false;
		hcalnoise_rms10GeVHitTime_isLoaded = false;
		hcalnoise_rms25GeVHitTime_isLoaded = false;
		l1_met_etTot_isLoaded = false;
		l1_met_met_isLoaded = false;
		l1_mht_htTot_isLoaded = false;
		l1_mht_mht_isLoaded = false;
		evt_ecalendcapm_met_isLoaded = false;
		evt_ecalendcapm_metPhi_isLoaded = false;
		evt_ecalendcapp_met_isLoaded = false;
		evt_ecalendcapp_metPhi_isLoaded = false;
		evt_ecalmet_isLoaded = false;
		evt_ecalmetPhi_isLoaded = false;
		evt_endcapm_met_isLoaded = false;
		evt_endcapm_metPhi_isLoaded = false;
		evt_endcapp_met_isLoaded = false;
		evt_endcapp_metPhi_isLoaded = false;
		evt_hcalendcapm_met_isLoaded = false;
		evt_hcalendcapm_metPhi_isLoaded = false;
		evt_hcalendcapp_met_isLoaded = false;
		evt_hcalendcapp_metPhi_isLoaded = false;
		evt_hcalmet_isLoaded = false;
		evt_hcalmetPhi_isLoaded = false;
		evt_met_isLoaded = false;
		evt_metHO_isLoaded = false;
		evt_metHOPhi_isLoaded = false;
		evt_metHOSig_isLoaded = false;
		evt_metMuonCorr_isLoaded = false;
		evt_metMuonCorrPhi_isLoaded = false;
		evt_metMuonCorrSig_isLoaded = false;
		evt_metMuonJESCorr_isLoaded = false;
		evt_metMuonJESCorrPhi_isLoaded = false;
		evt_metMuonJESCorrSig_isLoaded = false;
		evt_metNoHF_isLoaded = false;
		evt_metNoHFHO_isLoaded = false;
		evt_metNoHFHOPhi_isLoaded = false;
		evt_metNoHFHOSig_isLoaded = false;
		evt_metNoHFPhi_isLoaded = false;
		evt_metNoHFSig_isLoaded = false;
		evt_metOpt_isLoaded = false;
		evt_metOptHO_isLoaded = false;
		evt_metOptHOPhi_isLoaded = false;
		evt_metOptHOSig_isLoaded = false;
		evt_metOptNoHF_isLoaded = false;
		evt_metOptNoHFHO_isLoaded = false;
		evt_metOptNoHFHOPhi_isLoaded = false;
		evt_metOptNoHFHOSig_isLoaded = false;
		evt_metOptNoHFPhi_isLoaded = false;
		evt_metOptNoHFSig_isLoaded = false;
		evt_metOptPhi_isLoaded = false;
		evt_metOptSig_isLoaded = false;
		evt_metPhi_isLoaded = false;
		evt_metSig_isLoaded = false;
		evt_sumet_isLoaded = false;
		evt_sumetHO_isLoaded = false;
		evt_sumetMuonCorr_isLoaded = false;
		evt_sumetNoHF_isLoaded = false;
		evt_sumetNoHFHO_isLoaded = false;
		evt_sumetOpt_isLoaded = false;
		evt_sumetOptHO_isLoaded = false;
		evt_sumetOptNoHF_isLoaded = false;
		evt_sumetOptNoHFHO_isLoaded = false;
		pdfinfo_scale_isLoaded = false;
		pdfinfo_x1_isLoaded = false;
		pdfinfo_x2_isLoaded = false;
		evt_pfmet_isLoaded = false;
		evt_pfmetPhi_isLoaded = false;
		evt_pfmetSig_isLoaded = false;
		evt_pfsumet_isLoaded = false;
		evt_tcmet_isLoaded = false;
		evt_tcmetPhi_isLoaded = false;
		evt_tcmetSig_isLoaded = false;
		evt_tcsumet_isLoaded = false;
		evt_bsp4_isLoaded = false;
		l1_met_p4_isLoaded = false;
		l1_mht_p4_isLoaded = false;
		taus_calo_p4_isLoaded = false;
		els_mc_motherp4_isLoaded = false;
		els_mc_p4_isLoaded = false;
		jets_mc_gp_p4_isLoaded = false;
		jets_mc_p4_isLoaded = false;
		mus_mc_motherp4_isLoaded = false;
		mus_mc_p4_isLoaded = false;
		trk_mcp4_isLoaded = false;
		els_inner_position_isLoaded = false;
		els_outer_position_isLoaded = false;
		els_p4_isLoaded = false;
		els_p4In_isLoaded = false;
		els_p4Out_isLoaded = false;
		els_trk_p4_isLoaded = false;
		els_vertex_p4_isLoaded = false;
		genjets_p4_isLoaded = false;
		genps_p4_isLoaded = false;
		genps_prod_vtx_isLoaded = false;
		hyp_ll_p4_isLoaded = false;
		hyp_ll_trk_p4_isLoaded = false;
		hyp_lt_p4_isLoaded = false;
		hyp_lt_trk_p4_isLoaded = false;
		hyp_p4_isLoaded = false;
		hyp_FVFit_p4_isLoaded = false;
		hyp_FVFit_v4_isLoaded = false;
		hyp_ll_mc_p4_isLoaded = false;
		hyp_lt_mc_p4_isLoaded = false;
		jets_p4_isLoaded = false;
		jets_vertex_p4_isLoaded = false;
		jpts_p4_isLoaded = false;
		l1_emiso_p4_isLoaded = false;
		l1_emnoiso_p4_isLoaded = false;
		l1_jetsc_p4_isLoaded = false;
		l1_jetsf_p4_isLoaded = false;
		l1_jetst_p4_isLoaded = false;
		l1_mus_p4_isLoaded = false;
		mus_fitdefault_p4_isLoaded = false;
		mus_fitfirsthit_p4_isLoaded = false;
		mus_fitpicky_p4_isLoaded = false;
		mus_fittev_p4_isLoaded = false;
		mus_gfit_outerPos_p4_isLoaded = false;
		mus_gfit_p4_isLoaded = false;
		mus_gfit_vertex_p4_isLoaded = false;
		mus_p4_isLoaded = false;
		mus_sta_p4_isLoaded = false;
		mus_sta_vertex_p4_isLoaded = false;
		mus_trk_p4_isLoaded = false;
		mus_vertex_p4_isLoaded = false;
		pfjets_p4_isLoaded = false;
		taus_pf_lead_chargecand_p4_isLoaded = false;
		taus_pf_lead_neutrcand_p4_isLoaded = false;
		taus_pf_p4_isLoaded = false;
		photons_p4_isLoaded = false;
		ran_trksecalp4_isLoaded = false;
		ran_trksp4_isLoaded = false;
		scs_p4_isLoaded = false;
		scs_pos_p4_isLoaded = false;
		scs_vtx_p4_isLoaded = false;
		scjets_p4_isLoaded = false;
		scjets_vertex_p4_isLoaded = false;
		trks_inner_position_isLoaded = false;
		trks_outer_p4_isLoaded = false;
		trks_outer_position_isLoaded = false;
		trks_trk_p4_isLoaded = false;
		trks_vertex_p4_isLoaded = false;
		trkjets_p4_isLoaded = false;
		vtxs_position_isLoaded = false;
		genps_lepdaughter_p4_isLoaded = false;
		hlt_trigObjs_p4_isLoaded = false;
		hyp_jets_p4_isLoaded = false;
		hyp_other_jets_p4_isLoaded = false;
		taus_pf_isochargecand_p4_isLoaded = false;
		taus_pf_isogammacand_p4_isLoaded = false;
		taus_pf_isoneutrcand_p4_isLoaded = false;
		taus_pf_sigchargecand_p4_isLoaded = false;
		taus_pf_siggammacand_p4_isLoaded = false;
		taus_pf_signeutrcand_p4_isLoaded = false;
		jets_combinedSecondaryVertexBJetTag_isLoaded = false;
		jets_combinedSecondaryVertexMVABJetTag_isLoaded = false;
		jets_jetBProbabilityBJetTag_isLoaded = false;
		jets_jetProbabilityBJetTag_isLoaded = false;
		jets_simpleSecondaryVertexBJetTag_isLoaded = false;
		jets_softElectronByIP3dBJetTag_isLoaded = false;
		jets_softElectronByPtBJetTag_isLoaded = false;
		jets_softMuonBJetTag_isLoaded = false;
		jets_softMuonByIP3dBJetTag_isLoaded = false;
		jets_softMuonByPtBJetTag_isLoaded = false;
		jets_softMuonNoIPBJetTag_isLoaded = false;
		jets_trackCountingHighEffBJetTag_isLoaded = false;
		jets_trackCountingHighPurBJetTag_isLoaded = false;
		trkjets_combinedSecondaryVertexBJetTag_isLoaded = false;
		trkjets_combinedSecondaryVertexMVABJetTag_isLoaded = false;
		trkjets_jetBProbabilityBJetTag_isLoaded = false;
		trkjets_jetProbabilityBJetTag_isLoaded = false;
		trkjets_simpleSecondaryVertexBJetTag_isLoaded = false;
		trkjets_softElectronByIP3dBJetTag_isLoaded = false;
		trkjets_softElectronByPtBJetTag_isLoaded = false;
		trkjets_softMuonBJetTag_isLoaded = false;
		trkjets_softMuonByIP3dBJetTag_isLoaded = false;
		trkjets_softMuonByPtBJetTag_isLoaded = false;
		trkjets_softMuonNoIPBJetTag_isLoaded = false;
		trkjets_trackCountingHighEffBJetTag_isLoaded = false;
		trkjets_trackCountingHighPurBJetTag_isLoaded = false;
		evt_bs_covMatrix_isLoaded = false;
		twrs_ecalTime_isLoaded = false;
		twrs_emEnergy_isLoaded = false;
		twrs_emEt_isLoaded = false;
		twrs_emEtcorr_isLoaded = false;
		twrs_eta_isLoaded = false;
		twrs_etacorr_isLoaded = false;
		twrs_etcorr_isLoaded = false;
		twrs_hadEnergy_isLoaded = false;
		twrs_hadEt_isLoaded = false;
		twrs_hadEtcorr_isLoaded = false;
		twrs_hcalTime_isLoaded = false;
		twrs_outerEnergy_isLoaded = false;
		twrs_outerEt_isLoaded = false;
		twrs_outerEtcorr_isLoaded = false;
		twrs_pcorr_isLoaded = false;
		twrs_phi_isLoaded = false;
		twrs_phicorr_isLoaded = false;
		twrs_spikeEt_isLoaded = false;
		twrs_spikeR4_isLoaded = false;
		twrsUncleaned_ecalTime_isLoaded = false;
		twrsUncleaned_emEnergy_isLoaded = false;
		twrsUncleaned_emEt_isLoaded = false;
		twrsUncleaned_emEtcorr_isLoaded = false;
		twrsUncleaned_eta_isLoaded = false;
		twrsUncleaned_etacorr_isLoaded = false;
		twrsUncleaned_etcorr_isLoaded = false;
		twrsUncleaned_hadEnergy_isLoaded = false;
		twrsUncleaned_hadEt_isLoaded = false;
		twrsUncleaned_hadEtcorr_isLoaded = false;
		twrsUncleaned_hcalTime_isLoaded = false;
		twrsUncleaned_outerEnergy_isLoaded = false;
		twrsUncleaned_outerEt_isLoaded = false;
		twrsUncleaned_outerEtcorr_isLoaded = false;
		twrsUncleaned_pcorr_isLoaded = false;
		twrsUncleaned_phi_isLoaded = false;
		twrsUncleaned_phicorr_isLoaded = false;
		twrsUncleaned_spikeEt_isLoaded = false;
		twrsUncleaned_spikeR4_isLoaded = false;
		taus_calo_isolationECALhitsEtSum_isLoaded = false;
		taus_calo_isolationtrksPtSum_isLoaded = false;
		taus_calo_leadtrk_HCAL3x3hitsEtSum_isLoaded = false;
		taus_calo_leadtrk_HCAL3x3hottesthitDEta_isLoaded = false;
		taus_calo_leadtrk_Signed_Sipt_isLoaded = false;
		taus_calo_leadtrk_lostHits_isLoaded = false;
		taus_calo_leadtrk_validHits_isLoaded = false;
		taus_calo_maximumHCALhitEt_isLoaded = false;
		taus_calo_signaltrksInvariantMass_isLoaded = false;
		els_mc3dr_isLoaded = false;
		els_mcdr_isLoaded = false;
		jets_mc3dr_isLoaded = false;
		jets_mcdr_isLoaded = false;
		jets_mc_emEnergy_isLoaded = false;
		jets_mc_gpdr_isLoaded = false;
		jets_mc_hadEnergy_isLoaded = false;
		jets_mc_invEnergy_isLoaded = false;
		jets_mc_otherEnergy_isLoaded = false;
		mus_mc3dr_isLoaded = false;
		mus_mcdr_isLoaded = false;
		trk_mc3dr_isLoaded = false;
		trk_mcdr_isLoaded = false;
		els_ecalJuraIso_isLoaded = false;
		els_ecalJuraTowerIso_isLoaded = false;
		els_hcalConeIso_isLoaded = false;
		els_tkJuraIso_isLoaded = false;
		els_jetdr_isLoaded = false;
		els_musdr_isLoaded = false;
		els_chi2_isLoaded = false;
		els_conv_dcot_isLoaded = false;
		els_conv_dist_isLoaded = false;
		els_d0_isLoaded = false;
		els_d0Err_isLoaded = false;
		els_d0corr_isLoaded = false;
		els_dEtaIn_isLoaded = false;
		els_dEtaOut_isLoaded = false;
		els_dPhiIn_isLoaded = false;
		els_dPhiInPhiOut_isLoaded = false;
		els_dPhiOut_isLoaded = false;
		els_deltaEtaEleClusterTrackAtCalo_isLoaded = false;
		els_deltaPhiEleClusterTrackAtCalo_isLoaded = false;
		els_e1x5_isLoaded = false;
		els_e2x5Max_isLoaded = false;
		els_e3x3_isLoaded = false;
		els_e5x5_isLoaded = false;
		els_eMax_isLoaded = false;
		els_eOverPIn_isLoaded = false;
		els_eOverPOut_isLoaded = false;
		els_eSC_isLoaded = false;
		els_eSCPresh_isLoaded = false;
		els_eSCRaw_isLoaded = false;
		els_eSeed_isLoaded = false;
		els_eSeedOverPIn_isLoaded = false;
		els_eSeedOverPOut_isLoaded = false;
		els_ecalEnergy_isLoaded = false;
		els_ecalEnergyError_isLoaded = false;
		els_ecalIso_isLoaded = false;
		els_ecalIso04_isLoaded = false;
		els_egamma_looseId_isLoaded = false;
		els_egamma_robustHighEnergy_isLoaded = false;
		els_egamma_robustLooseId_isLoaded = false;
		els_egamma_robustTightId_isLoaded = false;
		els_egamma_tightId_isLoaded = false;
		els_electronMomentumError_isLoaded = false;
		els_etaErr_isLoaded = false;
		els_etaSC_isLoaded = false;
		els_fbrem_isLoaded = false;
		els_hOverE_isLoaded = false;
		els_hcalDepth1OverEcal_isLoaded = false;
		els_hcalDepth1TowerSumEt_isLoaded = false;
		els_hcalDepth1TowerSumEt04_isLoaded = false;
		els_hcalDepth2OverEcal_isLoaded = false;
		els_hcalDepth2TowerSumEt_isLoaded = false;
		els_hcalDepth2TowerSumEt04_isLoaded = false;
		els_hcalIso_isLoaded = false;
		els_hcalIso04_isLoaded = false;
		els_layer1_charge_isLoaded = false;
		els_ndof_isLoaded = false;
		els_phiErr_isLoaded = false;
		els_phiSC_isLoaded = false;
		els_ptErr_isLoaded = false;
		els_sigmaEtaEta_isLoaded = false;
		els_sigmaIEtaIEta_isLoaded = false;
		els_sigmaIPhiIPhi_isLoaded = false;
		els_sigmaPhiPhi_isLoaded = false;
		els_tkIso_isLoaded = false;
		els_tkIso04_isLoaded = false;
		els_trackMomentumError_isLoaded = false;
		els_trkdr_isLoaded = false;
		els_trkshFrac_isLoaded = false;
		els_z0_isLoaded = false;
		els_z0Err_isLoaded = false;
		els_z0corr_isLoaded = false;
		hyp_Ht_isLoaded = false;
		hyp_dPhi_nJet_metMuonJESCorr_isLoaded = false;
		hyp_dPhi_nJet_muCorrMet_isLoaded = false;
		hyp_dPhi_nJet_tcMet_isLoaded = false;
		hyp_dPhi_nJet_unCorrMet_isLoaded = false;
		hyp_ll_chi2_isLoaded = false;
		hyp_ll_d0_isLoaded = false;
		hyp_ll_d0Err_isLoaded = false;
		hyp_ll_d0corr_isLoaded = false;
		hyp_ll_dPhi_metMuonJESCorr_isLoaded = false;
		hyp_ll_dPhi_muCorrMet_isLoaded = false;
		hyp_ll_dPhi_tcMet_isLoaded = false;
		hyp_ll_dPhi_unCorrMet_isLoaded = false;
		hyp_ll_etaErr_isLoaded = false;
		hyp_ll_ndof_isLoaded = false;
		hyp_ll_phiErr_isLoaded = false;
		hyp_ll_ptErr_isLoaded = false;
		hyp_ll_z0_isLoaded = false;
		hyp_ll_z0Err_isLoaded = false;
		hyp_ll_z0corr_isLoaded = false;
		hyp_lt_chi2_isLoaded = false;
		hyp_lt_d0_isLoaded = false;
		hyp_lt_d0Err_isLoaded = false;
		hyp_lt_d0corr_isLoaded = false;
		hyp_lt_dPhi_metMuonJESCorr_isLoaded = false;
		hyp_lt_dPhi_muCorrMet_isLoaded = false;
		hyp_lt_dPhi_tcMet_isLoaded = false;
		hyp_lt_dPhi_unCorrMet_isLoaded = false;
		hyp_lt_etaErr_isLoaded = false;
		hyp_lt_ndof_isLoaded = false;
		hyp_lt_phiErr_isLoaded = false;
		hyp_lt_ptErr_isLoaded = false;
		hyp_lt_z0_isLoaded = false;
		hyp_lt_z0Err_isLoaded = false;
		hyp_lt_z0corr_isLoaded = false;
		hyp_mt2_metMuonJESCorr_isLoaded = false;
		hyp_mt2_muCorrMet_isLoaded = false;
		hyp_mt2_tcMet_isLoaded = false;
		hyp_sumJetPt_isLoaded = false;
		hyp_FVFit_chi2ndf_isLoaded = false;
		hyp_FVFit_prob_isLoaded = false;
		hyp_FVFit_v4cxx_isLoaded = false;
		hyp_FVFit_v4cxy_isLoaded = false;
		hyp_FVFit_v4cyy_isLoaded = false;
		hyp_FVFit_v4czx_isLoaded = false;
		hyp_FVFit_v4czy_isLoaded = false;
		hyp_FVFit_v4czz_isLoaded = false;
		hyp_ll_ecaliso_isLoaded = false;
		hyp_ll_trkiso_isLoaded = false;
		hyp_lt_ecaliso_isLoaded = false;
		hyp_lt_trkiso_isLoaded = false;
		jets_approximatefHPD_isLoaded = false;
		jets_approximatefRBX_isLoaded = false;
		jets_cor_isLoaded = false;
		jets_emFrac_isLoaded = false;
		jets_fHPD_isLoaded = false;
		jets_fRBX_isLoaded = false;
		jets_fSubDetector1_isLoaded = false;
		jets_fSubDetector2_isLoaded = false;
		jets_fSubDetector3_isLoaded = false;
		jets_fSubDetector4_isLoaded = false;
		jets_hitsInN90_isLoaded = false;
		jets_n90Hits_isLoaded = false;
		jets_nECALTowers_isLoaded = false;
		jets_nHCALTowers_isLoaded = false;
		jets_restrictedEMF_isLoaded = false;
		jpts_emFrac_isLoaded = false;
		evt_ecalmet_etaslice_isLoaded = false;
		evt_ecalmet_etaslicePhi_isLoaded = false;
		evt_hcalmet_etaslice_isLoaded = false;
		evt_hcalmet_etaslicePhi_isLoaded = false;
		evt_towermet_etaslice_isLoaded = false;
		evt_towermet_etaslicePhi_isLoaded = false;
		mus_met_deltax_isLoaded = false;
		mus_met_deltay_isLoaded = false;
		mus_eledr_isLoaded = false;
		mus_jetdr_isLoaded = false;
		mus_caloCompatibility_isLoaded = false;
		mus_chi2_isLoaded = false;
		mus_d0_isLoaded = false;
		mus_d0Err_isLoaded = false;
		mus_d0corr_isLoaded = false;
		mus_e_em_isLoaded = false;
		mus_e_emS9_isLoaded = false;
		mus_e_had_isLoaded = false;
		mus_e_hadS9_isLoaded = false;
		mus_e_ho_isLoaded = false;
		mus_e_hoS9_isLoaded = false;
		mus_etaErr_isLoaded = false;
		mus_gfit_chi2_isLoaded = false;
		mus_gfit_d0_isLoaded = false;
		mus_gfit_d0Err_isLoaded = false;
		mus_gfit_d0corr_isLoaded = false;
		mus_gfit_ndof_isLoaded = false;
		mus_gfit_qoverp_isLoaded = false;
		mus_gfit_qoverpError_isLoaded = false;
		mus_gfit_z0_isLoaded = false;
		mus_gfit_z0Err_isLoaded = false;
		mus_gfit_z0corr_isLoaded = false;
		mus_iso03_emEt_isLoaded = false;
		mus_iso03_hadEt_isLoaded = false;
		mus_iso03_hoEt_isLoaded = false;
		mus_iso03_sumPt_isLoaded = false;
		mus_iso05_emEt_isLoaded = false;
		mus_iso05_hadEt_isLoaded = false;
		mus_iso05_hoEt_isLoaded = false;
		mus_iso05_sumPt_isLoaded = false;
		mus_iso_ecalvetoDep_isLoaded = false;
		mus_iso_hcalvetoDep_isLoaded = false;
		mus_iso_hovetoDep_isLoaded = false;
		mus_iso_trckvetoDep_isLoaded = false;
		mus_ndof_isLoaded = false;
		mus_phiErr_isLoaded = false;
		mus_ptErr_isLoaded = false;
		mus_qoverp_isLoaded = false;
		mus_qoverpError_isLoaded = false;
		mus_sta_chi2_isLoaded = false;
		mus_sta_d0_isLoaded = false;
		mus_sta_d0Err_isLoaded = false;
		mus_sta_d0corr_isLoaded = false;
		mus_sta_ndof_isLoaded = false;
		mus_sta_qoverp_isLoaded = false;
		mus_sta_qoverpError_isLoaded = false;
		mus_sta_z0_isLoaded = false;
		mus_sta_z0Err_isLoaded = false;
		mus_sta_z0corr_isLoaded = false;
		mus_timeAtIpInOut_isLoaded = false;
		mus_timeAtIpInOutErr_isLoaded = false;
		mus_timeAtIpOutIn_isLoaded = false;
		mus_timeAtIpOutInErr_isLoaded = false;
		mus_vertexphi_isLoaded = false;
		mus_z0_isLoaded = false;
		mus_z0Err_isLoaded = false;
		mus_z0corr_isLoaded = false;
		pfjets_chargedEmE_isLoaded = false;
		pfjets_chargedHadronE_isLoaded = false;
		pfjets_cor_isLoaded = false;
		pfjets_neutralEmE_isLoaded = false;
		pfjets_neutralHadronE_isLoaded = false;
		taus_pf_caloComp_isLoaded = false;
		taus_pf_ecalStripSumEOverPLead_isLoaded = false;
		taus_pf_electronPreIDOutput_isLoaded = false;
		taus_pf_emf_isLoaded = false;
		taus_pf_hcal3x3OverPLead_isLoaded = false;
		taus_pf_hcalMaxOverPLead_isLoaded = false;
		taus_pf_hcalTotOverPLead_isLoaded = false;
		taus_pf_isolationchargecandPtSum_isLoaded = false;
		taus_pf_isolationgammacandEtSum_isLoaded = false;
		taus_pf_lead_chargecand_Signed_Sipt_isLoaded = false;
		taus_pf_maximumHCALPFClusterEt_isLoaded = false;
		taus_pf_segComp_isLoaded = false;
		photons_e1x5_isLoaded = false;
		photons_e2x5Max_isLoaded = false;
		photons_e3x3_isLoaded = false;
		photons_e5x5_isLoaded = false;
		photons_eMax_isLoaded = false;
		photons_eSC_isLoaded = false;
		photons_eSCPresh_isLoaded = false;
		photons_eSCRaw_isLoaded = false;
		photons_eSeed_isLoaded = false;
		photons_ecalIso_isLoaded = false;
		photons_hOverE_isLoaded = false;
		photons_hcalIso_isLoaded = false;
		photons_sigmaEtaEta_isLoaded = false;
		photons_sigmaIEtaIEta_isLoaded = false;
		photons_sigmaIPhiIPhi_isLoaded = false;
		photons_sigmaPhiPhi_isLoaded = false;
		photons_tkIsoHollow_isLoaded = false;
		photons_tkIsoSolid_isLoaded = false;
		ran_dRClosestTower_isLoaded = false;
		ran_dRClosestTowerEmEt_isLoaded = false;
		ran_ecalIso03_egamma_isLoaded = false;
		ran_ecalIso03_mu_isLoaded = false;
		ran_hcalD1Iso03_egamma_isLoaded = false;
		ran_hcalD2Iso03_egamma_isLoaded = false;
		ran_hcalIso03_egamma_isLoaded = false;
		ran_hcalIso03_mu_isLoaded = false;
		ran_hoIso03_mu_isLoaded = false;
		ran_towerEmEt_isLoaded = false;
		ran_towerHadEt_isLoaded = false;
		ran_trkIso03_egamma_isLoaded = false;
		ran_trkIso03_mu_isLoaded = false;
		scs_clustersSize_isLoaded = false;
		scs_crystalsSize_isLoaded = false;
		scs_e1x3_isLoaded = false;
		scs_e1x5_isLoaded = false;
		scs_e2nd_isLoaded = false;
		scs_e2x2_isLoaded = false;
		scs_e2x5Max_isLoaded = false;
		scs_e3x1_isLoaded = false;
		scs_e3x2_isLoaded = false;
		scs_e3x3_isLoaded = false;
		scs_e4x4_isLoaded = false;
		scs_e5x5_isLoaded = false;
		scs_eMax_isLoaded = false;
		scs_eSeed_isLoaded = false;
		scs_energy_isLoaded = false;
		scs_eta_isLoaded = false;
		scs_hoe_isLoaded = false;
		scs_phi_isLoaded = false;
		scs_preshowerEnergy_isLoaded = false;
		scs_rawEnergy_isLoaded = false;
		scs_sigmaEtaEta_isLoaded = false;
		scs_sigmaEtaPhi_isLoaded = false;
		scs_sigmaIEtaIEta_isLoaded = false;
		scs_sigmaIEtaIPhi_isLoaded = false;
		scs_sigmaIPhiIPhi_isLoaded = false;
		scs_sigmaPhiPhi_isLoaded = false;
		scs_timeSeed_isLoaded = false;
		scjets_approximatefHPD_isLoaded = false;
		scjets_approximatefRBX_isLoaded = false;
		scjets_cor_isLoaded = false;
		scjets_emFrac_isLoaded = false;
		scjets_fHPD_isLoaded = false;
		scjets_fRBX_isLoaded = false;
		scjets_fSubDetector1_isLoaded = false;
		scjets_fSubDetector2_isLoaded = false;
		scjets_fSubDetector3_isLoaded = false;
		scjets_fSubDetector4_isLoaded = false;
		scjets_hitsInN90_isLoaded = false;
		scjets_n90Hits_isLoaded = false;
		scjets_nECALTowers_isLoaded = false;
		scjets_nHCALTowers_isLoaded = false;
		scjets_restrictedEMF_isLoaded = false;
		mus_tcmet_deltax_isLoaded = false;
		mus_tcmet_deltay_isLoaded = false;
		trks_chi2_isLoaded = false;
		trks_d0_isLoaded = false;
		trks_d0Err_isLoaded = false;
		trks_d0corr_isLoaded = false;
		trks_d0corrPhi_isLoaded = false;
		trks_d0phiCov_isLoaded = false;
		trks_etaErr_isLoaded = false;
		trks_layer1_charge_isLoaded = false;
		trks_ndof_isLoaded = false;
		trks_phiErr_isLoaded = false;
		trks_ptErr_isLoaded = false;
		trks_z0_isLoaded = false;
		trks_z0Err_isLoaded = false;
		trks_z0corr_isLoaded = false;
		trks_d0Errvtx_isLoaded = false;
		trks_d0vtx_isLoaded = false;
		vtxs_chi2_isLoaded = false;
		vtxs_ndof_isLoaded = false;
		vtxs_sumpt_isLoaded = false;
		vtxs_xError_isLoaded = false;
		vtxs_yError_isLoaded = false;
		vtxs_zError_isLoaded = false;
		twrs_em3x3_isLoaded = false;
		twrs_em5x5_isLoaded = false;
		twrs_emSwiss_isLoaded = false;
		twrs_emThresh_isLoaded = false;
		twrs_emThreshChi2_isLoaded = false;
		twrs_emThreshEta_isLoaded = false;
		twrs_emThreshTime_isLoaded = false;
		twrsUncleaned_em3x3_isLoaded = false;
		twrsUncleaned_em5x5_isLoaded = false;
		twrsUncleaned_emSwiss_isLoaded = false;
		twrsUncleaned_emThresh_isLoaded = false;
		twrsUncleaned_emThreshChi2_isLoaded = false;
		twrsUncleaned_emThreshEta_isLoaded = false;
		twrsUncleaned_emThreshTime_isLoaded = false;
		vtxs_covMatrix_isLoaded = false;
		evt_cscLooseHaloId_isLoaded = false;
		evt_cscTightHaloId_isLoaded = false;
		evt_ecalLooseHaloId_isLoaded = false;
		evt_ecalTightHaloId_isLoaded = false;
		evt_extremeTightHaloId_isLoaded = false;
		evt_globalLooseHaloId_isLoaded = false;
		evt_globalTightHaloId_isLoaded = false;
		evt_hcalLooseHaloId_isLoaded = false;
		evt_hcalTightHaloId_isLoaded = false;
		evt_looseHaloId_isLoaded = false;
		evt_tightHaloId_isLoaded = false;
		evt_bsType_isLoaded = false;
		evt_bunchCrossing_isLoaded = false;
		evt_experimentType_isLoaded = false;
		evt_orbitNumber_isLoaded = false;
		evt_storeNumber_isLoaded = false;
		hcalnoise_maxHPDHits_isLoaded = false;
		hcalnoise_maxRBXHits_isLoaded = false;
		hcalnoise_maxZeros_isLoaded = false;
		hcalnoise_noiseFilterStatus_isLoaded = false;
		hcalnoise_noiseType_isLoaded = false;
		hcalnoise_num10GeVHits_isLoaded = false;
		hcalnoise_num25GeVHits_isLoaded = false;
		hcalnoise_numProblematicRBXs_isLoaded = false;
		hcalnoise_passHighLevelNoiseFilter_isLoaded = false;
		hcalnoise_passLooseNoiseFilter_isLoaded = false;
		hcalnoise_passTightNoiseFilter_isLoaded = false;
		l1_nemiso_isLoaded = false;
		l1_nemnoiso_isLoaded = false;
		l1_njetsc_isLoaded = false;
		l1_njetsf_isLoaded = false;
		l1_njetst_isLoaded = false;
		l1_nmus_isLoaded = false;
		pdfinfo_id1_isLoaded = false;
		pdfinfo_id2_isLoaded = false;
		evt_ecaliPhiSuspects_isLoaded = false;
		evt_globaliPhiSuspects_isLoaded = false;
		evt_hcaliPhiSuspects_isLoaded = false;
		twrs_numCrystals_isLoaded = false;
		twrsUncleaned_numCrystals_isLoaded = false;
		taus_calo_charge_isLoaded = false;
		taus_calo_leadtrk_idx_isLoaded = false;
		taus_calo_tightId_isLoaded = false;
		els_mc3_id_isLoaded = false;
		els_mc3idx_isLoaded = false;
		els_mc3_motherid_isLoaded = false;
		els_mc3_motheridx_isLoaded = false;
		els_mc_id_isLoaded = false;
		els_mcidx_isLoaded = false;
		els_mc_motherid_isLoaded = false;
		jets_mc3_id_isLoaded = false;
		jets_mc3idx_isLoaded = false;
		jets_mc_gpidx_isLoaded = false;
		jets_mc_id_isLoaded = false;
		jets_mcidx_isLoaded = false;
		mus_mc3_id_isLoaded = false;
		mus_mc3idx_isLoaded = false;
		mus_mc3_motherid_isLoaded = false;
		mus_mc3_motheridx_isLoaded = false;
		mus_mc_id_isLoaded = false;
		mus_mcidx_isLoaded = false;
		mus_mc_motherid_isLoaded = false;
		trk_mc3_id_isLoaded = false;
		trk_mc3idx_isLoaded = false;
		trk_mc3_motherid_isLoaded = false;
		trk_mc3_motheridx_isLoaded = false;
		trk_mc_id_isLoaded = false;
		trk_mcidx_isLoaded = false;
		trk_mc_motherid_isLoaded = false;
		els_closestJet_isLoaded = false;
		els_closestMuon_isLoaded = false;
		els_category_isLoaded = false;
		els_charge_isLoaded = false;
		els_class_isLoaded = false;
		els_conv_tkidx_isLoaded = false;
		els_exp_innerlayers_isLoaded = false;
		els_exp_outerlayers_isLoaded = false;
		els_fiduciality_isLoaded = false;
		els_layer1_det_isLoaded = false;
		els_layer1_layer_isLoaded = false;
		els_layer1_sizerphi_isLoaded = false;
		els_layer1_sizerz_isLoaded = false;
		els_lostHits_isLoaded = false;
		els_lost_pixelhits_isLoaded = false;
		els_nSeed_isLoaded = false;
		els_sccharge_isLoaded = false;
		els_trk_charge_isLoaded = false;
		els_trkidx_isLoaded = false;
		els_type_isLoaded = false;
		els_validHits_isLoaded = false;
		els_valid_pixelhits_isLoaded = false;
		genps_id_isLoaded = false;
		genps_id_mother_isLoaded = false;
		genps_status_isLoaded = false;
		hyp_ll_charge_isLoaded = false;
		hyp_ll_id_isLoaded = false;
		hyp_ll_index_isLoaded = false;
		hyp_ll_lostHits_isLoaded = false;
		hyp_ll_validHits_isLoaded = false;
		hyp_lt_charge_isLoaded = false;
		hyp_lt_id_isLoaded = false;
		hyp_lt_index_isLoaded = false;
		hyp_lt_lostHits_isLoaded = false;
		hyp_lt_validHits_isLoaded = false;
		hyp_njets_isLoaded = false;
		hyp_nojets_isLoaded = false;
		hyp_type_isLoaded = false;
		hyp_FVFit_ndf_isLoaded = false;
		hyp_FVFit_status_isLoaded = false;
		hyp_ll_mc_id_isLoaded = false;
		hyp_ll_mc_motherid_isLoaded = false;
		hyp_lt_mc_id_isLoaded = false;
		hyp_lt_mc_motherid_isLoaded = false;
		hyp_quadlep_first_type_isLoaded = false;
		hyp_quadlep_fourth_type_isLoaded = false;
		hyp_quadlep_second_type_isLoaded = false;
		hyp_quadlep_third_type_isLoaded = false;
		hyp_trilep_first_type_isLoaded = false;
		hyp_trilep_second_type_isLoaded = false;
		hyp_trilep_third_type_isLoaded = false;
		jets_closestElectron_isLoaded = false;
		jets_closestMuon_isLoaded = false;
		l1_emiso_ieta_isLoaded = false;
		l1_emiso_iphi_isLoaded = false;
		l1_emiso_rawId_isLoaded = false;
		l1_emiso_type_isLoaded = false;
		l1_emnoiso_ieta_isLoaded = false;
		l1_emnoiso_iphi_isLoaded = false;
		l1_emnoiso_rawId_isLoaded = false;
		l1_emnoiso_type_isLoaded = false;
		l1_jetsc_ieta_isLoaded = false;
		l1_jetsc_iphi_isLoaded = false;
		l1_jetsc_rawId_isLoaded = false;
		l1_jetsc_type_isLoaded = false;
		l1_jetsf_ieta_isLoaded = false;
		l1_jetsf_iphi_isLoaded = false;
		l1_jetsf_rawId_isLoaded = false;
		l1_jetsf_type_isLoaded = false;
		l1_jetst_ieta_isLoaded = false;
		l1_jetst_iphi_isLoaded = false;
		l1_jetst_rawId_isLoaded = false;
		l1_jetst_type_isLoaded = false;
		l1_mus_flags_isLoaded = false;
		l1_mus_q_isLoaded = false;
		l1_mus_qual_isLoaded = false;
		l1_mus_qualFlags_isLoaded = false;
		mus_met_flag_isLoaded = false;
		mus_closestEle_isLoaded = false;
		mus_closestJet_isLoaded = false;
		mus_charge_isLoaded = false;
		mus_gfit_validHits_isLoaded = false;
		mus_gfit_validSTAHits_isLoaded = false;
		mus_gfit_validSiHits_isLoaded = false;
		mus_goodmask_isLoaded = false;
		mus_iso03_ntrk_isLoaded = false;
		mus_iso05_ntrk_isLoaded = false;
		mus_lostHits_isLoaded = false;
		mus_nmatches_isLoaded = false;
		mus_pid_TM2DCompatibilityLoose_isLoaded = false;
		mus_pid_TM2DCompatibilityTight_isLoaded = false;
		mus_pid_TMLastStationLoose_isLoaded = false;
		mus_pid_TMLastStationTight_isLoaded = false;
		mus_sta_validHits_isLoaded = false;
		mus_timeDirection_isLoaded = false;
		mus_timeNumStationsUsed_isLoaded = false;
		mus_trk_charge_isLoaded = false;
		mus_trkidx_isLoaded = false;
		mus_type_isLoaded = false;
		mus_validHits_isLoaded = false;
		pfjets_chargedMultiplicity_isLoaded = false;
		pfjets_muonMultiplicity_isLoaded = false;
		pfjets_neutralMultiplicity_isLoaded = false;
		taus_pf_charge_isLoaded = false;
		taus_pf_electronPreID_isLoaded = false;
		taus_pf_hasMuonReference_isLoaded = false;
		taus_pf_leadtrk_idx_isLoaded = false;
		taus_pf_muonPreID_isLoaded = false;
		taus_pf_nmuonmatch_isLoaded = false;
		taus_pf_tightId_isLoaded = false;
		photons_fiduciality_isLoaded = false;
		pxl_ndigis_pxb_isLoaded = false;
		pxl_ndigis_pxf_isLoaded = false;
		ran_srFlag_isLoaded = false;
		scs_detIdSeed_isLoaded = false;
		scs_elsidx_isLoaded = false;
		scs_severitySeed_isLoaded = false;
		mus_tcmet_flag_isLoaded = false;
		trks_algo_isLoaded = false;
		trks_charge_isLoaded = false;
		trks_exp_innerlayers_isLoaded = false;
		trks_exp_outerlayers_isLoaded = false;
		trks_layer1_det_isLoaded = false;
		trks_layer1_layer_isLoaded = false;
		trks_layer1_sizerphi_isLoaded = false;
		trks_layer1_sizerz_isLoaded = false;
		trks_lostHits_isLoaded = false;
		trks_lost_pixelhits_isLoaded = false;
		trks_nlayers_isLoaded = false;
		trks_nlayers3D_isLoaded = false;
		trks_nlayersLost_isLoaded = false;
		trks_qualityMask_isLoaded = false;
		trks_validHits_isLoaded = false;
		trks_valid_pixelhits_isLoaded = false;
		trks_elsidx_isLoaded = false;
		trk_musidx_isLoaded = false;
		vtxs_isFake_isLoaded = false;
		vtxs_isValid_isLoaded = false;
		vtxs_tracksSize_isLoaded = false;
		twrs_emMaxEcalMGPASampleADC_isLoaded = false;
		twrs_emThreshRecoFlag_isLoaded = false;
		twrs_emThreshSevLvl_isLoaded = false;
		twrsUncleaned_emMaxEcalMGPASampleADC_isLoaded = false;
		twrsUncleaned_emThreshRecoFlag_isLoaded = false;
		twrsUncleaned_emThreshSevLvl_isLoaded = false;
		taus_calo_isotrk_idx_isLoaded = false;
		taus_calo_sigtrk_idx_isLoaded = false;
		genps_lepdaughter_id_isLoaded = false;
		genps_lepdaughter_idx_isLoaded = false;
		hlt_trigObjs_id_isLoaded = false;
		hyp_jets_idx_isLoaded = false;
		hyp_other_jets_idx_isLoaded = false;
		evt_ntwrs_isLoaded = false;
		evt_nels_isLoaded = false;
		evt_detectorStatus_isLoaded = false;
		evt_event_isLoaded = false;
		evt_lumiBlock_isLoaded = false;
		evt_run_isLoaded = false;
		genps_flavorHistoryFilterResult_isLoaded = false;
		evt_ngenjets_isLoaded = false;
		genps_signalProcessID_isLoaded = false;
		hlt_bits1_isLoaded = false;
		hlt_bits2_isLoaded = false;
		hlt_bits3_isLoaded = false;
		hlt_bits4_isLoaded = false;
		hlt_bits5_isLoaded = false;
		hlt_bits6_isLoaded = false;
		hlt_bits7_isLoaded = false;
		hlt_bits8_isLoaded = false;
		evt_njets_isLoaded = false;
		evt_njpts_isLoaded = false;
		l1_bits1_isLoaded = false;
		l1_bits2_isLoaded = false;
		l1_bits3_isLoaded = false;
		l1_bits4_isLoaded = false;
		l1_techbits1_isLoaded = false;
		l1_techbits2_isLoaded = false;
		evt_nphotons_isLoaded = false;
		evt_nscs_isLoaded = false;
		evt_nscjets_isLoaded = false;
		evt_ntrkjets_isLoaded = false;
		evt_nvtxs_isLoaded = false;
		twrs_detid_isLoaded = false;
		twrs_numBadEcalCells_isLoaded = false;
		twrs_numBadHcalCells_isLoaded = false;
		twrs_numProblematicEcalCells_isLoaded = false;
		twrs_numProblematicHcalCells_isLoaded = false;
		twrs_numRecoveredEcalCells_isLoaded = false;
		twrs_numRecoveredHcalCells_isLoaded = false;
		twrsUncleaned_detid_isLoaded = false;
		twrsUncleaned_numBadEcalCells_isLoaded = false;
		twrsUncleaned_numBadHcalCells_isLoaded = false;
		twrsUncleaned_numProblematicEcalCells_isLoaded = false;
		twrsUncleaned_numProblematicHcalCells_isLoaded = false;
		twrsUncleaned_numRecoveredEcalCells_isLoaded = false;
		twrsUncleaned_numRecoveredHcalCells_isLoaded = false;
		hyp_quadlep_bucket_isLoaded = false;
		hyp_quadlep_first_index_isLoaded = false;
		hyp_quadlep_fourth_index_isLoaded = false;
		hyp_quadlep_second_index_isLoaded = false;
		hyp_quadlep_third_index_isLoaded = false;
		hyp_trilep_bucket_isLoaded = false;
		hyp_trilep_first_index_isLoaded = false;
		hyp_trilep_second_index_isLoaded = false;
		hyp_trilep_third_index_isLoaded = false;
		evt_nEvts_isLoaded = false;
		evt_filt_eff_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (evt_CMS2tag_branch != 0) evt_CMS2tag();
	if (evt_dataset_branch != 0) evt_dataset();
	if (hlt_trigNames_branch != 0) hlt_trigNames();
	if (l1_trigNames_branch != 0) l1_trigNames();
	if (jets_closestElectron_DR_branch != 0) jets_closestElectron_DR();
	if (jets_closestMuon_DR_branch != 0) jets_closestMuon_DR();
	if (evt_bs_Xwidth_branch != 0) evt_bs_Xwidth();
	if (evt_bs_XwidthErr_branch != 0) evt_bs_XwidthErr();
	if (evt_bs_Ywidth_branch != 0) evt_bs_Ywidth();
	if (evt_bs_YwidthErr_branch != 0) evt_bs_YwidthErr();
	if (evt_bs_dxdz_branch != 0) evt_bs_dxdz();
	if (evt_bs_dxdzErr_branch != 0) evt_bs_dxdzErr();
	if (evt_bs_dydz_branch != 0) evt_bs_dydz();
	if (evt_bs_dydzErr_branch != 0) evt_bs_dydzErr();
	if (evt_bs_sigmaZ_branch != 0) evt_bs_sigmaZ();
	if (evt_bs_sigmaZErr_branch != 0) evt_bs_sigmaZErr();
	if (evt_bs_xErr_branch != 0) evt_bs_xErr();
	if (evt_bs_yErr_branch != 0) evt_bs_yErr();
	if (evt_bs_zErr_branch != 0) evt_bs_zErr();
	if (evt_bField_branch != 0) evt_bField();
	if (evt_kfactor_branch != 0) evt_kfactor();
	if (evt_scale1fb_branch != 0) evt_scale1fb();
	if (evt_xsec_excl_branch != 0) evt_xsec_excl();
	if (evt_xsec_incl_branch != 0) evt_xsec_incl();
	if (gen_met_branch != 0) gen_met();
	if (gen_metPhi_branch != 0) gen_metPhi();
	if (genps_alphaQCD_branch != 0) genps_alphaQCD();
	if (genps_pthat_branch != 0) genps_pthat();
	if (genps_qScale_branch != 0) genps_qScale();
	if (genps_weight_branch != 0) genps_weight();
	if (gen_sumEt_branch != 0) gen_sumEt();
	if (hcalnoise_eventChargeFraction_branch != 0) hcalnoise_eventChargeFraction();
	if (hcalnoise_eventEMEnergy_branch != 0) hcalnoise_eventEMEnergy();
	if (hcalnoise_eventEMFraction_branch != 0) hcalnoise_eventEMFraction();
	if (hcalnoise_eventHadEnergy_branch != 0) hcalnoise_eventHadEnergy();
	if (hcalnoise_eventTrackEnergy_branch != 0) hcalnoise_eventTrackEnergy();
	if (hcalnoise_max10GeVHitTime_branch != 0) hcalnoise_max10GeVHitTime();
	if (hcalnoise_max25GeVHitTime_branch != 0) hcalnoise_max25GeVHitTime();
	if (hcalnoise_min10GeVHitTime_branch != 0) hcalnoise_min10GeVHitTime();
	if (hcalnoise_min25GeVHitTime_branch != 0) hcalnoise_min25GeVHitTime();
	if (hcalnoise_minE10TS_branch != 0) hcalnoise_minE10TS();
	if (hcalnoise_minE2Over10TS_branch != 0) hcalnoise_minE2Over10TS();
	if (hcalnoise_minE2TS_branch != 0) hcalnoise_minE2TS();
	if (hcalnoise_minHPDEMF_branch != 0) hcalnoise_minHPDEMF();
	if (hcalnoise_minRBXEMF_branch != 0) hcalnoise_minRBXEMF();
	if (hcalnoise_rms10GeVHitTime_branch != 0) hcalnoise_rms10GeVHitTime();
	if (hcalnoise_rms25GeVHitTime_branch != 0) hcalnoise_rms25GeVHitTime();
	if (l1_met_etTot_branch != 0) l1_met_etTot();
	if (l1_met_met_branch != 0) l1_met_met();
	if (l1_mht_htTot_branch != 0) l1_mht_htTot();
	if (l1_mht_mht_branch != 0) l1_mht_mht();
	if (evt_ecalendcapm_met_branch != 0) evt_ecalendcapm_met();
	if (evt_ecalendcapm_metPhi_branch != 0) evt_ecalendcapm_metPhi();
	if (evt_ecalendcapp_met_branch != 0) evt_ecalendcapp_met();
	if (evt_ecalendcapp_metPhi_branch != 0) evt_ecalendcapp_metPhi();
	if (evt_ecalmet_branch != 0) evt_ecalmet();
	if (evt_ecalmetPhi_branch != 0) evt_ecalmetPhi();
	if (evt_endcapm_met_branch != 0) evt_endcapm_met();
	if (evt_endcapm_metPhi_branch != 0) evt_endcapm_metPhi();
	if (evt_endcapp_met_branch != 0) evt_endcapp_met();
	if (evt_endcapp_metPhi_branch != 0) evt_endcapp_metPhi();
	if (evt_hcalendcapm_met_branch != 0) evt_hcalendcapm_met();
	if (evt_hcalendcapm_metPhi_branch != 0) evt_hcalendcapm_metPhi();
	if (evt_hcalendcapp_met_branch != 0) evt_hcalendcapp_met();
	if (evt_hcalendcapp_metPhi_branch != 0) evt_hcalendcapp_metPhi();
	if (evt_hcalmet_branch != 0) evt_hcalmet();
	if (evt_hcalmetPhi_branch != 0) evt_hcalmetPhi();
	if (evt_met_branch != 0) evt_met();
	if (evt_metHO_branch != 0) evt_metHO();
	if (evt_metHOPhi_branch != 0) evt_metHOPhi();
	if (evt_metHOSig_branch != 0) evt_metHOSig();
	if (evt_metMuonCorr_branch != 0) evt_metMuonCorr();
	if (evt_metMuonCorrPhi_branch != 0) evt_metMuonCorrPhi();
	if (evt_metMuonCorrSig_branch != 0) evt_metMuonCorrSig();
	if (evt_metMuonJESCorr_branch != 0) evt_metMuonJESCorr();
	if (evt_metMuonJESCorrPhi_branch != 0) evt_metMuonJESCorrPhi();
	if (evt_metMuonJESCorrSig_branch != 0) evt_metMuonJESCorrSig();
	if (evt_metNoHF_branch != 0) evt_metNoHF();
	if (evt_metNoHFHO_branch != 0) evt_metNoHFHO();
	if (evt_metNoHFHOPhi_branch != 0) evt_metNoHFHOPhi();
	if (evt_metNoHFHOSig_branch != 0) evt_metNoHFHOSig();
	if (evt_metNoHFPhi_branch != 0) evt_metNoHFPhi();
	if (evt_metNoHFSig_branch != 0) evt_metNoHFSig();
	if (evt_metOpt_branch != 0) evt_metOpt();
	if (evt_metOptHO_branch != 0) evt_metOptHO();
	if (evt_metOptHOPhi_branch != 0) evt_metOptHOPhi();
	if (evt_metOptHOSig_branch != 0) evt_metOptHOSig();
	if (evt_metOptNoHF_branch != 0) evt_metOptNoHF();
	if (evt_metOptNoHFHO_branch != 0) evt_metOptNoHFHO();
	if (evt_metOptNoHFHOPhi_branch != 0) evt_metOptNoHFHOPhi();
	if (evt_metOptNoHFHOSig_branch != 0) evt_metOptNoHFHOSig();
	if (evt_metOptNoHFPhi_branch != 0) evt_metOptNoHFPhi();
	if (evt_metOptNoHFSig_branch != 0) evt_metOptNoHFSig();
	if (evt_metOptPhi_branch != 0) evt_metOptPhi();
	if (evt_metOptSig_branch != 0) evt_metOptSig();
	if (evt_metPhi_branch != 0) evt_metPhi();
	if (evt_metSig_branch != 0) evt_metSig();
	if (evt_sumet_branch != 0) evt_sumet();
	if (evt_sumetHO_branch != 0) evt_sumetHO();
	if (evt_sumetMuonCorr_branch != 0) evt_sumetMuonCorr();
	if (evt_sumetNoHF_branch != 0) evt_sumetNoHF();
	if (evt_sumetNoHFHO_branch != 0) evt_sumetNoHFHO();
	if (evt_sumetOpt_branch != 0) evt_sumetOpt();
	if (evt_sumetOptHO_branch != 0) evt_sumetOptHO();
	if (evt_sumetOptNoHF_branch != 0) evt_sumetOptNoHF();
	if (evt_sumetOptNoHFHO_branch != 0) evt_sumetOptNoHFHO();
	if (pdfinfo_scale_branch != 0) pdfinfo_scale();
	if (pdfinfo_x1_branch != 0) pdfinfo_x1();
	if (pdfinfo_x2_branch != 0) pdfinfo_x2();
	if (evt_pfmet_branch != 0) evt_pfmet();
	if (evt_pfmetPhi_branch != 0) evt_pfmetPhi();
	if (evt_pfmetSig_branch != 0) evt_pfmetSig();
	if (evt_pfsumet_branch != 0) evt_pfsumet();
	if (evt_tcmet_branch != 0) evt_tcmet();
	if (evt_tcmetPhi_branch != 0) evt_tcmetPhi();
	if (evt_tcmetSig_branch != 0) evt_tcmetSig();
	if (evt_tcsumet_branch != 0) evt_tcsumet();
	if (evt_bsp4_branch != 0) evt_bsp4();
	if (l1_met_p4_branch != 0) l1_met_p4();
	if (l1_mht_p4_branch != 0) l1_mht_p4();
	if (taus_calo_p4_branch != 0) taus_calo_p4();
	if (els_mc_motherp4_branch != 0) els_mc_motherp4();
	if (els_mc_p4_branch != 0) els_mc_p4();
	if (jets_mc_gp_p4_branch != 0) jets_mc_gp_p4();
	if (jets_mc_p4_branch != 0) jets_mc_p4();
	if (mus_mc_motherp4_branch != 0) mus_mc_motherp4();
	if (mus_mc_p4_branch != 0) mus_mc_p4();
	if (trk_mcp4_branch != 0) trk_mcp4();
	if (els_inner_position_branch != 0) els_inner_position();
	if (els_outer_position_branch != 0) els_outer_position();
	if (els_p4_branch != 0) els_p4();
	if (els_p4In_branch != 0) els_p4In();
	if (els_p4Out_branch != 0) els_p4Out();
	if (els_trk_p4_branch != 0) els_trk_p4();
	if (els_vertex_p4_branch != 0) els_vertex_p4();
	if (genjets_p4_branch != 0) genjets_p4();
	if (genps_p4_branch != 0) genps_p4();
	if (genps_prod_vtx_branch != 0) genps_prod_vtx();
	if (hyp_ll_p4_branch != 0) hyp_ll_p4();
	if (hyp_ll_trk_p4_branch != 0) hyp_ll_trk_p4();
	if (hyp_lt_p4_branch != 0) hyp_lt_p4();
	if (hyp_lt_trk_p4_branch != 0) hyp_lt_trk_p4();
	if (hyp_p4_branch != 0) hyp_p4();
	if (hyp_FVFit_p4_branch != 0) hyp_FVFit_p4();
	if (hyp_FVFit_v4_branch != 0) hyp_FVFit_v4();
	if (hyp_ll_mc_p4_branch != 0) hyp_ll_mc_p4();
	if (hyp_lt_mc_p4_branch != 0) hyp_lt_mc_p4();
	if (jets_p4_branch != 0) jets_p4();
	if (jets_vertex_p4_branch != 0) jets_vertex_p4();
	if (jpts_p4_branch != 0) jpts_p4();
	if (l1_emiso_p4_branch != 0) l1_emiso_p4();
	if (l1_emnoiso_p4_branch != 0) l1_emnoiso_p4();
	if (l1_jetsc_p4_branch != 0) l1_jetsc_p4();
	if (l1_jetsf_p4_branch != 0) l1_jetsf_p4();
	if (l1_jetst_p4_branch != 0) l1_jetst_p4();
	if (l1_mus_p4_branch != 0) l1_mus_p4();
	if (mus_fitdefault_p4_branch != 0) mus_fitdefault_p4();
	if (mus_fitfirsthit_p4_branch != 0) mus_fitfirsthit_p4();
	if (mus_fitpicky_p4_branch != 0) mus_fitpicky_p4();
	if (mus_fittev_p4_branch != 0) mus_fittev_p4();
	if (mus_gfit_outerPos_p4_branch != 0) mus_gfit_outerPos_p4();
	if (mus_gfit_p4_branch != 0) mus_gfit_p4();
	if (mus_gfit_vertex_p4_branch != 0) mus_gfit_vertex_p4();
	if (mus_p4_branch != 0) mus_p4();
	if (mus_sta_p4_branch != 0) mus_sta_p4();
	if (mus_sta_vertex_p4_branch != 0) mus_sta_vertex_p4();
	if (mus_trk_p4_branch != 0) mus_trk_p4();
	if (mus_vertex_p4_branch != 0) mus_vertex_p4();
	if (pfjets_p4_branch != 0) pfjets_p4();
	if (taus_pf_lead_chargecand_p4_branch != 0) taus_pf_lead_chargecand_p4();
	if (taus_pf_lead_neutrcand_p4_branch != 0) taus_pf_lead_neutrcand_p4();
	if (taus_pf_p4_branch != 0) taus_pf_p4();
	if (photons_p4_branch != 0) photons_p4();
	if (ran_trksecalp4_branch != 0) ran_trksecalp4();
	if (ran_trksp4_branch != 0) ran_trksp4();
	if (scs_p4_branch != 0) scs_p4();
	if (scs_pos_p4_branch != 0) scs_pos_p4();
	if (scs_vtx_p4_branch != 0) scs_vtx_p4();
	if (scjets_p4_branch != 0) scjets_p4();
	if (scjets_vertex_p4_branch != 0) scjets_vertex_p4();
	if (trks_inner_position_branch != 0) trks_inner_position();
	if (trks_outer_p4_branch != 0) trks_outer_p4();
	if (trks_outer_position_branch != 0) trks_outer_position();
	if (trks_trk_p4_branch != 0) trks_trk_p4();
	if (trks_vertex_p4_branch != 0) trks_vertex_p4();
	if (trkjets_p4_branch != 0) trkjets_p4();
	if (vtxs_position_branch != 0) vtxs_position();
	if (genps_lepdaughter_p4_branch != 0) genps_lepdaughter_p4();
	if (hlt_trigObjs_p4_branch != 0) hlt_trigObjs_p4();
	if (hyp_jets_p4_branch != 0) hyp_jets_p4();
	if (hyp_other_jets_p4_branch != 0) hyp_other_jets_p4();
	if (taus_pf_isochargecand_p4_branch != 0) taus_pf_isochargecand_p4();
	if (taus_pf_isogammacand_p4_branch != 0) taus_pf_isogammacand_p4();
	if (taus_pf_isoneutrcand_p4_branch != 0) taus_pf_isoneutrcand_p4();
	if (taus_pf_sigchargecand_p4_branch != 0) taus_pf_sigchargecand_p4();
	if (taus_pf_siggammacand_p4_branch != 0) taus_pf_siggammacand_p4();
	if (taus_pf_signeutrcand_p4_branch != 0) taus_pf_signeutrcand_p4();
	if (jets_combinedSecondaryVertexBJetTag_branch != 0) jets_combinedSecondaryVertexBJetTag();
	if (jets_combinedSecondaryVertexMVABJetTag_branch != 0) jets_combinedSecondaryVertexMVABJetTag();
	if (jets_jetBProbabilityBJetTag_branch != 0) jets_jetBProbabilityBJetTag();
	if (jets_jetProbabilityBJetTag_branch != 0) jets_jetProbabilityBJetTag();
	if (jets_simpleSecondaryVertexBJetTag_branch != 0) jets_simpleSecondaryVertexBJetTag();
	if (jets_softElectronByIP3dBJetTag_branch != 0) jets_softElectronByIP3dBJetTag();
	if (jets_softElectronByPtBJetTag_branch != 0) jets_softElectronByPtBJetTag();
	if (jets_softMuonBJetTag_branch != 0) jets_softMuonBJetTag();
	if (jets_softMuonByIP3dBJetTag_branch != 0) jets_softMuonByIP3dBJetTag();
	if (jets_softMuonByPtBJetTag_branch != 0) jets_softMuonByPtBJetTag();
	if (jets_softMuonNoIPBJetTag_branch != 0) jets_softMuonNoIPBJetTag();
	if (jets_trackCountingHighEffBJetTag_branch != 0) jets_trackCountingHighEffBJetTag();
	if (jets_trackCountingHighPurBJetTag_branch != 0) jets_trackCountingHighPurBJetTag();
	if (trkjets_combinedSecondaryVertexBJetTag_branch != 0) trkjets_combinedSecondaryVertexBJetTag();
	if (trkjets_combinedSecondaryVertexMVABJetTag_branch != 0) trkjets_combinedSecondaryVertexMVABJetTag();
	if (trkjets_jetBProbabilityBJetTag_branch != 0) trkjets_jetBProbabilityBJetTag();
	if (trkjets_jetProbabilityBJetTag_branch != 0) trkjets_jetProbabilityBJetTag();
	if (trkjets_simpleSecondaryVertexBJetTag_branch != 0) trkjets_simpleSecondaryVertexBJetTag();
	if (trkjets_softElectronByIP3dBJetTag_branch != 0) trkjets_softElectronByIP3dBJetTag();
	if (trkjets_softElectronByPtBJetTag_branch != 0) trkjets_softElectronByPtBJetTag();
	if (trkjets_softMuonBJetTag_branch != 0) trkjets_softMuonBJetTag();
	if (trkjets_softMuonByIP3dBJetTag_branch != 0) trkjets_softMuonByIP3dBJetTag();
	if (trkjets_softMuonByPtBJetTag_branch != 0) trkjets_softMuonByPtBJetTag();
	if (trkjets_softMuonNoIPBJetTag_branch != 0) trkjets_softMuonNoIPBJetTag();
	if (trkjets_trackCountingHighEffBJetTag_branch != 0) trkjets_trackCountingHighEffBJetTag();
	if (trkjets_trackCountingHighPurBJetTag_branch != 0) trkjets_trackCountingHighPurBJetTag();
	if (evt_bs_covMatrix_branch != 0) evt_bs_covMatrix();
	if (twrs_ecalTime_branch != 0) twrs_ecalTime();
	if (twrs_emEnergy_branch != 0) twrs_emEnergy();
	if (twrs_emEt_branch != 0) twrs_emEt();
	if (twrs_emEtcorr_branch != 0) twrs_emEtcorr();
	if (twrs_eta_branch != 0) twrs_eta();
	if (twrs_etacorr_branch != 0) twrs_etacorr();
	if (twrs_etcorr_branch != 0) twrs_etcorr();
	if (twrs_hadEnergy_branch != 0) twrs_hadEnergy();
	if (twrs_hadEt_branch != 0) twrs_hadEt();
	if (twrs_hadEtcorr_branch != 0) twrs_hadEtcorr();
	if (twrs_hcalTime_branch != 0) twrs_hcalTime();
	if (twrs_outerEnergy_branch != 0) twrs_outerEnergy();
	if (twrs_outerEt_branch != 0) twrs_outerEt();
	if (twrs_outerEtcorr_branch != 0) twrs_outerEtcorr();
	if (twrs_pcorr_branch != 0) twrs_pcorr();
	if (twrs_phi_branch != 0) twrs_phi();
	if (twrs_phicorr_branch != 0) twrs_phicorr();
	if (twrs_spikeEt_branch != 0) twrs_spikeEt();
	if (twrs_spikeR4_branch != 0) twrs_spikeR4();
	if (twrsUncleaned_ecalTime_branch != 0) twrsUncleaned_ecalTime();
	if (twrsUncleaned_emEnergy_branch != 0) twrsUncleaned_emEnergy();
	if (twrsUncleaned_emEt_branch != 0) twrsUncleaned_emEt();
	if (twrsUncleaned_emEtcorr_branch != 0) twrsUncleaned_emEtcorr();
	if (twrsUncleaned_eta_branch != 0) twrsUncleaned_eta();
	if (twrsUncleaned_etacorr_branch != 0) twrsUncleaned_etacorr();
	if (twrsUncleaned_etcorr_branch != 0) twrsUncleaned_etcorr();
	if (twrsUncleaned_hadEnergy_branch != 0) twrsUncleaned_hadEnergy();
	if (twrsUncleaned_hadEt_branch != 0) twrsUncleaned_hadEt();
	if (twrsUncleaned_hadEtcorr_branch != 0) twrsUncleaned_hadEtcorr();
	if (twrsUncleaned_hcalTime_branch != 0) twrsUncleaned_hcalTime();
	if (twrsUncleaned_outerEnergy_branch != 0) twrsUncleaned_outerEnergy();
	if (twrsUncleaned_outerEt_branch != 0) twrsUncleaned_outerEt();
	if (twrsUncleaned_outerEtcorr_branch != 0) twrsUncleaned_outerEtcorr();
	if (twrsUncleaned_pcorr_branch != 0) twrsUncleaned_pcorr();
	if (twrsUncleaned_phi_branch != 0) twrsUncleaned_phi();
	if (twrsUncleaned_phicorr_branch != 0) twrsUncleaned_phicorr();
	if (twrsUncleaned_spikeEt_branch != 0) twrsUncleaned_spikeEt();
	if (twrsUncleaned_spikeR4_branch != 0) twrsUncleaned_spikeR4();
	if (taus_calo_isolationECALhitsEtSum_branch != 0) taus_calo_isolationECALhitsEtSum();
	if (taus_calo_isolationtrksPtSum_branch != 0) taus_calo_isolationtrksPtSum();
	if (taus_calo_leadtrk_HCAL3x3hitsEtSum_branch != 0) taus_calo_leadtrk_HCAL3x3hitsEtSum();
	if (taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch != 0) taus_calo_leadtrk_HCAL3x3hottesthitDEta();
	if (taus_calo_leadtrk_Signed_Sipt_branch != 0) taus_calo_leadtrk_Signed_Sipt();
	if (taus_calo_leadtrk_lostHits_branch != 0) taus_calo_leadtrk_lostHits();
	if (taus_calo_leadtrk_validHits_branch != 0) taus_calo_leadtrk_validHits();
	if (taus_calo_maximumHCALhitEt_branch != 0) taus_calo_maximumHCALhitEt();
	if (taus_calo_signaltrksInvariantMass_branch != 0) taus_calo_signaltrksInvariantMass();
	if (els_mc3dr_branch != 0) els_mc3dr();
	if (els_mcdr_branch != 0) els_mcdr();
	if (jets_mc3dr_branch != 0) jets_mc3dr();
	if (jets_mcdr_branch != 0) jets_mcdr();
	if (jets_mc_emEnergy_branch != 0) jets_mc_emEnergy();
	if (jets_mc_gpdr_branch != 0) jets_mc_gpdr();
	if (jets_mc_hadEnergy_branch != 0) jets_mc_hadEnergy();
	if (jets_mc_invEnergy_branch != 0) jets_mc_invEnergy();
	if (jets_mc_otherEnergy_branch != 0) jets_mc_otherEnergy();
	if (mus_mc3dr_branch != 0) mus_mc3dr();
	if (mus_mcdr_branch != 0) mus_mcdr();
	if (trk_mc3dr_branch != 0) trk_mc3dr();
	if (trk_mcdr_branch != 0) trk_mcdr();
	if (els_ecalJuraIso_branch != 0) els_ecalJuraIso();
	if (els_ecalJuraTowerIso_branch != 0) els_ecalJuraTowerIso();
	if (els_hcalConeIso_branch != 0) els_hcalConeIso();
	if (els_tkJuraIso_branch != 0) els_tkJuraIso();
	if (els_jetdr_branch != 0) els_jetdr();
	if (els_musdr_branch != 0) els_musdr();
	if (els_chi2_branch != 0) els_chi2();
	if (els_conv_dcot_branch != 0) els_conv_dcot();
	if (els_conv_dist_branch != 0) els_conv_dist();
	if (els_d0_branch != 0) els_d0();
	if (els_d0Err_branch != 0) els_d0Err();
	if (els_d0corr_branch != 0) els_d0corr();
	if (els_dEtaIn_branch != 0) els_dEtaIn();
	if (els_dEtaOut_branch != 0) els_dEtaOut();
	if (els_dPhiIn_branch != 0) els_dPhiIn();
	if (els_dPhiInPhiOut_branch != 0) els_dPhiInPhiOut();
	if (els_dPhiOut_branch != 0) els_dPhiOut();
	if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) els_deltaEtaEleClusterTrackAtCalo();
	if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) els_deltaPhiEleClusterTrackAtCalo();
	if (els_e1x5_branch != 0) els_e1x5();
	if (els_e2x5Max_branch != 0) els_e2x5Max();
	if (els_e3x3_branch != 0) els_e3x3();
	if (els_e5x5_branch != 0) els_e5x5();
	if (els_eMax_branch != 0) els_eMax();
	if (els_eOverPIn_branch != 0) els_eOverPIn();
	if (els_eOverPOut_branch != 0) els_eOverPOut();
	if (els_eSC_branch != 0) els_eSC();
	if (els_eSCPresh_branch != 0) els_eSCPresh();
	if (els_eSCRaw_branch != 0) els_eSCRaw();
	if (els_eSeed_branch != 0) els_eSeed();
	if (els_eSeedOverPIn_branch != 0) els_eSeedOverPIn();
	if (els_eSeedOverPOut_branch != 0) els_eSeedOverPOut();
	if (els_ecalEnergy_branch != 0) els_ecalEnergy();
	if (els_ecalEnergyError_branch != 0) els_ecalEnergyError();
	if (els_ecalIso_branch != 0) els_ecalIso();
	if (els_ecalIso04_branch != 0) els_ecalIso04();
	if (els_egamma_looseId_branch != 0) els_egamma_looseId();
	if (els_egamma_robustHighEnergy_branch != 0) els_egamma_robustHighEnergy();
	if (els_egamma_robustLooseId_branch != 0) els_egamma_robustLooseId();
	if (els_egamma_robustTightId_branch != 0) els_egamma_robustTightId();
	if (els_egamma_tightId_branch != 0) els_egamma_tightId();
	if (els_electronMomentumError_branch != 0) els_electronMomentumError();
	if (els_etaErr_branch != 0) els_etaErr();
	if (els_etaSC_branch != 0) els_etaSC();
	if (els_fbrem_branch != 0) els_fbrem();
	if (els_hOverE_branch != 0) els_hOverE();
	if (els_hcalDepth1OverEcal_branch != 0) els_hcalDepth1OverEcal();
	if (els_hcalDepth1TowerSumEt_branch != 0) els_hcalDepth1TowerSumEt();
	if (els_hcalDepth1TowerSumEt04_branch != 0) els_hcalDepth1TowerSumEt04();
	if (els_hcalDepth2OverEcal_branch != 0) els_hcalDepth2OverEcal();
	if (els_hcalDepth2TowerSumEt_branch != 0) els_hcalDepth2TowerSumEt();
	if (els_hcalDepth2TowerSumEt04_branch != 0) els_hcalDepth2TowerSumEt04();
	if (els_hcalIso_branch != 0) els_hcalIso();
	if (els_hcalIso04_branch != 0) els_hcalIso04();
	if (els_layer1_charge_branch != 0) els_layer1_charge();
	if (els_ndof_branch != 0) els_ndof();
	if (els_phiErr_branch != 0) els_phiErr();
	if (els_phiSC_branch != 0) els_phiSC();
	if (els_ptErr_branch != 0) els_ptErr();
	if (els_sigmaEtaEta_branch != 0) els_sigmaEtaEta();
	if (els_sigmaIEtaIEta_branch != 0) els_sigmaIEtaIEta();
	if (els_sigmaIPhiIPhi_branch != 0) els_sigmaIPhiIPhi();
	if (els_sigmaPhiPhi_branch != 0) els_sigmaPhiPhi();
	if (els_tkIso_branch != 0) els_tkIso();
	if (els_tkIso04_branch != 0) els_tkIso04();
	if (els_trackMomentumError_branch != 0) els_trackMomentumError();
	if (els_trkdr_branch != 0) els_trkdr();
	if (els_trkshFrac_branch != 0) els_trkshFrac();
	if (els_z0_branch != 0) els_z0();
	if (els_z0Err_branch != 0) els_z0Err();
	if (els_z0corr_branch != 0) els_z0corr();
	if (hyp_Ht_branch != 0) hyp_Ht();
	if (hyp_dPhi_nJet_metMuonJESCorr_branch != 0) hyp_dPhi_nJet_metMuonJESCorr();
	if (hyp_dPhi_nJet_muCorrMet_branch != 0) hyp_dPhi_nJet_muCorrMet();
	if (hyp_dPhi_nJet_tcMet_branch != 0) hyp_dPhi_nJet_tcMet();
	if (hyp_dPhi_nJet_unCorrMet_branch != 0) hyp_dPhi_nJet_unCorrMet();
	if (hyp_ll_chi2_branch != 0) hyp_ll_chi2();
	if (hyp_ll_d0_branch != 0) hyp_ll_d0();
	if (hyp_ll_d0Err_branch != 0) hyp_ll_d0Err();
	if (hyp_ll_d0corr_branch != 0) hyp_ll_d0corr();
	if (hyp_ll_dPhi_metMuonJESCorr_branch != 0) hyp_ll_dPhi_metMuonJESCorr();
	if (hyp_ll_dPhi_muCorrMet_branch != 0) hyp_ll_dPhi_muCorrMet();
	if (hyp_ll_dPhi_tcMet_branch != 0) hyp_ll_dPhi_tcMet();
	if (hyp_ll_dPhi_unCorrMet_branch != 0) hyp_ll_dPhi_unCorrMet();
	if (hyp_ll_etaErr_branch != 0) hyp_ll_etaErr();
	if (hyp_ll_ndof_branch != 0) hyp_ll_ndof();
	if (hyp_ll_phiErr_branch != 0) hyp_ll_phiErr();
	if (hyp_ll_ptErr_branch != 0) hyp_ll_ptErr();
	if (hyp_ll_z0_branch != 0) hyp_ll_z0();
	if (hyp_ll_z0Err_branch != 0) hyp_ll_z0Err();
	if (hyp_ll_z0corr_branch != 0) hyp_ll_z0corr();
	if (hyp_lt_chi2_branch != 0) hyp_lt_chi2();
	if (hyp_lt_d0_branch != 0) hyp_lt_d0();
	if (hyp_lt_d0Err_branch != 0) hyp_lt_d0Err();
	if (hyp_lt_d0corr_branch != 0) hyp_lt_d0corr();
	if (hyp_lt_dPhi_metMuonJESCorr_branch != 0) hyp_lt_dPhi_metMuonJESCorr();
	if (hyp_lt_dPhi_muCorrMet_branch != 0) hyp_lt_dPhi_muCorrMet();
	if (hyp_lt_dPhi_tcMet_branch != 0) hyp_lt_dPhi_tcMet();
	if (hyp_lt_dPhi_unCorrMet_branch != 0) hyp_lt_dPhi_unCorrMet();
	if (hyp_lt_etaErr_branch != 0) hyp_lt_etaErr();
	if (hyp_lt_ndof_branch != 0) hyp_lt_ndof();
	if (hyp_lt_phiErr_branch != 0) hyp_lt_phiErr();
	if (hyp_lt_ptErr_branch != 0) hyp_lt_ptErr();
	if (hyp_lt_z0_branch != 0) hyp_lt_z0();
	if (hyp_lt_z0Err_branch != 0) hyp_lt_z0Err();
	if (hyp_lt_z0corr_branch != 0) hyp_lt_z0corr();
	if (hyp_mt2_metMuonJESCorr_branch != 0) hyp_mt2_metMuonJESCorr();
	if (hyp_mt2_muCorrMet_branch != 0) hyp_mt2_muCorrMet();
	if (hyp_mt2_tcMet_branch != 0) hyp_mt2_tcMet();
	if (hyp_sumJetPt_branch != 0) hyp_sumJetPt();
	if (hyp_FVFit_chi2ndf_branch != 0) hyp_FVFit_chi2ndf();
	if (hyp_FVFit_prob_branch != 0) hyp_FVFit_prob();
	if (hyp_FVFit_v4cxx_branch != 0) hyp_FVFit_v4cxx();
	if (hyp_FVFit_v4cxy_branch != 0) hyp_FVFit_v4cxy();
	if (hyp_FVFit_v4cyy_branch != 0) hyp_FVFit_v4cyy();
	if (hyp_FVFit_v4czx_branch != 0) hyp_FVFit_v4czx();
	if (hyp_FVFit_v4czy_branch != 0) hyp_FVFit_v4czy();
	if (hyp_FVFit_v4czz_branch != 0) hyp_FVFit_v4czz();
	if (hyp_ll_ecaliso_branch != 0) hyp_ll_ecaliso();
	if (hyp_ll_trkiso_branch != 0) hyp_ll_trkiso();
	if (hyp_lt_ecaliso_branch != 0) hyp_lt_ecaliso();
	if (hyp_lt_trkiso_branch != 0) hyp_lt_trkiso();
	if (jets_approximatefHPD_branch != 0) jets_approximatefHPD();
	if (jets_approximatefRBX_branch != 0) jets_approximatefRBX();
	if (jets_cor_branch != 0) jets_cor();
	if (jets_emFrac_branch != 0) jets_emFrac();
	if (jets_fHPD_branch != 0) jets_fHPD();
	if (jets_fRBX_branch != 0) jets_fRBX();
	if (jets_fSubDetector1_branch != 0) jets_fSubDetector1();
	if (jets_fSubDetector2_branch != 0) jets_fSubDetector2();
	if (jets_fSubDetector3_branch != 0) jets_fSubDetector3();
	if (jets_fSubDetector4_branch != 0) jets_fSubDetector4();
	if (jets_hitsInN90_branch != 0) jets_hitsInN90();
	if (jets_n90Hits_branch != 0) jets_n90Hits();
	if (jets_nECALTowers_branch != 0) jets_nECALTowers();
	if (jets_nHCALTowers_branch != 0) jets_nHCALTowers();
	if (jets_restrictedEMF_branch != 0) jets_restrictedEMF();
	if (jpts_emFrac_branch != 0) jpts_emFrac();
	if (evt_ecalmet_etaslice_branch != 0) evt_ecalmet_etaslice();
	if (evt_ecalmet_etaslicePhi_branch != 0) evt_ecalmet_etaslicePhi();
	if (evt_hcalmet_etaslice_branch != 0) evt_hcalmet_etaslice();
	if (evt_hcalmet_etaslicePhi_branch != 0) evt_hcalmet_etaslicePhi();
	if (evt_towermet_etaslice_branch != 0) evt_towermet_etaslice();
	if (evt_towermet_etaslicePhi_branch != 0) evt_towermet_etaslicePhi();
	if (mus_met_deltax_branch != 0) mus_met_deltax();
	if (mus_met_deltay_branch != 0) mus_met_deltay();
	if (mus_eledr_branch != 0) mus_eledr();
	if (mus_jetdr_branch != 0) mus_jetdr();
	if (mus_caloCompatibility_branch != 0) mus_caloCompatibility();
	if (mus_chi2_branch != 0) mus_chi2();
	if (mus_d0_branch != 0) mus_d0();
	if (mus_d0Err_branch != 0) mus_d0Err();
	if (mus_d0corr_branch != 0) mus_d0corr();
	if (mus_e_em_branch != 0) mus_e_em();
	if (mus_e_emS9_branch != 0) mus_e_emS9();
	if (mus_e_had_branch != 0) mus_e_had();
	if (mus_e_hadS9_branch != 0) mus_e_hadS9();
	if (mus_e_ho_branch != 0) mus_e_ho();
	if (mus_e_hoS9_branch != 0) mus_e_hoS9();
	if (mus_etaErr_branch != 0) mus_etaErr();
	if (mus_gfit_chi2_branch != 0) mus_gfit_chi2();
	if (mus_gfit_d0_branch != 0) mus_gfit_d0();
	if (mus_gfit_d0Err_branch != 0) mus_gfit_d0Err();
	if (mus_gfit_d0corr_branch != 0) mus_gfit_d0corr();
	if (mus_gfit_ndof_branch != 0) mus_gfit_ndof();
	if (mus_gfit_qoverp_branch != 0) mus_gfit_qoverp();
	if (mus_gfit_qoverpError_branch != 0) mus_gfit_qoverpError();
	if (mus_gfit_z0_branch != 0) mus_gfit_z0();
	if (mus_gfit_z0Err_branch != 0) mus_gfit_z0Err();
	if (mus_gfit_z0corr_branch != 0) mus_gfit_z0corr();
	if (mus_iso03_emEt_branch != 0) mus_iso03_emEt();
	if (mus_iso03_hadEt_branch != 0) mus_iso03_hadEt();
	if (mus_iso03_hoEt_branch != 0) mus_iso03_hoEt();
	if (mus_iso03_sumPt_branch != 0) mus_iso03_sumPt();
	if (mus_iso05_emEt_branch != 0) mus_iso05_emEt();
	if (mus_iso05_hadEt_branch != 0) mus_iso05_hadEt();
	if (mus_iso05_hoEt_branch != 0) mus_iso05_hoEt();
	if (mus_iso05_sumPt_branch != 0) mus_iso05_sumPt();
	if (mus_iso_ecalvetoDep_branch != 0) mus_iso_ecalvetoDep();
	if (mus_iso_hcalvetoDep_branch != 0) mus_iso_hcalvetoDep();
	if (mus_iso_hovetoDep_branch != 0) mus_iso_hovetoDep();
	if (mus_iso_trckvetoDep_branch != 0) mus_iso_trckvetoDep();
	if (mus_ndof_branch != 0) mus_ndof();
	if (mus_phiErr_branch != 0) mus_phiErr();
	if (mus_ptErr_branch != 0) mus_ptErr();
	if (mus_qoverp_branch != 0) mus_qoverp();
	if (mus_qoverpError_branch != 0) mus_qoverpError();
	if (mus_sta_chi2_branch != 0) mus_sta_chi2();
	if (mus_sta_d0_branch != 0) mus_sta_d0();
	if (mus_sta_d0Err_branch != 0) mus_sta_d0Err();
	if (mus_sta_d0corr_branch != 0) mus_sta_d0corr();
	if (mus_sta_ndof_branch != 0) mus_sta_ndof();
	if (mus_sta_qoverp_branch != 0) mus_sta_qoverp();
	if (mus_sta_qoverpError_branch != 0) mus_sta_qoverpError();
	if (mus_sta_z0_branch != 0) mus_sta_z0();
	if (mus_sta_z0Err_branch != 0) mus_sta_z0Err();
	if (mus_sta_z0corr_branch != 0) mus_sta_z0corr();
	if (mus_timeAtIpInOut_branch != 0) mus_timeAtIpInOut();
	if (mus_timeAtIpInOutErr_branch != 0) mus_timeAtIpInOutErr();
	if (mus_timeAtIpOutIn_branch != 0) mus_timeAtIpOutIn();
	if (mus_timeAtIpOutInErr_branch != 0) mus_timeAtIpOutInErr();
	if (mus_vertexphi_branch != 0) mus_vertexphi();
	if (mus_z0_branch != 0) mus_z0();
	if (mus_z0Err_branch != 0) mus_z0Err();
	if (mus_z0corr_branch != 0) mus_z0corr();
	if (pfjets_chargedEmE_branch != 0) pfjets_chargedEmE();
	if (pfjets_chargedHadronE_branch != 0) pfjets_chargedHadronE();
	if (pfjets_cor_branch != 0) pfjets_cor();
	if (pfjets_neutralEmE_branch != 0) pfjets_neutralEmE();
	if (pfjets_neutralHadronE_branch != 0) pfjets_neutralHadronE();
	if (taus_pf_caloComp_branch != 0) taus_pf_caloComp();
	if (taus_pf_ecalStripSumEOverPLead_branch != 0) taus_pf_ecalStripSumEOverPLead();
	if (taus_pf_electronPreIDOutput_branch != 0) taus_pf_electronPreIDOutput();
	if (taus_pf_emf_branch != 0) taus_pf_emf();
	if (taus_pf_hcal3x3OverPLead_branch != 0) taus_pf_hcal3x3OverPLead();
	if (taus_pf_hcalMaxOverPLead_branch != 0) taus_pf_hcalMaxOverPLead();
	if (taus_pf_hcalTotOverPLead_branch != 0) taus_pf_hcalTotOverPLead();
	if (taus_pf_isolationchargecandPtSum_branch != 0) taus_pf_isolationchargecandPtSum();
	if (taus_pf_isolationgammacandEtSum_branch != 0) taus_pf_isolationgammacandEtSum();
	if (taus_pf_lead_chargecand_Signed_Sipt_branch != 0) taus_pf_lead_chargecand_Signed_Sipt();
	if (taus_pf_maximumHCALPFClusterEt_branch != 0) taus_pf_maximumHCALPFClusterEt();
	if (taus_pf_segComp_branch != 0) taus_pf_segComp();
	if (photons_e1x5_branch != 0) photons_e1x5();
	if (photons_e2x5Max_branch != 0) photons_e2x5Max();
	if (photons_e3x3_branch != 0) photons_e3x3();
	if (photons_e5x5_branch != 0) photons_e5x5();
	if (photons_eMax_branch != 0) photons_eMax();
	if (photons_eSC_branch != 0) photons_eSC();
	if (photons_eSCPresh_branch != 0) photons_eSCPresh();
	if (photons_eSCRaw_branch != 0) photons_eSCRaw();
	if (photons_eSeed_branch != 0) photons_eSeed();
	if (photons_ecalIso_branch != 0) photons_ecalIso();
	if (photons_hOverE_branch != 0) photons_hOverE();
	if (photons_hcalIso_branch != 0) photons_hcalIso();
	if (photons_sigmaEtaEta_branch != 0) photons_sigmaEtaEta();
	if (photons_sigmaIEtaIEta_branch != 0) photons_sigmaIEtaIEta();
	if (photons_sigmaIPhiIPhi_branch != 0) photons_sigmaIPhiIPhi();
	if (photons_sigmaPhiPhi_branch != 0) photons_sigmaPhiPhi();
	if (photons_tkIsoHollow_branch != 0) photons_tkIsoHollow();
	if (photons_tkIsoSolid_branch != 0) photons_tkIsoSolid();
	if (ran_dRClosestTower_branch != 0) ran_dRClosestTower();
	if (ran_dRClosestTowerEmEt_branch != 0) ran_dRClosestTowerEmEt();
	if (ran_ecalIso03_egamma_branch != 0) ran_ecalIso03_egamma();
	if (ran_ecalIso03_mu_branch != 0) ran_ecalIso03_mu();
	if (ran_hcalD1Iso03_egamma_branch != 0) ran_hcalD1Iso03_egamma();
	if (ran_hcalD2Iso03_egamma_branch != 0) ran_hcalD2Iso03_egamma();
	if (ran_hcalIso03_egamma_branch != 0) ran_hcalIso03_egamma();
	if (ran_hcalIso03_mu_branch != 0) ran_hcalIso03_mu();
	if (ran_hoIso03_mu_branch != 0) ran_hoIso03_mu();
	if (ran_towerEmEt_branch != 0) ran_towerEmEt();
	if (ran_towerHadEt_branch != 0) ran_towerHadEt();
	if (ran_trkIso03_egamma_branch != 0) ran_trkIso03_egamma();
	if (ran_trkIso03_mu_branch != 0) ran_trkIso03_mu();
	if (scs_clustersSize_branch != 0) scs_clustersSize();
	if (scs_crystalsSize_branch != 0) scs_crystalsSize();
	if (scs_e1x3_branch != 0) scs_e1x3();
	if (scs_e1x5_branch != 0) scs_e1x5();
	if (scs_e2nd_branch != 0) scs_e2nd();
	if (scs_e2x2_branch != 0) scs_e2x2();
	if (scs_e2x5Max_branch != 0) scs_e2x5Max();
	if (scs_e3x1_branch != 0) scs_e3x1();
	if (scs_e3x2_branch != 0) scs_e3x2();
	if (scs_e3x3_branch != 0) scs_e3x3();
	if (scs_e4x4_branch != 0) scs_e4x4();
	if (scs_e5x5_branch != 0) scs_e5x5();
	if (scs_eMax_branch != 0) scs_eMax();
	if (scs_eSeed_branch != 0) scs_eSeed();
	if (scs_energy_branch != 0) scs_energy();
	if (scs_eta_branch != 0) scs_eta();
	if (scs_hoe_branch != 0) scs_hoe();
	if (scs_phi_branch != 0) scs_phi();
	if (scs_preshowerEnergy_branch != 0) scs_preshowerEnergy();
	if (scs_rawEnergy_branch != 0) scs_rawEnergy();
	if (scs_sigmaEtaEta_branch != 0) scs_sigmaEtaEta();
	if (scs_sigmaEtaPhi_branch != 0) scs_sigmaEtaPhi();
	if (scs_sigmaIEtaIEta_branch != 0) scs_sigmaIEtaIEta();
	if (scs_sigmaIEtaIPhi_branch != 0) scs_sigmaIEtaIPhi();
	if (scs_sigmaIPhiIPhi_branch != 0) scs_sigmaIPhiIPhi();
	if (scs_sigmaPhiPhi_branch != 0) scs_sigmaPhiPhi();
	if (scs_timeSeed_branch != 0) scs_timeSeed();
	if (scjets_approximatefHPD_branch != 0) scjets_approximatefHPD();
	if (scjets_approximatefRBX_branch != 0) scjets_approximatefRBX();
	if (scjets_cor_branch != 0) scjets_cor();
	if (scjets_emFrac_branch != 0) scjets_emFrac();
	if (scjets_fHPD_branch != 0) scjets_fHPD();
	if (scjets_fRBX_branch != 0) scjets_fRBX();
	if (scjets_fSubDetector1_branch != 0) scjets_fSubDetector1();
	if (scjets_fSubDetector2_branch != 0) scjets_fSubDetector2();
	if (scjets_fSubDetector3_branch != 0) scjets_fSubDetector3();
	if (scjets_fSubDetector4_branch != 0) scjets_fSubDetector4();
	if (scjets_hitsInN90_branch != 0) scjets_hitsInN90();
	if (scjets_n90Hits_branch != 0) scjets_n90Hits();
	if (scjets_nECALTowers_branch != 0) scjets_nECALTowers();
	if (scjets_nHCALTowers_branch != 0) scjets_nHCALTowers();
	if (scjets_restrictedEMF_branch != 0) scjets_restrictedEMF();
	if (mus_tcmet_deltax_branch != 0) mus_tcmet_deltax();
	if (mus_tcmet_deltay_branch != 0) mus_tcmet_deltay();
	if (trks_chi2_branch != 0) trks_chi2();
	if (trks_d0_branch != 0) trks_d0();
	if (trks_d0Err_branch != 0) trks_d0Err();
	if (trks_d0corr_branch != 0) trks_d0corr();
	if (trks_d0corrPhi_branch != 0) trks_d0corrPhi();
	if (trks_d0phiCov_branch != 0) trks_d0phiCov();
	if (trks_etaErr_branch != 0) trks_etaErr();
	if (trks_layer1_charge_branch != 0) trks_layer1_charge();
	if (trks_ndof_branch != 0) trks_ndof();
	if (trks_phiErr_branch != 0) trks_phiErr();
	if (trks_ptErr_branch != 0) trks_ptErr();
	if (trks_z0_branch != 0) trks_z0();
	if (trks_z0Err_branch != 0) trks_z0Err();
	if (trks_z0corr_branch != 0) trks_z0corr();
	if (trks_d0Errvtx_branch != 0) trks_d0Errvtx();
	if (trks_d0vtx_branch != 0) trks_d0vtx();
	if (vtxs_chi2_branch != 0) vtxs_chi2();
	if (vtxs_ndof_branch != 0) vtxs_ndof();
	if (vtxs_sumpt_branch != 0) vtxs_sumpt();
	if (vtxs_xError_branch != 0) vtxs_xError();
	if (vtxs_yError_branch != 0) vtxs_yError();
	if (vtxs_zError_branch != 0) vtxs_zError();
	if (twrs_em3x3_branch != 0) twrs_em3x3();
	if (twrs_em5x5_branch != 0) twrs_em5x5();
	if (twrs_emSwiss_branch != 0) twrs_emSwiss();
	if (twrs_emThresh_branch != 0) twrs_emThresh();
	if (twrs_emThreshChi2_branch != 0) twrs_emThreshChi2();
	if (twrs_emThreshEta_branch != 0) twrs_emThreshEta();
	if (twrs_emThreshTime_branch != 0) twrs_emThreshTime();
	if (twrsUncleaned_em3x3_branch != 0) twrsUncleaned_em3x3();
	if (twrsUncleaned_em5x5_branch != 0) twrsUncleaned_em5x5();
	if (twrsUncleaned_emSwiss_branch != 0) twrsUncleaned_emSwiss();
	if (twrsUncleaned_emThresh_branch != 0) twrsUncleaned_emThresh();
	if (twrsUncleaned_emThreshChi2_branch != 0) twrsUncleaned_emThreshChi2();
	if (twrsUncleaned_emThreshEta_branch != 0) twrsUncleaned_emThreshEta();
	if (twrsUncleaned_emThreshTime_branch != 0) twrsUncleaned_emThreshTime();
	if (vtxs_covMatrix_branch != 0) vtxs_covMatrix();
	if (evt_cscLooseHaloId_branch != 0) evt_cscLooseHaloId();
	if (evt_cscTightHaloId_branch != 0) evt_cscTightHaloId();
	if (evt_ecalLooseHaloId_branch != 0) evt_ecalLooseHaloId();
	if (evt_ecalTightHaloId_branch != 0) evt_ecalTightHaloId();
	if (evt_extremeTightHaloId_branch != 0) evt_extremeTightHaloId();
	if (evt_globalLooseHaloId_branch != 0) evt_globalLooseHaloId();
	if (evt_globalTightHaloId_branch != 0) evt_globalTightHaloId();
	if (evt_hcalLooseHaloId_branch != 0) evt_hcalLooseHaloId();
	if (evt_hcalTightHaloId_branch != 0) evt_hcalTightHaloId();
	if (evt_looseHaloId_branch != 0) evt_looseHaloId();
	if (evt_tightHaloId_branch != 0) evt_tightHaloId();
	if (evt_bsType_branch != 0) evt_bsType();
	if (evt_bunchCrossing_branch != 0) evt_bunchCrossing();
	if (evt_experimentType_branch != 0) evt_experimentType();
	if (evt_orbitNumber_branch != 0) evt_orbitNumber();
	if (evt_storeNumber_branch != 0) evt_storeNumber();
	if (hcalnoise_maxHPDHits_branch != 0) hcalnoise_maxHPDHits();
	if (hcalnoise_maxRBXHits_branch != 0) hcalnoise_maxRBXHits();
	if (hcalnoise_maxZeros_branch != 0) hcalnoise_maxZeros();
	if (hcalnoise_noiseFilterStatus_branch != 0) hcalnoise_noiseFilterStatus();
	if (hcalnoise_noiseType_branch != 0) hcalnoise_noiseType();
	if (hcalnoise_num10GeVHits_branch != 0) hcalnoise_num10GeVHits();
	if (hcalnoise_num25GeVHits_branch != 0) hcalnoise_num25GeVHits();
	if (hcalnoise_numProblematicRBXs_branch != 0) hcalnoise_numProblematicRBXs();
	if (hcalnoise_passHighLevelNoiseFilter_branch != 0) hcalnoise_passHighLevelNoiseFilter();
	if (hcalnoise_passLooseNoiseFilter_branch != 0) hcalnoise_passLooseNoiseFilter();
	if (hcalnoise_passTightNoiseFilter_branch != 0) hcalnoise_passTightNoiseFilter();
	if (l1_nemiso_branch != 0) l1_nemiso();
	if (l1_nemnoiso_branch != 0) l1_nemnoiso();
	if (l1_njetsc_branch != 0) l1_njetsc();
	if (l1_njetsf_branch != 0) l1_njetsf();
	if (l1_njetst_branch != 0) l1_njetst();
	if (l1_nmus_branch != 0) l1_nmus();
	if (pdfinfo_id1_branch != 0) pdfinfo_id1();
	if (pdfinfo_id2_branch != 0) pdfinfo_id2();
	if (evt_ecaliPhiSuspects_branch != 0) evt_ecaliPhiSuspects();
	if (evt_globaliPhiSuspects_branch != 0) evt_globaliPhiSuspects();
	if (evt_hcaliPhiSuspects_branch != 0) evt_hcaliPhiSuspects();
	if (twrs_numCrystals_branch != 0) twrs_numCrystals();
	if (twrsUncleaned_numCrystals_branch != 0) twrsUncleaned_numCrystals();
	if (taus_calo_charge_branch != 0) taus_calo_charge();
	if (taus_calo_leadtrk_idx_branch != 0) taus_calo_leadtrk_idx();
	if (taus_calo_tightId_branch != 0) taus_calo_tightId();
	if (els_mc3_id_branch != 0) els_mc3_id();
	if (els_mc3idx_branch != 0) els_mc3idx();
	if (els_mc3_motherid_branch != 0) els_mc3_motherid();
	if (els_mc3_motheridx_branch != 0) els_mc3_motheridx();
	if (els_mc_id_branch != 0) els_mc_id();
	if (els_mcidx_branch != 0) els_mcidx();
	if (els_mc_motherid_branch != 0) els_mc_motherid();
	if (jets_mc3_id_branch != 0) jets_mc3_id();
	if (jets_mc3idx_branch != 0) jets_mc3idx();
	if (jets_mc_gpidx_branch != 0) jets_mc_gpidx();
	if (jets_mc_id_branch != 0) jets_mc_id();
	if (jets_mcidx_branch != 0) jets_mcidx();
	if (mus_mc3_id_branch != 0) mus_mc3_id();
	if (mus_mc3idx_branch != 0) mus_mc3idx();
	if (mus_mc3_motherid_branch != 0) mus_mc3_motherid();
	if (mus_mc3_motheridx_branch != 0) mus_mc3_motheridx();
	if (mus_mc_id_branch != 0) mus_mc_id();
	if (mus_mcidx_branch != 0) mus_mcidx();
	if (mus_mc_motherid_branch != 0) mus_mc_motherid();
	if (trk_mc3_id_branch != 0) trk_mc3_id();
	if (trk_mc3idx_branch != 0) trk_mc3idx();
	if (trk_mc3_motherid_branch != 0) trk_mc3_motherid();
	if (trk_mc3_motheridx_branch != 0) trk_mc3_motheridx();
	if (trk_mc_id_branch != 0) trk_mc_id();
	if (trk_mcidx_branch != 0) trk_mcidx();
	if (trk_mc_motherid_branch != 0) trk_mc_motherid();
	if (els_closestJet_branch != 0) els_closestJet();
	if (els_closestMuon_branch != 0) els_closestMuon();
	if (els_category_branch != 0) els_category();
	if (els_charge_branch != 0) els_charge();
	if (els_class_branch != 0) els_class();
	if (els_conv_tkidx_branch != 0) els_conv_tkidx();
	if (els_exp_innerlayers_branch != 0) els_exp_innerlayers();
	if (els_exp_outerlayers_branch != 0) els_exp_outerlayers();
	if (els_fiduciality_branch != 0) els_fiduciality();
	if (els_layer1_det_branch != 0) els_layer1_det();
	if (els_layer1_layer_branch != 0) els_layer1_layer();
	if (els_layer1_sizerphi_branch != 0) els_layer1_sizerphi();
	if (els_layer1_sizerz_branch != 0) els_layer1_sizerz();
	if (els_lostHits_branch != 0) els_lostHits();
	if (els_lost_pixelhits_branch != 0) els_lost_pixelhits();
	if (els_nSeed_branch != 0) els_nSeed();
	if (els_sccharge_branch != 0) els_sccharge();
	if (els_trk_charge_branch != 0) els_trk_charge();
	if (els_trkidx_branch != 0) els_trkidx();
	if (els_type_branch != 0) els_type();
	if (els_validHits_branch != 0) els_validHits();
	if (els_valid_pixelhits_branch != 0) els_valid_pixelhits();
	if (genps_id_branch != 0) genps_id();
	if (genps_id_mother_branch != 0) genps_id_mother();
	if (genps_status_branch != 0) genps_status();
	if (hyp_ll_charge_branch != 0) hyp_ll_charge();
	if (hyp_ll_id_branch != 0) hyp_ll_id();
	if (hyp_ll_index_branch != 0) hyp_ll_index();
	if (hyp_ll_lostHits_branch != 0) hyp_ll_lostHits();
	if (hyp_ll_validHits_branch != 0) hyp_ll_validHits();
	if (hyp_lt_charge_branch != 0) hyp_lt_charge();
	if (hyp_lt_id_branch != 0) hyp_lt_id();
	if (hyp_lt_index_branch != 0) hyp_lt_index();
	if (hyp_lt_lostHits_branch != 0) hyp_lt_lostHits();
	if (hyp_lt_validHits_branch != 0) hyp_lt_validHits();
	if (hyp_njets_branch != 0) hyp_njets();
	if (hyp_nojets_branch != 0) hyp_nojets();
	if (hyp_type_branch != 0) hyp_type();
	if (hyp_FVFit_ndf_branch != 0) hyp_FVFit_ndf();
	if (hyp_FVFit_status_branch != 0) hyp_FVFit_status();
	if (hyp_ll_mc_id_branch != 0) hyp_ll_mc_id();
	if (hyp_ll_mc_motherid_branch != 0) hyp_ll_mc_motherid();
	if (hyp_lt_mc_id_branch != 0) hyp_lt_mc_id();
	if (hyp_lt_mc_motherid_branch != 0) hyp_lt_mc_motherid();
	if (hyp_quadlep_first_type_branch != 0) hyp_quadlep_first_type();
	if (hyp_quadlep_fourth_type_branch != 0) hyp_quadlep_fourth_type();
	if (hyp_quadlep_second_type_branch != 0) hyp_quadlep_second_type();
	if (hyp_quadlep_third_type_branch != 0) hyp_quadlep_third_type();
	if (hyp_trilep_first_type_branch != 0) hyp_trilep_first_type();
	if (hyp_trilep_second_type_branch != 0) hyp_trilep_second_type();
	if (hyp_trilep_third_type_branch != 0) hyp_trilep_third_type();
	if (jets_closestElectron_branch != 0) jets_closestElectron();
	if (jets_closestMuon_branch != 0) jets_closestMuon();
	if (l1_emiso_ieta_branch != 0) l1_emiso_ieta();
	if (l1_emiso_iphi_branch != 0) l1_emiso_iphi();
	if (l1_emiso_rawId_branch != 0) l1_emiso_rawId();
	if (l1_emiso_type_branch != 0) l1_emiso_type();
	if (l1_emnoiso_ieta_branch != 0) l1_emnoiso_ieta();
	if (l1_emnoiso_iphi_branch != 0) l1_emnoiso_iphi();
	if (l1_emnoiso_rawId_branch != 0) l1_emnoiso_rawId();
	if (l1_emnoiso_type_branch != 0) l1_emnoiso_type();
	if (l1_jetsc_ieta_branch != 0) l1_jetsc_ieta();
	if (l1_jetsc_iphi_branch != 0) l1_jetsc_iphi();
	if (l1_jetsc_rawId_branch != 0) l1_jetsc_rawId();
	if (l1_jetsc_type_branch != 0) l1_jetsc_type();
	if (l1_jetsf_ieta_branch != 0) l1_jetsf_ieta();
	if (l1_jetsf_iphi_branch != 0) l1_jetsf_iphi();
	if (l1_jetsf_rawId_branch != 0) l1_jetsf_rawId();
	if (l1_jetsf_type_branch != 0) l1_jetsf_type();
	if (l1_jetst_ieta_branch != 0) l1_jetst_ieta();
	if (l1_jetst_iphi_branch != 0) l1_jetst_iphi();
	if (l1_jetst_rawId_branch != 0) l1_jetst_rawId();
	if (l1_jetst_type_branch != 0) l1_jetst_type();
	if (l1_mus_flags_branch != 0) l1_mus_flags();
	if (l1_mus_q_branch != 0) l1_mus_q();
	if (l1_mus_qual_branch != 0) l1_mus_qual();
	if (l1_mus_qualFlags_branch != 0) l1_mus_qualFlags();
	if (mus_met_flag_branch != 0) mus_met_flag();
	if (mus_closestEle_branch != 0) mus_closestEle();
	if (mus_closestJet_branch != 0) mus_closestJet();
	if (mus_charge_branch != 0) mus_charge();
	if (mus_gfit_validHits_branch != 0) mus_gfit_validHits();
	if (mus_gfit_validSTAHits_branch != 0) mus_gfit_validSTAHits();
	if (mus_gfit_validSiHits_branch != 0) mus_gfit_validSiHits();
	if (mus_goodmask_branch != 0) mus_goodmask();
	if (mus_iso03_ntrk_branch != 0) mus_iso03_ntrk();
	if (mus_iso05_ntrk_branch != 0) mus_iso05_ntrk();
	if (mus_lostHits_branch != 0) mus_lostHits();
	if (mus_nmatches_branch != 0) mus_nmatches();
	if (mus_pid_TM2DCompatibilityLoose_branch != 0) mus_pid_TM2DCompatibilityLoose();
	if (mus_pid_TM2DCompatibilityTight_branch != 0) mus_pid_TM2DCompatibilityTight();
	if (mus_pid_TMLastStationLoose_branch != 0) mus_pid_TMLastStationLoose();
	if (mus_pid_TMLastStationTight_branch != 0) mus_pid_TMLastStationTight();
	if (mus_sta_validHits_branch != 0) mus_sta_validHits();
	if (mus_timeDirection_branch != 0) mus_timeDirection();
	if (mus_timeNumStationsUsed_branch != 0) mus_timeNumStationsUsed();
	if (mus_trk_charge_branch != 0) mus_trk_charge();
	if (mus_trkidx_branch != 0) mus_trkidx();
	if (mus_type_branch != 0) mus_type();
	if (mus_validHits_branch != 0) mus_validHits();
	if (pfjets_chargedMultiplicity_branch != 0) pfjets_chargedMultiplicity();
	if (pfjets_muonMultiplicity_branch != 0) pfjets_muonMultiplicity();
	if (pfjets_neutralMultiplicity_branch != 0) pfjets_neutralMultiplicity();
	if (taus_pf_charge_branch != 0) taus_pf_charge();
	if (taus_pf_electronPreID_branch != 0) taus_pf_electronPreID();
	if (taus_pf_hasMuonReference_branch != 0) taus_pf_hasMuonReference();
	if (taus_pf_leadtrk_idx_branch != 0) taus_pf_leadtrk_idx();
	if (taus_pf_muonPreID_branch != 0) taus_pf_muonPreID();
	if (taus_pf_nmuonmatch_branch != 0) taus_pf_nmuonmatch();
	if (taus_pf_tightId_branch != 0) taus_pf_tightId();
	if (photons_fiduciality_branch != 0) photons_fiduciality();
	if (pxl_ndigis_pxb_branch != 0) pxl_ndigis_pxb();
	if (pxl_ndigis_pxf_branch != 0) pxl_ndigis_pxf();
	if (ran_srFlag_branch != 0) ran_srFlag();
	if (scs_detIdSeed_branch != 0) scs_detIdSeed();
	if (scs_elsidx_branch != 0) scs_elsidx();
	if (scs_severitySeed_branch != 0) scs_severitySeed();
	if (mus_tcmet_flag_branch != 0) mus_tcmet_flag();
	if (trks_algo_branch != 0) trks_algo();
	if (trks_charge_branch != 0) trks_charge();
	if (trks_exp_innerlayers_branch != 0) trks_exp_innerlayers();
	if (trks_exp_outerlayers_branch != 0) trks_exp_outerlayers();
	if (trks_layer1_det_branch != 0) trks_layer1_det();
	if (trks_layer1_layer_branch != 0) trks_layer1_layer();
	if (trks_layer1_sizerphi_branch != 0) trks_layer1_sizerphi();
	if (trks_layer1_sizerz_branch != 0) trks_layer1_sizerz();
	if (trks_lostHits_branch != 0) trks_lostHits();
	if (trks_lost_pixelhits_branch != 0) trks_lost_pixelhits();
	if (trks_nlayers_branch != 0) trks_nlayers();
	if (trks_nlayers3D_branch != 0) trks_nlayers3D();
	if (trks_nlayersLost_branch != 0) trks_nlayersLost();
	if (trks_qualityMask_branch != 0) trks_qualityMask();
	if (trks_validHits_branch != 0) trks_validHits();
	if (trks_valid_pixelhits_branch != 0) trks_valid_pixelhits();
	if (trks_elsidx_branch != 0) trks_elsidx();
	if (trk_musidx_branch != 0) trk_musidx();
	if (vtxs_isFake_branch != 0) vtxs_isFake();
	if (vtxs_isValid_branch != 0) vtxs_isValid();
	if (vtxs_tracksSize_branch != 0) vtxs_tracksSize();
	if (twrs_emMaxEcalMGPASampleADC_branch != 0) twrs_emMaxEcalMGPASampleADC();
	if (twrs_emThreshRecoFlag_branch != 0) twrs_emThreshRecoFlag();
	if (twrs_emThreshSevLvl_branch != 0) twrs_emThreshSevLvl();
	if (twrsUncleaned_emMaxEcalMGPASampleADC_branch != 0) twrsUncleaned_emMaxEcalMGPASampleADC();
	if (twrsUncleaned_emThreshRecoFlag_branch != 0) twrsUncleaned_emThreshRecoFlag();
	if (twrsUncleaned_emThreshSevLvl_branch != 0) twrsUncleaned_emThreshSevLvl();
	if (taus_calo_isotrk_idx_branch != 0) taus_calo_isotrk_idx();
	if (taus_calo_sigtrk_idx_branch != 0) taus_calo_sigtrk_idx();
	if (genps_lepdaughter_id_branch != 0) genps_lepdaughter_id();
	if (genps_lepdaughter_idx_branch != 0) genps_lepdaughter_idx();
	if (hlt_trigObjs_id_branch != 0) hlt_trigObjs_id();
	if (hyp_jets_idx_branch != 0) hyp_jets_idx();
	if (hyp_other_jets_idx_branch != 0) hyp_other_jets_idx();
	if (evt_ntwrs_branch != 0) evt_ntwrs();
	if (evt_nels_branch != 0) evt_nels();
	if (evt_detectorStatus_branch != 0) evt_detectorStatus();
	if (evt_event_branch != 0) evt_event();
	if (evt_lumiBlock_branch != 0) evt_lumiBlock();
	if (evt_run_branch != 0) evt_run();
	if (genps_flavorHistoryFilterResult_branch != 0) genps_flavorHistoryFilterResult();
	if (evt_ngenjets_branch != 0) evt_ngenjets();
	if (genps_signalProcessID_branch != 0) genps_signalProcessID();
	if (hlt_bits1_branch != 0) hlt_bits1();
	if (hlt_bits2_branch != 0) hlt_bits2();
	if (hlt_bits3_branch != 0) hlt_bits3();
	if (hlt_bits4_branch != 0) hlt_bits4();
	if (hlt_bits5_branch != 0) hlt_bits5();
	if (hlt_bits6_branch != 0) hlt_bits6();
	if (hlt_bits7_branch != 0) hlt_bits7();
	if (hlt_bits8_branch != 0) hlt_bits8();
	if (evt_njets_branch != 0) evt_njets();
	if (evt_njpts_branch != 0) evt_njpts();
	if (l1_bits1_branch != 0) l1_bits1();
	if (l1_bits2_branch != 0) l1_bits2();
	if (l1_bits3_branch != 0) l1_bits3();
	if (l1_bits4_branch != 0) l1_bits4();
	if (l1_techbits1_branch != 0) l1_techbits1();
	if (l1_techbits2_branch != 0) l1_techbits2();
	if (evt_nphotons_branch != 0) evt_nphotons();
	if (evt_nscs_branch != 0) evt_nscs();
	if (evt_nscjets_branch != 0) evt_nscjets();
	if (evt_ntrkjets_branch != 0) evt_ntrkjets();
	if (evt_nvtxs_branch != 0) evt_nvtxs();
	if (twrs_detid_branch != 0) twrs_detid();
	if (twrs_numBadEcalCells_branch != 0) twrs_numBadEcalCells();
	if (twrs_numBadHcalCells_branch != 0) twrs_numBadHcalCells();
	if (twrs_numProblematicEcalCells_branch != 0) twrs_numProblematicEcalCells();
	if (twrs_numProblematicHcalCells_branch != 0) twrs_numProblematicHcalCells();
	if (twrs_numRecoveredEcalCells_branch != 0) twrs_numRecoveredEcalCells();
	if (twrs_numRecoveredHcalCells_branch != 0) twrs_numRecoveredHcalCells();
	if (twrsUncleaned_detid_branch != 0) twrsUncleaned_detid();
	if (twrsUncleaned_numBadEcalCells_branch != 0) twrsUncleaned_numBadEcalCells();
	if (twrsUncleaned_numBadHcalCells_branch != 0) twrsUncleaned_numBadHcalCells();
	if (twrsUncleaned_numProblematicEcalCells_branch != 0) twrsUncleaned_numProblematicEcalCells();
	if (twrsUncleaned_numProblematicHcalCells_branch != 0) twrsUncleaned_numProblematicHcalCells();
	if (twrsUncleaned_numRecoveredEcalCells_branch != 0) twrsUncleaned_numRecoveredEcalCells();
	if (twrsUncleaned_numRecoveredHcalCells_branch != 0) twrsUncleaned_numRecoveredHcalCells();
	if (hyp_quadlep_bucket_branch != 0) hyp_quadlep_bucket();
	if (hyp_quadlep_first_index_branch != 0) hyp_quadlep_first_index();
	if (hyp_quadlep_fourth_index_branch != 0) hyp_quadlep_fourth_index();
	if (hyp_quadlep_second_index_branch != 0) hyp_quadlep_second_index();
	if (hyp_quadlep_third_index_branch != 0) hyp_quadlep_third_index();
	if (hyp_trilep_bucket_branch != 0) hyp_trilep_bucket();
	if (hyp_trilep_first_index_branch != 0) hyp_trilep_first_index();
	if (hyp_trilep_second_index_branch != 0) hyp_trilep_second_index();
	if (hyp_trilep_third_index_branch != 0) hyp_trilep_third_index();
	if (evt_nEvts_branch != 0) evt_nEvts();
	if (evt_filt_eff_branch != 0) evt_filt_eff();
}

	TString &evt_CMS2tag()
	{
		if (not evt_CMS2tag_isLoaded) {
			if (evt_CMS2tag_branch != 0) {
				evt_CMS2tag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_CMS2tag_branch does not exist!\n");
				exit(1);
			}
			evt_CMS2tag_isLoaded = true;
		}
		return evt_CMS2tag_;
	}
	TString &evt_dataset()
	{
		if (not evt_dataset_isLoaded) {
			if (evt_dataset_branch != 0) {
				evt_dataset_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_dataset_branch does not exist!\n");
				exit(1);
			}
			evt_dataset_isLoaded = true;
		}
		return evt_dataset_;
	}
	vector<TString> &hlt_trigNames()
	{
		if (not hlt_trigNames_isLoaded) {
			if (hlt_trigNames_branch != 0) {
				hlt_trigNames_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_trigNames_branch does not exist!\n");
				exit(1);
			}
			hlt_trigNames_isLoaded = true;
		}
		return hlt_trigNames_;
	}
	vector<TString> &l1_trigNames()
	{
		if (not l1_trigNames_isLoaded) {
			if (l1_trigNames_branch != 0) {
				l1_trigNames_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_trigNames_branch does not exist!\n");
				exit(1);
			}
			l1_trigNames_isLoaded = true;
		}
		return l1_trigNames_;
	}
	vector<double> &jets_closestElectron_DR()
	{
		if (not jets_closestElectron_DR_isLoaded) {
			if (jets_closestElectron_DR_branch != 0) {
				jets_closestElectron_DR_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_closestElectron_DR_branch does not exist!\n");
				exit(1);
			}
			jets_closestElectron_DR_isLoaded = true;
		}
		return jets_closestElectron_DR_;
	}
	vector<double> &jets_closestMuon_DR()
	{
		if (not jets_closestMuon_DR_isLoaded) {
			if (jets_closestMuon_DR_branch != 0) {
				jets_closestMuon_DR_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_closestMuon_DR_branch does not exist!\n");
				exit(1);
			}
			jets_closestMuon_DR_isLoaded = true;
		}
		return jets_closestMuon_DR_;
	}
	float &evt_bs_Xwidth()
	{
		if (not evt_bs_Xwidth_isLoaded) {
			if (evt_bs_Xwidth_branch != 0) {
				evt_bs_Xwidth_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_Xwidth_)) {
					printf("branch evt_bs_Xwidth_branch contains a bad float: %f\n", evt_bs_Xwidth_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_Xwidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Xwidth_isLoaded = true;
		}
		return evt_bs_Xwidth_;
	}
	float &evt_bs_XwidthErr()
	{
		if (not evt_bs_XwidthErr_isLoaded) {
			if (evt_bs_XwidthErr_branch != 0) {
				evt_bs_XwidthErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_XwidthErr_)) {
					printf("branch evt_bs_XwidthErr_branch contains a bad float: %f\n", evt_bs_XwidthErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_XwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_XwidthErr_isLoaded = true;
		}
		return evt_bs_XwidthErr_;
	}
	float &evt_bs_Ywidth()
	{
		if (not evt_bs_Ywidth_isLoaded) {
			if (evt_bs_Ywidth_branch != 0) {
				evt_bs_Ywidth_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_Ywidth_)) {
					printf("branch evt_bs_Ywidth_branch contains a bad float: %f\n", evt_bs_Ywidth_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_Ywidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Ywidth_isLoaded = true;
		}
		return evt_bs_Ywidth_;
	}
	float &evt_bs_YwidthErr()
	{
		if (not evt_bs_YwidthErr_isLoaded) {
			if (evt_bs_YwidthErr_branch != 0) {
				evt_bs_YwidthErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_YwidthErr_)) {
					printf("branch evt_bs_YwidthErr_branch contains a bad float: %f\n", evt_bs_YwidthErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_YwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_YwidthErr_isLoaded = true;
		}
		return evt_bs_YwidthErr_;
	}
	float &evt_bs_dxdz()
	{
		if (not evt_bs_dxdz_isLoaded) {
			if (evt_bs_dxdz_branch != 0) {
				evt_bs_dxdz_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_dxdz_)) {
					printf("branch evt_bs_dxdz_branch contains a bad float: %f\n", evt_bs_dxdz_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_dxdz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdz_isLoaded = true;
		}
		return evt_bs_dxdz_;
	}
	float &evt_bs_dxdzErr()
	{
		if (not evt_bs_dxdzErr_isLoaded) {
			if (evt_bs_dxdzErr_branch != 0) {
				evt_bs_dxdzErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_dxdzErr_)) {
					printf("branch evt_bs_dxdzErr_branch contains a bad float: %f\n", evt_bs_dxdzErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_dxdzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdzErr_isLoaded = true;
		}
		return evt_bs_dxdzErr_;
	}
	float &evt_bs_dydz()
	{
		if (not evt_bs_dydz_isLoaded) {
			if (evt_bs_dydz_branch != 0) {
				evt_bs_dydz_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_dydz_)) {
					printf("branch evt_bs_dydz_branch contains a bad float: %f\n", evt_bs_dydz_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_dydz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydz_isLoaded = true;
		}
		return evt_bs_dydz_;
	}
	float &evt_bs_dydzErr()
	{
		if (not evt_bs_dydzErr_isLoaded) {
			if (evt_bs_dydzErr_branch != 0) {
				evt_bs_dydzErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_dydzErr_)) {
					printf("branch evt_bs_dydzErr_branch contains a bad float: %f\n", evt_bs_dydzErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_dydzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydzErr_isLoaded = true;
		}
		return evt_bs_dydzErr_;
	}
	float &evt_bs_sigmaZ()
	{
		if (not evt_bs_sigmaZ_isLoaded) {
			if (evt_bs_sigmaZ_branch != 0) {
				evt_bs_sigmaZ_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_sigmaZ_)) {
					printf("branch evt_bs_sigmaZ_branch contains a bad float: %f\n", evt_bs_sigmaZ_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_sigmaZ_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZ_isLoaded = true;
		}
		return evt_bs_sigmaZ_;
	}
	float &evt_bs_sigmaZErr()
	{
		if (not evt_bs_sigmaZErr_isLoaded) {
			if (evt_bs_sigmaZErr_branch != 0) {
				evt_bs_sigmaZErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_sigmaZErr_)) {
					printf("branch evt_bs_sigmaZErr_branch contains a bad float: %f\n", evt_bs_sigmaZErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_sigmaZErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZErr_isLoaded = true;
		}
		return evt_bs_sigmaZErr_;
	}
	float &evt_bs_xErr()
	{
		if (not evt_bs_xErr_isLoaded) {
			if (evt_bs_xErr_branch != 0) {
				evt_bs_xErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_xErr_)) {
					printf("branch evt_bs_xErr_branch contains a bad float: %f\n", evt_bs_xErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_xErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_xErr_isLoaded = true;
		}
		return evt_bs_xErr_;
	}
	float &evt_bs_yErr()
	{
		if (not evt_bs_yErr_isLoaded) {
			if (evt_bs_yErr_branch != 0) {
				evt_bs_yErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_yErr_)) {
					printf("branch evt_bs_yErr_branch contains a bad float: %f\n", evt_bs_yErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_yErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_yErr_isLoaded = true;
		}
		return evt_bs_yErr_;
	}
	float &evt_bs_zErr()
	{
		if (not evt_bs_zErr_isLoaded) {
			if (evt_bs_zErr_branch != 0) {
				evt_bs_zErr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bs_zErr_)) {
					printf("branch evt_bs_zErr_branch contains a bad float: %f\n", evt_bs_zErr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_zErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_zErr_isLoaded = true;
		}
		return evt_bs_zErr_;
	}
	float &evt_bField()
	{
		if (not evt_bField_isLoaded) {
			if (evt_bField_branch != 0) {
				evt_bField_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_bField_)) {
					printf("branch evt_bField_branch contains a bad float: %f\n", evt_bField_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bField_branch does not exist!\n");
				exit(1);
			}
			evt_bField_isLoaded = true;
		}
		return evt_bField_;
	}
	float &evt_kfactor()
	{
		if (not evt_kfactor_isLoaded) {
			if (evt_kfactor_branch != 0) {
				evt_kfactor_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_kfactor_branch does not exist!\n");
				exit(1);
			}
			evt_kfactor_isLoaded = true;
		}
		return evt_kfactor_;
	}
	float &evt_scale1fb()
	{
		if (not evt_scale1fb_isLoaded) {
			if (evt_scale1fb_branch != 0) {
				evt_scale1fb_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_scale1fb_branch does not exist!\n");
				exit(1);
			}
			evt_scale1fb_isLoaded = true;
		}
		return evt_scale1fb_;
	}
	float &evt_xsec_excl()
	{
		if (not evt_xsec_excl_isLoaded) {
			if (evt_xsec_excl_branch != 0) {
				evt_xsec_excl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_xsec_excl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_excl_isLoaded = true;
		}
		return evt_xsec_excl_;
	}
	float &evt_xsec_incl()
	{
		if (not evt_xsec_incl_isLoaded) {
			if (evt_xsec_incl_branch != 0) {
				evt_xsec_incl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_xsec_incl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_incl_isLoaded = true;
		}
		return evt_xsec_incl_;
	}
	float &gen_met()
	{
		if (not gen_met_isLoaded) {
			if (gen_met_branch != 0) {
				gen_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(gen_met_)) {
					printf("branch gen_met_branch contains a bad float: %f\n", gen_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gen_met_branch does not exist!\n");
				exit(1);
			}
			gen_met_isLoaded = true;
		}
		return gen_met_;
	}
	float &gen_metPhi()
	{
		if (not gen_metPhi_isLoaded) {
			if (gen_metPhi_branch != 0) {
				gen_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(gen_metPhi_)) {
					printf("branch gen_metPhi_branch contains a bad float: %f\n", gen_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gen_metPhi_branch does not exist!\n");
				exit(1);
			}
			gen_metPhi_isLoaded = true;
		}
		return gen_metPhi_;
	}
	float &genps_alphaQCD()
	{
		if (not genps_alphaQCD_isLoaded) {
			if (genps_alphaQCD_branch != 0) {
				genps_alphaQCD_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(genps_alphaQCD_)) {
					printf("branch genps_alphaQCD_branch contains a bad float: %f\n", genps_alphaQCD_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_alphaQCD_branch does not exist!\n");
				exit(1);
			}
			genps_alphaQCD_isLoaded = true;
		}
		return genps_alphaQCD_;
	}
	float &genps_pthat()
	{
		if (not genps_pthat_isLoaded) {
			if (genps_pthat_branch != 0) {
				genps_pthat_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(genps_pthat_)) {
					printf("branch genps_pthat_branch contains a bad float: %f\n", genps_pthat_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_pthat_branch does not exist!\n");
				exit(1);
			}
			genps_pthat_isLoaded = true;
		}
		return genps_pthat_;
	}
	float &genps_qScale()
	{
		if (not genps_qScale_isLoaded) {
			if (genps_qScale_branch != 0) {
				genps_qScale_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(genps_qScale_)) {
					printf("branch genps_qScale_branch contains a bad float: %f\n", genps_qScale_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_qScale_branch does not exist!\n");
				exit(1);
			}
			genps_qScale_isLoaded = true;
		}
		return genps_qScale_;
	}
	float &genps_weight()
	{
		if (not genps_weight_isLoaded) {
			if (genps_weight_branch != 0) {
				genps_weight_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(genps_weight_)) {
					printf("branch genps_weight_branch contains a bad float: %f\n", genps_weight_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_weight_branch does not exist!\n");
				exit(1);
			}
			genps_weight_isLoaded = true;
		}
		return genps_weight_;
	}
	float &gen_sumEt()
	{
		if (not gen_sumEt_isLoaded) {
			if (gen_sumEt_branch != 0) {
				gen_sumEt_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(gen_sumEt_)) {
					printf("branch gen_sumEt_branch contains a bad float: %f\n", gen_sumEt_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gen_sumEt_branch does not exist!\n");
				exit(1);
			}
			gen_sumEt_isLoaded = true;
		}
		return gen_sumEt_;
	}
	float &hcalnoise_eventChargeFraction()
	{
		if (not hcalnoise_eventChargeFraction_isLoaded) {
			if (hcalnoise_eventChargeFraction_branch != 0) {
				hcalnoise_eventChargeFraction_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_eventChargeFraction_)) {
					printf("branch hcalnoise_eventChargeFraction_branch contains a bad float: %f\n", hcalnoise_eventChargeFraction_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_eventChargeFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventChargeFraction_isLoaded = true;
		}
		return hcalnoise_eventChargeFraction_;
	}
	float &hcalnoise_eventEMEnergy()
	{
		if (not hcalnoise_eventEMEnergy_isLoaded) {
			if (hcalnoise_eventEMEnergy_branch != 0) {
				hcalnoise_eventEMEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_eventEMEnergy_)) {
					printf("branch hcalnoise_eventEMEnergy_branch contains a bad float: %f\n", hcalnoise_eventEMEnergy_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_eventEMEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMEnergy_isLoaded = true;
		}
		return hcalnoise_eventEMEnergy_;
	}
	float &hcalnoise_eventEMFraction()
	{
		if (not hcalnoise_eventEMFraction_isLoaded) {
			if (hcalnoise_eventEMFraction_branch != 0) {
				hcalnoise_eventEMFraction_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_eventEMFraction_)) {
					printf("branch hcalnoise_eventEMFraction_branch contains a bad float: %f\n", hcalnoise_eventEMFraction_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_eventEMFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMFraction_isLoaded = true;
		}
		return hcalnoise_eventEMFraction_;
	}
	float &hcalnoise_eventHadEnergy()
	{
		if (not hcalnoise_eventHadEnergy_isLoaded) {
			if (hcalnoise_eventHadEnergy_branch != 0) {
				hcalnoise_eventHadEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_eventHadEnergy_)) {
					printf("branch hcalnoise_eventHadEnergy_branch contains a bad float: %f\n", hcalnoise_eventHadEnergy_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_eventHadEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventHadEnergy_isLoaded = true;
		}
		return hcalnoise_eventHadEnergy_;
	}
	float &hcalnoise_eventTrackEnergy()
	{
		if (not hcalnoise_eventTrackEnergy_isLoaded) {
			if (hcalnoise_eventTrackEnergy_branch != 0) {
				hcalnoise_eventTrackEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_eventTrackEnergy_)) {
					printf("branch hcalnoise_eventTrackEnergy_branch contains a bad float: %f\n", hcalnoise_eventTrackEnergy_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_eventTrackEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventTrackEnergy_isLoaded = true;
		}
		return hcalnoise_eventTrackEnergy_;
	}
	float &hcalnoise_max10GeVHitTime()
	{
		if (not hcalnoise_max10GeVHitTime_isLoaded) {
			if (hcalnoise_max10GeVHitTime_branch != 0) {
				hcalnoise_max10GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_max10GeVHitTime_)) {
					printf("branch hcalnoise_max10GeVHitTime_branch contains a bad float: %f\n", hcalnoise_max10GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_max10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max10GeVHitTime_;
	}
	float &hcalnoise_max25GeVHitTime()
	{
		if (not hcalnoise_max25GeVHitTime_isLoaded) {
			if (hcalnoise_max25GeVHitTime_branch != 0) {
				hcalnoise_max25GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_max25GeVHitTime_)) {
					printf("branch hcalnoise_max25GeVHitTime_branch contains a bad float: %f\n", hcalnoise_max25GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_max25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max25GeVHitTime_;
	}
	float &hcalnoise_min10GeVHitTime()
	{
		if (not hcalnoise_min10GeVHitTime_isLoaded) {
			if (hcalnoise_min10GeVHitTime_branch != 0) {
				hcalnoise_min10GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_min10GeVHitTime_)) {
					printf("branch hcalnoise_min10GeVHitTime_branch contains a bad float: %f\n", hcalnoise_min10GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_min10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min10GeVHitTime_;
	}
	float &hcalnoise_min25GeVHitTime()
	{
		if (not hcalnoise_min25GeVHitTime_isLoaded) {
			if (hcalnoise_min25GeVHitTime_branch != 0) {
				hcalnoise_min25GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_min25GeVHitTime_)) {
					printf("branch hcalnoise_min25GeVHitTime_branch contains a bad float: %f\n", hcalnoise_min25GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_min25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min25GeVHitTime_;
	}
	float &hcalnoise_minE10TS()
	{
		if (not hcalnoise_minE10TS_isLoaded) {
			if (hcalnoise_minE10TS_branch != 0) {
				hcalnoise_minE10TS_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_minE10TS_)) {
					printf("branch hcalnoise_minE10TS_branch contains a bad float: %f\n", hcalnoise_minE10TS_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_minE10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE10TS_isLoaded = true;
		}
		return hcalnoise_minE10TS_;
	}
	float &hcalnoise_minE2Over10TS()
	{
		if (not hcalnoise_minE2Over10TS_isLoaded) {
			if (hcalnoise_minE2Over10TS_branch != 0) {
				hcalnoise_minE2Over10TS_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_minE2Over10TS_)) {
					printf("branch hcalnoise_minE2Over10TS_branch contains a bad float: %f\n", hcalnoise_minE2Over10TS_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_minE2Over10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2Over10TS_isLoaded = true;
		}
		return hcalnoise_minE2Over10TS_;
	}
	float &hcalnoise_minE2TS()
	{
		if (not hcalnoise_minE2TS_isLoaded) {
			if (hcalnoise_minE2TS_branch != 0) {
				hcalnoise_minE2TS_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_minE2TS_)) {
					printf("branch hcalnoise_minE2TS_branch contains a bad float: %f\n", hcalnoise_minE2TS_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_minE2TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2TS_isLoaded = true;
		}
		return hcalnoise_minE2TS_;
	}
	float &hcalnoise_minHPDEMF()
	{
		if (not hcalnoise_minHPDEMF_isLoaded) {
			if (hcalnoise_minHPDEMF_branch != 0) {
				hcalnoise_minHPDEMF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_minHPDEMF_)) {
					printf("branch hcalnoise_minHPDEMF_branch contains a bad float: %f\n", hcalnoise_minHPDEMF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_minHPDEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minHPDEMF_isLoaded = true;
		}
		return hcalnoise_minHPDEMF_;
	}
	float &hcalnoise_minRBXEMF()
	{
		if (not hcalnoise_minRBXEMF_isLoaded) {
			if (hcalnoise_minRBXEMF_branch != 0) {
				hcalnoise_minRBXEMF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_minRBXEMF_)) {
					printf("branch hcalnoise_minRBXEMF_branch contains a bad float: %f\n", hcalnoise_minRBXEMF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_minRBXEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minRBXEMF_isLoaded = true;
		}
		return hcalnoise_minRBXEMF_;
	}
	float &hcalnoise_rms10GeVHitTime()
	{
		if (not hcalnoise_rms10GeVHitTime_isLoaded) {
			if (hcalnoise_rms10GeVHitTime_branch != 0) {
				hcalnoise_rms10GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_rms10GeVHitTime_)) {
					printf("branch hcalnoise_rms10GeVHitTime_branch contains a bad float: %f\n", hcalnoise_rms10GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_rms10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms10GeVHitTime_;
	}
	float &hcalnoise_rms25GeVHitTime()
	{
		if (not hcalnoise_rms25GeVHitTime_isLoaded) {
			if (hcalnoise_rms25GeVHitTime_branch != 0) {
				hcalnoise_rms25GeVHitTime_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(hcalnoise_rms25GeVHitTime_)) {
					printf("branch hcalnoise_rms25GeVHitTime_branch contains a bad float: %f\n", hcalnoise_rms25GeVHitTime_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_rms25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms25GeVHitTime_;
	}
	float &l1_met_etTot()
	{
		if (not l1_met_etTot_isLoaded) {
			if (l1_met_etTot_branch != 0) {
				l1_met_etTot_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(l1_met_etTot_)) {
					printf("branch l1_met_etTot_branch contains a bad float: %f\n", l1_met_etTot_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_met_etTot_branch does not exist!\n");
				exit(1);
			}
			l1_met_etTot_isLoaded = true;
		}
		return l1_met_etTot_;
	}
	float &l1_met_met()
	{
		if (not l1_met_met_isLoaded) {
			if (l1_met_met_branch != 0) {
				l1_met_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(l1_met_met_)) {
					printf("branch l1_met_met_branch contains a bad float: %f\n", l1_met_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_met_met_branch does not exist!\n");
				exit(1);
			}
			l1_met_met_isLoaded = true;
		}
		return l1_met_met_;
	}
	float &l1_mht_htTot()
	{
		if (not l1_mht_htTot_isLoaded) {
			if (l1_mht_htTot_branch != 0) {
				l1_mht_htTot_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(l1_mht_htTot_)) {
					printf("branch l1_mht_htTot_branch contains a bad float: %f\n", l1_mht_htTot_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mht_htTot_branch does not exist!\n");
				exit(1);
			}
			l1_mht_htTot_isLoaded = true;
		}
		return l1_mht_htTot_;
	}
	float &l1_mht_mht()
	{
		if (not l1_mht_mht_isLoaded) {
			if (l1_mht_mht_branch != 0) {
				l1_mht_mht_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(l1_mht_mht_)) {
					printf("branch l1_mht_mht_branch contains a bad float: %f\n", l1_mht_mht_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mht_mht_branch does not exist!\n");
				exit(1);
			}
			l1_mht_mht_isLoaded = true;
		}
		return l1_mht_mht_;
	}
	float &evt_ecalendcapm_met()
	{
		if (not evt_ecalendcapm_met_isLoaded) {
			if (evt_ecalendcapm_met_branch != 0) {
				evt_ecalendcapm_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalendcapm_met_)) {
					printf("branch evt_ecalendcapm_met_branch contains a bad float: %f\n", evt_ecalendcapm_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalendcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapm_met_isLoaded = true;
		}
		return evt_ecalendcapm_met_;
	}
	float &evt_ecalendcapm_metPhi()
	{
		if (not evt_ecalendcapm_metPhi_isLoaded) {
			if (evt_ecalendcapm_metPhi_branch != 0) {
				evt_ecalendcapm_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalendcapm_metPhi_)) {
					printf("branch evt_ecalendcapm_metPhi_branch contains a bad float: %f\n", evt_ecalendcapm_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalendcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapm_metPhi_isLoaded = true;
		}
		return evt_ecalendcapm_metPhi_;
	}
	float &evt_ecalendcapp_met()
	{
		if (not evt_ecalendcapp_met_isLoaded) {
			if (evt_ecalendcapp_met_branch != 0) {
				evt_ecalendcapp_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalendcapp_met_)) {
					printf("branch evt_ecalendcapp_met_branch contains a bad float: %f\n", evt_ecalendcapp_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalendcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapp_met_isLoaded = true;
		}
		return evt_ecalendcapp_met_;
	}
	float &evt_ecalendcapp_metPhi()
	{
		if (not evt_ecalendcapp_metPhi_isLoaded) {
			if (evt_ecalendcapp_metPhi_branch != 0) {
				evt_ecalendcapp_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalendcapp_metPhi_)) {
					printf("branch evt_ecalendcapp_metPhi_branch contains a bad float: %f\n", evt_ecalendcapp_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalendcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapp_metPhi_isLoaded = true;
		}
		return evt_ecalendcapp_metPhi_;
	}
	float &evt_ecalmet()
	{
		if (not evt_ecalmet_isLoaded) {
			if (evt_ecalmet_branch != 0) {
				evt_ecalmet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalmet_)) {
					printf("branch evt_ecalmet_branch contains a bad float: %f\n", evt_ecalmet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalmet_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_isLoaded = true;
		}
		return evt_ecalmet_;
	}
	float &evt_ecalmetPhi()
	{
		if (not evt_ecalmetPhi_isLoaded) {
			if (evt_ecalmetPhi_branch != 0) {
				evt_ecalmetPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_ecalmetPhi_)) {
					printf("branch evt_ecalmetPhi_branch contains a bad float: %f\n", evt_ecalmetPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmetPhi_isLoaded = true;
		}
		return evt_ecalmetPhi_;
	}
	float &evt_endcapm_met()
	{
		if (not evt_endcapm_met_isLoaded) {
			if (evt_endcapm_met_branch != 0) {
				evt_endcapm_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_endcapm_met_)) {
					printf("branch evt_endcapm_met_branch contains a bad float: %f\n", evt_endcapm_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_endcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_endcapm_met_isLoaded = true;
		}
		return evt_endcapm_met_;
	}
	float &evt_endcapm_metPhi()
	{
		if (not evt_endcapm_metPhi_isLoaded) {
			if (evt_endcapm_metPhi_branch != 0) {
				evt_endcapm_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_endcapm_metPhi_)) {
					printf("branch evt_endcapm_metPhi_branch contains a bad float: %f\n", evt_endcapm_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_endcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_endcapm_metPhi_isLoaded = true;
		}
		return evt_endcapm_metPhi_;
	}
	float &evt_endcapp_met()
	{
		if (not evt_endcapp_met_isLoaded) {
			if (evt_endcapp_met_branch != 0) {
				evt_endcapp_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_endcapp_met_)) {
					printf("branch evt_endcapp_met_branch contains a bad float: %f\n", evt_endcapp_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_endcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_endcapp_met_isLoaded = true;
		}
		return evt_endcapp_met_;
	}
	float &evt_endcapp_metPhi()
	{
		if (not evt_endcapp_metPhi_isLoaded) {
			if (evt_endcapp_metPhi_branch != 0) {
				evt_endcapp_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_endcapp_metPhi_)) {
					printf("branch evt_endcapp_metPhi_branch contains a bad float: %f\n", evt_endcapp_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_endcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_endcapp_metPhi_isLoaded = true;
		}
		return evt_endcapp_metPhi_;
	}
	float &evt_hcalendcapm_met()
	{
		if (not evt_hcalendcapm_met_isLoaded) {
			if (evt_hcalendcapm_met_branch != 0) {
				evt_hcalendcapm_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalendcapm_met_)) {
					printf("branch evt_hcalendcapm_met_branch contains a bad float: %f\n", evt_hcalendcapm_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalendcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapm_met_isLoaded = true;
		}
		return evt_hcalendcapm_met_;
	}
	float &evt_hcalendcapm_metPhi()
	{
		if (not evt_hcalendcapm_metPhi_isLoaded) {
			if (evt_hcalendcapm_metPhi_branch != 0) {
				evt_hcalendcapm_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalendcapm_metPhi_)) {
					printf("branch evt_hcalendcapm_metPhi_branch contains a bad float: %f\n", evt_hcalendcapm_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalendcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapm_metPhi_isLoaded = true;
		}
		return evt_hcalendcapm_metPhi_;
	}
	float &evt_hcalendcapp_met()
	{
		if (not evt_hcalendcapp_met_isLoaded) {
			if (evt_hcalendcapp_met_branch != 0) {
				evt_hcalendcapp_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalendcapp_met_)) {
					printf("branch evt_hcalendcapp_met_branch contains a bad float: %f\n", evt_hcalendcapp_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalendcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapp_met_isLoaded = true;
		}
		return evt_hcalendcapp_met_;
	}
	float &evt_hcalendcapp_metPhi()
	{
		if (not evt_hcalendcapp_metPhi_isLoaded) {
			if (evt_hcalendcapp_metPhi_branch != 0) {
				evt_hcalendcapp_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalendcapp_metPhi_)) {
					printf("branch evt_hcalendcapp_metPhi_branch contains a bad float: %f\n", evt_hcalendcapp_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalendcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapp_metPhi_isLoaded = true;
		}
		return evt_hcalendcapp_metPhi_;
	}
	float &evt_hcalmet()
	{
		if (not evt_hcalmet_isLoaded) {
			if (evt_hcalmet_branch != 0) {
				evt_hcalmet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalmet_)) {
					printf("branch evt_hcalmet_branch contains a bad float: %f\n", evt_hcalmet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalmet_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_isLoaded = true;
		}
		return evt_hcalmet_;
	}
	float &evt_hcalmetPhi()
	{
		if (not evt_hcalmetPhi_isLoaded) {
			if (evt_hcalmetPhi_branch != 0) {
				evt_hcalmetPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_hcalmetPhi_)) {
					printf("branch evt_hcalmetPhi_branch contains a bad float: %f\n", evt_hcalmetPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmetPhi_isLoaded = true;
		}
		return evt_hcalmetPhi_;
	}
	float &evt_met()
	{
		if (not evt_met_isLoaded) {
			if (evt_met_branch != 0) {
				evt_met_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_met_)) {
					printf("branch evt_met_branch contains a bad float: %f\n", evt_met_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_met_branch does not exist!\n");
				exit(1);
			}
			evt_met_isLoaded = true;
		}
		return evt_met_;
	}
	float &evt_metHO()
	{
		if (not evt_metHO_isLoaded) {
			if (evt_metHO_branch != 0) {
				evt_metHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metHO_)) {
					printf("branch evt_metHO_branch contains a bad float: %f\n", evt_metHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metHO_branch does not exist!\n");
				exit(1);
			}
			evt_metHO_isLoaded = true;
		}
		return evt_metHO_;
	}
	float &evt_metHOPhi()
	{
		if (not evt_metHOPhi_isLoaded) {
			if (evt_metHOPhi_branch != 0) {
				evt_metHOPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metHOPhi_)) {
					printf("branch evt_metHOPhi_branch contains a bad float: %f\n", evt_metHOPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metHOPhi_isLoaded = true;
		}
		return evt_metHOPhi_;
	}
	float &evt_metHOSig()
	{
		if (not evt_metHOSig_isLoaded) {
			if (evt_metHOSig_branch != 0) {
				evt_metHOSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metHOSig_)) {
					printf("branch evt_metHOSig_branch contains a bad float: %f\n", evt_metHOSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metHOSig_isLoaded = true;
		}
		return evt_metHOSig_;
	}
	float &evt_metMuonCorr()
	{
		if (not evt_metMuonCorr_isLoaded) {
			if (evt_metMuonCorr_branch != 0) {
				evt_metMuonCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonCorr_)) {
					printf("branch evt_metMuonCorr_branch contains a bad float: %f\n", evt_metMuonCorr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonCorr_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorr_isLoaded = true;
		}
		return evt_metMuonCorr_;
	}
	float &evt_metMuonCorrPhi()
	{
		if (not evt_metMuonCorrPhi_isLoaded) {
			if (evt_metMuonCorrPhi_branch != 0) {
				evt_metMuonCorrPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonCorrPhi_)) {
					printf("branch evt_metMuonCorrPhi_branch contains a bad float: %f\n", evt_metMuonCorrPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonCorrPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorrPhi_isLoaded = true;
		}
		return evt_metMuonCorrPhi_;
	}
	float &evt_metMuonCorrSig()
	{
		if (not evt_metMuonCorrSig_isLoaded) {
			if (evt_metMuonCorrSig_branch != 0) {
				evt_metMuonCorrSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonCorrSig_)) {
					printf("branch evt_metMuonCorrSig_branch contains a bad float: %f\n", evt_metMuonCorrSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonCorrSig_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorrSig_isLoaded = true;
		}
		return evt_metMuonCorrSig_;
	}
	float &evt_metMuonJESCorr()
	{
		if (not evt_metMuonJESCorr_isLoaded) {
			if (evt_metMuonJESCorr_branch != 0) {
				evt_metMuonJESCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonJESCorr_)) {
					printf("branch evt_metMuonJESCorr_branch contains a bad float: %f\n", evt_metMuonJESCorr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorr_isLoaded = true;
		}
		return evt_metMuonJESCorr_;
	}
	float &evt_metMuonJESCorrPhi()
	{
		if (not evt_metMuonJESCorrPhi_isLoaded) {
			if (evt_metMuonJESCorrPhi_branch != 0) {
				evt_metMuonJESCorrPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonJESCorrPhi_)) {
					printf("branch evt_metMuonJESCorrPhi_branch contains a bad float: %f\n", evt_metMuonJESCorrPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonJESCorrPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorrPhi_isLoaded = true;
		}
		return evt_metMuonJESCorrPhi_;
	}
	float &evt_metMuonJESCorrSig()
	{
		if (not evt_metMuonJESCorrSig_isLoaded) {
			if (evt_metMuonJESCorrSig_branch != 0) {
				evt_metMuonJESCorrSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metMuonJESCorrSig_)) {
					printf("branch evt_metMuonJESCorrSig_branch contains a bad float: %f\n", evt_metMuonJESCorrSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metMuonJESCorrSig_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorrSig_isLoaded = true;
		}
		return evt_metMuonJESCorrSig_;
	}
	float &evt_metNoHF()
	{
		if (not evt_metNoHF_isLoaded) {
			if (evt_metNoHF_branch != 0) {
				evt_metNoHF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHF_)) {
					printf("branch evt_metNoHF_branch contains a bad float: %f\n", evt_metNoHF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHF_isLoaded = true;
		}
		return evt_metNoHF_;
	}
	float &evt_metNoHFHO()
	{
		if (not evt_metNoHFHO_isLoaded) {
			if (evt_metNoHFHO_branch != 0) {
				evt_metNoHFHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHFHO_)) {
					printf("branch evt_metNoHFHO_branch contains a bad float: %f\n", evt_metNoHFHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHO_isLoaded = true;
		}
		return evt_metNoHFHO_;
	}
	float &evt_metNoHFHOPhi()
	{
		if (not evt_metNoHFHOPhi_isLoaded) {
			if (evt_metNoHFHOPhi_branch != 0) {
				evt_metNoHFHOPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHFHOPhi_)) {
					printf("branch evt_metNoHFHOPhi_branch contains a bad float: %f\n", evt_metNoHFHOPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHFHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHOPhi_isLoaded = true;
		}
		return evt_metNoHFHOPhi_;
	}
	float &evt_metNoHFHOSig()
	{
		if (not evt_metNoHFHOSig_isLoaded) {
			if (evt_metNoHFHOSig_branch != 0) {
				evt_metNoHFHOSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHFHOSig_)) {
					printf("branch evt_metNoHFHOSig_branch contains a bad float: %f\n", evt_metNoHFHOSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHFHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHOSig_isLoaded = true;
		}
		return evt_metNoHFHOSig_;
	}
	float &evt_metNoHFPhi()
	{
		if (not evt_metNoHFPhi_isLoaded) {
			if (evt_metNoHFPhi_branch != 0) {
				evt_metNoHFPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHFPhi_)) {
					printf("branch evt_metNoHFPhi_branch contains a bad float: %f\n", evt_metNoHFPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHFPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFPhi_isLoaded = true;
		}
		return evt_metNoHFPhi_;
	}
	float &evt_metNoHFSig()
	{
		if (not evt_metNoHFSig_isLoaded) {
			if (evt_metNoHFSig_branch != 0) {
				evt_metNoHFSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metNoHFSig_)) {
					printf("branch evt_metNoHFSig_branch contains a bad float: %f\n", evt_metNoHFSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metNoHFSig_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFSig_isLoaded = true;
		}
		return evt_metNoHFSig_;
	}
	float &evt_metOpt()
	{
		if (not evt_metOpt_isLoaded) {
			if (evt_metOpt_branch != 0) {
				evt_metOpt_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOpt_)) {
					printf("branch evt_metOpt_branch contains a bad float: %f\n", evt_metOpt_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOpt_branch does not exist!\n");
				exit(1);
			}
			evt_metOpt_isLoaded = true;
		}
		return evt_metOpt_;
	}
	float &evt_metOptHO()
	{
		if (not evt_metOptHO_isLoaded) {
			if (evt_metOptHO_branch != 0) {
				evt_metOptHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptHO_)) {
					printf("branch evt_metOptHO_branch contains a bad float: %f\n", evt_metOptHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptHO_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHO_isLoaded = true;
		}
		return evt_metOptHO_;
	}
	float &evt_metOptHOPhi()
	{
		if (not evt_metOptHOPhi_isLoaded) {
			if (evt_metOptHOPhi_branch != 0) {
				evt_metOptHOPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptHOPhi_)) {
					printf("branch evt_metOptHOPhi_branch contains a bad float: %f\n", evt_metOptHOPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHOPhi_isLoaded = true;
		}
		return evt_metOptHOPhi_;
	}
	float &evt_metOptHOSig()
	{
		if (not evt_metOptHOSig_isLoaded) {
			if (evt_metOptHOSig_branch != 0) {
				evt_metOptHOSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptHOSig_)) {
					printf("branch evt_metOptHOSig_branch contains a bad float: %f\n", evt_metOptHOSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHOSig_isLoaded = true;
		}
		return evt_metOptHOSig_;
	}
	float &evt_metOptNoHF()
	{
		if (not evt_metOptNoHF_isLoaded) {
			if (evt_metOptNoHF_branch != 0) {
				evt_metOptNoHF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHF_)) {
					printf("branch evt_metOptNoHF_branch contains a bad float: %f\n", evt_metOptNoHF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHF_isLoaded = true;
		}
		return evt_metOptNoHF_;
	}
	float &evt_metOptNoHFHO()
	{
		if (not evt_metOptNoHFHO_isLoaded) {
			if (evt_metOptNoHFHO_branch != 0) {
				evt_metOptNoHFHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHFHO_)) {
					printf("branch evt_metOptNoHFHO_branch contains a bad float: %f\n", evt_metOptNoHFHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHO_isLoaded = true;
		}
		return evt_metOptNoHFHO_;
	}
	float &evt_metOptNoHFHOPhi()
	{
		if (not evt_metOptNoHFHOPhi_isLoaded) {
			if (evt_metOptNoHFHOPhi_branch != 0) {
				evt_metOptNoHFHOPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHFHOPhi_)) {
					printf("branch evt_metOptNoHFHOPhi_branch contains a bad float: %f\n", evt_metOptNoHFHOPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHFHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHOPhi_isLoaded = true;
		}
		return evt_metOptNoHFHOPhi_;
	}
	float &evt_metOptNoHFHOSig()
	{
		if (not evt_metOptNoHFHOSig_isLoaded) {
			if (evt_metOptNoHFHOSig_branch != 0) {
				evt_metOptNoHFHOSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHFHOSig_)) {
					printf("branch evt_metOptNoHFHOSig_branch contains a bad float: %f\n", evt_metOptNoHFHOSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHFHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHOSig_isLoaded = true;
		}
		return evt_metOptNoHFHOSig_;
	}
	float &evt_metOptNoHFPhi()
	{
		if (not evt_metOptNoHFPhi_isLoaded) {
			if (evt_metOptNoHFPhi_branch != 0) {
				evt_metOptNoHFPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHFPhi_)) {
					printf("branch evt_metOptNoHFPhi_branch contains a bad float: %f\n", evt_metOptNoHFPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHFPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFPhi_isLoaded = true;
		}
		return evt_metOptNoHFPhi_;
	}
	float &evt_metOptNoHFSig()
	{
		if (not evt_metOptNoHFSig_isLoaded) {
			if (evt_metOptNoHFSig_branch != 0) {
				evt_metOptNoHFSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptNoHFSig_)) {
					printf("branch evt_metOptNoHFSig_branch contains a bad float: %f\n", evt_metOptNoHFSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptNoHFSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFSig_isLoaded = true;
		}
		return evt_metOptNoHFSig_;
	}
	float &evt_metOptPhi()
	{
		if (not evt_metOptPhi_isLoaded) {
			if (evt_metOptPhi_branch != 0) {
				evt_metOptPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptPhi_)) {
					printf("branch evt_metOptPhi_branch contains a bad float: %f\n", evt_metOptPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptPhi_isLoaded = true;
		}
		return evt_metOptPhi_;
	}
	float &evt_metOptSig()
	{
		if (not evt_metOptSig_isLoaded) {
			if (evt_metOptSig_branch != 0) {
				evt_metOptSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metOptSig_)) {
					printf("branch evt_metOptSig_branch contains a bad float: %f\n", evt_metOptSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metOptSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptSig_isLoaded = true;
		}
		return evt_metOptSig_;
	}
	float &evt_metPhi()
	{
		if (not evt_metPhi_isLoaded) {
			if (evt_metPhi_branch != 0) {
				evt_metPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metPhi_)) {
					printf("branch evt_metPhi_branch contains a bad float: %f\n", evt_metPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metPhi_isLoaded = true;
		}
		return evt_metPhi_;
	}
	float &evt_metSig()
	{
		if (not evt_metSig_isLoaded) {
			if (evt_metSig_branch != 0) {
				evt_metSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_metSig_)) {
					printf("branch evt_metSig_branch contains a bad float: %f\n", evt_metSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_metSig_branch does not exist!\n");
				exit(1);
			}
			evt_metSig_isLoaded = true;
		}
		return evt_metSig_;
	}
	float &evt_sumet()
	{
		if (not evt_sumet_isLoaded) {
			if (evt_sumet_branch != 0) {
				evt_sumet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumet_)) {
					printf("branch evt_sumet_branch contains a bad float: %f\n", evt_sumet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumet_branch does not exist!\n");
				exit(1);
			}
			evt_sumet_isLoaded = true;
		}
		return evt_sumet_;
	}
	float &evt_sumetHO()
	{
		if (not evt_sumetHO_isLoaded) {
			if (evt_sumetHO_branch != 0) {
				evt_sumetHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetHO_)) {
					printf("branch evt_sumetHO_branch contains a bad float: %f\n", evt_sumetHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetHO_isLoaded = true;
		}
		return evt_sumetHO_;
	}
	float &evt_sumetMuonCorr()
	{
		if (not evt_sumetMuonCorr_isLoaded) {
			if (evt_sumetMuonCorr_branch != 0) {
				evt_sumetMuonCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetMuonCorr_)) {
					printf("branch evt_sumetMuonCorr_branch contains a bad float: %f\n", evt_sumetMuonCorr_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetMuonCorr_branch does not exist!\n");
				exit(1);
			}
			evt_sumetMuonCorr_isLoaded = true;
		}
		return evt_sumetMuonCorr_;
	}
	float &evt_sumetNoHF()
	{
		if (not evt_sumetNoHF_isLoaded) {
			if (evt_sumetNoHF_branch != 0) {
				evt_sumetNoHF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetNoHF_)) {
					printf("branch evt_sumetNoHF_branch contains a bad float: %f\n", evt_sumetNoHF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_sumetNoHF_isLoaded = true;
		}
		return evt_sumetNoHF_;
	}
	float &evt_sumetNoHFHO()
	{
		if (not evt_sumetNoHFHO_isLoaded) {
			if (evt_sumetNoHFHO_branch != 0) {
				evt_sumetNoHFHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetNoHFHO_)) {
					printf("branch evt_sumetNoHFHO_branch contains a bad float: %f\n", evt_sumetNoHFHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetNoHFHO_isLoaded = true;
		}
		return evt_sumetNoHFHO_;
	}
	float &evt_sumetOpt()
	{
		if (not evt_sumetOpt_isLoaded) {
			if (evt_sumetOpt_branch != 0) {
				evt_sumetOpt_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetOpt_)) {
					printf("branch evt_sumetOpt_branch contains a bad float: %f\n", evt_sumetOpt_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetOpt_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOpt_isLoaded = true;
		}
		return evt_sumetOpt_;
	}
	float &evt_sumetOptHO()
	{
		if (not evt_sumetOptHO_isLoaded) {
			if (evt_sumetOptHO_branch != 0) {
				evt_sumetOptHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetOptHO_)) {
					printf("branch evt_sumetOptHO_branch contains a bad float: %f\n", evt_sumetOptHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetOptHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptHO_isLoaded = true;
		}
		return evt_sumetOptHO_;
	}
	float &evt_sumetOptNoHF()
	{
		if (not evt_sumetOptNoHF_isLoaded) {
			if (evt_sumetOptNoHF_branch != 0) {
				evt_sumetOptNoHF_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetOptNoHF_)) {
					printf("branch evt_sumetOptNoHF_branch contains a bad float: %f\n", evt_sumetOptNoHF_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetOptNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptNoHF_isLoaded = true;
		}
		return evt_sumetOptNoHF_;
	}
	float &evt_sumetOptNoHFHO()
	{
		if (not evt_sumetOptNoHFHO_isLoaded) {
			if (evt_sumetOptNoHFHO_branch != 0) {
				evt_sumetOptNoHFHO_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_sumetOptNoHFHO_)) {
					printf("branch evt_sumetOptNoHFHO_branch contains a bad float: %f\n", evt_sumetOptNoHFHO_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_sumetOptNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptNoHFHO_isLoaded = true;
		}
		return evt_sumetOptNoHFHO_;
	}
	float &pdfinfo_scale()
	{
		if (not pdfinfo_scale_isLoaded) {
			if (pdfinfo_scale_branch != 0) {
				pdfinfo_scale_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(pdfinfo_scale_)) {
					printf("branch pdfinfo_scale_branch contains a bad float: %f\n", pdfinfo_scale_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdfinfo_scale_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_scale_isLoaded = true;
		}
		return pdfinfo_scale_;
	}
	float &pdfinfo_x1()
	{
		if (not pdfinfo_x1_isLoaded) {
			if (pdfinfo_x1_branch != 0) {
				pdfinfo_x1_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(pdfinfo_x1_)) {
					printf("branch pdfinfo_x1_branch contains a bad float: %f\n", pdfinfo_x1_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdfinfo_x1_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_x1_isLoaded = true;
		}
		return pdfinfo_x1_;
	}
	float &pdfinfo_x2()
	{
		if (not pdfinfo_x2_isLoaded) {
			if (pdfinfo_x2_branch != 0) {
				pdfinfo_x2_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(pdfinfo_x2_)) {
					printf("branch pdfinfo_x2_branch contains a bad float: %f\n", pdfinfo_x2_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdfinfo_x2_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_x2_isLoaded = true;
		}
		return pdfinfo_x2_;
	}
	float &evt_pfmet()
	{
		if (not evt_pfmet_isLoaded) {
			if (evt_pfmet_branch != 0) {
				evt_pfmet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_pfmet_)) {
					printf("branch evt_pfmet_branch contains a bad float: %f\n", evt_pfmet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_pfmet_branch does not exist!\n");
				exit(1);
			}
			evt_pfmet_isLoaded = true;
		}
		return evt_pfmet_;
	}
	float &evt_pfmetPhi()
	{
		if (not evt_pfmetPhi_isLoaded) {
			if (evt_pfmetPhi_branch != 0) {
				evt_pfmetPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_pfmetPhi_)) {
					printf("branch evt_pfmetPhi_branch contains a bad float: %f\n", evt_pfmetPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_pfmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetPhi_isLoaded = true;
		}
		return evt_pfmetPhi_;
	}
	float &evt_pfmetSig()
	{
		if (not evt_pfmetSig_isLoaded) {
			if (evt_pfmetSig_branch != 0) {
				evt_pfmetSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_pfmetSig_)) {
					printf("branch evt_pfmetSig_branch contains a bad float: %f\n", evt_pfmetSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_pfmetSig_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetSig_isLoaded = true;
		}
		return evt_pfmetSig_;
	}
	float &evt_pfsumet()
	{
		if (not evt_pfsumet_isLoaded) {
			if (evt_pfsumet_branch != 0) {
				evt_pfsumet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_pfsumet_)) {
					printf("branch evt_pfsumet_branch contains a bad float: %f\n", evt_pfsumet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_pfsumet_branch does not exist!\n");
				exit(1);
			}
			evt_pfsumet_isLoaded = true;
		}
		return evt_pfsumet_;
	}
	float &evt_tcmet()
	{
		if (not evt_tcmet_isLoaded) {
			if (evt_tcmet_branch != 0) {
				evt_tcmet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_tcmet_)) {
					printf("branch evt_tcmet_branch contains a bad float: %f\n", evt_tcmet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_tcmet_branch does not exist!\n");
				exit(1);
			}
			evt_tcmet_isLoaded = true;
		}
		return evt_tcmet_;
	}
	float &evt_tcmetPhi()
	{
		if (not evt_tcmetPhi_isLoaded) {
			if (evt_tcmetPhi_branch != 0) {
				evt_tcmetPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_tcmetPhi_)) {
					printf("branch evt_tcmetPhi_branch contains a bad float: %f\n", evt_tcmetPhi_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_tcmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_tcmetPhi_isLoaded = true;
		}
		return evt_tcmetPhi_;
	}
	float &evt_tcmetSig()
	{
		if (not evt_tcmetSig_isLoaded) {
			if (evt_tcmetSig_branch != 0) {
				evt_tcmetSig_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_tcmetSig_)) {
					printf("branch evt_tcmetSig_branch contains a bad float: %f\n", evt_tcmetSig_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_tcmetSig_branch does not exist!\n");
				exit(1);
			}
			evt_tcmetSig_isLoaded = true;
		}
		return evt_tcmetSig_;
	}
	float &evt_tcsumet()
	{
		if (not evt_tcsumet_isLoaded) {
			if (evt_tcsumet_branch != 0) {
				evt_tcsumet_branch->GetEntry(index);
				#ifdef PARANOIA
				if (not isfinite(evt_tcsumet_)) {
					printf("branch evt_tcsumet_branch contains a bad float: %f\n", evt_tcsumet_);
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_tcsumet_branch does not exist!\n");
				exit(1);
			}
			evt_tcsumet_isLoaded = true;
		}
		return evt_tcsumet_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4()
	{
		if (not evt_bsp4_isLoaded) {
			if (evt_bsp4_branch != 0) {
				evt_bsp4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(evt_bsp4_.pt(), &e);
				if (not isfinite(evt_bsp4_.pt()) || e > 30) {
					printf("branch evt_bsp4_branch contains a bad float: %f\n", evt_bsp4_.pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bsp4_branch does not exist!\n");
				exit(1);
			}
			evt_bsp4_isLoaded = true;
		}
		return evt_bsp4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_met_p4()
	{
		if (not l1_met_p4_isLoaded) {
			if (l1_met_p4_branch != 0) {
				l1_met_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(l1_met_p4_.pt(), &e);
				if (not isfinite(l1_met_p4_.pt()) || e > 30) {
					printf("branch l1_met_p4_branch contains a bad float: %f\n", l1_met_p4_.pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_met_p4_branch does not exist!\n");
				exit(1);
			}
			l1_met_p4_isLoaded = true;
		}
		return l1_met_p4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_mht_p4()
	{
		if (not l1_mht_p4_isLoaded) {
			if (l1_mht_p4_branch != 0) {
				l1_mht_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(l1_mht_p4_.pt(), &e);
				if (not isfinite(l1_mht_p4_.pt()) || e > 30) {
					printf("branch l1_mht_p4_branch contains a bad float: %f\n", l1_mht_p4_.pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mht_p4_branch does not exist!\n");
				exit(1);
			}
			l1_mht_p4_isLoaded = true;
		}
		return l1_mht_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_calo_p4()
	{
		if (not taus_calo_p4_isLoaded) {
			if (taus_calo_p4_branch != 0) {
				taus_calo_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = taus_calo_p4_.begin(); i != taus_calo_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch taus_calo_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_p4_branch does not exist!\n");
				exit(1);
			}
			taus_calo_p4_isLoaded = true;
		}
		return taus_calo_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4()
	{
		if (not els_mc_motherp4_isLoaded) {
			if (els_mc_motherp4_branch != 0) {
				els_mc_motherp4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_mc_motherp4_.begin(); i != els_mc_motherp4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_mc_motherp4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			els_mc_motherp4_isLoaded = true;
		}
		return els_mc_motherp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4()
	{
		if (not els_mc_p4_isLoaded) {
			if (els_mc_p4_branch != 0) {
				els_mc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_mc_p4_.begin(); i != els_mc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_mc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc_p4_branch does not exist!\n");
				exit(1);
			}
			els_mc_p4_isLoaded = true;
		}
		return els_mc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_gp_p4()
	{
		if (not jets_mc_gp_p4_isLoaded) {
			if (jets_mc_gp_p4_branch != 0) {
				jets_mc_gp_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = jets_mc_gp_p4_.begin(); i != jets_mc_gp_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch jets_mc_gp_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_gp_p4_branch does not exist!\n");
				exit(1);
			}
			jets_mc_gp_p4_isLoaded = true;
		}
		return jets_mc_gp_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_p4()
	{
		if (not jets_mc_p4_isLoaded) {
			if (jets_mc_p4_branch != 0) {
				jets_mc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = jets_mc_p4_.begin(); i != jets_mc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch jets_mc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_p4_branch does not exist!\n");
				exit(1);
			}
			jets_mc_p4_isLoaded = true;
		}
		return jets_mc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4()
	{
		if (not mus_mc_motherp4_isLoaded) {
			if (mus_mc_motherp4_branch != 0) {
				mus_mc_motherp4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_mc_motherp4_.begin(); i != mus_mc_motherp4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_mc_motherp4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			mus_mc_motherp4_isLoaded = true;
		}
		return mus_mc_motherp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4()
	{
		if (not mus_mc_p4_isLoaded) {
			if (mus_mc_p4_branch != 0) {
				mus_mc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_mc_p4_.begin(); i != mus_mc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_mc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc_p4_branch does not exist!\n");
				exit(1);
			}
			mus_mc_p4_isLoaded = true;
		}
		return mus_mc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trk_mcp4()
	{
		if (not trk_mcp4_isLoaded) {
			if (trk_mcp4_branch != 0) {
				trk_mcp4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trk_mcp4_.begin(); i != trk_mcp4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trk_mcp4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mcp4_branch does not exist!\n");
				exit(1);
			}
			trk_mcp4_isLoaded = true;
		}
		return trk_mcp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position()
	{
		if (not els_inner_position_isLoaded) {
			if (els_inner_position_branch != 0) {
				els_inner_position_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_inner_position_.begin(); i != els_inner_position_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_inner_position_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_inner_position_branch does not exist!\n");
				exit(1);
			}
			els_inner_position_isLoaded = true;
		}
		return els_inner_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position()
	{
		if (not els_outer_position_isLoaded) {
			if (els_outer_position_branch != 0) {
				els_outer_position_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_outer_position_.begin(); i != els_outer_position_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_outer_position_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_outer_position_branch does not exist!\n");
				exit(1);
			}
			els_outer_position_isLoaded = true;
		}
		return els_outer_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4()
	{
		if (not els_p4_isLoaded) {
			if (els_p4_branch != 0) {
				els_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_p4_.begin(); i != els_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_p4_branch does not exist!\n");
				exit(1);
			}
			els_p4_isLoaded = true;
		}
		return els_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In()
	{
		if (not els_p4In_isLoaded) {
			if (els_p4In_branch != 0) {
				els_p4In_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_p4In_.begin(); i != els_p4In_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_p4In_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_p4In_branch does not exist!\n");
				exit(1);
			}
			els_p4In_isLoaded = true;
		}
		return els_p4In_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out()
	{
		if (not els_p4Out_isLoaded) {
			if (els_p4Out_branch != 0) {
				els_p4Out_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_p4Out_.begin(); i != els_p4Out_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_p4Out_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_p4Out_branch does not exist!\n");
				exit(1);
			}
			els_p4Out_isLoaded = true;
		}
		return els_p4Out_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4()
	{
		if (not els_trk_p4_isLoaded) {
			if (els_trk_p4_branch != 0) {
				els_trk_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_trk_p4_.begin(); i != els_trk_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_trk_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trk_p4_branch does not exist!\n");
				exit(1);
			}
			els_trk_p4_isLoaded = true;
		}
		return els_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4()
	{
		if (not els_vertex_p4_isLoaded) {
			if (els_vertex_p4_branch != 0) {
				els_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = els_vertex_p4_.begin(); i != els_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch els_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			els_vertex_p4_isLoaded = true;
		}
		return els_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4()
	{
		if (not genjets_p4_isLoaded) {
			if (genjets_p4_branch != 0) {
				genjets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = genjets_p4_.begin(); i != genjets_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch genjets_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genjets_p4_branch does not exist!\n");
				exit(1);
			}
			genjets_p4_isLoaded = true;
		}
		return genjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4()
	{
		if (not genps_p4_isLoaded) {
			if (genps_p4_branch != 0) {
				genps_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = genps_p4_.begin(); i != genps_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch genps_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_p4_branch does not exist!\n");
				exit(1);
			}
			genps_p4_isLoaded = true;
		}
		return genps_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx()
	{
		if (not genps_prod_vtx_isLoaded) {
			if (genps_prod_vtx_branch != 0) {
				genps_prod_vtx_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = genps_prod_vtx_.begin(); i != genps_prod_vtx_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch genps_prod_vtx_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_prod_vtx_branch does not exist!\n");
				exit(1);
			}
			genps_prod_vtx_isLoaded = true;
		}
		return genps_prod_vtx_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4()
	{
		if (not hyp_ll_p4_isLoaded) {
			if (hyp_ll_p4_branch != 0) {
				hyp_ll_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_ll_p4_.begin(); i != hyp_ll_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_ll_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_p4_isLoaded = true;
		}
		return hyp_ll_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_trk_p4()
	{
		if (not hyp_ll_trk_p4_isLoaded) {
			if (hyp_ll_trk_p4_branch != 0) {
				hyp_ll_trk_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_ll_trk_p4_.begin(); i != hyp_ll_trk_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_ll_trk_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_trk_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_trk_p4_isLoaded = true;
		}
		return hyp_ll_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4()
	{
		if (not hyp_lt_p4_isLoaded) {
			if (hyp_lt_p4_branch != 0) {
				hyp_lt_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_lt_p4_.begin(); i != hyp_lt_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_lt_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_p4_isLoaded = true;
		}
		return hyp_lt_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_trk_p4()
	{
		if (not hyp_lt_trk_p4_isLoaded) {
			if (hyp_lt_trk_p4_branch != 0) {
				hyp_lt_trk_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_lt_trk_p4_.begin(); i != hyp_lt_trk_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_lt_trk_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_trk_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_trk_p4_isLoaded = true;
		}
		return hyp_lt_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4()
	{
		if (not hyp_p4_isLoaded) {
			if (hyp_p4_branch != 0) {
				hyp_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_p4_.begin(); i != hyp_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_p4_isLoaded = true;
		}
		return hyp_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_p4()
	{
		if (not hyp_FVFit_p4_isLoaded) {
			if (hyp_FVFit_p4_branch != 0) {
				hyp_FVFit_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_FVFit_p4_.begin(); i != hyp_FVFit_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_FVFit_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_p4_isLoaded = true;
		}
		return hyp_FVFit_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_v4()
	{
		if (not hyp_FVFit_v4_isLoaded) {
			if (hyp_FVFit_v4_branch != 0) {
				hyp_FVFit_v4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_FVFit_v4_.begin(); i != hyp_FVFit_v4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_FVFit_v4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4_isLoaded = true;
		}
		return hyp_FVFit_v4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_mc_p4()
	{
		if (not hyp_ll_mc_p4_isLoaded) {
			if (hyp_ll_mc_p4_branch != 0) {
				hyp_ll_mc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_ll_mc_p4_.begin(); i != hyp_ll_mc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_ll_mc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_mc_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_mc_p4_isLoaded = true;
		}
		return hyp_ll_mc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_mc_p4()
	{
		if (not hyp_lt_mc_p4_isLoaded) {
			if (hyp_lt_mc_p4_branch != 0) {
				hyp_lt_mc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = hyp_lt_mc_p4_.begin(); i != hyp_lt_mc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch hyp_lt_mc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_mc_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_mc_p4_isLoaded = true;
		}
		return hyp_lt_mc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4()
	{
		if (not jets_p4_isLoaded) {
			if (jets_p4_branch != 0) {
				jets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = jets_p4_.begin(); i != jets_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch jets_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_p4_branch does not exist!\n");
				exit(1);
			}
			jets_p4_isLoaded = true;
		}
		return jets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_vertex_p4()
	{
		if (not jets_vertex_p4_isLoaded) {
			if (jets_vertex_p4_branch != 0) {
				jets_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = jets_vertex_p4_.begin(); i != jets_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch jets_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			jets_vertex_p4_isLoaded = true;
		}
		return jets_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jpts_p4()
	{
		if (not jpts_p4_isLoaded) {
			if (jpts_p4_branch != 0) {
				jpts_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = jpts_p4_.begin(); i != jpts_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch jpts_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jpts_p4_branch does not exist!\n");
				exit(1);
			}
			jpts_p4_isLoaded = true;
		}
		return jpts_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emiso_p4()
	{
		if (not l1_emiso_p4_isLoaded) {
			if (l1_emiso_p4_branch != 0) {
				l1_emiso_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_emiso_p4_.begin(); i != l1_emiso_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_emiso_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emiso_p4_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_p4_isLoaded = true;
		}
		return l1_emiso_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emnoiso_p4()
	{
		if (not l1_emnoiso_p4_isLoaded) {
			if (l1_emnoiso_p4_branch != 0) {
				l1_emnoiso_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_emnoiso_p4_.begin(); i != l1_emnoiso_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_emnoiso_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emnoiso_p4_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_p4_isLoaded = true;
		}
		return l1_emnoiso_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsc_p4()
	{
		if (not l1_jetsc_p4_isLoaded) {
			if (l1_jetsc_p4_branch != 0) {
				l1_jetsc_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_jetsc_p4_.begin(); i != l1_jetsc_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_jetsc_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsc_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_p4_isLoaded = true;
		}
		return l1_jetsc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsf_p4()
	{
		if (not l1_jetsf_p4_isLoaded) {
			if (l1_jetsf_p4_branch != 0) {
				l1_jetsf_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_jetsf_p4_.begin(); i != l1_jetsf_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_jetsf_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsf_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_p4_isLoaded = true;
		}
		return l1_jetsf_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetst_p4()
	{
		if (not l1_jetst_p4_isLoaded) {
			if (l1_jetst_p4_branch != 0) {
				l1_jetst_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_jetst_p4_.begin(); i != l1_jetst_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_jetst_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetst_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_p4_isLoaded = true;
		}
		return l1_jetst_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_mus_p4()
	{
		if (not l1_mus_p4_isLoaded) {
			if (l1_mus_p4_branch != 0) {
				l1_mus_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = l1_mus_p4_.begin(); i != l1_mus_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch l1_mus_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mus_p4_branch does not exist!\n");
				exit(1);
			}
			l1_mus_p4_isLoaded = true;
		}
		return l1_mus_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitdefault_p4()
	{
		if (not mus_fitdefault_p4_isLoaded) {
			if (mus_fitdefault_p4_branch != 0) {
				mus_fitdefault_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_fitdefault_p4_.begin(); i != mus_fitdefault_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_fitdefault_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_fitdefault_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitdefault_p4_isLoaded = true;
		}
		return mus_fitdefault_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitfirsthit_p4()
	{
		if (not mus_fitfirsthit_p4_isLoaded) {
			if (mus_fitfirsthit_p4_branch != 0) {
				mus_fitfirsthit_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_fitfirsthit_p4_.begin(); i != mus_fitfirsthit_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_fitfirsthit_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_fitfirsthit_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitfirsthit_p4_isLoaded = true;
		}
		return mus_fitfirsthit_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitpicky_p4()
	{
		if (not mus_fitpicky_p4_isLoaded) {
			if (mus_fitpicky_p4_branch != 0) {
				mus_fitpicky_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_fitpicky_p4_.begin(); i != mus_fitpicky_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_fitpicky_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_fitpicky_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitpicky_p4_isLoaded = true;
		}
		return mus_fitpicky_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fittev_p4()
	{
		if (not mus_fittev_p4_isLoaded) {
			if (mus_fittev_p4_branch != 0) {
				mus_fittev_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_fittev_p4_.begin(); i != mus_fittev_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_fittev_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_fittev_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fittev_p4_isLoaded = true;
		}
		return mus_fittev_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_outerPos_p4()
	{
		if (not mus_gfit_outerPos_p4_isLoaded) {
			if (mus_gfit_outerPos_p4_branch != 0) {
				mus_gfit_outerPos_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_gfit_outerPos_p4_.begin(); i != mus_gfit_outerPos_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_gfit_outerPos_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_outerPos_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_outerPos_p4_isLoaded = true;
		}
		return mus_gfit_outerPos_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4()
	{
		if (not mus_gfit_p4_isLoaded) {
			if (mus_gfit_p4_branch != 0) {
				mus_gfit_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_gfit_p4_.begin(); i != mus_gfit_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_gfit_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_p4_isLoaded = true;
		}
		return mus_gfit_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4()
	{
		if (not mus_gfit_vertex_p4_isLoaded) {
			if (mus_gfit_vertex_p4_branch != 0) {
				mus_gfit_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_gfit_vertex_p4_.begin(); i != mus_gfit_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_gfit_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_vertex_p4_isLoaded = true;
		}
		return mus_gfit_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4()
	{
		if (not mus_p4_isLoaded) {
			if (mus_p4_branch != 0) {
				mus_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_p4_.begin(); i != mus_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_p4_branch does not exist!\n");
				exit(1);
			}
			mus_p4_isLoaded = true;
		}
		return mus_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4()
	{
		if (not mus_sta_p4_isLoaded) {
			if (mus_sta_p4_branch != 0) {
				mus_sta_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_sta_p4_.begin(); i != mus_sta_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_sta_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_p4_isLoaded = true;
		}
		return mus_sta_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4()
	{
		if (not mus_sta_vertex_p4_isLoaded) {
			if (mus_sta_vertex_p4_branch != 0) {
				mus_sta_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_sta_vertex_p4_.begin(); i != mus_sta_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_sta_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_vertex_p4_isLoaded = true;
		}
		return mus_sta_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4()
	{
		if (not mus_trk_p4_isLoaded) {
			if (mus_trk_p4_branch != 0) {
				mus_trk_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_trk_p4_.begin(); i != mus_trk_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_trk_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_trk_p4_branch does not exist!\n");
				exit(1);
			}
			mus_trk_p4_isLoaded = true;
		}
		return mus_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4()
	{
		if (not mus_vertex_p4_isLoaded) {
			if (mus_vertex_p4_branch != 0) {
				mus_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = mus_vertex_p4_.begin(); i != mus_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch mus_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_vertex_p4_isLoaded = true;
		}
		return mus_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4()
	{
		if (not pfjets_p4_isLoaded) {
			if (pfjets_p4_branch != 0) {
				pfjets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = pfjets_p4_.begin(); i != pfjets_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch pfjets_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_p4_isLoaded = true;
		}
		return pfjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4()
	{
		if (not taus_pf_lead_chargecand_p4_isLoaded) {
			if (taus_pf_lead_chargecand_p4_branch != 0) {
				taus_pf_lead_chargecand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = taus_pf_lead_chargecand_p4_.begin(); i != taus_pf_lead_chargecand_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch taus_pf_lead_chargecand_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_lead_chargecand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_lead_chargecand_p4_isLoaded = true;
		}
		return taus_pf_lead_chargecand_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4()
	{
		if (not taus_pf_lead_neutrcand_p4_isLoaded) {
			if (taus_pf_lead_neutrcand_p4_branch != 0) {
				taus_pf_lead_neutrcand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = taus_pf_lead_neutrcand_p4_.begin(); i != taus_pf_lead_neutrcand_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch taus_pf_lead_neutrcand_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_lead_neutrcand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_lead_neutrcand_p4_isLoaded = true;
		}
		return taus_pf_lead_neutrcand_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4()
	{
		if (not taus_pf_p4_isLoaded) {
			if (taus_pf_p4_branch != 0) {
				taus_pf_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = taus_pf_p4_.begin(); i != taus_pf_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch taus_pf_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_p4_isLoaded = true;
		}
		return taus_pf_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4()
	{
		if (not photons_p4_isLoaded) {
			if (photons_p4_branch != 0) {
				photons_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = photons_p4_.begin(); i != photons_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch photons_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_p4_branch does not exist!\n");
				exit(1);
			}
			photons_p4_isLoaded = true;
		}
		return photons_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksecalp4()
	{
		if (not ran_trksecalp4_isLoaded) {
			if (ran_trksecalp4_branch != 0) {
				ran_trksecalp4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = ran_trksecalp4_.begin(); i != ran_trksecalp4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch ran_trksecalp4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_trksecalp4_branch does not exist!\n");
				exit(1);
			}
			ran_trksecalp4_isLoaded = true;
		}
		return ran_trksecalp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksp4()
	{
		if (not ran_trksp4_isLoaded) {
			if (ran_trksp4_branch != 0) {
				ran_trksp4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = ran_trksp4_.begin(); i != ran_trksp4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch ran_trksp4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_trksp4_branch does not exist!\n");
				exit(1);
			}
			ran_trksp4_isLoaded = true;
		}
		return ran_trksp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_p4()
	{
		if (not scs_p4_isLoaded) {
			if (scs_p4_branch != 0) {
				scs_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = scs_p4_.begin(); i != scs_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch scs_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_p4_branch does not exist!\n");
				exit(1);
			}
			scs_p4_isLoaded = true;
		}
		return scs_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_pos_p4()
	{
		if (not scs_pos_p4_isLoaded) {
			if (scs_pos_p4_branch != 0) {
				scs_pos_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = scs_pos_p4_.begin(); i != scs_pos_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch scs_pos_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_pos_p4_branch does not exist!\n");
				exit(1);
			}
			scs_pos_p4_isLoaded = true;
		}
		return scs_pos_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_vtx_p4()
	{
		if (not scs_vtx_p4_isLoaded) {
			if (scs_vtx_p4_branch != 0) {
				scs_vtx_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = scs_vtx_p4_.begin(); i != scs_vtx_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch scs_vtx_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_vtx_p4_branch does not exist!\n");
				exit(1);
			}
			scs_vtx_p4_isLoaded = true;
		}
		return scs_vtx_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_p4()
	{
		if (not scjets_p4_isLoaded) {
			if (scjets_p4_branch != 0) {
				scjets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = scjets_p4_.begin(); i != scjets_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch scjets_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_p4_branch does not exist!\n");
				exit(1);
			}
			scjets_p4_isLoaded = true;
		}
		return scjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_vertex_p4()
	{
		if (not scjets_vertex_p4_isLoaded) {
			if (scjets_vertex_p4_branch != 0) {
				scjets_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = scjets_vertex_p4_.begin(); i != scjets_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch scjets_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			scjets_vertex_p4_isLoaded = true;
		}
		return scjets_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_inner_position()
	{
		if (not trks_inner_position_isLoaded) {
			if (trks_inner_position_branch != 0) {
				trks_inner_position_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trks_inner_position_.begin(); i != trks_inner_position_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trks_inner_position_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_inner_position_branch does not exist!\n");
				exit(1);
			}
			trks_inner_position_isLoaded = true;
		}
		return trks_inner_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_p4()
	{
		if (not trks_outer_p4_isLoaded) {
			if (trks_outer_p4_branch != 0) {
				trks_outer_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trks_outer_p4_.begin(); i != trks_outer_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trks_outer_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_outer_p4_branch does not exist!\n");
				exit(1);
			}
			trks_outer_p4_isLoaded = true;
		}
		return trks_outer_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_position()
	{
		if (not trks_outer_position_isLoaded) {
			if (trks_outer_position_branch != 0) {
				trks_outer_position_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trks_outer_position_.begin(); i != trks_outer_position_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trks_outer_position_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_outer_position_branch does not exist!\n");
				exit(1);
			}
			trks_outer_position_isLoaded = true;
		}
		return trks_outer_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_trk_p4()
	{
		if (not trks_trk_p4_isLoaded) {
			if (trks_trk_p4_branch != 0) {
				trks_trk_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trks_trk_p4_.begin(); i != trks_trk_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trks_trk_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_trk_p4_branch does not exist!\n");
				exit(1);
			}
			trks_trk_p4_isLoaded = true;
		}
		return trks_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_vertex_p4()
	{
		if (not trks_vertex_p4_isLoaded) {
			if (trks_vertex_p4_branch != 0) {
				trks_vertex_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trks_vertex_p4_.begin(); i != trks_vertex_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trks_vertex_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			trks_vertex_p4_isLoaded = true;
		}
		return trks_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trkjets_p4()
	{
		if (not trkjets_p4_isLoaded) {
			if (trkjets_p4_branch != 0) {
				trkjets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = trkjets_p4_.begin(); i != trkjets_p4_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch trkjets_p4_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_p4_branch does not exist!\n");
				exit(1);
			}
			trkjets_p4_isLoaded = true;
		}
		return trkjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position()
	{
		if (not vtxs_position_isLoaded) {
			if (vtxs_position_branch != 0) {
				vtxs_position_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = vtxs_position_.begin(); i != vtxs_position_.end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch vtxs_position_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_position_branch does not exist!\n");
				exit(1);
			}
			vtxs_position_isLoaded = true;
		}
		return vtxs_position_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4()
	{
		if (not genps_lepdaughter_p4_isLoaded) {
			if (genps_lepdaughter_p4_branch != 0) {
				genps_lepdaughter_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = genps_lepdaughter_p4_.begin(); i != genps_lepdaughter_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch genps_lepdaughter_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_lepdaughter_p4_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_p4_isLoaded = true;
		}
		return genps_lepdaughter_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4()
	{
		if (not hlt_trigObjs_p4_isLoaded) {
			if (hlt_trigObjs_p4_branch != 0) {
				hlt_trigObjs_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = hlt_trigObjs_p4_.begin(); i != hlt_trigObjs_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch hlt_trigObjs_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_trigObjs_p4_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_p4_isLoaded = true;
		}
		return hlt_trigObjs_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_jets_p4()
	{
		if (not hyp_jets_p4_isLoaded) {
			if (hyp_jets_p4_branch != 0) {
				hyp_jets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = hyp_jets_p4_.begin(); i != hyp_jets_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch hyp_jets_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_jets_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_jets_p4_isLoaded = true;
		}
		return hyp_jets_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_other_jets_p4()
	{
		if (not hyp_other_jets_p4_isLoaded) {
			if (hyp_other_jets_p4_branch != 0) {
				hyp_other_jets_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = hyp_other_jets_p4_.begin(); i != hyp_other_jets_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch hyp_other_jets_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_other_jets_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_other_jets_p4_isLoaded = true;
		}
		return hyp_other_jets_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isochargecand_p4()
	{
		if (not taus_pf_isochargecand_p4_isLoaded) {
			if (taus_pf_isochargecand_p4_branch != 0) {
				taus_pf_isochargecand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_isochargecand_p4_.begin(); i != taus_pf_isochargecand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_isochargecand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_isochargecand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isochargecand_p4_isLoaded = true;
		}
		return taus_pf_isochargecand_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isogammacand_p4()
	{
		if (not taus_pf_isogammacand_p4_isLoaded) {
			if (taus_pf_isogammacand_p4_branch != 0) {
				taus_pf_isogammacand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_isogammacand_p4_.begin(); i != taus_pf_isogammacand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_isogammacand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_isogammacand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isogammacand_p4_isLoaded = true;
		}
		return taus_pf_isogammacand_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isoneutrcand_p4()
	{
		if (not taus_pf_isoneutrcand_p4_isLoaded) {
			if (taus_pf_isoneutrcand_p4_branch != 0) {
				taus_pf_isoneutrcand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_isoneutrcand_p4_.begin(); i != taus_pf_isoneutrcand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_isoneutrcand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_isoneutrcand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isoneutrcand_p4_isLoaded = true;
		}
		return taus_pf_isoneutrcand_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_sigchargecand_p4()
	{
		if (not taus_pf_sigchargecand_p4_isLoaded) {
			if (taus_pf_sigchargecand_p4_branch != 0) {
				taus_pf_sigchargecand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_sigchargecand_p4_.begin(); i != taus_pf_sigchargecand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_sigchargecand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_sigchargecand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_sigchargecand_p4_isLoaded = true;
		}
		return taus_pf_sigchargecand_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_siggammacand_p4()
	{
		if (not taus_pf_siggammacand_p4_isLoaded) {
			if (taus_pf_siggammacand_p4_branch != 0) {
				taus_pf_siggammacand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_siggammacand_p4_.begin(); i != taus_pf_siggammacand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_siggammacand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_siggammacand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_siggammacand_p4_isLoaded = true;
		}
		return taus_pf_siggammacand_p4_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signeutrcand_p4()
	{
		if (not taus_pf_signeutrcand_p4_isLoaded) {
			if (taus_pf_signeutrcand_p4_branch != 0) {
				taus_pf_signeutrcand_p4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >::const_iterator i = taus_pf_signeutrcand_p4_.begin(); i != taus_pf_signeutrcand_p4_.end(); ++i) {
					for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator j = i->begin(); j != i->end(); ++j) {
						int e;
						frexp(j->pt(), &e);
						if (not isfinite(j->pt()) || e > 30) {
							printf("branch taus_pf_signeutrcand_p4_branch contains a bad float: %f\n", j->pt());
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_signeutrcand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_signeutrcand_p4_isLoaded = true;
		}
		return taus_pf_signeutrcand_p4_;
	}
	vector<float> &jets_combinedSecondaryVertexBJetTag()
	{
		if (not jets_combinedSecondaryVertexBJetTag_isLoaded) {
			if (jets_combinedSecondaryVertexBJetTag_branch != 0) {
				jets_combinedSecondaryVertexBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_combinedSecondaryVertexBJetTag_.begin(); i != jets_combinedSecondaryVertexBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_combinedSecondaryVertexBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_combinedSecondaryVertexBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_combinedSecondaryVertexBJetTag_isLoaded = true;
		}
		return jets_combinedSecondaryVertexBJetTag_;
	}
	vector<float> &jets_combinedSecondaryVertexMVABJetTag()
	{
		if (not jets_combinedSecondaryVertexMVABJetTag_isLoaded) {
			if (jets_combinedSecondaryVertexMVABJetTag_branch != 0) {
				jets_combinedSecondaryVertexMVABJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_combinedSecondaryVertexMVABJetTag_.begin(); i != jets_combinedSecondaryVertexMVABJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_combinedSecondaryVertexMVABJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_combinedSecondaryVertexMVABJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_combinedSecondaryVertexMVABJetTag_isLoaded = true;
		}
		return jets_combinedSecondaryVertexMVABJetTag_;
	}
	vector<float> &jets_jetBProbabilityBJetTag()
	{
		if (not jets_jetBProbabilityBJetTag_isLoaded) {
			if (jets_jetBProbabilityBJetTag_branch != 0) {
				jets_jetBProbabilityBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_jetBProbabilityBJetTag_.begin(); i != jets_jetBProbabilityBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_jetBProbabilityBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_jetBProbabilityBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_jetBProbabilityBJetTag_isLoaded = true;
		}
		return jets_jetBProbabilityBJetTag_;
	}
	vector<float> &jets_jetProbabilityBJetTag()
	{
		if (not jets_jetProbabilityBJetTag_isLoaded) {
			if (jets_jetProbabilityBJetTag_branch != 0) {
				jets_jetProbabilityBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_jetProbabilityBJetTag_.begin(); i != jets_jetProbabilityBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_jetProbabilityBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_jetProbabilityBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_jetProbabilityBJetTag_isLoaded = true;
		}
		return jets_jetProbabilityBJetTag_;
	}
	vector<float> &jets_simpleSecondaryVertexBJetTag()
	{
		if (not jets_simpleSecondaryVertexBJetTag_isLoaded) {
			if (jets_simpleSecondaryVertexBJetTag_branch != 0) {
				jets_simpleSecondaryVertexBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_simpleSecondaryVertexBJetTag_.begin(); i != jets_simpleSecondaryVertexBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_simpleSecondaryVertexBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_simpleSecondaryVertexBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_simpleSecondaryVertexBJetTag_isLoaded = true;
		}
		return jets_simpleSecondaryVertexBJetTag_;
	}
	vector<float> &jets_softElectronByIP3dBJetTag()
	{
		if (not jets_softElectronByIP3dBJetTag_isLoaded) {
			if (jets_softElectronByIP3dBJetTag_branch != 0) {
				jets_softElectronByIP3dBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softElectronByIP3dBJetTag_.begin(); i != jets_softElectronByIP3dBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softElectronByIP3dBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softElectronByIP3dBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softElectronByIP3dBJetTag_isLoaded = true;
		}
		return jets_softElectronByIP3dBJetTag_;
	}
	vector<float> &jets_softElectronByPtBJetTag()
	{
		if (not jets_softElectronByPtBJetTag_isLoaded) {
			if (jets_softElectronByPtBJetTag_branch != 0) {
				jets_softElectronByPtBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softElectronByPtBJetTag_.begin(); i != jets_softElectronByPtBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softElectronByPtBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softElectronByPtBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softElectronByPtBJetTag_isLoaded = true;
		}
		return jets_softElectronByPtBJetTag_;
	}
	vector<float> &jets_softMuonBJetTag()
	{
		if (not jets_softMuonBJetTag_isLoaded) {
			if (jets_softMuonBJetTag_branch != 0) {
				jets_softMuonBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softMuonBJetTag_.begin(); i != jets_softMuonBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softMuonBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softMuonBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softMuonBJetTag_isLoaded = true;
		}
		return jets_softMuonBJetTag_;
	}
	vector<float> &jets_softMuonByIP3dBJetTag()
	{
		if (not jets_softMuonByIP3dBJetTag_isLoaded) {
			if (jets_softMuonByIP3dBJetTag_branch != 0) {
				jets_softMuonByIP3dBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softMuonByIP3dBJetTag_.begin(); i != jets_softMuonByIP3dBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softMuonByIP3dBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softMuonByIP3dBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softMuonByIP3dBJetTag_isLoaded = true;
		}
		return jets_softMuonByIP3dBJetTag_;
	}
	vector<float> &jets_softMuonByPtBJetTag()
	{
		if (not jets_softMuonByPtBJetTag_isLoaded) {
			if (jets_softMuonByPtBJetTag_branch != 0) {
				jets_softMuonByPtBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softMuonByPtBJetTag_.begin(); i != jets_softMuonByPtBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softMuonByPtBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softMuonByPtBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softMuonByPtBJetTag_isLoaded = true;
		}
		return jets_softMuonByPtBJetTag_;
	}
	vector<float> &jets_softMuonNoIPBJetTag()
	{
		if (not jets_softMuonNoIPBJetTag_isLoaded) {
			if (jets_softMuonNoIPBJetTag_branch != 0) {
				jets_softMuonNoIPBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_softMuonNoIPBJetTag_.begin(); i != jets_softMuonNoIPBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_softMuonNoIPBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_softMuonNoIPBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_softMuonNoIPBJetTag_isLoaded = true;
		}
		return jets_softMuonNoIPBJetTag_;
	}
	vector<float> &jets_trackCountingHighEffBJetTag()
	{
		if (not jets_trackCountingHighEffBJetTag_isLoaded) {
			if (jets_trackCountingHighEffBJetTag_branch != 0) {
				jets_trackCountingHighEffBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_trackCountingHighEffBJetTag_.begin(); i != jets_trackCountingHighEffBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_trackCountingHighEffBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_trackCountingHighEffBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_trackCountingHighEffBJetTag_isLoaded = true;
		}
		return jets_trackCountingHighEffBJetTag_;
	}
	vector<float> &jets_trackCountingHighPurBJetTag()
	{
		if (not jets_trackCountingHighPurBJetTag_isLoaded) {
			if (jets_trackCountingHighPurBJetTag_branch != 0) {
				jets_trackCountingHighPurBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_trackCountingHighPurBJetTag_.begin(); i != jets_trackCountingHighPurBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_trackCountingHighPurBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_trackCountingHighPurBJetTag_branch does not exist!\n");
				exit(1);
			}
			jets_trackCountingHighPurBJetTag_isLoaded = true;
		}
		return jets_trackCountingHighPurBJetTag_;
	}
	vector<float> &trkjets_combinedSecondaryVertexBJetTag()
	{
		if (not trkjets_combinedSecondaryVertexBJetTag_isLoaded) {
			if (trkjets_combinedSecondaryVertexBJetTag_branch != 0) {
				trkjets_combinedSecondaryVertexBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_combinedSecondaryVertexBJetTag_.begin(); i != trkjets_combinedSecondaryVertexBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_combinedSecondaryVertexBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_combinedSecondaryVertexBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_combinedSecondaryVertexBJetTag_isLoaded = true;
		}
		return trkjets_combinedSecondaryVertexBJetTag_;
	}
	vector<float> &trkjets_combinedSecondaryVertexMVABJetTag()
	{
		if (not trkjets_combinedSecondaryVertexMVABJetTag_isLoaded) {
			if (trkjets_combinedSecondaryVertexMVABJetTag_branch != 0) {
				trkjets_combinedSecondaryVertexMVABJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_combinedSecondaryVertexMVABJetTag_.begin(); i != trkjets_combinedSecondaryVertexMVABJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_combinedSecondaryVertexMVABJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_combinedSecondaryVertexMVABJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_combinedSecondaryVertexMVABJetTag_isLoaded = true;
		}
		return trkjets_combinedSecondaryVertexMVABJetTag_;
	}
	vector<float> &trkjets_jetBProbabilityBJetTag()
	{
		if (not trkjets_jetBProbabilityBJetTag_isLoaded) {
			if (trkjets_jetBProbabilityBJetTag_branch != 0) {
				trkjets_jetBProbabilityBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_jetBProbabilityBJetTag_.begin(); i != trkjets_jetBProbabilityBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_jetBProbabilityBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_jetBProbabilityBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_jetBProbabilityBJetTag_isLoaded = true;
		}
		return trkjets_jetBProbabilityBJetTag_;
	}
	vector<float> &trkjets_jetProbabilityBJetTag()
	{
		if (not trkjets_jetProbabilityBJetTag_isLoaded) {
			if (trkjets_jetProbabilityBJetTag_branch != 0) {
				trkjets_jetProbabilityBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_jetProbabilityBJetTag_.begin(); i != trkjets_jetProbabilityBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_jetProbabilityBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_jetProbabilityBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_jetProbabilityBJetTag_isLoaded = true;
		}
		return trkjets_jetProbabilityBJetTag_;
	}
	vector<float> &trkjets_simpleSecondaryVertexBJetTag()
	{
		if (not trkjets_simpleSecondaryVertexBJetTag_isLoaded) {
			if (trkjets_simpleSecondaryVertexBJetTag_branch != 0) {
				trkjets_simpleSecondaryVertexBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_simpleSecondaryVertexBJetTag_.begin(); i != trkjets_simpleSecondaryVertexBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_simpleSecondaryVertexBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_simpleSecondaryVertexBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_simpleSecondaryVertexBJetTag_isLoaded = true;
		}
		return trkjets_simpleSecondaryVertexBJetTag_;
	}
	vector<float> &trkjets_softElectronByIP3dBJetTag()
	{
		if (not trkjets_softElectronByIP3dBJetTag_isLoaded) {
			if (trkjets_softElectronByIP3dBJetTag_branch != 0) {
				trkjets_softElectronByIP3dBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softElectronByIP3dBJetTag_.begin(); i != trkjets_softElectronByIP3dBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softElectronByIP3dBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softElectronByIP3dBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softElectronByIP3dBJetTag_isLoaded = true;
		}
		return trkjets_softElectronByIP3dBJetTag_;
	}
	vector<float> &trkjets_softElectronByPtBJetTag()
	{
		if (not trkjets_softElectronByPtBJetTag_isLoaded) {
			if (trkjets_softElectronByPtBJetTag_branch != 0) {
				trkjets_softElectronByPtBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softElectronByPtBJetTag_.begin(); i != trkjets_softElectronByPtBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softElectronByPtBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softElectronByPtBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softElectronByPtBJetTag_isLoaded = true;
		}
		return trkjets_softElectronByPtBJetTag_;
	}
	vector<float> &trkjets_softMuonBJetTag()
	{
		if (not trkjets_softMuonBJetTag_isLoaded) {
			if (trkjets_softMuonBJetTag_branch != 0) {
				trkjets_softMuonBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softMuonBJetTag_.begin(); i != trkjets_softMuonBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softMuonBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softMuonBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softMuonBJetTag_isLoaded = true;
		}
		return trkjets_softMuonBJetTag_;
	}
	vector<float> &trkjets_softMuonByIP3dBJetTag()
	{
		if (not trkjets_softMuonByIP3dBJetTag_isLoaded) {
			if (trkjets_softMuonByIP3dBJetTag_branch != 0) {
				trkjets_softMuonByIP3dBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softMuonByIP3dBJetTag_.begin(); i != trkjets_softMuonByIP3dBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softMuonByIP3dBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softMuonByIP3dBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softMuonByIP3dBJetTag_isLoaded = true;
		}
		return trkjets_softMuonByIP3dBJetTag_;
	}
	vector<float> &trkjets_softMuonByPtBJetTag()
	{
		if (not trkjets_softMuonByPtBJetTag_isLoaded) {
			if (trkjets_softMuonByPtBJetTag_branch != 0) {
				trkjets_softMuonByPtBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softMuonByPtBJetTag_.begin(); i != trkjets_softMuonByPtBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softMuonByPtBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softMuonByPtBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softMuonByPtBJetTag_isLoaded = true;
		}
		return trkjets_softMuonByPtBJetTag_;
	}
	vector<float> &trkjets_softMuonNoIPBJetTag()
	{
		if (not trkjets_softMuonNoIPBJetTag_isLoaded) {
			if (trkjets_softMuonNoIPBJetTag_branch != 0) {
				trkjets_softMuonNoIPBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_softMuonNoIPBJetTag_.begin(); i != trkjets_softMuonNoIPBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_softMuonNoIPBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_softMuonNoIPBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_softMuonNoIPBJetTag_isLoaded = true;
		}
		return trkjets_softMuonNoIPBJetTag_;
	}
	vector<float> &trkjets_trackCountingHighEffBJetTag()
	{
		if (not trkjets_trackCountingHighEffBJetTag_isLoaded) {
			if (trkjets_trackCountingHighEffBJetTag_branch != 0) {
				trkjets_trackCountingHighEffBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_trackCountingHighEffBJetTag_.begin(); i != trkjets_trackCountingHighEffBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_trackCountingHighEffBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_trackCountingHighEffBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_trackCountingHighEffBJetTag_isLoaded = true;
		}
		return trkjets_trackCountingHighEffBJetTag_;
	}
	vector<float> &trkjets_trackCountingHighPurBJetTag()
	{
		if (not trkjets_trackCountingHighPurBJetTag_isLoaded) {
			if (trkjets_trackCountingHighPurBJetTag_branch != 0) {
				trkjets_trackCountingHighPurBJetTag_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trkjets_trackCountingHighPurBJetTag_.begin(); i != trkjets_trackCountingHighPurBJetTag_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trkjets_trackCountingHighPurBJetTag_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkjets_trackCountingHighPurBJetTag_branch does not exist!\n");
				exit(1);
			}
			trkjets_trackCountingHighPurBJetTag_isLoaded = true;
		}
		return trkjets_trackCountingHighPurBJetTag_;
	}
	vector<float> &evt_bs_covMatrix()
	{
		if (not evt_bs_covMatrix_isLoaded) {
			if (evt_bs_covMatrix_branch != 0) {
				evt_bs_covMatrix_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_bs_covMatrix_.begin(); i != evt_bs_covMatrix_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_bs_covMatrix_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bs_covMatrix_branch does not exist!\n");
				exit(1);
			}
			evt_bs_covMatrix_isLoaded = true;
		}
		return evt_bs_covMatrix_;
	}
	vector<float> &twrs_ecalTime()
	{
		if (not twrs_ecalTime_isLoaded) {
			if (twrs_ecalTime_branch != 0) {
				twrs_ecalTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_ecalTime_.begin(); i != twrs_ecalTime_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_ecalTime_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_ecalTime_branch does not exist!\n");
				exit(1);
			}
			twrs_ecalTime_isLoaded = true;
		}
		return twrs_ecalTime_;
	}
	vector<float> &twrs_emEnergy()
	{
		if (not twrs_emEnergy_isLoaded) {
			if (twrs_emEnergy_branch != 0) {
				twrs_emEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_emEnergy_.begin(); i != twrs_emEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_emEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_emEnergy_isLoaded = true;
		}
		return twrs_emEnergy_;
	}
	vector<float> &twrs_emEt()
	{
		if (not twrs_emEt_isLoaded) {
			if (twrs_emEt_branch != 0) {
				twrs_emEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_emEt_.begin(); i != twrs_emEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_emEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emEt_branch does not exist!\n");
				exit(1);
			}
			twrs_emEt_isLoaded = true;
		}
		return twrs_emEt_;
	}
	vector<float> &twrs_emEtcorr()
	{
		if (not twrs_emEtcorr_isLoaded) {
			if (twrs_emEtcorr_branch != 0) {
				twrs_emEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_emEtcorr_.begin(); i != twrs_emEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_emEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_emEtcorr_isLoaded = true;
		}
		return twrs_emEtcorr_;
	}
	vector<float> &twrs_eta()
	{
		if (not twrs_eta_isLoaded) {
			if (twrs_eta_branch != 0) {
				twrs_eta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_eta_.begin(); i != twrs_eta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_eta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_eta_branch does not exist!\n");
				exit(1);
			}
			twrs_eta_isLoaded = true;
		}
		return twrs_eta_;
	}
	vector<float> &twrs_etacorr()
	{
		if (not twrs_etacorr_isLoaded) {
			if (twrs_etacorr_branch != 0) {
				twrs_etacorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_etacorr_.begin(); i != twrs_etacorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_etacorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_etacorr_branch does not exist!\n");
				exit(1);
			}
			twrs_etacorr_isLoaded = true;
		}
		return twrs_etacorr_;
	}
	vector<float> &twrs_etcorr()
	{
		if (not twrs_etcorr_isLoaded) {
			if (twrs_etcorr_branch != 0) {
				twrs_etcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_etcorr_.begin(); i != twrs_etcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_etcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_etcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_etcorr_isLoaded = true;
		}
		return twrs_etcorr_;
	}
	vector<float> &twrs_hadEnergy()
	{
		if (not twrs_hadEnergy_isLoaded) {
			if (twrs_hadEnergy_branch != 0) {
				twrs_hadEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_hadEnergy_.begin(); i != twrs_hadEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_hadEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_hadEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEnergy_isLoaded = true;
		}
		return twrs_hadEnergy_;
	}
	vector<float> &twrs_hadEt()
	{
		if (not twrs_hadEt_isLoaded) {
			if (twrs_hadEt_branch != 0) {
				twrs_hadEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_hadEt_.begin(); i != twrs_hadEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_hadEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_hadEt_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEt_isLoaded = true;
		}
		return twrs_hadEt_;
	}
	vector<float> &twrs_hadEtcorr()
	{
		if (not twrs_hadEtcorr_isLoaded) {
			if (twrs_hadEtcorr_branch != 0) {
				twrs_hadEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_hadEtcorr_.begin(); i != twrs_hadEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_hadEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_hadEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEtcorr_isLoaded = true;
		}
		return twrs_hadEtcorr_;
	}
	vector<float> &twrs_hcalTime()
	{
		if (not twrs_hcalTime_isLoaded) {
			if (twrs_hcalTime_branch != 0) {
				twrs_hcalTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_hcalTime_.begin(); i != twrs_hcalTime_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_hcalTime_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_hcalTime_branch does not exist!\n");
				exit(1);
			}
			twrs_hcalTime_isLoaded = true;
		}
		return twrs_hcalTime_;
	}
	vector<float> &twrs_outerEnergy()
	{
		if (not twrs_outerEnergy_isLoaded) {
			if (twrs_outerEnergy_branch != 0) {
				twrs_outerEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_outerEnergy_.begin(); i != twrs_outerEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_outerEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_outerEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEnergy_isLoaded = true;
		}
		return twrs_outerEnergy_;
	}
	vector<float> &twrs_outerEt()
	{
		if (not twrs_outerEt_isLoaded) {
			if (twrs_outerEt_branch != 0) {
				twrs_outerEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_outerEt_.begin(); i != twrs_outerEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_outerEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_outerEt_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEt_isLoaded = true;
		}
		return twrs_outerEt_;
	}
	vector<float> &twrs_outerEtcorr()
	{
		if (not twrs_outerEtcorr_isLoaded) {
			if (twrs_outerEtcorr_branch != 0) {
				twrs_outerEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_outerEtcorr_.begin(); i != twrs_outerEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_outerEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_outerEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEtcorr_isLoaded = true;
		}
		return twrs_outerEtcorr_;
	}
	vector<float> &twrs_pcorr()
	{
		if (not twrs_pcorr_isLoaded) {
			if (twrs_pcorr_branch != 0) {
				twrs_pcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_pcorr_.begin(); i != twrs_pcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_pcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_pcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_pcorr_isLoaded = true;
		}
		return twrs_pcorr_;
	}
	vector<float> &twrs_phi()
	{
		if (not twrs_phi_isLoaded) {
			if (twrs_phi_branch != 0) {
				twrs_phi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_phi_.begin(); i != twrs_phi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_phi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_phi_branch does not exist!\n");
				exit(1);
			}
			twrs_phi_isLoaded = true;
		}
		return twrs_phi_;
	}
	vector<float> &twrs_phicorr()
	{
		if (not twrs_phicorr_isLoaded) {
			if (twrs_phicorr_branch != 0) {
				twrs_phicorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_phicorr_.begin(); i != twrs_phicorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_phicorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_phicorr_branch does not exist!\n");
				exit(1);
			}
			twrs_phicorr_isLoaded = true;
		}
		return twrs_phicorr_;
	}
	vector<float> &twrs_spikeEt()
	{
		if (not twrs_spikeEt_isLoaded) {
			if (twrs_spikeEt_branch != 0) {
				twrs_spikeEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_spikeEt_.begin(); i != twrs_spikeEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_spikeEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_spikeEt_branch does not exist!\n");
				exit(1);
			}
			twrs_spikeEt_isLoaded = true;
		}
		return twrs_spikeEt_;
	}
	vector<float> &twrs_spikeR4()
	{
		if (not twrs_spikeR4_isLoaded) {
			if (twrs_spikeR4_branch != 0) {
				twrs_spikeR4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrs_spikeR4_.begin(); i != twrs_spikeR4_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrs_spikeR4_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_spikeR4_branch does not exist!\n");
				exit(1);
			}
			twrs_spikeR4_isLoaded = true;
		}
		return twrs_spikeR4_;
	}
	vector<float> &twrsUncleaned_ecalTime()
	{
		if (not twrsUncleaned_ecalTime_isLoaded) {
			if (twrsUncleaned_ecalTime_branch != 0) {
				twrsUncleaned_ecalTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_ecalTime_.begin(); i != twrsUncleaned_ecalTime_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_ecalTime_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_ecalTime_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_ecalTime_isLoaded = true;
		}
		return twrsUncleaned_ecalTime_;
	}
	vector<float> &twrsUncleaned_emEnergy()
	{
		if (not twrsUncleaned_emEnergy_isLoaded) {
			if (twrsUncleaned_emEnergy_branch != 0) {
				twrsUncleaned_emEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_emEnergy_.begin(); i != twrsUncleaned_emEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_emEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emEnergy_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emEnergy_isLoaded = true;
		}
		return twrsUncleaned_emEnergy_;
	}
	vector<float> &twrsUncleaned_emEt()
	{
		if (not twrsUncleaned_emEt_isLoaded) {
			if (twrsUncleaned_emEt_branch != 0) {
				twrsUncleaned_emEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_emEt_.begin(); i != twrsUncleaned_emEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_emEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emEt_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emEt_isLoaded = true;
		}
		return twrsUncleaned_emEt_;
	}
	vector<float> &twrsUncleaned_emEtcorr()
	{
		if (not twrsUncleaned_emEtcorr_isLoaded) {
			if (twrsUncleaned_emEtcorr_branch != 0) {
				twrsUncleaned_emEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_emEtcorr_.begin(); i != twrsUncleaned_emEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_emEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emEtcorr_isLoaded = true;
		}
		return twrsUncleaned_emEtcorr_;
	}
	vector<float> &twrsUncleaned_eta()
	{
		if (not twrsUncleaned_eta_isLoaded) {
			if (twrsUncleaned_eta_branch != 0) {
				twrsUncleaned_eta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_eta_.begin(); i != twrsUncleaned_eta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_eta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_eta_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_eta_isLoaded = true;
		}
		return twrsUncleaned_eta_;
	}
	vector<float> &twrsUncleaned_etacorr()
	{
		if (not twrsUncleaned_etacorr_isLoaded) {
			if (twrsUncleaned_etacorr_branch != 0) {
				twrsUncleaned_etacorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_etacorr_.begin(); i != twrsUncleaned_etacorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_etacorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_etacorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_etacorr_isLoaded = true;
		}
		return twrsUncleaned_etacorr_;
	}
	vector<float> &twrsUncleaned_etcorr()
	{
		if (not twrsUncleaned_etcorr_isLoaded) {
			if (twrsUncleaned_etcorr_branch != 0) {
				twrsUncleaned_etcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_etcorr_.begin(); i != twrsUncleaned_etcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_etcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_etcorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_etcorr_isLoaded = true;
		}
		return twrsUncleaned_etcorr_;
	}
	vector<float> &twrsUncleaned_hadEnergy()
	{
		if (not twrsUncleaned_hadEnergy_isLoaded) {
			if (twrsUncleaned_hadEnergy_branch != 0) {
				twrsUncleaned_hadEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_hadEnergy_.begin(); i != twrsUncleaned_hadEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_hadEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_hadEnergy_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_hadEnergy_isLoaded = true;
		}
		return twrsUncleaned_hadEnergy_;
	}
	vector<float> &twrsUncleaned_hadEt()
	{
		if (not twrsUncleaned_hadEt_isLoaded) {
			if (twrsUncleaned_hadEt_branch != 0) {
				twrsUncleaned_hadEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_hadEt_.begin(); i != twrsUncleaned_hadEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_hadEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_hadEt_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_hadEt_isLoaded = true;
		}
		return twrsUncleaned_hadEt_;
	}
	vector<float> &twrsUncleaned_hadEtcorr()
	{
		if (not twrsUncleaned_hadEtcorr_isLoaded) {
			if (twrsUncleaned_hadEtcorr_branch != 0) {
				twrsUncleaned_hadEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_hadEtcorr_.begin(); i != twrsUncleaned_hadEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_hadEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_hadEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_hadEtcorr_isLoaded = true;
		}
		return twrsUncleaned_hadEtcorr_;
	}
	vector<float> &twrsUncleaned_hcalTime()
	{
		if (not twrsUncleaned_hcalTime_isLoaded) {
			if (twrsUncleaned_hcalTime_branch != 0) {
				twrsUncleaned_hcalTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_hcalTime_.begin(); i != twrsUncleaned_hcalTime_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_hcalTime_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_hcalTime_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_hcalTime_isLoaded = true;
		}
		return twrsUncleaned_hcalTime_;
	}
	vector<float> &twrsUncleaned_outerEnergy()
	{
		if (not twrsUncleaned_outerEnergy_isLoaded) {
			if (twrsUncleaned_outerEnergy_branch != 0) {
				twrsUncleaned_outerEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_outerEnergy_.begin(); i != twrsUncleaned_outerEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_outerEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_outerEnergy_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_outerEnergy_isLoaded = true;
		}
		return twrsUncleaned_outerEnergy_;
	}
	vector<float> &twrsUncleaned_outerEt()
	{
		if (not twrsUncleaned_outerEt_isLoaded) {
			if (twrsUncleaned_outerEt_branch != 0) {
				twrsUncleaned_outerEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_outerEt_.begin(); i != twrsUncleaned_outerEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_outerEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_outerEt_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_outerEt_isLoaded = true;
		}
		return twrsUncleaned_outerEt_;
	}
	vector<float> &twrsUncleaned_outerEtcorr()
	{
		if (not twrsUncleaned_outerEtcorr_isLoaded) {
			if (twrsUncleaned_outerEtcorr_branch != 0) {
				twrsUncleaned_outerEtcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_outerEtcorr_.begin(); i != twrsUncleaned_outerEtcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_outerEtcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_outerEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_outerEtcorr_isLoaded = true;
		}
		return twrsUncleaned_outerEtcorr_;
	}
	vector<float> &twrsUncleaned_pcorr()
	{
		if (not twrsUncleaned_pcorr_isLoaded) {
			if (twrsUncleaned_pcorr_branch != 0) {
				twrsUncleaned_pcorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_pcorr_.begin(); i != twrsUncleaned_pcorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_pcorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_pcorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_pcorr_isLoaded = true;
		}
		return twrsUncleaned_pcorr_;
	}
	vector<float> &twrsUncleaned_phi()
	{
		if (not twrsUncleaned_phi_isLoaded) {
			if (twrsUncleaned_phi_branch != 0) {
				twrsUncleaned_phi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_phi_.begin(); i != twrsUncleaned_phi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_phi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_phi_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_phi_isLoaded = true;
		}
		return twrsUncleaned_phi_;
	}
	vector<float> &twrsUncleaned_phicorr()
	{
		if (not twrsUncleaned_phicorr_isLoaded) {
			if (twrsUncleaned_phicorr_branch != 0) {
				twrsUncleaned_phicorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_phicorr_.begin(); i != twrsUncleaned_phicorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_phicorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_phicorr_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_phicorr_isLoaded = true;
		}
		return twrsUncleaned_phicorr_;
	}
	vector<float> &twrsUncleaned_spikeEt()
	{
		if (not twrsUncleaned_spikeEt_isLoaded) {
			if (twrsUncleaned_spikeEt_branch != 0) {
				twrsUncleaned_spikeEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_spikeEt_.begin(); i != twrsUncleaned_spikeEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_spikeEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_spikeEt_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_spikeEt_isLoaded = true;
		}
		return twrsUncleaned_spikeEt_;
	}
	vector<float> &twrsUncleaned_spikeR4()
	{
		if (not twrsUncleaned_spikeR4_isLoaded) {
			if (twrsUncleaned_spikeR4_branch != 0) {
				twrsUncleaned_spikeR4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = twrsUncleaned_spikeR4_.begin(); i != twrsUncleaned_spikeR4_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch twrsUncleaned_spikeR4_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_spikeR4_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_spikeR4_isLoaded = true;
		}
		return twrsUncleaned_spikeR4_;
	}
	vector<float> &taus_calo_isolationECALhitsEtSum()
	{
		if (not taus_calo_isolationECALhitsEtSum_isLoaded) {
			if (taus_calo_isolationECALhitsEtSum_branch != 0) {
				taus_calo_isolationECALhitsEtSum_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_isolationECALhitsEtSum_.begin(); i != taus_calo_isolationECALhitsEtSum_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_isolationECALhitsEtSum_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_isolationECALhitsEtSum_branch does not exist!\n");
				exit(1);
			}
			taus_calo_isolationECALhitsEtSum_isLoaded = true;
		}
		return taus_calo_isolationECALhitsEtSum_;
	}
	vector<float> &taus_calo_isolationtrksPtSum()
	{
		if (not taus_calo_isolationtrksPtSum_isLoaded) {
			if (taus_calo_isolationtrksPtSum_branch != 0) {
				taus_calo_isolationtrksPtSum_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_isolationtrksPtSum_.begin(); i != taus_calo_isolationtrksPtSum_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_isolationtrksPtSum_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_isolationtrksPtSum_branch does not exist!\n");
				exit(1);
			}
			taus_calo_isolationtrksPtSum_isLoaded = true;
		}
		return taus_calo_isolationtrksPtSum_;
	}
	vector<float> &taus_calo_leadtrk_HCAL3x3hitsEtSum()
	{
		if (not taus_calo_leadtrk_HCAL3x3hitsEtSum_isLoaded) {
			if (taus_calo_leadtrk_HCAL3x3hitsEtSum_branch != 0) {
				taus_calo_leadtrk_HCAL3x3hitsEtSum_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_leadtrk_HCAL3x3hitsEtSum_.begin(); i != taus_calo_leadtrk_HCAL3x3hitsEtSum_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_leadtrk_HCAL3x3hitsEtSum_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_HCAL3x3hitsEtSum_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_HCAL3x3hitsEtSum_isLoaded = true;
		}
		return taus_calo_leadtrk_HCAL3x3hitsEtSum_;
	}
	vector<float> &taus_calo_leadtrk_HCAL3x3hottesthitDEta()
	{
		if (not taus_calo_leadtrk_HCAL3x3hottesthitDEta_isLoaded) {
			if (taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch != 0) {
				taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_leadtrk_HCAL3x3hottesthitDEta_.begin(); i != taus_calo_leadtrk_HCAL3x3hottesthitDEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_HCAL3x3hottesthitDEta_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_HCAL3x3hottesthitDEta_isLoaded = true;
		}
		return taus_calo_leadtrk_HCAL3x3hottesthitDEta_;
	}
	vector<float> &taus_calo_leadtrk_Signed_Sipt()
	{
		if (not taus_calo_leadtrk_Signed_Sipt_isLoaded) {
			if (taus_calo_leadtrk_Signed_Sipt_branch != 0) {
				taus_calo_leadtrk_Signed_Sipt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_leadtrk_Signed_Sipt_.begin(); i != taus_calo_leadtrk_Signed_Sipt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_leadtrk_Signed_Sipt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_Signed_Sipt_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_Signed_Sipt_isLoaded = true;
		}
		return taus_calo_leadtrk_Signed_Sipt_;
	}
	vector<float> &taus_calo_leadtrk_lostHits()
	{
		if (not taus_calo_leadtrk_lostHits_isLoaded) {
			if (taus_calo_leadtrk_lostHits_branch != 0) {
				taus_calo_leadtrk_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_leadtrk_lostHits_.begin(); i != taus_calo_leadtrk_lostHits_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_leadtrk_lostHits_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_lostHits_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_lostHits_isLoaded = true;
		}
		return taus_calo_leadtrk_lostHits_;
	}
	vector<float> &taus_calo_leadtrk_validHits()
	{
		if (not taus_calo_leadtrk_validHits_isLoaded) {
			if (taus_calo_leadtrk_validHits_branch != 0) {
				taus_calo_leadtrk_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_leadtrk_validHits_.begin(); i != taus_calo_leadtrk_validHits_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_leadtrk_validHits_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_validHits_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_validHits_isLoaded = true;
		}
		return taus_calo_leadtrk_validHits_;
	}
	vector<float> &taus_calo_maximumHCALhitEt()
	{
		if (not taus_calo_maximumHCALhitEt_isLoaded) {
			if (taus_calo_maximumHCALhitEt_branch != 0) {
				taus_calo_maximumHCALhitEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_maximumHCALhitEt_.begin(); i != taus_calo_maximumHCALhitEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_maximumHCALhitEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_maximumHCALhitEt_branch does not exist!\n");
				exit(1);
			}
			taus_calo_maximumHCALhitEt_isLoaded = true;
		}
		return taus_calo_maximumHCALhitEt_;
	}
	vector<float> &taus_calo_signaltrksInvariantMass()
	{
		if (not taus_calo_signaltrksInvariantMass_isLoaded) {
			if (taus_calo_signaltrksInvariantMass_branch != 0) {
				taus_calo_signaltrksInvariantMass_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_calo_signaltrksInvariantMass_.begin(); i != taus_calo_signaltrksInvariantMass_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_calo_signaltrksInvariantMass_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_signaltrksInvariantMass_branch does not exist!\n");
				exit(1);
			}
			taus_calo_signaltrksInvariantMass_isLoaded = true;
		}
		return taus_calo_signaltrksInvariantMass_;
	}
	vector<float> &els_mc3dr()
	{
		if (not els_mc3dr_isLoaded) {
			if (els_mc3dr_branch != 0) {
				els_mc3dr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_mc3dr_.begin(); i != els_mc3dr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_mc3dr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc3dr_branch does not exist!\n");
				exit(1);
			}
			els_mc3dr_isLoaded = true;
		}
		return els_mc3dr_;
	}
	vector<float> &els_mcdr()
	{
		if (not els_mcdr_isLoaded) {
			if (els_mcdr_branch != 0) {
				els_mcdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_mcdr_.begin(); i != els_mcdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_mcdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mcdr_branch does not exist!\n");
				exit(1);
			}
			els_mcdr_isLoaded = true;
		}
		return els_mcdr_;
	}
	vector<float> &jets_mc3dr()
	{
		if (not jets_mc3dr_isLoaded) {
			if (jets_mc3dr_branch != 0) {
				jets_mc3dr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc3dr_.begin(); i != jets_mc3dr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc3dr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc3dr_branch does not exist!\n");
				exit(1);
			}
			jets_mc3dr_isLoaded = true;
		}
		return jets_mc3dr_;
	}
	vector<float> &jets_mcdr()
	{
		if (not jets_mcdr_isLoaded) {
			if (jets_mcdr_branch != 0) {
				jets_mcdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mcdr_.begin(); i != jets_mcdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mcdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mcdr_branch does not exist!\n");
				exit(1);
			}
			jets_mcdr_isLoaded = true;
		}
		return jets_mcdr_;
	}
	vector<float> &jets_mc_emEnergy()
	{
		if (not jets_mc_emEnergy_isLoaded) {
			if (jets_mc_emEnergy_branch != 0) {
				jets_mc_emEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc_emEnergy_.begin(); i != jets_mc_emEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc_emEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_emEnergy_branch does not exist!\n");
				exit(1);
			}
			jets_mc_emEnergy_isLoaded = true;
		}
		return jets_mc_emEnergy_;
	}
	vector<float> &jets_mc_gpdr()
	{
		if (not jets_mc_gpdr_isLoaded) {
			if (jets_mc_gpdr_branch != 0) {
				jets_mc_gpdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc_gpdr_.begin(); i != jets_mc_gpdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc_gpdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_gpdr_branch does not exist!\n");
				exit(1);
			}
			jets_mc_gpdr_isLoaded = true;
		}
		return jets_mc_gpdr_;
	}
	vector<float> &jets_mc_hadEnergy()
	{
		if (not jets_mc_hadEnergy_isLoaded) {
			if (jets_mc_hadEnergy_branch != 0) {
				jets_mc_hadEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc_hadEnergy_.begin(); i != jets_mc_hadEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc_hadEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_hadEnergy_branch does not exist!\n");
				exit(1);
			}
			jets_mc_hadEnergy_isLoaded = true;
		}
		return jets_mc_hadEnergy_;
	}
	vector<float> &jets_mc_invEnergy()
	{
		if (not jets_mc_invEnergy_isLoaded) {
			if (jets_mc_invEnergy_branch != 0) {
				jets_mc_invEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc_invEnergy_.begin(); i != jets_mc_invEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc_invEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_invEnergy_branch does not exist!\n");
				exit(1);
			}
			jets_mc_invEnergy_isLoaded = true;
		}
		return jets_mc_invEnergy_;
	}
	vector<float> &jets_mc_otherEnergy()
	{
		if (not jets_mc_otherEnergy_isLoaded) {
			if (jets_mc_otherEnergy_branch != 0) {
				jets_mc_otherEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_mc_otherEnergy_.begin(); i != jets_mc_otherEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_mc_otherEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_otherEnergy_branch does not exist!\n");
				exit(1);
			}
			jets_mc_otherEnergy_isLoaded = true;
		}
		return jets_mc_otherEnergy_;
	}
	vector<float> &mus_mc3dr()
	{
		if (not mus_mc3dr_isLoaded) {
			if (mus_mc3dr_branch != 0) {
				mus_mc3dr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_mc3dr_.begin(); i != mus_mc3dr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_mc3dr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc3dr_branch does not exist!\n");
				exit(1);
			}
			mus_mc3dr_isLoaded = true;
		}
		return mus_mc3dr_;
	}
	vector<float> &mus_mcdr()
	{
		if (not mus_mcdr_isLoaded) {
			if (mus_mcdr_branch != 0) {
				mus_mcdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_mcdr_.begin(); i != mus_mcdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_mcdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mcdr_branch does not exist!\n");
				exit(1);
			}
			mus_mcdr_isLoaded = true;
		}
		return mus_mcdr_;
	}
	vector<float> &trk_mc3dr()
	{
		if (not trk_mc3dr_isLoaded) {
			if (trk_mc3dr_branch != 0) {
				trk_mc3dr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trk_mc3dr_.begin(); i != trk_mc3dr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trk_mc3dr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc3dr_branch does not exist!\n");
				exit(1);
			}
			trk_mc3dr_isLoaded = true;
		}
		return trk_mc3dr_;
	}
	vector<float> &trk_mcdr()
	{
		if (not trk_mcdr_isLoaded) {
			if (trk_mcdr_branch != 0) {
				trk_mcdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trk_mcdr_.begin(); i != trk_mcdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trk_mcdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mcdr_branch does not exist!\n");
				exit(1);
			}
			trk_mcdr_isLoaded = true;
		}
		return trk_mcdr_;
	}
	vector<float> &els_ecalJuraIso()
	{
		if (not els_ecalJuraIso_isLoaded) {
			if (els_ecalJuraIso_branch != 0) {
				els_ecalJuraIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalJuraIso_.begin(); i != els_ecalJuraIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalJuraIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalJuraIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalJuraIso_isLoaded = true;
		}
		return els_ecalJuraIso_;
	}
	vector<float> &els_ecalJuraTowerIso()
	{
		if (not els_ecalJuraTowerIso_isLoaded) {
			if (els_ecalJuraTowerIso_branch != 0) {
				els_ecalJuraTowerIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalJuraTowerIso_.begin(); i != els_ecalJuraTowerIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalJuraTowerIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalJuraTowerIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalJuraTowerIso_isLoaded = true;
		}
		return els_ecalJuraTowerIso_;
	}
	vector<float> &els_hcalConeIso()
	{
		if (not els_hcalConeIso_isLoaded) {
			if (els_hcalConeIso_branch != 0) {
				els_hcalConeIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalConeIso_.begin(); i != els_hcalConeIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalConeIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalConeIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalConeIso_isLoaded = true;
		}
		return els_hcalConeIso_;
	}
	vector<float> &els_tkJuraIso()
	{
		if (not els_tkJuraIso_isLoaded) {
			if (els_tkJuraIso_branch != 0) {
				els_tkJuraIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_tkJuraIso_.begin(); i != els_tkJuraIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_tkJuraIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_tkJuraIso_branch does not exist!\n");
				exit(1);
			}
			els_tkJuraIso_isLoaded = true;
		}
		return els_tkJuraIso_;
	}
	vector<float> &els_jetdr()
	{
		if (not els_jetdr_isLoaded) {
			if (els_jetdr_branch != 0) {
				els_jetdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_jetdr_.begin(); i != els_jetdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_jetdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_jetdr_branch does not exist!\n");
				exit(1);
			}
			els_jetdr_isLoaded = true;
		}
		return els_jetdr_;
	}
	vector<float> &els_musdr()
	{
		if (not els_musdr_isLoaded) {
			if (els_musdr_branch != 0) {
				els_musdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_musdr_.begin(); i != els_musdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_musdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_musdr_branch does not exist!\n");
				exit(1);
			}
			els_musdr_isLoaded = true;
		}
		return els_musdr_;
	}
	vector<float> &els_chi2()
	{
		if (not els_chi2_isLoaded) {
			if (els_chi2_branch != 0) {
				els_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_chi2_.begin(); i != els_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_chi2_branch does not exist!\n");
				exit(1);
			}
			els_chi2_isLoaded = true;
		}
		return els_chi2_;
	}
	vector<float> &els_conv_dcot()
	{
		if (not els_conv_dcot_isLoaded) {
			if (els_conv_dcot_branch != 0) {
				els_conv_dcot_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_conv_dcot_.begin(); i != els_conv_dcot_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_conv_dcot_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_conv_dcot_branch does not exist!\n");
				exit(1);
			}
			els_conv_dcot_isLoaded = true;
		}
		return els_conv_dcot_;
	}
	vector<float> &els_conv_dist()
	{
		if (not els_conv_dist_isLoaded) {
			if (els_conv_dist_branch != 0) {
				els_conv_dist_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_conv_dist_.begin(); i != els_conv_dist_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_conv_dist_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_conv_dist_branch does not exist!\n");
				exit(1);
			}
			els_conv_dist_isLoaded = true;
		}
		return els_conv_dist_;
	}
	vector<float> &els_d0()
	{
		if (not els_d0_isLoaded) {
			if (els_d0_branch != 0) {
				els_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_d0_.begin(); i != els_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_d0_branch does not exist!\n");
				exit(1);
			}
			els_d0_isLoaded = true;
		}
		return els_d0_;
	}
	vector<float> &els_d0Err()
	{
		if (not els_d0Err_isLoaded) {
			if (els_d0Err_branch != 0) {
				els_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_d0Err_.begin(); i != els_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_d0Err_branch does not exist!\n");
				exit(1);
			}
			els_d0Err_isLoaded = true;
		}
		return els_d0Err_;
	}
	vector<float> &els_d0corr()
	{
		if (not els_d0corr_isLoaded) {
			if (els_d0corr_branch != 0) {
				els_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_d0corr_.begin(); i != els_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_d0corr_branch does not exist!\n");
				exit(1);
			}
			els_d0corr_isLoaded = true;
		}
		return els_d0corr_;
	}
	vector<float> &els_dEtaIn()
	{
		if (not els_dEtaIn_isLoaded) {
			if (els_dEtaIn_branch != 0) {
				els_dEtaIn_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_dEtaIn_.begin(); i != els_dEtaIn_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_dEtaIn_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_dEtaIn_branch does not exist!\n");
				exit(1);
			}
			els_dEtaIn_isLoaded = true;
		}
		return els_dEtaIn_;
	}
	vector<float> &els_dEtaOut()
	{
		if (not els_dEtaOut_isLoaded) {
			if (els_dEtaOut_branch != 0) {
				els_dEtaOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_dEtaOut_.begin(); i != els_dEtaOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_dEtaOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_dEtaOut_branch does not exist!\n");
				exit(1);
			}
			els_dEtaOut_isLoaded = true;
		}
		return els_dEtaOut_;
	}
	vector<float> &els_dPhiIn()
	{
		if (not els_dPhiIn_isLoaded) {
			if (els_dPhiIn_branch != 0) {
				els_dPhiIn_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_dPhiIn_.begin(); i != els_dPhiIn_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_dPhiIn_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_dPhiIn_branch does not exist!\n");
				exit(1);
			}
			els_dPhiIn_isLoaded = true;
		}
		return els_dPhiIn_;
	}
	vector<float> &els_dPhiInPhiOut()
	{
		if (not els_dPhiInPhiOut_isLoaded) {
			if (els_dPhiInPhiOut_branch != 0) {
				els_dPhiInPhiOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_dPhiInPhiOut_.begin(); i != els_dPhiInPhiOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_dPhiInPhiOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_dPhiInPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiInPhiOut_isLoaded = true;
		}
		return els_dPhiInPhiOut_;
	}
	vector<float> &els_dPhiOut()
	{
		if (not els_dPhiOut_isLoaded) {
			if (els_dPhiOut_branch != 0) {
				els_dPhiOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_dPhiOut_.begin(); i != els_dPhiOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_dPhiOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_dPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiOut_isLoaded = true;
		}
		return els_dPhiOut_;
	}
	vector<float> &els_deltaEtaEleClusterTrackAtCalo()
	{
		if (not els_deltaEtaEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) {
				els_deltaEtaEleClusterTrackAtCalo_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_deltaEtaEleClusterTrackAtCalo_.begin(); i != els_deltaEtaEleClusterTrackAtCalo_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_deltaEtaEleClusterTrackAtCalo_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_deltaEtaEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaEtaEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaEtaEleClusterTrackAtCalo_;
	}
	vector<float> &els_deltaPhiEleClusterTrackAtCalo()
	{
		if (not els_deltaPhiEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) {
				els_deltaPhiEleClusterTrackAtCalo_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_deltaPhiEleClusterTrackAtCalo_.begin(); i != els_deltaPhiEleClusterTrackAtCalo_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_deltaPhiEleClusterTrackAtCalo_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_deltaPhiEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaPhiEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaPhiEleClusterTrackAtCalo_;
	}
	vector<float> &els_e1x5()
	{
		if (not els_e1x5_isLoaded) {
			if (els_e1x5_branch != 0) {
				els_e1x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_e1x5_.begin(); i != els_e1x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_e1x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_e1x5_branch does not exist!\n");
				exit(1);
			}
			els_e1x5_isLoaded = true;
		}
		return els_e1x5_;
	}
	vector<float> &els_e2x5Max()
	{
		if (not els_e2x5Max_isLoaded) {
			if (els_e2x5Max_branch != 0) {
				els_e2x5Max_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_e2x5Max_.begin(); i != els_e2x5Max_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_e2x5Max_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			els_e2x5Max_isLoaded = true;
		}
		return els_e2x5Max_;
	}
	vector<float> &els_e3x3()
	{
		if (not els_e3x3_isLoaded) {
			if (els_e3x3_branch != 0) {
				els_e3x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_e3x3_.begin(); i != els_e3x3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_e3x3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_e3x3_branch does not exist!\n");
				exit(1);
			}
			els_e3x3_isLoaded = true;
		}
		return els_e3x3_;
	}
	vector<float> &els_e5x5()
	{
		if (not els_e5x5_isLoaded) {
			if (els_e5x5_branch != 0) {
				els_e5x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_e5x5_.begin(); i != els_e5x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_e5x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_e5x5_branch does not exist!\n");
				exit(1);
			}
			els_e5x5_isLoaded = true;
		}
		return els_e5x5_;
	}
	vector<float> &els_eMax()
	{
		if (not els_eMax_isLoaded) {
			if (els_eMax_branch != 0) {
				els_eMax_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eMax_.begin(); i != els_eMax_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eMax_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eMax_branch does not exist!\n");
				exit(1);
			}
			els_eMax_isLoaded = true;
		}
		return els_eMax_;
	}
	vector<float> &els_eOverPIn()
	{
		if (not els_eOverPIn_isLoaded) {
			if (els_eOverPIn_branch != 0) {
				els_eOverPIn_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eOverPIn_.begin(); i != els_eOverPIn_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eOverPIn_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eOverPIn_isLoaded = true;
		}
		return els_eOverPIn_;
	}
	vector<float> &els_eOverPOut()
	{
		if (not els_eOverPOut_isLoaded) {
			if (els_eOverPOut_branch != 0) {
				els_eOverPOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eOverPOut_.begin(); i != els_eOverPOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eOverPOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eOverPOut_isLoaded = true;
		}
		return els_eOverPOut_;
	}
	vector<float> &els_eSC()
	{
		if (not els_eSC_isLoaded) {
			if (els_eSC_branch != 0) {
				els_eSC_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSC_.begin(); i != els_eSC_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSC_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSC_branch does not exist!\n");
				exit(1);
			}
			els_eSC_isLoaded = true;
		}
		return els_eSC_;
	}
	vector<float> &els_eSCPresh()
	{
		if (not els_eSCPresh_isLoaded) {
			if (els_eSCPresh_branch != 0) {
				els_eSCPresh_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSCPresh_.begin(); i != els_eSCPresh_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSCPresh_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			els_eSCPresh_isLoaded = true;
		}
		return els_eSCPresh_;
	}
	vector<float> &els_eSCRaw()
	{
		if (not els_eSCRaw_isLoaded) {
			if (els_eSCRaw_branch != 0) {
				els_eSCRaw_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSCRaw_.begin(); i != els_eSCRaw_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSCRaw_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			els_eSCRaw_isLoaded = true;
		}
		return els_eSCRaw_;
	}
	vector<float> &els_eSeed()
	{
		if (not els_eSeed_isLoaded) {
			if (els_eSeed_branch != 0) {
				els_eSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSeed_.begin(); i != els_eSeed_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSeed_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSeed_branch does not exist!\n");
				exit(1);
			}
			els_eSeed_isLoaded = true;
		}
		return els_eSeed_;
	}
	vector<float> &els_eSeedOverPIn()
	{
		if (not els_eSeedOverPIn_isLoaded) {
			if (els_eSeedOverPIn_branch != 0) {
				els_eSeedOverPIn_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSeedOverPIn_.begin(); i != els_eSeedOverPIn_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSeedOverPIn_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSeedOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPIn_isLoaded = true;
		}
		return els_eSeedOverPIn_;
	}
	vector<float> &els_eSeedOverPOut()
	{
		if (not els_eSeedOverPOut_isLoaded) {
			if (els_eSeedOverPOut_branch != 0) {
				els_eSeedOverPOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_eSeedOverPOut_.begin(); i != els_eSeedOverPOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_eSeedOverPOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_eSeedOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPOut_isLoaded = true;
		}
		return els_eSeedOverPOut_;
	}
	vector<float> &els_ecalEnergy()
	{
		if (not els_ecalEnergy_isLoaded) {
			if (els_ecalEnergy_branch != 0) {
				els_ecalEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalEnergy_.begin(); i != els_ecalEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalEnergy_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergy_isLoaded = true;
		}
		return els_ecalEnergy_;
	}
	vector<float> &els_ecalEnergyError()
	{
		if (not els_ecalEnergyError_isLoaded) {
			if (els_ecalEnergyError_branch != 0) {
				els_ecalEnergyError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalEnergyError_.begin(); i != els_ecalEnergyError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalEnergyError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalEnergyError_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergyError_isLoaded = true;
		}
		return els_ecalEnergyError_;
	}
	vector<float> &els_ecalIso()
	{
		if (not els_ecalIso_isLoaded) {
			if (els_ecalIso_branch != 0) {
				els_ecalIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalIso_.begin(); i != els_ecalIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso_isLoaded = true;
		}
		return els_ecalIso_;
	}
	vector<float> &els_ecalIso04()
	{
		if (not els_ecalIso04_isLoaded) {
			if (els_ecalIso04_branch != 0) {
				els_ecalIso04_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ecalIso04_.begin(); i != els_ecalIso04_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ecalIso04_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ecalIso04_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso04_isLoaded = true;
		}
		return els_ecalIso04_;
	}
	vector<float> &els_egamma_looseId()
	{
		if (not els_egamma_looseId_isLoaded) {
			if (els_egamma_looseId_branch != 0) {
				els_egamma_looseId_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_egamma_looseId_.begin(); i != els_egamma_looseId_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_egamma_looseId_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_egamma_looseId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_looseId_isLoaded = true;
		}
		return els_egamma_looseId_;
	}
	vector<float> &els_egamma_robustHighEnergy()
	{
		if (not els_egamma_robustHighEnergy_isLoaded) {
			if (els_egamma_robustHighEnergy_branch != 0) {
				els_egamma_robustHighEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_egamma_robustHighEnergy_.begin(); i != els_egamma_robustHighEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_egamma_robustHighEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_egamma_robustHighEnergy_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustHighEnergy_isLoaded = true;
		}
		return els_egamma_robustHighEnergy_;
	}
	vector<float> &els_egamma_robustLooseId()
	{
		if (not els_egamma_robustLooseId_isLoaded) {
			if (els_egamma_robustLooseId_branch != 0) {
				els_egamma_robustLooseId_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_egamma_robustLooseId_.begin(); i != els_egamma_robustLooseId_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_egamma_robustLooseId_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_egamma_robustLooseId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustLooseId_isLoaded = true;
		}
		return els_egamma_robustLooseId_;
	}
	vector<float> &els_egamma_robustTightId()
	{
		if (not els_egamma_robustTightId_isLoaded) {
			if (els_egamma_robustTightId_branch != 0) {
				els_egamma_robustTightId_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_egamma_robustTightId_.begin(); i != els_egamma_robustTightId_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_egamma_robustTightId_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_egamma_robustTightId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustTightId_isLoaded = true;
		}
		return els_egamma_robustTightId_;
	}
	vector<float> &els_egamma_tightId()
	{
		if (not els_egamma_tightId_isLoaded) {
			if (els_egamma_tightId_branch != 0) {
				els_egamma_tightId_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_egamma_tightId_.begin(); i != els_egamma_tightId_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_egamma_tightId_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_egamma_tightId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_tightId_isLoaded = true;
		}
		return els_egamma_tightId_;
	}
	vector<float> &els_electronMomentumError()
	{
		if (not els_electronMomentumError_isLoaded) {
			if (els_electronMomentumError_branch != 0) {
				els_electronMomentumError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_electronMomentumError_.begin(); i != els_electronMomentumError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_electronMomentumError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_electronMomentumError_branch does not exist!\n");
				exit(1);
			}
			els_electronMomentumError_isLoaded = true;
		}
		return els_electronMomentumError_;
	}
	vector<float> &els_etaErr()
	{
		if (not els_etaErr_isLoaded) {
			if (els_etaErr_branch != 0) {
				els_etaErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_etaErr_.begin(); i != els_etaErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_etaErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_etaErr_branch does not exist!\n");
				exit(1);
			}
			els_etaErr_isLoaded = true;
		}
		return els_etaErr_;
	}
	vector<float> &els_etaSC()
	{
		if (not els_etaSC_isLoaded) {
			if (els_etaSC_branch != 0) {
				els_etaSC_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_etaSC_.begin(); i != els_etaSC_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_etaSC_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_etaSC_branch does not exist!\n");
				exit(1);
			}
			els_etaSC_isLoaded = true;
		}
		return els_etaSC_;
	}
	vector<float> &els_fbrem()
	{
		if (not els_fbrem_isLoaded) {
			if (els_fbrem_branch != 0) {
				els_fbrem_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_fbrem_.begin(); i != els_fbrem_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_fbrem_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_fbrem_branch does not exist!\n");
				exit(1);
			}
			els_fbrem_isLoaded = true;
		}
		return els_fbrem_;
	}
	vector<float> &els_hOverE()
	{
		if (not els_hOverE_isLoaded) {
			if (els_hOverE_branch != 0) {
				els_hOverE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hOverE_.begin(); i != els_hOverE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hOverE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hOverE_branch does not exist!\n");
				exit(1);
			}
			els_hOverE_isLoaded = true;
		}
		return els_hOverE_;
	}
	vector<float> &els_hcalDepth1OverEcal()
	{
		if (not els_hcalDepth1OverEcal_isLoaded) {
			if (els_hcalDepth1OverEcal_branch != 0) {
				els_hcalDepth1OverEcal_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth1OverEcal_.begin(); i != els_hcalDepth1OverEcal_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth1OverEcal_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth1OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1OverEcal_isLoaded = true;
		}
		return els_hcalDepth1OverEcal_;
	}
	vector<float> &els_hcalDepth1TowerSumEt()
	{
		if (not els_hcalDepth1TowerSumEt_isLoaded) {
			if (els_hcalDepth1TowerSumEt_branch != 0) {
				els_hcalDepth1TowerSumEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth1TowerSumEt_.begin(); i != els_hcalDepth1TowerSumEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth1TowerSumEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth1TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt_;
	}
	vector<float> &els_hcalDepth1TowerSumEt04()
	{
		if (not els_hcalDepth1TowerSumEt04_isLoaded) {
			if (els_hcalDepth1TowerSumEt04_branch != 0) {
				els_hcalDepth1TowerSumEt04_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth1TowerSumEt04_.begin(); i != els_hcalDepth1TowerSumEt04_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth1TowerSumEt04_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth1TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt04_;
	}
	vector<float> &els_hcalDepth2OverEcal()
	{
		if (not els_hcalDepth2OverEcal_isLoaded) {
			if (els_hcalDepth2OverEcal_branch != 0) {
				els_hcalDepth2OverEcal_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth2OverEcal_.begin(); i != els_hcalDepth2OverEcal_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth2OverEcal_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth2OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2OverEcal_isLoaded = true;
		}
		return els_hcalDepth2OverEcal_;
	}
	vector<float> &els_hcalDepth2TowerSumEt()
	{
		if (not els_hcalDepth2TowerSumEt_isLoaded) {
			if (els_hcalDepth2TowerSumEt_branch != 0) {
				els_hcalDepth2TowerSumEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth2TowerSumEt_.begin(); i != els_hcalDepth2TowerSumEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth2TowerSumEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth2TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt_;
	}
	vector<float> &els_hcalDepth2TowerSumEt04()
	{
		if (not els_hcalDepth2TowerSumEt04_isLoaded) {
			if (els_hcalDepth2TowerSumEt04_branch != 0) {
				els_hcalDepth2TowerSumEt04_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalDepth2TowerSumEt04_.begin(); i != els_hcalDepth2TowerSumEt04_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalDepth2TowerSumEt04_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalDepth2TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt04_;
	}
	vector<float> &els_hcalIso()
	{
		if (not els_hcalIso_isLoaded) {
			if (els_hcalIso_branch != 0) {
				els_hcalIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalIso_.begin(); i != els_hcalIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso_isLoaded = true;
		}
		return els_hcalIso_;
	}
	vector<float> &els_hcalIso04()
	{
		if (not els_hcalIso04_isLoaded) {
			if (els_hcalIso04_branch != 0) {
				els_hcalIso04_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_hcalIso04_.begin(); i != els_hcalIso04_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_hcalIso04_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_hcalIso04_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso04_isLoaded = true;
		}
		return els_hcalIso04_;
	}
	vector<float> &els_layer1_charge()
	{
		if (not els_layer1_charge_isLoaded) {
			if (els_layer1_charge_branch != 0) {
				els_layer1_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_layer1_charge_.begin(); i != els_layer1_charge_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_layer1_charge_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_layer1_charge_branch does not exist!\n");
				exit(1);
			}
			els_layer1_charge_isLoaded = true;
		}
		return els_layer1_charge_;
	}
	vector<float> &els_ndof()
	{
		if (not els_ndof_isLoaded) {
			if (els_ndof_branch != 0) {
				els_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ndof_.begin(); i != els_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ndof_branch does not exist!\n");
				exit(1);
			}
			els_ndof_isLoaded = true;
		}
		return els_ndof_;
	}
	vector<float> &els_phiErr()
	{
		if (not els_phiErr_isLoaded) {
			if (els_phiErr_branch != 0) {
				els_phiErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_phiErr_.begin(); i != els_phiErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_phiErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_phiErr_branch does not exist!\n");
				exit(1);
			}
			els_phiErr_isLoaded = true;
		}
		return els_phiErr_;
	}
	vector<float> &els_phiSC()
	{
		if (not els_phiSC_isLoaded) {
			if (els_phiSC_branch != 0) {
				els_phiSC_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_phiSC_.begin(); i != els_phiSC_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_phiSC_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_phiSC_branch does not exist!\n");
				exit(1);
			}
			els_phiSC_isLoaded = true;
		}
		return els_phiSC_;
	}
	vector<float> &els_ptErr()
	{
		if (not els_ptErr_isLoaded) {
			if (els_ptErr_branch != 0) {
				els_ptErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_ptErr_.begin(); i != els_ptErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_ptErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_ptErr_branch does not exist!\n");
				exit(1);
			}
			els_ptErr_isLoaded = true;
		}
		return els_ptErr_;
	}
	vector<float> &els_sigmaEtaEta()
	{
		if (not els_sigmaEtaEta_isLoaded) {
			if (els_sigmaEtaEta_branch != 0) {
				els_sigmaEtaEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_sigmaEtaEta_.begin(); i != els_sigmaEtaEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_sigmaEtaEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaEtaEta_isLoaded = true;
		}
		return els_sigmaEtaEta_;
	}
	vector<float> &els_sigmaIEtaIEta()
	{
		if (not els_sigmaIEtaIEta_isLoaded) {
			if (els_sigmaIEtaIEta_branch != 0) {
				els_sigmaIEtaIEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_sigmaIEtaIEta_.begin(); i != els_sigmaIEtaIEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_sigmaIEtaIEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIEtaIEta_isLoaded = true;
		}
		return els_sigmaIEtaIEta_;
	}
	vector<float> &els_sigmaIPhiIPhi()
	{
		if (not els_sigmaIPhiIPhi_isLoaded) {
			if (els_sigmaIPhiIPhi_branch != 0) {
				els_sigmaIPhiIPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_sigmaIPhiIPhi_.begin(); i != els_sigmaIPhiIPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_sigmaIPhiIPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIPhiIPhi_isLoaded = true;
		}
		return els_sigmaIPhiIPhi_;
	}
	vector<float> &els_sigmaPhiPhi()
	{
		if (not els_sigmaPhiPhi_isLoaded) {
			if (els_sigmaPhiPhi_branch != 0) {
				els_sigmaPhiPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_sigmaPhiPhi_.begin(); i != els_sigmaPhiPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_sigmaPhiPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaPhiPhi_isLoaded = true;
		}
		return els_sigmaPhiPhi_;
	}
	vector<float> &els_tkIso()
	{
		if (not els_tkIso_isLoaded) {
			if (els_tkIso_branch != 0) {
				els_tkIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_tkIso_.begin(); i != els_tkIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_tkIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_tkIso_branch does not exist!\n");
				exit(1);
			}
			els_tkIso_isLoaded = true;
		}
		return els_tkIso_;
	}
	vector<float> &els_tkIso04()
	{
		if (not els_tkIso04_isLoaded) {
			if (els_tkIso04_branch != 0) {
				els_tkIso04_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_tkIso04_.begin(); i != els_tkIso04_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_tkIso04_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_tkIso04_branch does not exist!\n");
				exit(1);
			}
			els_tkIso04_isLoaded = true;
		}
		return els_tkIso04_;
	}
	vector<float> &els_trackMomentumError()
	{
		if (not els_trackMomentumError_isLoaded) {
			if (els_trackMomentumError_branch != 0) {
				els_trackMomentumError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_trackMomentumError_.begin(); i != els_trackMomentumError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_trackMomentumError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trackMomentumError_branch does not exist!\n");
				exit(1);
			}
			els_trackMomentumError_isLoaded = true;
		}
		return els_trackMomentumError_;
	}
	vector<float> &els_trkdr()
	{
		if (not els_trkdr_isLoaded) {
			if (els_trkdr_branch != 0) {
				els_trkdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_trkdr_.begin(); i != els_trkdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_trkdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trkdr_branch does not exist!\n");
				exit(1);
			}
			els_trkdr_isLoaded = true;
		}
		return els_trkdr_;
	}
	vector<float> &els_trkshFrac()
	{
		if (not els_trkshFrac_isLoaded) {
			if (els_trkshFrac_branch != 0) {
				els_trkshFrac_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_trkshFrac_.begin(); i != els_trkshFrac_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_trkshFrac_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trkshFrac_branch does not exist!\n");
				exit(1);
			}
			els_trkshFrac_isLoaded = true;
		}
		return els_trkshFrac_;
	}
	vector<float> &els_z0()
	{
		if (not els_z0_isLoaded) {
			if (els_z0_branch != 0) {
				els_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_z0_.begin(); i != els_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_z0_branch does not exist!\n");
				exit(1);
			}
			els_z0_isLoaded = true;
		}
		return els_z0_;
	}
	vector<float> &els_z0Err()
	{
		if (not els_z0Err_isLoaded) {
			if (els_z0Err_branch != 0) {
				els_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_z0Err_.begin(); i != els_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_z0Err_branch does not exist!\n");
				exit(1);
			}
			els_z0Err_isLoaded = true;
		}
		return els_z0Err_;
	}
	vector<float> &els_z0corr()
	{
		if (not els_z0corr_isLoaded) {
			if (els_z0corr_branch != 0) {
				els_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = els_z0corr_.begin(); i != els_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch els_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_z0corr_branch does not exist!\n");
				exit(1);
			}
			els_z0corr_isLoaded = true;
		}
		return els_z0corr_;
	}
	vector<float> &hyp_Ht()
	{
		if (not hyp_Ht_isLoaded) {
			if (hyp_Ht_branch != 0) {
				hyp_Ht_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_Ht_.begin(); i != hyp_Ht_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_Ht_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_Ht_branch does not exist!\n");
				exit(1);
			}
			hyp_Ht_isLoaded = true;
		}
		return hyp_Ht_;
	}
	vector<float> &hyp_dPhi_nJet_metMuonJESCorr()
	{
		if (not hyp_dPhi_nJet_metMuonJESCorr_isLoaded) {
			if (hyp_dPhi_nJet_metMuonJESCorr_branch != 0) {
				hyp_dPhi_nJet_metMuonJESCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_dPhi_nJet_metMuonJESCorr_.begin(); i != hyp_dPhi_nJet_metMuonJESCorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_dPhi_nJet_metMuonJESCorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_dPhi_nJet_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			hyp_dPhi_nJet_metMuonJESCorr_isLoaded = true;
		}
		return hyp_dPhi_nJet_metMuonJESCorr_;
	}
	vector<float> &hyp_dPhi_nJet_muCorrMet()
	{
		if (not hyp_dPhi_nJet_muCorrMet_isLoaded) {
			if (hyp_dPhi_nJet_muCorrMet_branch != 0) {
				hyp_dPhi_nJet_muCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_dPhi_nJet_muCorrMet_.begin(); i != hyp_dPhi_nJet_muCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_dPhi_nJet_muCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_dPhi_nJet_muCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_dPhi_nJet_muCorrMet_isLoaded = true;
		}
		return hyp_dPhi_nJet_muCorrMet_;
	}
	vector<float> &hyp_dPhi_nJet_tcMet()
	{
		if (not hyp_dPhi_nJet_tcMet_isLoaded) {
			if (hyp_dPhi_nJet_tcMet_branch != 0) {
				hyp_dPhi_nJet_tcMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_dPhi_nJet_tcMet_.begin(); i != hyp_dPhi_nJet_tcMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_dPhi_nJet_tcMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_dPhi_nJet_tcMet_branch does not exist!\n");
				exit(1);
			}
			hyp_dPhi_nJet_tcMet_isLoaded = true;
		}
		return hyp_dPhi_nJet_tcMet_;
	}
	vector<float> &hyp_dPhi_nJet_unCorrMet()
	{
		if (not hyp_dPhi_nJet_unCorrMet_isLoaded) {
			if (hyp_dPhi_nJet_unCorrMet_branch != 0) {
				hyp_dPhi_nJet_unCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_dPhi_nJet_unCorrMet_.begin(); i != hyp_dPhi_nJet_unCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_dPhi_nJet_unCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_dPhi_nJet_unCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_dPhi_nJet_unCorrMet_isLoaded = true;
		}
		return hyp_dPhi_nJet_unCorrMet_;
	}
	vector<float> &hyp_ll_chi2()
	{
		if (not hyp_ll_chi2_isLoaded) {
			if (hyp_ll_chi2_branch != 0) {
				hyp_ll_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_chi2_.begin(); i != hyp_ll_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_chi2_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_chi2_isLoaded = true;
		}
		return hyp_ll_chi2_;
	}
	vector<float> &hyp_ll_d0()
	{
		if (not hyp_ll_d0_isLoaded) {
			if (hyp_ll_d0_branch != 0) {
				hyp_ll_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_d0_.begin(); i != hyp_ll_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_d0_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_d0_isLoaded = true;
		}
		return hyp_ll_d0_;
	}
	vector<float> &hyp_ll_d0Err()
	{
		if (not hyp_ll_d0Err_isLoaded) {
			if (hyp_ll_d0Err_branch != 0) {
				hyp_ll_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_d0Err_.begin(); i != hyp_ll_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_d0Err_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_d0Err_isLoaded = true;
		}
		return hyp_ll_d0Err_;
	}
	vector<float> &hyp_ll_d0corr()
	{
		if (not hyp_ll_d0corr_isLoaded) {
			if (hyp_ll_d0corr_branch != 0) {
				hyp_ll_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_d0corr_.begin(); i != hyp_ll_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_d0corr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_d0corr_isLoaded = true;
		}
		return hyp_ll_d0corr_;
	}
	vector<float> &hyp_ll_dPhi_metMuonJESCorr()
	{
		if (not hyp_ll_dPhi_metMuonJESCorr_isLoaded) {
			if (hyp_ll_dPhi_metMuonJESCorr_branch != 0) {
				hyp_ll_dPhi_metMuonJESCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_dPhi_metMuonJESCorr_.begin(); i != hyp_ll_dPhi_metMuonJESCorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_dPhi_metMuonJESCorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_dPhi_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_dPhi_metMuonJESCorr_isLoaded = true;
		}
		return hyp_ll_dPhi_metMuonJESCorr_;
	}
	vector<float> &hyp_ll_dPhi_muCorrMet()
	{
		if (not hyp_ll_dPhi_muCorrMet_isLoaded) {
			if (hyp_ll_dPhi_muCorrMet_branch != 0) {
				hyp_ll_dPhi_muCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_dPhi_muCorrMet_.begin(); i != hyp_ll_dPhi_muCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_dPhi_muCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_dPhi_muCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_dPhi_muCorrMet_isLoaded = true;
		}
		return hyp_ll_dPhi_muCorrMet_;
	}
	vector<float> &hyp_ll_dPhi_tcMet()
	{
		if (not hyp_ll_dPhi_tcMet_isLoaded) {
			if (hyp_ll_dPhi_tcMet_branch != 0) {
				hyp_ll_dPhi_tcMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_dPhi_tcMet_.begin(); i != hyp_ll_dPhi_tcMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_dPhi_tcMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_dPhi_tcMet_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_dPhi_tcMet_isLoaded = true;
		}
		return hyp_ll_dPhi_tcMet_;
	}
	vector<float> &hyp_ll_dPhi_unCorrMet()
	{
		if (not hyp_ll_dPhi_unCorrMet_isLoaded) {
			if (hyp_ll_dPhi_unCorrMet_branch != 0) {
				hyp_ll_dPhi_unCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_dPhi_unCorrMet_.begin(); i != hyp_ll_dPhi_unCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_dPhi_unCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_dPhi_unCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_dPhi_unCorrMet_isLoaded = true;
		}
		return hyp_ll_dPhi_unCorrMet_;
	}
	vector<float> &hyp_ll_etaErr()
	{
		if (not hyp_ll_etaErr_isLoaded) {
			if (hyp_ll_etaErr_branch != 0) {
				hyp_ll_etaErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_etaErr_.begin(); i != hyp_ll_etaErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_etaErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_etaErr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_etaErr_isLoaded = true;
		}
		return hyp_ll_etaErr_;
	}
	vector<float> &hyp_ll_ndof()
	{
		if (not hyp_ll_ndof_isLoaded) {
			if (hyp_ll_ndof_branch != 0) {
				hyp_ll_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_ndof_.begin(); i != hyp_ll_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_ndof_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_ndof_isLoaded = true;
		}
		return hyp_ll_ndof_;
	}
	vector<float> &hyp_ll_phiErr()
	{
		if (not hyp_ll_phiErr_isLoaded) {
			if (hyp_ll_phiErr_branch != 0) {
				hyp_ll_phiErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_phiErr_.begin(); i != hyp_ll_phiErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_phiErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_phiErr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_phiErr_isLoaded = true;
		}
		return hyp_ll_phiErr_;
	}
	vector<float> &hyp_ll_ptErr()
	{
		if (not hyp_ll_ptErr_isLoaded) {
			if (hyp_ll_ptErr_branch != 0) {
				hyp_ll_ptErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_ptErr_.begin(); i != hyp_ll_ptErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_ptErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_ptErr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_ptErr_isLoaded = true;
		}
		return hyp_ll_ptErr_;
	}
	vector<float> &hyp_ll_z0()
	{
		if (not hyp_ll_z0_isLoaded) {
			if (hyp_ll_z0_branch != 0) {
				hyp_ll_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_z0_.begin(); i != hyp_ll_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_z0_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_z0_isLoaded = true;
		}
		return hyp_ll_z0_;
	}
	vector<float> &hyp_ll_z0Err()
	{
		if (not hyp_ll_z0Err_isLoaded) {
			if (hyp_ll_z0Err_branch != 0) {
				hyp_ll_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_z0Err_.begin(); i != hyp_ll_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_z0Err_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_z0Err_isLoaded = true;
		}
		return hyp_ll_z0Err_;
	}
	vector<float> &hyp_ll_z0corr()
	{
		if (not hyp_ll_z0corr_isLoaded) {
			if (hyp_ll_z0corr_branch != 0) {
				hyp_ll_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_z0corr_.begin(); i != hyp_ll_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_z0corr_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_z0corr_isLoaded = true;
		}
		return hyp_ll_z0corr_;
	}
	vector<float> &hyp_lt_chi2()
	{
		if (not hyp_lt_chi2_isLoaded) {
			if (hyp_lt_chi2_branch != 0) {
				hyp_lt_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_chi2_.begin(); i != hyp_lt_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_chi2_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_chi2_isLoaded = true;
		}
		return hyp_lt_chi2_;
	}
	vector<float> &hyp_lt_d0()
	{
		if (not hyp_lt_d0_isLoaded) {
			if (hyp_lt_d0_branch != 0) {
				hyp_lt_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_d0_.begin(); i != hyp_lt_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_d0_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_d0_isLoaded = true;
		}
		return hyp_lt_d0_;
	}
	vector<float> &hyp_lt_d0Err()
	{
		if (not hyp_lt_d0Err_isLoaded) {
			if (hyp_lt_d0Err_branch != 0) {
				hyp_lt_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_d0Err_.begin(); i != hyp_lt_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_d0Err_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_d0Err_isLoaded = true;
		}
		return hyp_lt_d0Err_;
	}
	vector<float> &hyp_lt_d0corr()
	{
		if (not hyp_lt_d0corr_isLoaded) {
			if (hyp_lt_d0corr_branch != 0) {
				hyp_lt_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_d0corr_.begin(); i != hyp_lt_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_d0corr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_d0corr_isLoaded = true;
		}
		return hyp_lt_d0corr_;
	}
	vector<float> &hyp_lt_dPhi_metMuonJESCorr()
	{
		if (not hyp_lt_dPhi_metMuonJESCorr_isLoaded) {
			if (hyp_lt_dPhi_metMuonJESCorr_branch != 0) {
				hyp_lt_dPhi_metMuonJESCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_dPhi_metMuonJESCorr_.begin(); i != hyp_lt_dPhi_metMuonJESCorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_dPhi_metMuonJESCorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_dPhi_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_dPhi_metMuonJESCorr_isLoaded = true;
		}
		return hyp_lt_dPhi_metMuonJESCorr_;
	}
	vector<float> &hyp_lt_dPhi_muCorrMet()
	{
		if (not hyp_lt_dPhi_muCorrMet_isLoaded) {
			if (hyp_lt_dPhi_muCorrMet_branch != 0) {
				hyp_lt_dPhi_muCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_dPhi_muCorrMet_.begin(); i != hyp_lt_dPhi_muCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_dPhi_muCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_dPhi_muCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_dPhi_muCorrMet_isLoaded = true;
		}
		return hyp_lt_dPhi_muCorrMet_;
	}
	vector<float> &hyp_lt_dPhi_tcMet()
	{
		if (not hyp_lt_dPhi_tcMet_isLoaded) {
			if (hyp_lt_dPhi_tcMet_branch != 0) {
				hyp_lt_dPhi_tcMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_dPhi_tcMet_.begin(); i != hyp_lt_dPhi_tcMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_dPhi_tcMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_dPhi_tcMet_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_dPhi_tcMet_isLoaded = true;
		}
		return hyp_lt_dPhi_tcMet_;
	}
	vector<float> &hyp_lt_dPhi_unCorrMet()
	{
		if (not hyp_lt_dPhi_unCorrMet_isLoaded) {
			if (hyp_lt_dPhi_unCorrMet_branch != 0) {
				hyp_lt_dPhi_unCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_dPhi_unCorrMet_.begin(); i != hyp_lt_dPhi_unCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_dPhi_unCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_dPhi_unCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_dPhi_unCorrMet_isLoaded = true;
		}
		return hyp_lt_dPhi_unCorrMet_;
	}
	vector<float> &hyp_lt_etaErr()
	{
		if (not hyp_lt_etaErr_isLoaded) {
			if (hyp_lt_etaErr_branch != 0) {
				hyp_lt_etaErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_etaErr_.begin(); i != hyp_lt_etaErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_etaErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_etaErr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_etaErr_isLoaded = true;
		}
		return hyp_lt_etaErr_;
	}
	vector<float> &hyp_lt_ndof()
	{
		if (not hyp_lt_ndof_isLoaded) {
			if (hyp_lt_ndof_branch != 0) {
				hyp_lt_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_ndof_.begin(); i != hyp_lt_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_ndof_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_ndof_isLoaded = true;
		}
		return hyp_lt_ndof_;
	}
	vector<float> &hyp_lt_phiErr()
	{
		if (not hyp_lt_phiErr_isLoaded) {
			if (hyp_lt_phiErr_branch != 0) {
				hyp_lt_phiErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_phiErr_.begin(); i != hyp_lt_phiErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_phiErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_phiErr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_phiErr_isLoaded = true;
		}
		return hyp_lt_phiErr_;
	}
	vector<float> &hyp_lt_ptErr()
	{
		if (not hyp_lt_ptErr_isLoaded) {
			if (hyp_lt_ptErr_branch != 0) {
				hyp_lt_ptErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_ptErr_.begin(); i != hyp_lt_ptErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_ptErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_ptErr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_ptErr_isLoaded = true;
		}
		return hyp_lt_ptErr_;
	}
	vector<float> &hyp_lt_z0()
	{
		if (not hyp_lt_z0_isLoaded) {
			if (hyp_lt_z0_branch != 0) {
				hyp_lt_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_z0_.begin(); i != hyp_lt_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_z0_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_z0_isLoaded = true;
		}
		return hyp_lt_z0_;
	}
	vector<float> &hyp_lt_z0Err()
	{
		if (not hyp_lt_z0Err_isLoaded) {
			if (hyp_lt_z0Err_branch != 0) {
				hyp_lt_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_z0Err_.begin(); i != hyp_lt_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_z0Err_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_z0Err_isLoaded = true;
		}
		return hyp_lt_z0Err_;
	}
	vector<float> &hyp_lt_z0corr()
	{
		if (not hyp_lt_z0corr_isLoaded) {
			if (hyp_lt_z0corr_branch != 0) {
				hyp_lt_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_z0corr_.begin(); i != hyp_lt_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_z0corr_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_z0corr_isLoaded = true;
		}
		return hyp_lt_z0corr_;
	}
	vector<float> &hyp_mt2_metMuonJESCorr()
	{
		if (not hyp_mt2_metMuonJESCorr_isLoaded) {
			if (hyp_mt2_metMuonJESCorr_branch != 0) {
				hyp_mt2_metMuonJESCorr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_mt2_metMuonJESCorr_.begin(); i != hyp_mt2_metMuonJESCorr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_mt2_metMuonJESCorr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_mt2_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			hyp_mt2_metMuonJESCorr_isLoaded = true;
		}
		return hyp_mt2_metMuonJESCorr_;
	}
	vector<float> &hyp_mt2_muCorrMet()
	{
		if (not hyp_mt2_muCorrMet_isLoaded) {
			if (hyp_mt2_muCorrMet_branch != 0) {
				hyp_mt2_muCorrMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_mt2_muCorrMet_.begin(); i != hyp_mt2_muCorrMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_mt2_muCorrMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_mt2_muCorrMet_branch does not exist!\n");
				exit(1);
			}
			hyp_mt2_muCorrMet_isLoaded = true;
		}
		return hyp_mt2_muCorrMet_;
	}
	vector<float> &hyp_mt2_tcMet()
	{
		if (not hyp_mt2_tcMet_isLoaded) {
			if (hyp_mt2_tcMet_branch != 0) {
				hyp_mt2_tcMet_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_mt2_tcMet_.begin(); i != hyp_mt2_tcMet_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_mt2_tcMet_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_mt2_tcMet_branch does not exist!\n");
				exit(1);
			}
			hyp_mt2_tcMet_isLoaded = true;
		}
		return hyp_mt2_tcMet_;
	}
	vector<float> &hyp_sumJetPt()
	{
		if (not hyp_sumJetPt_isLoaded) {
			if (hyp_sumJetPt_branch != 0) {
				hyp_sumJetPt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_sumJetPt_.begin(); i != hyp_sumJetPt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_sumJetPt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_sumJetPt_branch does not exist!\n");
				exit(1);
			}
			hyp_sumJetPt_isLoaded = true;
		}
		return hyp_sumJetPt_;
	}
	vector<float> &hyp_FVFit_chi2ndf()
	{
		if (not hyp_FVFit_chi2ndf_isLoaded) {
			if (hyp_FVFit_chi2ndf_branch != 0) {
				hyp_FVFit_chi2ndf_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_chi2ndf_.begin(); i != hyp_FVFit_chi2ndf_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_chi2ndf_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_chi2ndf_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_chi2ndf_isLoaded = true;
		}
		return hyp_FVFit_chi2ndf_;
	}
	vector<float> &hyp_FVFit_prob()
	{
		if (not hyp_FVFit_prob_isLoaded) {
			if (hyp_FVFit_prob_branch != 0) {
				hyp_FVFit_prob_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_prob_.begin(); i != hyp_FVFit_prob_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_prob_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_prob_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_prob_isLoaded = true;
		}
		return hyp_FVFit_prob_;
	}
	vector<float> &hyp_FVFit_v4cxx()
	{
		if (not hyp_FVFit_v4cxx_isLoaded) {
			if (hyp_FVFit_v4cxx_branch != 0) {
				hyp_FVFit_v4cxx_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4cxx_.begin(); i != hyp_FVFit_v4cxx_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4cxx_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4cxx_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4cxx_isLoaded = true;
		}
		return hyp_FVFit_v4cxx_;
	}
	vector<float> &hyp_FVFit_v4cxy()
	{
		if (not hyp_FVFit_v4cxy_isLoaded) {
			if (hyp_FVFit_v4cxy_branch != 0) {
				hyp_FVFit_v4cxy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4cxy_.begin(); i != hyp_FVFit_v4cxy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4cxy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4cxy_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4cxy_isLoaded = true;
		}
		return hyp_FVFit_v4cxy_;
	}
	vector<float> &hyp_FVFit_v4cyy()
	{
		if (not hyp_FVFit_v4cyy_isLoaded) {
			if (hyp_FVFit_v4cyy_branch != 0) {
				hyp_FVFit_v4cyy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4cyy_.begin(); i != hyp_FVFit_v4cyy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4cyy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4cyy_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4cyy_isLoaded = true;
		}
		return hyp_FVFit_v4cyy_;
	}
	vector<float> &hyp_FVFit_v4czx()
	{
		if (not hyp_FVFit_v4czx_isLoaded) {
			if (hyp_FVFit_v4czx_branch != 0) {
				hyp_FVFit_v4czx_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4czx_.begin(); i != hyp_FVFit_v4czx_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4czx_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4czx_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4czx_isLoaded = true;
		}
		return hyp_FVFit_v4czx_;
	}
	vector<float> &hyp_FVFit_v4czy()
	{
		if (not hyp_FVFit_v4czy_isLoaded) {
			if (hyp_FVFit_v4czy_branch != 0) {
				hyp_FVFit_v4czy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4czy_.begin(); i != hyp_FVFit_v4czy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4czy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4czy_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4czy_isLoaded = true;
		}
		return hyp_FVFit_v4czy_;
	}
	vector<float> &hyp_FVFit_v4czz()
	{
		if (not hyp_FVFit_v4czz_isLoaded) {
			if (hyp_FVFit_v4czz_branch != 0) {
				hyp_FVFit_v4czz_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_FVFit_v4czz_.begin(); i != hyp_FVFit_v4czz_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_FVFit_v4czz_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_v4czz_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_v4czz_isLoaded = true;
		}
		return hyp_FVFit_v4czz_;
	}
	vector<float> &hyp_ll_ecaliso()
	{
		if (not hyp_ll_ecaliso_isLoaded) {
			if (hyp_ll_ecaliso_branch != 0) {
				hyp_ll_ecaliso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_ecaliso_.begin(); i != hyp_ll_ecaliso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_ecaliso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_ecaliso_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_ecaliso_isLoaded = true;
		}
		return hyp_ll_ecaliso_;
	}
	vector<float> &hyp_ll_trkiso()
	{
		if (not hyp_ll_trkiso_isLoaded) {
			if (hyp_ll_trkiso_branch != 0) {
				hyp_ll_trkiso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_ll_trkiso_.begin(); i != hyp_ll_trkiso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_ll_trkiso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_trkiso_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_trkiso_isLoaded = true;
		}
		return hyp_ll_trkiso_;
	}
	vector<float> &hyp_lt_ecaliso()
	{
		if (not hyp_lt_ecaliso_isLoaded) {
			if (hyp_lt_ecaliso_branch != 0) {
				hyp_lt_ecaliso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_ecaliso_.begin(); i != hyp_lt_ecaliso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_ecaliso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_ecaliso_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_ecaliso_isLoaded = true;
		}
		return hyp_lt_ecaliso_;
	}
	vector<float> &hyp_lt_trkiso()
	{
		if (not hyp_lt_trkiso_isLoaded) {
			if (hyp_lt_trkiso_branch != 0) {
				hyp_lt_trkiso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = hyp_lt_trkiso_.begin(); i != hyp_lt_trkiso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch hyp_lt_trkiso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_trkiso_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_trkiso_isLoaded = true;
		}
		return hyp_lt_trkiso_;
	}
	vector<float> &jets_approximatefHPD()
	{
		if (not jets_approximatefHPD_isLoaded) {
			if (jets_approximatefHPD_branch != 0) {
				jets_approximatefHPD_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_approximatefHPD_.begin(); i != jets_approximatefHPD_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_approximatefHPD_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_approximatefHPD_branch does not exist!\n");
				exit(1);
			}
			jets_approximatefHPD_isLoaded = true;
		}
		return jets_approximatefHPD_;
	}
	vector<float> &jets_approximatefRBX()
	{
		if (not jets_approximatefRBX_isLoaded) {
			if (jets_approximatefRBX_branch != 0) {
				jets_approximatefRBX_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_approximatefRBX_.begin(); i != jets_approximatefRBX_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_approximatefRBX_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_approximatefRBX_branch does not exist!\n");
				exit(1);
			}
			jets_approximatefRBX_isLoaded = true;
		}
		return jets_approximatefRBX_;
	}
	vector<float> &jets_cor()
	{
		if (not jets_cor_isLoaded) {
			if (jets_cor_branch != 0) {
				jets_cor_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_cor_.begin(); i != jets_cor_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_cor_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_cor_branch does not exist!\n");
				exit(1);
			}
			jets_cor_isLoaded = true;
		}
		return jets_cor_;
	}
	vector<float> &jets_emFrac()
	{
		if (not jets_emFrac_isLoaded) {
			if (jets_emFrac_branch != 0) {
				jets_emFrac_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_emFrac_.begin(); i != jets_emFrac_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_emFrac_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_emFrac_branch does not exist!\n");
				exit(1);
			}
			jets_emFrac_isLoaded = true;
		}
		return jets_emFrac_;
	}
	vector<float> &jets_fHPD()
	{
		if (not jets_fHPD_isLoaded) {
			if (jets_fHPD_branch != 0) {
				jets_fHPD_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fHPD_.begin(); i != jets_fHPD_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fHPD_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fHPD_branch does not exist!\n");
				exit(1);
			}
			jets_fHPD_isLoaded = true;
		}
		return jets_fHPD_;
	}
	vector<float> &jets_fRBX()
	{
		if (not jets_fRBX_isLoaded) {
			if (jets_fRBX_branch != 0) {
				jets_fRBX_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fRBX_.begin(); i != jets_fRBX_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fRBX_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fRBX_branch does not exist!\n");
				exit(1);
			}
			jets_fRBX_isLoaded = true;
		}
		return jets_fRBX_;
	}
	vector<float> &jets_fSubDetector1()
	{
		if (not jets_fSubDetector1_isLoaded) {
			if (jets_fSubDetector1_branch != 0) {
				jets_fSubDetector1_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fSubDetector1_.begin(); i != jets_fSubDetector1_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fSubDetector1_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fSubDetector1_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector1_isLoaded = true;
		}
		return jets_fSubDetector1_;
	}
	vector<float> &jets_fSubDetector2()
	{
		if (not jets_fSubDetector2_isLoaded) {
			if (jets_fSubDetector2_branch != 0) {
				jets_fSubDetector2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fSubDetector2_.begin(); i != jets_fSubDetector2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fSubDetector2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fSubDetector2_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector2_isLoaded = true;
		}
		return jets_fSubDetector2_;
	}
	vector<float> &jets_fSubDetector3()
	{
		if (not jets_fSubDetector3_isLoaded) {
			if (jets_fSubDetector3_branch != 0) {
				jets_fSubDetector3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fSubDetector3_.begin(); i != jets_fSubDetector3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fSubDetector3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fSubDetector3_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector3_isLoaded = true;
		}
		return jets_fSubDetector3_;
	}
	vector<float> &jets_fSubDetector4()
	{
		if (not jets_fSubDetector4_isLoaded) {
			if (jets_fSubDetector4_branch != 0) {
				jets_fSubDetector4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_fSubDetector4_.begin(); i != jets_fSubDetector4_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_fSubDetector4_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_fSubDetector4_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector4_isLoaded = true;
		}
		return jets_fSubDetector4_;
	}
	vector<float> &jets_hitsInN90()
	{
		if (not jets_hitsInN90_isLoaded) {
			if (jets_hitsInN90_branch != 0) {
				jets_hitsInN90_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_hitsInN90_.begin(); i != jets_hitsInN90_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_hitsInN90_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_hitsInN90_branch does not exist!\n");
				exit(1);
			}
			jets_hitsInN90_isLoaded = true;
		}
		return jets_hitsInN90_;
	}
	vector<float> &jets_n90Hits()
	{
		if (not jets_n90Hits_isLoaded) {
			if (jets_n90Hits_branch != 0) {
				jets_n90Hits_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_n90Hits_.begin(); i != jets_n90Hits_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_n90Hits_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_n90Hits_branch does not exist!\n");
				exit(1);
			}
			jets_n90Hits_isLoaded = true;
		}
		return jets_n90Hits_;
	}
	vector<float> &jets_nECALTowers()
	{
		if (not jets_nECALTowers_isLoaded) {
			if (jets_nECALTowers_branch != 0) {
				jets_nECALTowers_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_nECALTowers_.begin(); i != jets_nECALTowers_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_nECALTowers_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_nECALTowers_branch does not exist!\n");
				exit(1);
			}
			jets_nECALTowers_isLoaded = true;
		}
		return jets_nECALTowers_;
	}
	vector<float> &jets_nHCALTowers()
	{
		if (not jets_nHCALTowers_isLoaded) {
			if (jets_nHCALTowers_branch != 0) {
				jets_nHCALTowers_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_nHCALTowers_.begin(); i != jets_nHCALTowers_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_nHCALTowers_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_nHCALTowers_branch does not exist!\n");
				exit(1);
			}
			jets_nHCALTowers_isLoaded = true;
		}
		return jets_nHCALTowers_;
	}
	vector<float> &jets_restrictedEMF()
	{
		if (not jets_restrictedEMF_isLoaded) {
			if (jets_restrictedEMF_branch != 0) {
				jets_restrictedEMF_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jets_restrictedEMF_.begin(); i != jets_restrictedEMF_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jets_restrictedEMF_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_restrictedEMF_branch does not exist!\n");
				exit(1);
			}
			jets_restrictedEMF_isLoaded = true;
		}
		return jets_restrictedEMF_;
	}
	vector<float> &jpts_emFrac()
	{
		if (not jpts_emFrac_isLoaded) {
			if (jpts_emFrac_branch != 0) {
				jpts_emFrac_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = jpts_emFrac_.begin(); i != jpts_emFrac_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch jpts_emFrac_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jpts_emFrac_branch does not exist!\n");
				exit(1);
			}
			jpts_emFrac_isLoaded = true;
		}
		return jpts_emFrac_;
	}
	vector<float> &evt_ecalmet_etaslice()
	{
		if (not evt_ecalmet_etaslice_isLoaded) {
			if (evt_ecalmet_etaslice_branch != 0) {
				evt_ecalmet_etaslice_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_ecalmet_etaslice_.begin(); i != evt_ecalmet_etaslice_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_ecalmet_etaslice_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalmet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_etaslice_isLoaded = true;
		}
		return evt_ecalmet_etaslice_;
	}
	vector<float> &evt_ecalmet_etaslicePhi()
	{
		if (not evt_ecalmet_etaslicePhi_isLoaded) {
			if (evt_ecalmet_etaslicePhi_branch != 0) {
				evt_ecalmet_etaslicePhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_ecalmet_etaslicePhi_.begin(); i != evt_ecalmet_etaslicePhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_ecalmet_etaslicePhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalmet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_etaslicePhi_isLoaded = true;
		}
		return evt_ecalmet_etaslicePhi_;
	}
	vector<float> &evt_hcalmet_etaslice()
	{
		if (not evt_hcalmet_etaslice_isLoaded) {
			if (evt_hcalmet_etaslice_branch != 0) {
				evt_hcalmet_etaslice_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_hcalmet_etaslice_.begin(); i != evt_hcalmet_etaslice_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_hcalmet_etaslice_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalmet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_etaslice_isLoaded = true;
		}
		return evt_hcalmet_etaslice_;
	}
	vector<float> &evt_hcalmet_etaslicePhi()
	{
		if (not evt_hcalmet_etaslicePhi_isLoaded) {
			if (evt_hcalmet_etaslicePhi_branch != 0) {
				evt_hcalmet_etaslicePhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_hcalmet_etaslicePhi_.begin(); i != evt_hcalmet_etaslicePhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_hcalmet_etaslicePhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalmet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_etaslicePhi_isLoaded = true;
		}
		return evt_hcalmet_etaslicePhi_;
	}
	vector<float> &evt_towermet_etaslice()
	{
		if (not evt_towermet_etaslice_isLoaded) {
			if (evt_towermet_etaslice_branch != 0) {
				evt_towermet_etaslice_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_towermet_etaslice_.begin(); i != evt_towermet_etaslice_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_towermet_etaslice_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_towermet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_towermet_etaslice_isLoaded = true;
		}
		return evt_towermet_etaslice_;
	}
	vector<float> &evt_towermet_etaslicePhi()
	{
		if (not evt_towermet_etaslicePhi_isLoaded) {
			if (evt_towermet_etaslicePhi_branch != 0) {
				evt_towermet_etaslicePhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = evt_towermet_etaslicePhi_.begin(); i != evt_towermet_etaslicePhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch evt_towermet_etaslicePhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_towermet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_towermet_etaslicePhi_isLoaded = true;
		}
		return evt_towermet_etaslicePhi_;
	}
	vector<float> &mus_met_deltax()
	{
		if (not mus_met_deltax_isLoaded) {
			if (mus_met_deltax_branch != 0) {
				mus_met_deltax_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_met_deltax_.begin(); i != mus_met_deltax_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_met_deltax_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_met_deltax_branch does not exist!\n");
				exit(1);
			}
			mus_met_deltax_isLoaded = true;
		}
		return mus_met_deltax_;
	}
	vector<float> &mus_met_deltay()
	{
		if (not mus_met_deltay_isLoaded) {
			if (mus_met_deltay_branch != 0) {
				mus_met_deltay_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_met_deltay_.begin(); i != mus_met_deltay_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_met_deltay_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_met_deltay_branch does not exist!\n");
				exit(1);
			}
			mus_met_deltay_isLoaded = true;
		}
		return mus_met_deltay_;
	}
	vector<float> &mus_eledr()
	{
		if (not mus_eledr_isLoaded) {
			if (mus_eledr_branch != 0) {
				mus_eledr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_eledr_.begin(); i != mus_eledr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_eledr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_eledr_branch does not exist!\n");
				exit(1);
			}
			mus_eledr_isLoaded = true;
		}
		return mus_eledr_;
	}
	vector<float> &mus_jetdr()
	{
		if (not mus_jetdr_isLoaded) {
			if (mus_jetdr_branch != 0) {
				mus_jetdr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_jetdr_.begin(); i != mus_jetdr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_jetdr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_jetdr_branch does not exist!\n");
				exit(1);
			}
			mus_jetdr_isLoaded = true;
		}
		return mus_jetdr_;
	}
	vector<float> &mus_caloCompatibility()
	{
		if (not mus_caloCompatibility_isLoaded) {
			if (mus_caloCompatibility_branch != 0) {
				mus_caloCompatibility_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_caloCompatibility_.begin(); i != mus_caloCompatibility_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_caloCompatibility_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_caloCompatibility_branch does not exist!\n");
				exit(1);
			}
			mus_caloCompatibility_isLoaded = true;
		}
		return mus_caloCompatibility_;
	}
	vector<float> &mus_chi2()
	{
		if (not mus_chi2_isLoaded) {
			if (mus_chi2_branch != 0) {
				mus_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_chi2_.begin(); i != mus_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_chi2_isLoaded = true;
		}
		return mus_chi2_;
	}
	vector<float> &mus_d0()
	{
		if (not mus_d0_isLoaded) {
			if (mus_d0_branch != 0) {
				mus_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_d0_.begin(); i != mus_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_d0_branch does not exist!\n");
				exit(1);
			}
			mus_d0_isLoaded = true;
		}
		return mus_d0_;
	}
	vector<float> &mus_d0Err()
	{
		if (not mus_d0Err_isLoaded) {
			if (mus_d0Err_branch != 0) {
				mus_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_d0Err_.begin(); i != mus_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_d0Err_isLoaded = true;
		}
		return mus_d0Err_;
	}
	vector<float> &mus_d0corr()
	{
		if (not mus_d0corr_isLoaded) {
			if (mus_d0corr_branch != 0) {
				mus_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_d0corr_.begin(); i != mus_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_d0corr_isLoaded = true;
		}
		return mus_d0corr_;
	}
	vector<float> &mus_e_em()
	{
		if (not mus_e_em_isLoaded) {
			if (mus_e_em_branch != 0) {
				mus_e_em_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_em_.begin(); i != mus_e_em_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_em_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_em_branch does not exist!\n");
				exit(1);
			}
			mus_e_em_isLoaded = true;
		}
		return mus_e_em_;
	}
	vector<float> &mus_e_emS9()
	{
		if (not mus_e_emS9_isLoaded) {
			if (mus_e_emS9_branch != 0) {
				mus_e_emS9_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_emS9_.begin(); i != mus_e_emS9_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_emS9_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_emS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_emS9_isLoaded = true;
		}
		return mus_e_emS9_;
	}
	vector<float> &mus_e_had()
	{
		if (not mus_e_had_isLoaded) {
			if (mus_e_had_branch != 0) {
				mus_e_had_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_had_.begin(); i != mus_e_had_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_had_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_had_branch does not exist!\n");
				exit(1);
			}
			mus_e_had_isLoaded = true;
		}
		return mus_e_had_;
	}
	vector<float> &mus_e_hadS9()
	{
		if (not mus_e_hadS9_isLoaded) {
			if (mus_e_hadS9_branch != 0) {
				mus_e_hadS9_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_hadS9_.begin(); i != mus_e_hadS9_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_hadS9_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_hadS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hadS9_isLoaded = true;
		}
		return mus_e_hadS9_;
	}
	vector<float> &mus_e_ho()
	{
		if (not mus_e_ho_isLoaded) {
			if (mus_e_ho_branch != 0) {
				mus_e_ho_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_ho_.begin(); i != mus_e_ho_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_ho_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_ho_branch does not exist!\n");
				exit(1);
			}
			mus_e_ho_isLoaded = true;
		}
		return mus_e_ho_;
	}
	vector<float> &mus_e_hoS9()
	{
		if (not mus_e_hoS9_isLoaded) {
			if (mus_e_hoS9_branch != 0) {
				mus_e_hoS9_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_e_hoS9_.begin(); i != mus_e_hoS9_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_e_hoS9_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_e_hoS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hoS9_isLoaded = true;
		}
		return mus_e_hoS9_;
	}
	vector<float> &mus_etaErr()
	{
		if (not mus_etaErr_isLoaded) {
			if (mus_etaErr_branch != 0) {
				mus_etaErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_etaErr_.begin(); i != mus_etaErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_etaErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_etaErr_branch does not exist!\n");
				exit(1);
			}
			mus_etaErr_isLoaded = true;
		}
		return mus_etaErr_;
	}
	vector<float> &mus_gfit_chi2()
	{
		if (not mus_gfit_chi2_isLoaded) {
			if (mus_gfit_chi2_branch != 0) {
				mus_gfit_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_chi2_.begin(); i != mus_gfit_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_chi2_isLoaded = true;
		}
		return mus_gfit_chi2_;
	}
	vector<float> &mus_gfit_d0()
	{
		if (not mus_gfit_d0_isLoaded) {
			if (mus_gfit_d0_branch != 0) {
				mus_gfit_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_d0_.begin(); i != mus_gfit_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_d0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0_isLoaded = true;
		}
		return mus_gfit_d0_;
	}
	vector<float> &mus_gfit_d0Err()
	{
		if (not mus_gfit_d0Err_isLoaded) {
			if (mus_gfit_d0Err_branch != 0) {
				mus_gfit_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_d0Err_.begin(); i != mus_gfit_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0Err_isLoaded = true;
		}
		return mus_gfit_d0Err_;
	}
	vector<float> &mus_gfit_d0corr()
	{
		if (not mus_gfit_d0corr_isLoaded) {
			if (mus_gfit_d0corr_branch != 0) {
				mus_gfit_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_d0corr_.begin(); i != mus_gfit_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0corr_isLoaded = true;
		}
		return mus_gfit_d0corr_;
	}
	vector<float> &mus_gfit_ndof()
	{
		if (not mus_gfit_ndof_isLoaded) {
			if (mus_gfit_ndof_branch != 0) {
				mus_gfit_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_ndof_.begin(); i != mus_gfit_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_ndof_isLoaded = true;
		}
		return mus_gfit_ndof_;
	}
	vector<float> &mus_gfit_qoverp()
	{
		if (not mus_gfit_qoverp_isLoaded) {
			if (mus_gfit_qoverp_branch != 0) {
				mus_gfit_qoverp_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_qoverp_.begin(); i != mus_gfit_qoverp_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_qoverp_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverp_isLoaded = true;
		}
		return mus_gfit_qoverp_;
	}
	vector<float> &mus_gfit_qoverpError()
	{
		if (not mus_gfit_qoverpError_isLoaded) {
			if (mus_gfit_qoverpError_branch != 0) {
				mus_gfit_qoverpError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_qoverpError_.begin(); i != mus_gfit_qoverpError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_qoverpError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverpError_isLoaded = true;
		}
		return mus_gfit_qoverpError_;
	}
	vector<float> &mus_gfit_z0()
	{
		if (not mus_gfit_z0_isLoaded) {
			if (mus_gfit_z0_branch != 0) {
				mus_gfit_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_z0_.begin(); i != mus_gfit_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_z0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0_isLoaded = true;
		}
		return mus_gfit_z0_;
	}
	vector<float> &mus_gfit_z0Err()
	{
		if (not mus_gfit_z0Err_isLoaded) {
			if (mus_gfit_z0Err_branch != 0) {
				mus_gfit_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_z0Err_.begin(); i != mus_gfit_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0Err_isLoaded = true;
		}
		return mus_gfit_z0Err_;
	}
	vector<float> &mus_gfit_z0corr()
	{
		if (not mus_gfit_z0corr_isLoaded) {
			if (mus_gfit_z0corr_branch != 0) {
				mus_gfit_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_gfit_z0corr_.begin(); i != mus_gfit_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_gfit_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0corr_isLoaded = true;
		}
		return mus_gfit_z0corr_;
	}
	vector<float> &mus_iso03_emEt()
	{
		if (not mus_iso03_emEt_isLoaded) {
			if (mus_iso03_emEt_branch != 0) {
				mus_iso03_emEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso03_emEt_.begin(); i != mus_iso03_emEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso03_emEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso03_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_emEt_isLoaded = true;
		}
		return mus_iso03_emEt_;
	}
	vector<float> &mus_iso03_hadEt()
	{
		if (not mus_iso03_hadEt_isLoaded) {
			if (mus_iso03_hadEt_branch != 0) {
				mus_iso03_hadEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso03_hadEt_.begin(); i != mus_iso03_hadEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso03_hadEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso03_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hadEt_isLoaded = true;
		}
		return mus_iso03_hadEt_;
	}
	vector<float> &mus_iso03_hoEt()
	{
		if (not mus_iso03_hoEt_isLoaded) {
			if (mus_iso03_hoEt_branch != 0) {
				mus_iso03_hoEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso03_hoEt_.begin(); i != mus_iso03_hoEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso03_hoEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso03_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hoEt_isLoaded = true;
		}
		return mus_iso03_hoEt_;
	}
	vector<float> &mus_iso03_sumPt()
	{
		if (not mus_iso03_sumPt_isLoaded) {
			if (mus_iso03_sumPt_branch != 0) {
				mus_iso03_sumPt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso03_sumPt_.begin(); i != mus_iso03_sumPt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso03_sumPt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso03_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_sumPt_isLoaded = true;
		}
		return mus_iso03_sumPt_;
	}
	vector<float> &mus_iso05_emEt()
	{
		if (not mus_iso05_emEt_isLoaded) {
			if (mus_iso05_emEt_branch != 0) {
				mus_iso05_emEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso05_emEt_.begin(); i != mus_iso05_emEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso05_emEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso05_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_emEt_isLoaded = true;
		}
		return mus_iso05_emEt_;
	}
	vector<float> &mus_iso05_hadEt()
	{
		if (not mus_iso05_hadEt_isLoaded) {
			if (mus_iso05_hadEt_branch != 0) {
				mus_iso05_hadEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso05_hadEt_.begin(); i != mus_iso05_hadEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso05_hadEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso05_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hadEt_isLoaded = true;
		}
		return mus_iso05_hadEt_;
	}
	vector<float> &mus_iso05_hoEt()
	{
		if (not mus_iso05_hoEt_isLoaded) {
			if (mus_iso05_hoEt_branch != 0) {
				mus_iso05_hoEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso05_hoEt_.begin(); i != mus_iso05_hoEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso05_hoEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso05_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hoEt_isLoaded = true;
		}
		return mus_iso05_hoEt_;
	}
	vector<float> &mus_iso05_sumPt()
	{
		if (not mus_iso05_sumPt_isLoaded) {
			if (mus_iso05_sumPt_branch != 0) {
				mus_iso05_sumPt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso05_sumPt_.begin(); i != mus_iso05_sumPt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso05_sumPt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso05_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_sumPt_isLoaded = true;
		}
		return mus_iso05_sumPt_;
	}
	vector<float> &mus_iso_ecalvetoDep()
	{
		if (not mus_iso_ecalvetoDep_isLoaded) {
			if (mus_iso_ecalvetoDep_branch != 0) {
				mus_iso_ecalvetoDep_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso_ecalvetoDep_.begin(); i != mus_iso_ecalvetoDep_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso_ecalvetoDep_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso_ecalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_ecalvetoDep_isLoaded = true;
		}
		return mus_iso_ecalvetoDep_;
	}
	vector<float> &mus_iso_hcalvetoDep()
	{
		if (not mus_iso_hcalvetoDep_isLoaded) {
			if (mus_iso_hcalvetoDep_branch != 0) {
				mus_iso_hcalvetoDep_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso_hcalvetoDep_.begin(); i != mus_iso_hcalvetoDep_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso_hcalvetoDep_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso_hcalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hcalvetoDep_isLoaded = true;
		}
		return mus_iso_hcalvetoDep_;
	}
	vector<float> &mus_iso_hovetoDep()
	{
		if (not mus_iso_hovetoDep_isLoaded) {
			if (mus_iso_hovetoDep_branch != 0) {
				mus_iso_hovetoDep_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso_hovetoDep_.begin(); i != mus_iso_hovetoDep_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso_hovetoDep_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso_hovetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hovetoDep_isLoaded = true;
		}
		return mus_iso_hovetoDep_;
	}
	vector<float> &mus_iso_trckvetoDep()
	{
		if (not mus_iso_trckvetoDep_isLoaded) {
			if (mus_iso_trckvetoDep_branch != 0) {
				mus_iso_trckvetoDep_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_iso_trckvetoDep_.begin(); i != mus_iso_trckvetoDep_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_iso_trckvetoDep_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso_trckvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_trckvetoDep_isLoaded = true;
		}
		return mus_iso_trckvetoDep_;
	}
	vector<float> &mus_ndof()
	{
		if (not mus_ndof_isLoaded) {
			if (mus_ndof_branch != 0) {
				mus_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_ndof_.begin(); i != mus_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_ndof_isLoaded = true;
		}
		return mus_ndof_;
	}
	vector<float> &mus_phiErr()
	{
		if (not mus_phiErr_isLoaded) {
			if (mus_phiErr_branch != 0) {
				mus_phiErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_phiErr_.begin(); i != mus_phiErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_phiErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_phiErr_branch does not exist!\n");
				exit(1);
			}
			mus_phiErr_isLoaded = true;
		}
		return mus_phiErr_;
	}
	vector<float> &mus_ptErr()
	{
		if (not mus_ptErr_isLoaded) {
			if (mus_ptErr_branch != 0) {
				mus_ptErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_ptErr_.begin(); i != mus_ptErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_ptErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_ptErr_branch does not exist!\n");
				exit(1);
			}
			mus_ptErr_isLoaded = true;
		}
		return mus_ptErr_;
	}
	vector<float> &mus_qoverp()
	{
		if (not mus_qoverp_isLoaded) {
			if (mus_qoverp_branch != 0) {
				mus_qoverp_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_qoverp_.begin(); i != mus_qoverp_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_qoverp_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_qoverp_isLoaded = true;
		}
		return mus_qoverp_;
	}
	vector<float> &mus_qoverpError()
	{
		if (not mus_qoverpError_isLoaded) {
			if (mus_qoverpError_branch != 0) {
				mus_qoverpError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_qoverpError_.begin(); i != mus_qoverpError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_qoverpError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_qoverpError_isLoaded = true;
		}
		return mus_qoverpError_;
	}
	vector<float> &mus_sta_chi2()
	{
		if (not mus_sta_chi2_isLoaded) {
			if (mus_sta_chi2_branch != 0) {
				mus_sta_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_chi2_.begin(); i != mus_sta_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_sta_chi2_isLoaded = true;
		}
		return mus_sta_chi2_;
	}
	vector<float> &mus_sta_d0()
	{
		if (not mus_sta_d0_isLoaded) {
			if (mus_sta_d0_branch != 0) {
				mus_sta_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_d0_.begin(); i != mus_sta_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_d0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0_isLoaded = true;
		}
		return mus_sta_d0_;
	}
	vector<float> &mus_sta_d0Err()
	{
		if (not mus_sta_d0Err_isLoaded) {
			if (mus_sta_d0Err_branch != 0) {
				mus_sta_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_d0Err_.begin(); i != mus_sta_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0Err_isLoaded = true;
		}
		return mus_sta_d0Err_;
	}
	vector<float> &mus_sta_d0corr()
	{
		if (not mus_sta_d0corr_isLoaded) {
			if (mus_sta_d0corr_branch != 0) {
				mus_sta_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_d0corr_.begin(); i != mus_sta_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0corr_isLoaded = true;
		}
		return mus_sta_d0corr_;
	}
	vector<float> &mus_sta_ndof()
	{
		if (not mus_sta_ndof_isLoaded) {
			if (mus_sta_ndof_branch != 0) {
				mus_sta_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_ndof_.begin(); i != mus_sta_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_sta_ndof_isLoaded = true;
		}
		return mus_sta_ndof_;
	}
	vector<float> &mus_sta_qoverp()
	{
		if (not mus_sta_qoverp_isLoaded) {
			if (mus_sta_qoverp_branch != 0) {
				mus_sta_qoverp_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_qoverp_.begin(); i != mus_sta_qoverp_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_qoverp_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverp_isLoaded = true;
		}
		return mus_sta_qoverp_;
	}
	vector<float> &mus_sta_qoverpError()
	{
		if (not mus_sta_qoverpError_isLoaded) {
			if (mus_sta_qoverpError_branch != 0) {
				mus_sta_qoverpError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_qoverpError_.begin(); i != mus_sta_qoverpError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_qoverpError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverpError_isLoaded = true;
		}
		return mus_sta_qoverpError_;
	}
	vector<float> &mus_sta_z0()
	{
		if (not mus_sta_z0_isLoaded) {
			if (mus_sta_z0_branch != 0) {
				mus_sta_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_z0_.begin(); i != mus_sta_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_z0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0_isLoaded = true;
		}
		return mus_sta_z0_;
	}
	vector<float> &mus_sta_z0Err()
	{
		if (not mus_sta_z0Err_isLoaded) {
			if (mus_sta_z0Err_branch != 0) {
				mus_sta_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_z0Err_.begin(); i != mus_sta_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0Err_isLoaded = true;
		}
		return mus_sta_z0Err_;
	}
	vector<float> &mus_sta_z0corr()
	{
		if (not mus_sta_z0corr_isLoaded) {
			if (mus_sta_z0corr_branch != 0) {
				mus_sta_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_sta_z0corr_.begin(); i != mus_sta_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_sta_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0corr_isLoaded = true;
		}
		return mus_sta_z0corr_;
	}
	vector<float> &mus_timeAtIpInOut()
	{
		if (not mus_timeAtIpInOut_isLoaded) {
			if (mus_timeAtIpInOut_branch != 0) {
				mus_timeAtIpInOut_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_timeAtIpInOut_.begin(); i != mus_timeAtIpInOut_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_timeAtIpInOut_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeAtIpInOut_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOut_isLoaded = true;
		}
		return mus_timeAtIpInOut_;
	}
	vector<float> &mus_timeAtIpInOutErr()
	{
		if (not mus_timeAtIpInOutErr_isLoaded) {
			if (mus_timeAtIpInOutErr_branch != 0) {
				mus_timeAtIpInOutErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_timeAtIpInOutErr_.begin(); i != mus_timeAtIpInOutErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_timeAtIpInOutErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeAtIpInOutErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOutErr_isLoaded = true;
		}
		return mus_timeAtIpInOutErr_;
	}
	vector<float> &mus_timeAtIpOutIn()
	{
		if (not mus_timeAtIpOutIn_isLoaded) {
			if (mus_timeAtIpOutIn_branch != 0) {
				mus_timeAtIpOutIn_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_timeAtIpOutIn_.begin(); i != mus_timeAtIpOutIn_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_timeAtIpOutIn_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeAtIpOutIn_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutIn_isLoaded = true;
		}
		return mus_timeAtIpOutIn_;
	}
	vector<float> &mus_timeAtIpOutInErr()
	{
		if (not mus_timeAtIpOutInErr_isLoaded) {
			if (mus_timeAtIpOutInErr_branch != 0) {
				mus_timeAtIpOutInErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_timeAtIpOutInErr_.begin(); i != mus_timeAtIpOutInErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_timeAtIpOutInErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeAtIpOutInErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutInErr_isLoaded = true;
		}
		return mus_timeAtIpOutInErr_;
	}
	vector<float> &mus_vertexphi()
	{
		if (not mus_vertexphi_isLoaded) {
			if (mus_vertexphi_branch != 0) {
				mus_vertexphi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_vertexphi_.begin(); i != mus_vertexphi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_vertexphi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_vertexphi_branch does not exist!\n");
				exit(1);
			}
			mus_vertexphi_isLoaded = true;
		}
		return mus_vertexphi_;
	}
	vector<float> &mus_z0()
	{
		if (not mus_z0_isLoaded) {
			if (mus_z0_branch != 0) {
				mus_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_z0_.begin(); i != mus_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_z0_branch does not exist!\n");
				exit(1);
			}
			mus_z0_isLoaded = true;
		}
		return mus_z0_;
	}
	vector<float> &mus_z0Err()
	{
		if (not mus_z0Err_isLoaded) {
			if (mus_z0Err_branch != 0) {
				mus_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_z0Err_.begin(); i != mus_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_z0Err_isLoaded = true;
		}
		return mus_z0Err_;
	}
	vector<float> &mus_z0corr()
	{
		if (not mus_z0corr_isLoaded) {
			if (mus_z0corr_branch != 0) {
				mus_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_z0corr_.begin(); i != mus_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_z0corr_isLoaded = true;
		}
		return mus_z0corr_;
	}
	vector<float> &pfjets_chargedEmE()
	{
		if (not pfjets_chargedEmE_isLoaded) {
			if (pfjets_chargedEmE_branch != 0) {
				pfjets_chargedEmE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = pfjets_chargedEmE_.begin(); i != pfjets_chargedEmE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch pfjets_chargedEmE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_chargedEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedEmE_isLoaded = true;
		}
		return pfjets_chargedEmE_;
	}
	vector<float> &pfjets_chargedHadronE()
	{
		if (not pfjets_chargedHadronE_isLoaded) {
			if (pfjets_chargedHadronE_branch != 0) {
				pfjets_chargedHadronE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = pfjets_chargedHadronE_.begin(); i != pfjets_chargedHadronE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch pfjets_chargedHadronE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_chargedHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedHadronE_isLoaded = true;
		}
		return pfjets_chargedHadronE_;
	}
	vector<float> &pfjets_cor()
	{
		if (not pfjets_cor_isLoaded) {
			if (pfjets_cor_branch != 0) {
				pfjets_cor_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = pfjets_cor_.begin(); i != pfjets_cor_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch pfjets_cor_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_cor_branch does not exist!\n");
				exit(1);
			}
			pfjets_cor_isLoaded = true;
		}
		return pfjets_cor_;
	}
	vector<float> &pfjets_neutralEmE()
	{
		if (not pfjets_neutralEmE_isLoaded) {
			if (pfjets_neutralEmE_branch != 0) {
				pfjets_neutralEmE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = pfjets_neutralEmE_.begin(); i != pfjets_neutralEmE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch pfjets_neutralEmE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_neutralEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralEmE_isLoaded = true;
		}
		return pfjets_neutralEmE_;
	}
	vector<float> &pfjets_neutralHadronE()
	{
		if (not pfjets_neutralHadronE_isLoaded) {
			if (pfjets_neutralHadronE_branch != 0) {
				pfjets_neutralHadronE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = pfjets_neutralHadronE_.begin(); i != pfjets_neutralHadronE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch pfjets_neutralHadronE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_neutralHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralHadronE_isLoaded = true;
		}
		return pfjets_neutralHadronE_;
	}
	vector<float> &taus_pf_caloComp()
	{
		if (not taus_pf_caloComp_isLoaded) {
			if (taus_pf_caloComp_branch != 0) {
				taus_pf_caloComp_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_caloComp_.begin(); i != taus_pf_caloComp_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_caloComp_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_caloComp_branch does not exist!\n");
				exit(1);
			}
			taus_pf_caloComp_isLoaded = true;
		}
		return taus_pf_caloComp_;
	}
	vector<float> &taus_pf_ecalStripSumEOverPLead()
	{
		if (not taus_pf_ecalStripSumEOverPLead_isLoaded) {
			if (taus_pf_ecalStripSumEOverPLead_branch != 0) {
				taus_pf_ecalStripSumEOverPLead_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_ecalStripSumEOverPLead_.begin(); i != taus_pf_ecalStripSumEOverPLead_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_ecalStripSumEOverPLead_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_ecalStripSumEOverPLead_branch does not exist!\n");
				exit(1);
			}
			taus_pf_ecalStripSumEOverPLead_isLoaded = true;
		}
		return taus_pf_ecalStripSumEOverPLead_;
	}
	vector<float> &taus_pf_electronPreIDOutput()
	{
		if (not taus_pf_electronPreIDOutput_isLoaded) {
			if (taus_pf_electronPreIDOutput_branch != 0) {
				taus_pf_electronPreIDOutput_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_electronPreIDOutput_.begin(); i != taus_pf_electronPreIDOutput_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_electronPreIDOutput_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_electronPreIDOutput_branch does not exist!\n");
				exit(1);
			}
			taus_pf_electronPreIDOutput_isLoaded = true;
		}
		return taus_pf_electronPreIDOutput_;
	}
	vector<float> &taus_pf_emf()
	{
		if (not taus_pf_emf_isLoaded) {
			if (taus_pf_emf_branch != 0) {
				taus_pf_emf_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_emf_.begin(); i != taus_pf_emf_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_emf_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_emf_branch does not exist!\n");
				exit(1);
			}
			taus_pf_emf_isLoaded = true;
		}
		return taus_pf_emf_;
	}
	vector<float> &taus_pf_hcal3x3OverPLead()
	{
		if (not taus_pf_hcal3x3OverPLead_isLoaded) {
			if (taus_pf_hcal3x3OverPLead_branch != 0) {
				taus_pf_hcal3x3OverPLead_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_hcal3x3OverPLead_.begin(); i != taus_pf_hcal3x3OverPLead_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_hcal3x3OverPLead_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_hcal3x3OverPLead_branch does not exist!\n");
				exit(1);
			}
			taus_pf_hcal3x3OverPLead_isLoaded = true;
		}
		return taus_pf_hcal3x3OverPLead_;
	}
	vector<float> &taus_pf_hcalMaxOverPLead()
	{
		if (not taus_pf_hcalMaxOverPLead_isLoaded) {
			if (taus_pf_hcalMaxOverPLead_branch != 0) {
				taus_pf_hcalMaxOverPLead_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_hcalMaxOverPLead_.begin(); i != taus_pf_hcalMaxOverPLead_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_hcalMaxOverPLead_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_hcalMaxOverPLead_branch does not exist!\n");
				exit(1);
			}
			taus_pf_hcalMaxOverPLead_isLoaded = true;
		}
		return taus_pf_hcalMaxOverPLead_;
	}
	vector<float> &taus_pf_hcalTotOverPLead()
	{
		if (not taus_pf_hcalTotOverPLead_isLoaded) {
			if (taus_pf_hcalTotOverPLead_branch != 0) {
				taus_pf_hcalTotOverPLead_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_hcalTotOverPLead_.begin(); i != taus_pf_hcalTotOverPLead_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_hcalTotOverPLead_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_hcalTotOverPLead_branch does not exist!\n");
				exit(1);
			}
			taus_pf_hcalTotOverPLead_isLoaded = true;
		}
		return taus_pf_hcalTotOverPLead_;
	}
	vector<float> &taus_pf_isolationchargecandPtSum()
	{
		if (not taus_pf_isolationchargecandPtSum_isLoaded) {
			if (taus_pf_isolationchargecandPtSum_branch != 0) {
				taus_pf_isolationchargecandPtSum_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_isolationchargecandPtSum_.begin(); i != taus_pf_isolationchargecandPtSum_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_isolationchargecandPtSum_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_isolationchargecandPtSum_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isolationchargecandPtSum_isLoaded = true;
		}
		return taus_pf_isolationchargecandPtSum_;
	}
	vector<float> &taus_pf_isolationgammacandEtSum()
	{
		if (not taus_pf_isolationgammacandEtSum_isLoaded) {
			if (taus_pf_isolationgammacandEtSum_branch != 0) {
				taus_pf_isolationgammacandEtSum_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_isolationgammacandEtSum_.begin(); i != taus_pf_isolationgammacandEtSum_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_isolationgammacandEtSum_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_isolationgammacandEtSum_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isolationgammacandEtSum_isLoaded = true;
		}
		return taus_pf_isolationgammacandEtSum_;
	}
	vector<float> &taus_pf_lead_chargecand_Signed_Sipt()
	{
		if (not taus_pf_lead_chargecand_Signed_Sipt_isLoaded) {
			if (taus_pf_lead_chargecand_Signed_Sipt_branch != 0) {
				taus_pf_lead_chargecand_Signed_Sipt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_lead_chargecand_Signed_Sipt_.begin(); i != taus_pf_lead_chargecand_Signed_Sipt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_lead_chargecand_Signed_Sipt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_lead_chargecand_Signed_Sipt_branch does not exist!\n");
				exit(1);
			}
			taus_pf_lead_chargecand_Signed_Sipt_isLoaded = true;
		}
		return taus_pf_lead_chargecand_Signed_Sipt_;
	}
	vector<float> &taus_pf_maximumHCALPFClusterEt()
	{
		if (not taus_pf_maximumHCALPFClusterEt_isLoaded) {
			if (taus_pf_maximumHCALPFClusterEt_branch != 0) {
				taus_pf_maximumHCALPFClusterEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_maximumHCALPFClusterEt_.begin(); i != taus_pf_maximumHCALPFClusterEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_maximumHCALPFClusterEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_maximumHCALPFClusterEt_branch does not exist!\n");
				exit(1);
			}
			taus_pf_maximumHCALPFClusterEt_isLoaded = true;
		}
		return taus_pf_maximumHCALPFClusterEt_;
	}
	vector<float> &taus_pf_segComp()
	{
		if (not taus_pf_segComp_isLoaded) {
			if (taus_pf_segComp_branch != 0) {
				taus_pf_segComp_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = taus_pf_segComp_.begin(); i != taus_pf_segComp_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch taus_pf_segComp_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_segComp_branch does not exist!\n");
				exit(1);
			}
			taus_pf_segComp_isLoaded = true;
		}
		return taus_pf_segComp_;
	}
	vector<float> &photons_e1x5()
	{
		if (not photons_e1x5_isLoaded) {
			if (photons_e1x5_branch != 0) {
				photons_e1x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_e1x5_.begin(); i != photons_e1x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_e1x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_e1x5_branch does not exist!\n");
				exit(1);
			}
			photons_e1x5_isLoaded = true;
		}
		return photons_e1x5_;
	}
	vector<float> &photons_e2x5Max()
	{
		if (not photons_e2x5Max_isLoaded) {
			if (photons_e2x5Max_branch != 0) {
				photons_e2x5Max_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_e2x5Max_.begin(); i != photons_e2x5Max_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_e2x5Max_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			photons_e2x5Max_isLoaded = true;
		}
		return photons_e2x5Max_;
	}
	vector<float> &photons_e3x3()
	{
		if (not photons_e3x3_isLoaded) {
			if (photons_e3x3_branch != 0) {
				photons_e3x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_e3x3_.begin(); i != photons_e3x3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_e3x3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_e3x3_branch does not exist!\n");
				exit(1);
			}
			photons_e3x3_isLoaded = true;
		}
		return photons_e3x3_;
	}
	vector<float> &photons_e5x5()
	{
		if (not photons_e5x5_isLoaded) {
			if (photons_e5x5_branch != 0) {
				photons_e5x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_e5x5_.begin(); i != photons_e5x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_e5x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_e5x5_branch does not exist!\n");
				exit(1);
			}
			photons_e5x5_isLoaded = true;
		}
		return photons_e5x5_;
	}
	vector<float> &photons_eMax()
	{
		if (not photons_eMax_isLoaded) {
			if (photons_eMax_branch != 0) {
				photons_eMax_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_eMax_.begin(); i != photons_eMax_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_eMax_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_eMax_branch does not exist!\n");
				exit(1);
			}
			photons_eMax_isLoaded = true;
		}
		return photons_eMax_;
	}
	vector<float> &photons_eSC()
	{
		if (not photons_eSC_isLoaded) {
			if (photons_eSC_branch != 0) {
				photons_eSC_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_eSC_.begin(); i != photons_eSC_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_eSC_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_eSC_branch does not exist!\n");
				exit(1);
			}
			photons_eSC_isLoaded = true;
		}
		return photons_eSC_;
	}
	vector<float> &photons_eSCPresh()
	{
		if (not photons_eSCPresh_isLoaded) {
			if (photons_eSCPresh_branch != 0) {
				photons_eSCPresh_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_eSCPresh_.begin(); i != photons_eSCPresh_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_eSCPresh_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			photons_eSCPresh_isLoaded = true;
		}
		return photons_eSCPresh_;
	}
	vector<float> &photons_eSCRaw()
	{
		if (not photons_eSCRaw_isLoaded) {
			if (photons_eSCRaw_branch != 0) {
				photons_eSCRaw_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_eSCRaw_.begin(); i != photons_eSCRaw_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_eSCRaw_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			photons_eSCRaw_isLoaded = true;
		}
		return photons_eSCRaw_;
	}
	vector<float> &photons_eSeed()
	{
		if (not photons_eSeed_isLoaded) {
			if (photons_eSeed_branch != 0) {
				photons_eSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_eSeed_.begin(); i != photons_eSeed_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_eSeed_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_eSeed_branch does not exist!\n");
				exit(1);
			}
			photons_eSeed_isLoaded = true;
		}
		return photons_eSeed_;
	}
	vector<float> &photons_ecalIso()
	{
		if (not photons_ecalIso_isLoaded) {
			if (photons_ecalIso_branch != 0) {
				photons_ecalIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_ecalIso_.begin(); i != photons_ecalIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_ecalIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_ecalIso_branch does not exist!\n");
				exit(1);
			}
			photons_ecalIso_isLoaded = true;
		}
		return photons_ecalIso_;
	}
	vector<float> &photons_hOverE()
	{
		if (not photons_hOverE_isLoaded) {
			if (photons_hOverE_branch != 0) {
				photons_hOverE_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_hOverE_.begin(); i != photons_hOverE_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_hOverE_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_hOverE_branch does not exist!\n");
				exit(1);
			}
			photons_hOverE_isLoaded = true;
		}
		return photons_hOverE_;
	}
	vector<float> &photons_hcalIso()
	{
		if (not photons_hcalIso_isLoaded) {
			if (photons_hcalIso_branch != 0) {
				photons_hcalIso_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_hcalIso_.begin(); i != photons_hcalIso_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_hcalIso_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_hcalIso_branch does not exist!\n");
				exit(1);
			}
			photons_hcalIso_isLoaded = true;
		}
		return photons_hcalIso_;
	}
	vector<float> &photons_sigmaEtaEta()
	{
		if (not photons_sigmaEtaEta_isLoaded) {
			if (photons_sigmaEtaEta_branch != 0) {
				photons_sigmaEtaEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_sigmaEtaEta_.begin(); i != photons_sigmaEtaEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_sigmaEtaEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaEtaEta_isLoaded = true;
		}
		return photons_sigmaEtaEta_;
	}
	vector<float> &photons_sigmaIEtaIEta()
	{
		if (not photons_sigmaIEtaIEta_isLoaded) {
			if (photons_sigmaIEtaIEta_branch != 0) {
				photons_sigmaIEtaIEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_sigmaIEtaIEta_.begin(); i != photons_sigmaIEtaIEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_sigmaIEtaIEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaIEtaIEta_isLoaded = true;
		}
		return photons_sigmaIEtaIEta_;
	}
	vector<float> &photons_sigmaIPhiIPhi()
	{
		if (not photons_sigmaIPhiIPhi_isLoaded) {
			if (photons_sigmaIPhiIPhi_branch != 0) {
				photons_sigmaIPhiIPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_sigmaIPhiIPhi_.begin(); i != photons_sigmaIPhiIPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_sigmaIPhiIPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaIPhiIPhi_isLoaded = true;
		}
		return photons_sigmaIPhiIPhi_;
	}
	vector<float> &photons_sigmaPhiPhi()
	{
		if (not photons_sigmaPhiPhi_isLoaded) {
			if (photons_sigmaPhiPhi_branch != 0) {
				photons_sigmaPhiPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_sigmaPhiPhi_.begin(); i != photons_sigmaPhiPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_sigmaPhiPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaPhiPhi_isLoaded = true;
		}
		return photons_sigmaPhiPhi_;
	}
	vector<float> &photons_tkIsoHollow()
	{
		if (not photons_tkIsoHollow_isLoaded) {
			if (photons_tkIsoHollow_branch != 0) {
				photons_tkIsoHollow_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_tkIsoHollow_.begin(); i != photons_tkIsoHollow_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_tkIsoHollow_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_tkIsoHollow_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoHollow_isLoaded = true;
		}
		return photons_tkIsoHollow_;
	}
	vector<float> &photons_tkIsoSolid()
	{
		if (not photons_tkIsoSolid_isLoaded) {
			if (photons_tkIsoSolid_branch != 0) {
				photons_tkIsoSolid_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = photons_tkIsoSolid_.begin(); i != photons_tkIsoSolid_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch photons_tkIsoSolid_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_tkIsoSolid_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoSolid_isLoaded = true;
		}
		return photons_tkIsoSolid_;
	}
	vector<float> &ran_dRClosestTower()
	{
		if (not ran_dRClosestTower_isLoaded) {
			if (ran_dRClosestTower_branch != 0) {
				ran_dRClosestTower_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_dRClosestTower_.begin(); i != ran_dRClosestTower_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_dRClosestTower_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_dRClosestTower_branch does not exist!\n");
				exit(1);
			}
			ran_dRClosestTower_isLoaded = true;
		}
		return ran_dRClosestTower_;
	}
	vector<float> &ran_dRClosestTowerEmEt()
	{
		if (not ran_dRClosestTowerEmEt_isLoaded) {
			if (ran_dRClosestTowerEmEt_branch != 0) {
				ran_dRClosestTowerEmEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_dRClosestTowerEmEt_.begin(); i != ran_dRClosestTowerEmEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_dRClosestTowerEmEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_dRClosestTowerEmEt_branch does not exist!\n");
				exit(1);
			}
			ran_dRClosestTowerEmEt_isLoaded = true;
		}
		return ran_dRClosestTowerEmEt_;
	}
	vector<float> &ran_ecalIso03_egamma()
	{
		if (not ran_ecalIso03_egamma_isLoaded) {
			if (ran_ecalIso03_egamma_branch != 0) {
				ran_ecalIso03_egamma_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_ecalIso03_egamma_.begin(); i != ran_ecalIso03_egamma_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_ecalIso03_egamma_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_ecalIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_ecalIso03_egamma_isLoaded = true;
		}
		return ran_ecalIso03_egamma_;
	}
	vector<float> &ran_ecalIso03_mu()
	{
		if (not ran_ecalIso03_mu_isLoaded) {
			if (ran_ecalIso03_mu_branch != 0) {
				ran_ecalIso03_mu_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_ecalIso03_mu_.begin(); i != ran_ecalIso03_mu_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_ecalIso03_mu_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_ecalIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_ecalIso03_mu_isLoaded = true;
		}
		return ran_ecalIso03_mu_;
	}
	vector<float> &ran_hcalD1Iso03_egamma()
	{
		if (not ran_hcalD1Iso03_egamma_isLoaded) {
			if (ran_hcalD1Iso03_egamma_branch != 0) {
				ran_hcalD1Iso03_egamma_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_hcalD1Iso03_egamma_.begin(); i != ran_hcalD1Iso03_egamma_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_hcalD1Iso03_egamma_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_hcalD1Iso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalD1Iso03_egamma_isLoaded = true;
		}
		return ran_hcalD1Iso03_egamma_;
	}
	vector<float> &ran_hcalD2Iso03_egamma()
	{
		if (not ran_hcalD2Iso03_egamma_isLoaded) {
			if (ran_hcalD2Iso03_egamma_branch != 0) {
				ran_hcalD2Iso03_egamma_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_hcalD2Iso03_egamma_.begin(); i != ran_hcalD2Iso03_egamma_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_hcalD2Iso03_egamma_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_hcalD2Iso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalD2Iso03_egamma_isLoaded = true;
		}
		return ran_hcalD2Iso03_egamma_;
	}
	vector<float> &ran_hcalIso03_egamma()
	{
		if (not ran_hcalIso03_egamma_isLoaded) {
			if (ran_hcalIso03_egamma_branch != 0) {
				ran_hcalIso03_egamma_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_hcalIso03_egamma_.begin(); i != ran_hcalIso03_egamma_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_hcalIso03_egamma_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_hcalIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalIso03_egamma_isLoaded = true;
		}
		return ran_hcalIso03_egamma_;
	}
	vector<float> &ran_hcalIso03_mu()
	{
		if (not ran_hcalIso03_mu_isLoaded) {
			if (ran_hcalIso03_mu_branch != 0) {
				ran_hcalIso03_mu_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_hcalIso03_mu_.begin(); i != ran_hcalIso03_mu_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_hcalIso03_mu_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_hcalIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_hcalIso03_mu_isLoaded = true;
		}
		return ran_hcalIso03_mu_;
	}
	vector<float> &ran_hoIso03_mu()
	{
		if (not ran_hoIso03_mu_isLoaded) {
			if (ran_hoIso03_mu_branch != 0) {
				ran_hoIso03_mu_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_hoIso03_mu_.begin(); i != ran_hoIso03_mu_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_hoIso03_mu_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_hoIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_hoIso03_mu_isLoaded = true;
		}
		return ran_hoIso03_mu_;
	}
	vector<float> &ran_towerEmEt()
	{
		if (not ran_towerEmEt_isLoaded) {
			if (ran_towerEmEt_branch != 0) {
				ran_towerEmEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_towerEmEt_.begin(); i != ran_towerEmEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_towerEmEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_towerEmEt_branch does not exist!\n");
				exit(1);
			}
			ran_towerEmEt_isLoaded = true;
		}
		return ran_towerEmEt_;
	}
	vector<float> &ran_towerHadEt()
	{
		if (not ran_towerHadEt_isLoaded) {
			if (ran_towerHadEt_branch != 0) {
				ran_towerHadEt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_towerHadEt_.begin(); i != ran_towerHadEt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_towerHadEt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_towerHadEt_branch does not exist!\n");
				exit(1);
			}
			ran_towerHadEt_isLoaded = true;
		}
		return ran_towerHadEt_;
	}
	vector<float> &ran_trkIso03_egamma()
	{
		if (not ran_trkIso03_egamma_isLoaded) {
			if (ran_trkIso03_egamma_branch != 0) {
				ran_trkIso03_egamma_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_trkIso03_egamma_.begin(); i != ran_trkIso03_egamma_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_trkIso03_egamma_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_trkIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_trkIso03_egamma_isLoaded = true;
		}
		return ran_trkIso03_egamma_;
	}
	vector<float> &ran_trkIso03_mu()
	{
		if (not ran_trkIso03_mu_isLoaded) {
			if (ran_trkIso03_mu_branch != 0) {
				ran_trkIso03_mu_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = ran_trkIso03_mu_.begin(); i != ran_trkIso03_mu_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch ran_trkIso03_mu_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_trkIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_trkIso03_mu_isLoaded = true;
		}
		return ran_trkIso03_mu_;
	}
	vector<float> &scs_clustersSize()
	{
		if (not scs_clustersSize_isLoaded) {
			if (scs_clustersSize_branch != 0) {
				scs_clustersSize_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_clustersSize_.begin(); i != scs_clustersSize_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_clustersSize_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_clustersSize_branch does not exist!\n");
				exit(1);
			}
			scs_clustersSize_isLoaded = true;
		}
		return scs_clustersSize_;
	}
	vector<float> &scs_crystalsSize()
	{
		if (not scs_crystalsSize_isLoaded) {
			if (scs_crystalsSize_branch != 0) {
				scs_crystalsSize_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_crystalsSize_.begin(); i != scs_crystalsSize_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_crystalsSize_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_crystalsSize_branch does not exist!\n");
				exit(1);
			}
			scs_crystalsSize_isLoaded = true;
		}
		return scs_crystalsSize_;
	}
	vector<float> &scs_e1x3()
	{
		if (not scs_e1x3_isLoaded) {
			if (scs_e1x3_branch != 0) {
				scs_e1x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e1x3_.begin(); i != scs_e1x3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e1x3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e1x3_branch does not exist!\n");
				exit(1);
			}
			scs_e1x3_isLoaded = true;
		}
		return scs_e1x3_;
	}
	vector<float> &scs_e1x5()
	{
		if (not scs_e1x5_isLoaded) {
			if (scs_e1x5_branch != 0) {
				scs_e1x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e1x5_.begin(); i != scs_e1x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e1x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e1x5_branch does not exist!\n");
				exit(1);
			}
			scs_e1x5_isLoaded = true;
		}
		return scs_e1x5_;
	}
	vector<float> &scs_e2nd()
	{
		if (not scs_e2nd_isLoaded) {
			if (scs_e2nd_branch != 0) {
				scs_e2nd_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e2nd_.begin(); i != scs_e2nd_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e2nd_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e2nd_branch does not exist!\n");
				exit(1);
			}
			scs_e2nd_isLoaded = true;
		}
		return scs_e2nd_;
	}
	vector<float> &scs_e2x2()
	{
		if (not scs_e2x2_isLoaded) {
			if (scs_e2x2_branch != 0) {
				scs_e2x2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e2x2_.begin(); i != scs_e2x2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e2x2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e2x2_branch does not exist!\n");
				exit(1);
			}
			scs_e2x2_isLoaded = true;
		}
		return scs_e2x2_;
	}
	vector<float> &scs_e2x5Max()
	{
		if (not scs_e2x5Max_isLoaded) {
			if (scs_e2x5Max_branch != 0) {
				scs_e2x5Max_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e2x5Max_.begin(); i != scs_e2x5Max_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e2x5Max_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			scs_e2x5Max_isLoaded = true;
		}
		return scs_e2x5Max_;
	}
	vector<float> &scs_e3x1()
	{
		if (not scs_e3x1_isLoaded) {
			if (scs_e3x1_branch != 0) {
				scs_e3x1_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e3x1_.begin(); i != scs_e3x1_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e3x1_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e3x1_branch does not exist!\n");
				exit(1);
			}
			scs_e3x1_isLoaded = true;
		}
		return scs_e3x1_;
	}
	vector<float> &scs_e3x2()
	{
		if (not scs_e3x2_isLoaded) {
			if (scs_e3x2_branch != 0) {
				scs_e3x2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e3x2_.begin(); i != scs_e3x2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e3x2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e3x2_branch does not exist!\n");
				exit(1);
			}
			scs_e3x2_isLoaded = true;
		}
		return scs_e3x2_;
	}
	vector<float> &scs_e3x3()
	{
		if (not scs_e3x3_isLoaded) {
			if (scs_e3x3_branch != 0) {
				scs_e3x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e3x3_.begin(); i != scs_e3x3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e3x3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e3x3_branch does not exist!\n");
				exit(1);
			}
			scs_e3x3_isLoaded = true;
		}
		return scs_e3x3_;
	}
	vector<float> &scs_e4x4()
	{
		if (not scs_e4x4_isLoaded) {
			if (scs_e4x4_branch != 0) {
				scs_e4x4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e4x4_.begin(); i != scs_e4x4_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e4x4_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e4x4_branch does not exist!\n");
				exit(1);
			}
			scs_e4x4_isLoaded = true;
		}
		return scs_e4x4_;
	}
	vector<float> &scs_e5x5()
	{
		if (not scs_e5x5_isLoaded) {
			if (scs_e5x5_branch != 0) {
				scs_e5x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_e5x5_.begin(); i != scs_e5x5_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_e5x5_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_e5x5_branch does not exist!\n");
				exit(1);
			}
			scs_e5x5_isLoaded = true;
		}
		return scs_e5x5_;
	}
	vector<float> &scs_eMax()
	{
		if (not scs_eMax_isLoaded) {
			if (scs_eMax_branch != 0) {
				scs_eMax_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_eMax_.begin(); i != scs_eMax_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_eMax_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_eMax_branch does not exist!\n");
				exit(1);
			}
			scs_eMax_isLoaded = true;
		}
		return scs_eMax_;
	}
	vector<float> &scs_eSeed()
	{
		if (not scs_eSeed_isLoaded) {
			if (scs_eSeed_branch != 0) {
				scs_eSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_eSeed_.begin(); i != scs_eSeed_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_eSeed_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_eSeed_branch does not exist!\n");
				exit(1);
			}
			scs_eSeed_isLoaded = true;
		}
		return scs_eSeed_;
	}
	vector<float> &scs_energy()
	{
		if (not scs_energy_isLoaded) {
			if (scs_energy_branch != 0) {
				scs_energy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_energy_.begin(); i != scs_energy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_energy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_energy_branch does not exist!\n");
				exit(1);
			}
			scs_energy_isLoaded = true;
		}
		return scs_energy_;
	}
	vector<float> &scs_eta()
	{
		if (not scs_eta_isLoaded) {
			if (scs_eta_branch != 0) {
				scs_eta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_eta_.begin(); i != scs_eta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_eta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_eta_branch does not exist!\n");
				exit(1);
			}
			scs_eta_isLoaded = true;
		}
		return scs_eta_;
	}
	vector<float> &scs_hoe()
	{
		if (not scs_hoe_isLoaded) {
			if (scs_hoe_branch != 0) {
				scs_hoe_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_hoe_.begin(); i != scs_hoe_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_hoe_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_hoe_branch does not exist!\n");
				exit(1);
			}
			scs_hoe_isLoaded = true;
		}
		return scs_hoe_;
	}
	vector<float> &scs_phi()
	{
		if (not scs_phi_isLoaded) {
			if (scs_phi_branch != 0) {
				scs_phi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_phi_.begin(); i != scs_phi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_phi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_phi_branch does not exist!\n");
				exit(1);
			}
			scs_phi_isLoaded = true;
		}
		return scs_phi_;
	}
	vector<float> &scs_preshowerEnergy()
	{
		if (not scs_preshowerEnergy_isLoaded) {
			if (scs_preshowerEnergy_branch != 0) {
				scs_preshowerEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_preshowerEnergy_.begin(); i != scs_preshowerEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_preshowerEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_preshowerEnergy_branch does not exist!\n");
				exit(1);
			}
			scs_preshowerEnergy_isLoaded = true;
		}
		return scs_preshowerEnergy_;
	}
	vector<float> &scs_rawEnergy()
	{
		if (not scs_rawEnergy_isLoaded) {
			if (scs_rawEnergy_branch != 0) {
				scs_rawEnergy_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_rawEnergy_.begin(); i != scs_rawEnergy_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_rawEnergy_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_rawEnergy_branch does not exist!\n");
				exit(1);
			}
			scs_rawEnergy_isLoaded = true;
		}
		return scs_rawEnergy_;
	}
	vector<float> &scs_sigmaEtaEta()
	{
		if (not scs_sigmaEtaEta_isLoaded) {
			if (scs_sigmaEtaEta_branch != 0) {
				scs_sigmaEtaEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaEtaEta_.begin(); i != scs_sigmaEtaEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaEtaEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaEtaEta_isLoaded = true;
		}
		return scs_sigmaEtaEta_;
	}
	vector<float> &scs_sigmaEtaPhi()
	{
		if (not scs_sigmaEtaPhi_isLoaded) {
			if (scs_sigmaEtaPhi_branch != 0) {
				scs_sigmaEtaPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaEtaPhi_.begin(); i != scs_sigmaEtaPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaEtaPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaEtaPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaEtaPhi_isLoaded = true;
		}
		return scs_sigmaEtaPhi_;
	}
	vector<float> &scs_sigmaIEtaIEta()
	{
		if (not scs_sigmaIEtaIEta_isLoaded) {
			if (scs_sigmaIEtaIEta_branch != 0) {
				scs_sigmaIEtaIEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaIEtaIEta_.begin(); i != scs_sigmaIEtaIEta_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaIEtaIEta_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIEtaIEta_isLoaded = true;
		}
		return scs_sigmaIEtaIEta_;
	}
	vector<float> &scs_sigmaIEtaIPhi()
	{
		if (not scs_sigmaIEtaIPhi_isLoaded) {
			if (scs_sigmaIEtaIPhi_branch != 0) {
				scs_sigmaIEtaIPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaIEtaIPhi_.begin(); i != scs_sigmaIEtaIPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaIEtaIPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaIEtaIPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIEtaIPhi_isLoaded = true;
		}
		return scs_sigmaIEtaIPhi_;
	}
	vector<float> &scs_sigmaIPhiIPhi()
	{
		if (not scs_sigmaIPhiIPhi_isLoaded) {
			if (scs_sigmaIPhiIPhi_branch != 0) {
				scs_sigmaIPhiIPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaIPhiIPhi_.begin(); i != scs_sigmaIPhiIPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaIPhiIPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIPhiIPhi_isLoaded = true;
		}
		return scs_sigmaIPhiIPhi_;
	}
	vector<float> &scs_sigmaPhiPhi()
	{
		if (not scs_sigmaPhiPhi_isLoaded) {
			if (scs_sigmaPhiPhi_branch != 0) {
				scs_sigmaPhiPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_sigmaPhiPhi_.begin(); i != scs_sigmaPhiPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_sigmaPhiPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaPhiPhi_isLoaded = true;
		}
		return scs_sigmaPhiPhi_;
	}
	vector<float> &scs_timeSeed()
	{
		if (not scs_timeSeed_isLoaded) {
			if (scs_timeSeed_branch != 0) {
				scs_timeSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scs_timeSeed_.begin(); i != scs_timeSeed_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scs_timeSeed_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_timeSeed_branch does not exist!\n");
				exit(1);
			}
			scs_timeSeed_isLoaded = true;
		}
		return scs_timeSeed_;
	}
	vector<float> &scjets_approximatefHPD()
	{
		if (not scjets_approximatefHPD_isLoaded) {
			if (scjets_approximatefHPD_branch != 0) {
				scjets_approximatefHPD_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_approximatefHPD_.begin(); i != scjets_approximatefHPD_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_approximatefHPD_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_approximatefHPD_branch does not exist!\n");
				exit(1);
			}
			scjets_approximatefHPD_isLoaded = true;
		}
		return scjets_approximatefHPD_;
	}
	vector<float> &scjets_approximatefRBX()
	{
		if (not scjets_approximatefRBX_isLoaded) {
			if (scjets_approximatefRBX_branch != 0) {
				scjets_approximatefRBX_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_approximatefRBX_.begin(); i != scjets_approximatefRBX_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_approximatefRBX_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_approximatefRBX_branch does not exist!\n");
				exit(1);
			}
			scjets_approximatefRBX_isLoaded = true;
		}
		return scjets_approximatefRBX_;
	}
	vector<float> &scjets_cor()
	{
		if (not scjets_cor_isLoaded) {
			if (scjets_cor_branch != 0) {
				scjets_cor_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_cor_.begin(); i != scjets_cor_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_cor_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_cor_branch does not exist!\n");
				exit(1);
			}
			scjets_cor_isLoaded = true;
		}
		return scjets_cor_;
	}
	vector<float> &scjets_emFrac()
	{
		if (not scjets_emFrac_isLoaded) {
			if (scjets_emFrac_branch != 0) {
				scjets_emFrac_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_emFrac_.begin(); i != scjets_emFrac_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_emFrac_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_emFrac_branch does not exist!\n");
				exit(1);
			}
			scjets_emFrac_isLoaded = true;
		}
		return scjets_emFrac_;
	}
	vector<float> &scjets_fHPD()
	{
		if (not scjets_fHPD_isLoaded) {
			if (scjets_fHPD_branch != 0) {
				scjets_fHPD_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fHPD_.begin(); i != scjets_fHPD_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fHPD_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fHPD_branch does not exist!\n");
				exit(1);
			}
			scjets_fHPD_isLoaded = true;
		}
		return scjets_fHPD_;
	}
	vector<float> &scjets_fRBX()
	{
		if (not scjets_fRBX_isLoaded) {
			if (scjets_fRBX_branch != 0) {
				scjets_fRBX_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fRBX_.begin(); i != scjets_fRBX_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fRBX_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fRBX_branch does not exist!\n");
				exit(1);
			}
			scjets_fRBX_isLoaded = true;
		}
		return scjets_fRBX_;
	}
	vector<float> &scjets_fSubDetector1()
	{
		if (not scjets_fSubDetector1_isLoaded) {
			if (scjets_fSubDetector1_branch != 0) {
				scjets_fSubDetector1_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fSubDetector1_.begin(); i != scjets_fSubDetector1_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fSubDetector1_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fSubDetector1_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector1_isLoaded = true;
		}
		return scjets_fSubDetector1_;
	}
	vector<float> &scjets_fSubDetector2()
	{
		if (not scjets_fSubDetector2_isLoaded) {
			if (scjets_fSubDetector2_branch != 0) {
				scjets_fSubDetector2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fSubDetector2_.begin(); i != scjets_fSubDetector2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fSubDetector2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fSubDetector2_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector2_isLoaded = true;
		}
		return scjets_fSubDetector2_;
	}
	vector<float> &scjets_fSubDetector3()
	{
		if (not scjets_fSubDetector3_isLoaded) {
			if (scjets_fSubDetector3_branch != 0) {
				scjets_fSubDetector3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fSubDetector3_.begin(); i != scjets_fSubDetector3_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fSubDetector3_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fSubDetector3_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector3_isLoaded = true;
		}
		return scjets_fSubDetector3_;
	}
	vector<float> &scjets_fSubDetector4()
	{
		if (not scjets_fSubDetector4_isLoaded) {
			if (scjets_fSubDetector4_branch != 0) {
				scjets_fSubDetector4_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_fSubDetector4_.begin(); i != scjets_fSubDetector4_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_fSubDetector4_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_fSubDetector4_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector4_isLoaded = true;
		}
		return scjets_fSubDetector4_;
	}
	vector<float> &scjets_hitsInN90()
	{
		if (not scjets_hitsInN90_isLoaded) {
			if (scjets_hitsInN90_branch != 0) {
				scjets_hitsInN90_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_hitsInN90_.begin(); i != scjets_hitsInN90_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_hitsInN90_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_hitsInN90_branch does not exist!\n");
				exit(1);
			}
			scjets_hitsInN90_isLoaded = true;
		}
		return scjets_hitsInN90_;
	}
	vector<float> &scjets_n90Hits()
	{
		if (not scjets_n90Hits_isLoaded) {
			if (scjets_n90Hits_branch != 0) {
				scjets_n90Hits_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_n90Hits_.begin(); i != scjets_n90Hits_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_n90Hits_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_n90Hits_branch does not exist!\n");
				exit(1);
			}
			scjets_n90Hits_isLoaded = true;
		}
		return scjets_n90Hits_;
	}
	vector<float> &scjets_nECALTowers()
	{
		if (not scjets_nECALTowers_isLoaded) {
			if (scjets_nECALTowers_branch != 0) {
				scjets_nECALTowers_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_nECALTowers_.begin(); i != scjets_nECALTowers_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_nECALTowers_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_nECALTowers_branch does not exist!\n");
				exit(1);
			}
			scjets_nECALTowers_isLoaded = true;
		}
		return scjets_nECALTowers_;
	}
	vector<float> &scjets_nHCALTowers()
	{
		if (not scjets_nHCALTowers_isLoaded) {
			if (scjets_nHCALTowers_branch != 0) {
				scjets_nHCALTowers_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_nHCALTowers_.begin(); i != scjets_nHCALTowers_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_nHCALTowers_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_nHCALTowers_branch does not exist!\n");
				exit(1);
			}
			scjets_nHCALTowers_isLoaded = true;
		}
		return scjets_nHCALTowers_;
	}
	vector<float> &scjets_restrictedEMF()
	{
		if (not scjets_restrictedEMF_isLoaded) {
			if (scjets_restrictedEMF_branch != 0) {
				scjets_restrictedEMF_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = scjets_restrictedEMF_.begin(); i != scjets_restrictedEMF_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch scjets_restrictedEMF_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scjets_restrictedEMF_branch does not exist!\n");
				exit(1);
			}
			scjets_restrictedEMF_isLoaded = true;
		}
		return scjets_restrictedEMF_;
	}
	vector<float> &mus_tcmet_deltax()
	{
		if (not mus_tcmet_deltax_isLoaded) {
			if (mus_tcmet_deltax_branch != 0) {
				mus_tcmet_deltax_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_tcmet_deltax_.begin(); i != mus_tcmet_deltax_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_tcmet_deltax_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_tcmet_deltax_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_deltax_isLoaded = true;
		}
		return mus_tcmet_deltax_;
	}
	vector<float> &mus_tcmet_deltay()
	{
		if (not mus_tcmet_deltay_isLoaded) {
			if (mus_tcmet_deltay_branch != 0) {
				mus_tcmet_deltay_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = mus_tcmet_deltay_.begin(); i != mus_tcmet_deltay_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch mus_tcmet_deltay_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_tcmet_deltay_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_deltay_isLoaded = true;
		}
		return mus_tcmet_deltay_;
	}
	vector<float> &trks_chi2()
	{
		if (not trks_chi2_isLoaded) {
			if (trks_chi2_branch != 0) {
				trks_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_chi2_.begin(); i != trks_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_chi2_branch does not exist!\n");
				exit(1);
			}
			trks_chi2_isLoaded = true;
		}
		return trks_chi2_;
	}
	vector<float> &trks_d0()
	{
		if (not trks_d0_isLoaded) {
			if (trks_d0_branch != 0) {
				trks_d0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0_.begin(); i != trks_d0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0_branch does not exist!\n");
				exit(1);
			}
			trks_d0_isLoaded = true;
		}
		return trks_d0_;
	}
	vector<float> &trks_d0Err()
	{
		if (not trks_d0Err_isLoaded) {
			if (trks_d0Err_branch != 0) {
				trks_d0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0Err_.begin(); i != trks_d0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0Err_branch does not exist!\n");
				exit(1);
			}
			trks_d0Err_isLoaded = true;
		}
		return trks_d0Err_;
	}
	vector<float> &trks_d0corr()
	{
		if (not trks_d0corr_isLoaded) {
			if (trks_d0corr_branch != 0) {
				trks_d0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0corr_.begin(); i != trks_d0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0corr_branch does not exist!\n");
				exit(1);
			}
			trks_d0corr_isLoaded = true;
		}
		return trks_d0corr_;
	}
	vector<float> &trks_d0corrPhi()
	{
		if (not trks_d0corrPhi_isLoaded) {
			if (trks_d0corrPhi_branch != 0) {
				trks_d0corrPhi_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0corrPhi_.begin(); i != trks_d0corrPhi_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0corrPhi_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			trks_d0corrPhi_isLoaded = true;
		}
		return trks_d0corrPhi_;
	}
	vector<float> &trks_d0phiCov()
	{
		if (not trks_d0phiCov_isLoaded) {
			if (trks_d0phiCov_branch != 0) {
				trks_d0phiCov_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0phiCov_.begin(); i != trks_d0phiCov_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0phiCov_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0phiCov_branch does not exist!\n");
				exit(1);
			}
			trks_d0phiCov_isLoaded = true;
		}
		return trks_d0phiCov_;
	}
	vector<float> &trks_etaErr()
	{
		if (not trks_etaErr_isLoaded) {
			if (trks_etaErr_branch != 0) {
				trks_etaErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_etaErr_.begin(); i != trks_etaErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_etaErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_etaErr_branch does not exist!\n");
				exit(1);
			}
			trks_etaErr_isLoaded = true;
		}
		return trks_etaErr_;
	}
	vector<float> &trks_layer1_charge()
	{
		if (not trks_layer1_charge_isLoaded) {
			if (trks_layer1_charge_branch != 0) {
				trks_layer1_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_layer1_charge_.begin(); i != trks_layer1_charge_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_layer1_charge_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_layer1_charge_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_charge_isLoaded = true;
		}
		return trks_layer1_charge_;
	}
	vector<float> &trks_ndof()
	{
		if (not trks_ndof_isLoaded) {
			if (trks_ndof_branch != 0) {
				trks_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_ndof_.begin(); i != trks_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_ndof_branch does not exist!\n");
				exit(1);
			}
			trks_ndof_isLoaded = true;
		}
		return trks_ndof_;
	}
	vector<float> &trks_phiErr()
	{
		if (not trks_phiErr_isLoaded) {
			if (trks_phiErr_branch != 0) {
				trks_phiErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_phiErr_.begin(); i != trks_phiErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_phiErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_phiErr_branch does not exist!\n");
				exit(1);
			}
			trks_phiErr_isLoaded = true;
		}
		return trks_phiErr_;
	}
	vector<float> &trks_ptErr()
	{
		if (not trks_ptErr_isLoaded) {
			if (trks_ptErr_branch != 0) {
				trks_ptErr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_ptErr_.begin(); i != trks_ptErr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_ptErr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_ptErr_branch does not exist!\n");
				exit(1);
			}
			trks_ptErr_isLoaded = true;
		}
		return trks_ptErr_;
	}
	vector<float> &trks_z0()
	{
		if (not trks_z0_isLoaded) {
			if (trks_z0_branch != 0) {
				trks_z0_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_z0_.begin(); i != trks_z0_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_z0_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_z0_branch does not exist!\n");
				exit(1);
			}
			trks_z0_isLoaded = true;
		}
		return trks_z0_;
	}
	vector<float> &trks_z0Err()
	{
		if (not trks_z0Err_isLoaded) {
			if (trks_z0Err_branch != 0) {
				trks_z0Err_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_z0Err_.begin(); i != trks_z0Err_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_z0Err_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_z0Err_branch does not exist!\n");
				exit(1);
			}
			trks_z0Err_isLoaded = true;
		}
		return trks_z0Err_;
	}
	vector<float> &trks_z0corr()
	{
		if (not trks_z0corr_isLoaded) {
			if (trks_z0corr_branch != 0) {
				trks_z0corr_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_z0corr_.begin(); i != trks_z0corr_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_z0corr_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_z0corr_branch does not exist!\n");
				exit(1);
			}
			trks_z0corr_isLoaded = true;
		}
		return trks_z0corr_;
	}
	vector<float> &trks_d0Errvtx()
	{
		if (not trks_d0Errvtx_isLoaded) {
			if (trks_d0Errvtx_branch != 0) {
				trks_d0Errvtx_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0Errvtx_.begin(); i != trks_d0Errvtx_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0Errvtx_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0Errvtx_branch does not exist!\n");
				exit(1);
			}
			trks_d0Errvtx_isLoaded = true;
		}
		return trks_d0Errvtx_;
	}
	vector<float> &trks_d0vtx()
	{
		if (not trks_d0vtx_isLoaded) {
			if (trks_d0vtx_branch != 0) {
				trks_d0vtx_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = trks_d0vtx_.begin(); i != trks_d0vtx_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch trks_d0vtx_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_d0vtx_branch does not exist!\n");
				exit(1);
			}
			trks_d0vtx_isLoaded = true;
		}
		return trks_d0vtx_;
	}
	vector<float> &vtxs_chi2()
	{
		if (not vtxs_chi2_isLoaded) {
			if (vtxs_chi2_branch != 0) {
				vtxs_chi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_chi2_.begin(); i != vtxs_chi2_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_chi2_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_chi2_branch does not exist!\n");
				exit(1);
			}
			vtxs_chi2_isLoaded = true;
		}
		return vtxs_chi2_;
	}
	vector<float> &vtxs_ndof()
	{
		if (not vtxs_ndof_isLoaded) {
			if (vtxs_ndof_branch != 0) {
				vtxs_ndof_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_ndof_.begin(); i != vtxs_ndof_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_ndof_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_ndof_branch does not exist!\n");
				exit(1);
			}
			vtxs_ndof_isLoaded = true;
		}
		return vtxs_ndof_;
	}
	vector<float> &vtxs_sumpt()
	{
		if (not vtxs_sumpt_isLoaded) {
			if (vtxs_sumpt_branch != 0) {
				vtxs_sumpt_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_sumpt_.begin(); i != vtxs_sumpt_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_sumpt_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_sumpt_branch does not exist!\n");
				exit(1);
			}
			vtxs_sumpt_isLoaded = true;
		}
		return vtxs_sumpt_;
	}
	vector<float> &vtxs_xError()
	{
		if (not vtxs_xError_isLoaded) {
			if (vtxs_xError_branch != 0) {
				vtxs_xError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_xError_.begin(); i != vtxs_xError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_xError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_xError_branch does not exist!\n");
				exit(1);
			}
			vtxs_xError_isLoaded = true;
		}
		return vtxs_xError_;
	}
	vector<float> &vtxs_yError()
	{
		if (not vtxs_yError_isLoaded) {
			if (vtxs_yError_branch != 0) {
				vtxs_yError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_yError_.begin(); i != vtxs_yError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_yError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_yError_branch does not exist!\n");
				exit(1);
			}
			vtxs_yError_isLoaded = true;
		}
		return vtxs_yError_;
	}
	vector<float> &vtxs_zError()
	{
		if (not vtxs_zError_isLoaded) {
			if (vtxs_zError_branch != 0) {
				vtxs_zError_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<float>::const_iterator i = vtxs_zError_.begin(); i != vtxs_zError_.end(); ++i) {
					if (not isfinite(*i)) {
						printf("branch vtxs_zError_branch contains a bad float: %f\n", *i);
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_zError_branch does not exist!\n");
				exit(1);
			}
			vtxs_zError_isLoaded = true;
		}
		return vtxs_zError_;
	}
	vector<vector<float> > &twrs_em3x3()
	{
		if (not twrs_em3x3_isLoaded) {
			if (twrs_em3x3_branch != 0) {
				twrs_em3x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_em3x3_.begin(); i != twrs_em3x3_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_em3x3_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_em3x3_branch does not exist!\n");
				exit(1);
			}
			twrs_em3x3_isLoaded = true;
		}
		return twrs_em3x3_;
	}
	vector<vector<float> > &twrs_em5x5()
	{
		if (not twrs_em5x5_isLoaded) {
			if (twrs_em5x5_branch != 0) {
				twrs_em5x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_em5x5_.begin(); i != twrs_em5x5_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_em5x5_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_em5x5_branch does not exist!\n");
				exit(1);
			}
			twrs_em5x5_isLoaded = true;
		}
		return twrs_em5x5_;
	}
	vector<vector<float> > &twrs_emSwiss()
	{
		if (not twrs_emSwiss_isLoaded) {
			if (twrs_emSwiss_branch != 0) {
				twrs_emSwiss_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_emSwiss_.begin(); i != twrs_emSwiss_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_emSwiss_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emSwiss_branch does not exist!\n");
				exit(1);
			}
			twrs_emSwiss_isLoaded = true;
		}
		return twrs_emSwiss_;
	}
	vector<vector<float> > &twrs_emThresh()
	{
		if (not twrs_emThresh_isLoaded) {
			if (twrs_emThresh_branch != 0) {
				twrs_emThresh_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_emThresh_.begin(); i != twrs_emThresh_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_emThresh_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThresh_branch does not exist!\n");
				exit(1);
			}
			twrs_emThresh_isLoaded = true;
		}
		return twrs_emThresh_;
	}
	vector<vector<float> > &twrs_emThreshChi2()
	{
		if (not twrs_emThreshChi2_isLoaded) {
			if (twrs_emThreshChi2_branch != 0) {
				twrs_emThreshChi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_emThreshChi2_.begin(); i != twrs_emThreshChi2_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_emThreshChi2_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThreshChi2_branch does not exist!\n");
				exit(1);
			}
			twrs_emThreshChi2_isLoaded = true;
		}
		return twrs_emThreshChi2_;
	}
	vector<vector<float> > &twrs_emThreshEta()
	{
		if (not twrs_emThreshEta_isLoaded) {
			if (twrs_emThreshEta_branch != 0) {
				twrs_emThreshEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_emThreshEta_.begin(); i != twrs_emThreshEta_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_emThreshEta_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThreshEta_branch does not exist!\n");
				exit(1);
			}
			twrs_emThreshEta_isLoaded = true;
		}
		return twrs_emThreshEta_;
	}
	vector<vector<float> > &twrs_emThreshTime()
	{
		if (not twrs_emThreshTime_isLoaded) {
			if (twrs_emThreshTime_branch != 0) {
				twrs_emThreshTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrs_emThreshTime_.begin(); i != twrs_emThreshTime_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrs_emThreshTime_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThreshTime_branch does not exist!\n");
				exit(1);
			}
			twrs_emThreshTime_isLoaded = true;
		}
		return twrs_emThreshTime_;
	}
	vector<vector<float> > &twrsUncleaned_em3x3()
	{
		if (not twrsUncleaned_em3x3_isLoaded) {
			if (twrsUncleaned_em3x3_branch != 0) {
				twrsUncleaned_em3x3_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_em3x3_.begin(); i != twrsUncleaned_em3x3_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_em3x3_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_em3x3_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_em3x3_isLoaded = true;
		}
		return twrsUncleaned_em3x3_;
	}
	vector<vector<float> > &twrsUncleaned_em5x5()
	{
		if (not twrsUncleaned_em5x5_isLoaded) {
			if (twrsUncleaned_em5x5_branch != 0) {
				twrsUncleaned_em5x5_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_em5x5_.begin(); i != twrsUncleaned_em5x5_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_em5x5_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_em5x5_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_em5x5_isLoaded = true;
		}
		return twrsUncleaned_em5x5_;
	}
	vector<vector<float> > &twrsUncleaned_emSwiss()
	{
		if (not twrsUncleaned_emSwiss_isLoaded) {
			if (twrsUncleaned_emSwiss_branch != 0) {
				twrsUncleaned_emSwiss_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_emSwiss_.begin(); i != twrsUncleaned_emSwiss_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_emSwiss_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emSwiss_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emSwiss_isLoaded = true;
		}
		return twrsUncleaned_emSwiss_;
	}
	vector<vector<float> > &twrsUncleaned_emThresh()
	{
		if (not twrsUncleaned_emThresh_isLoaded) {
			if (twrsUncleaned_emThresh_branch != 0) {
				twrsUncleaned_emThresh_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_emThresh_.begin(); i != twrsUncleaned_emThresh_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_emThresh_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThresh_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThresh_isLoaded = true;
		}
		return twrsUncleaned_emThresh_;
	}
	vector<vector<float> > &twrsUncleaned_emThreshChi2()
	{
		if (not twrsUncleaned_emThreshChi2_isLoaded) {
			if (twrsUncleaned_emThreshChi2_branch != 0) {
				twrsUncleaned_emThreshChi2_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_emThreshChi2_.begin(); i != twrsUncleaned_emThreshChi2_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_emThreshChi2_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThreshChi2_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThreshChi2_isLoaded = true;
		}
		return twrsUncleaned_emThreshChi2_;
	}
	vector<vector<float> > &twrsUncleaned_emThreshEta()
	{
		if (not twrsUncleaned_emThreshEta_isLoaded) {
			if (twrsUncleaned_emThreshEta_branch != 0) {
				twrsUncleaned_emThreshEta_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_emThreshEta_.begin(); i != twrsUncleaned_emThreshEta_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_emThreshEta_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThreshEta_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThreshEta_isLoaded = true;
		}
		return twrsUncleaned_emThreshEta_;
	}
	vector<vector<float> > &twrsUncleaned_emThreshTime()
	{
		if (not twrsUncleaned_emThreshTime_isLoaded) {
			if (twrsUncleaned_emThreshTime_branch != 0) {
				twrsUncleaned_emThreshTime_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = twrsUncleaned_emThreshTime_.begin(); i != twrsUncleaned_emThreshTime_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch twrsUncleaned_emThreshTime_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThreshTime_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThreshTime_isLoaded = true;
		}
		return twrsUncleaned_emThreshTime_;
	}
	vector<vector<float> > &vtxs_covMatrix()
	{
		if (not vtxs_covMatrix_isLoaded) {
			if (vtxs_covMatrix_branch != 0) {
				vtxs_covMatrix_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<vector<float> >::const_iterator i = vtxs_covMatrix_.begin(); i != vtxs_covMatrix_.end(); ++i) {
					for (vector<float>::const_iterator j = i->begin(); j != i->end(); ++j) {
						if (not isfinite(*j)) {
							printf("branch vtxs_covMatrix_branch contains a bad float: %f\n", *j);
							exit(1);
						}
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_covMatrix_branch does not exist!\n");
				exit(1);
			}
			vtxs_covMatrix_isLoaded = true;
		}
		return vtxs_covMatrix_;
	}
	int &evt_cscLooseHaloId()
	{
		if (not evt_cscLooseHaloId_isLoaded) {
			if (evt_cscLooseHaloId_branch != 0) {
				evt_cscLooseHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_cscLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_cscLooseHaloId_isLoaded = true;
		}
		return evt_cscLooseHaloId_;
	}
	int &evt_cscTightHaloId()
	{
		if (not evt_cscTightHaloId_isLoaded) {
			if (evt_cscTightHaloId_branch != 0) {
				evt_cscTightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_cscTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_cscTightHaloId_isLoaded = true;
		}
		return evt_cscTightHaloId_;
	}
	int &evt_ecalLooseHaloId()
	{
		if (not evt_ecalLooseHaloId_isLoaded) {
			if (evt_ecalLooseHaloId_branch != 0) {
				evt_ecalLooseHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_ecalLooseHaloId_isLoaded = true;
		}
		return evt_ecalLooseHaloId_;
	}
	int &evt_ecalTightHaloId()
	{
		if (not evt_ecalTightHaloId_isLoaded) {
			if (evt_ecalTightHaloId_branch != 0) {
				evt_ecalTightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_ecalTightHaloId_isLoaded = true;
		}
		return evt_ecalTightHaloId_;
	}
	int &evt_extremeTightHaloId()
	{
		if (not evt_extremeTightHaloId_isLoaded) {
			if (evt_extremeTightHaloId_branch != 0) {
				evt_extremeTightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_extremeTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_extremeTightHaloId_isLoaded = true;
		}
		return evt_extremeTightHaloId_;
	}
	int &evt_globalLooseHaloId()
	{
		if (not evt_globalLooseHaloId_isLoaded) {
			if (evt_globalLooseHaloId_branch != 0) {
				evt_globalLooseHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_globalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_globalLooseHaloId_isLoaded = true;
		}
		return evt_globalLooseHaloId_;
	}
	int &evt_globalTightHaloId()
	{
		if (not evt_globalTightHaloId_isLoaded) {
			if (evt_globalTightHaloId_branch != 0) {
				evt_globalTightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_globalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_globalTightHaloId_isLoaded = true;
		}
		return evt_globalTightHaloId_;
	}
	int &evt_hcalLooseHaloId()
	{
		if (not evt_hcalLooseHaloId_isLoaded) {
			if (evt_hcalLooseHaloId_branch != 0) {
				evt_hcalLooseHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_hcalLooseHaloId_isLoaded = true;
		}
		return evt_hcalLooseHaloId_;
	}
	int &evt_hcalTightHaloId()
	{
		if (not evt_hcalTightHaloId_isLoaded) {
			if (evt_hcalTightHaloId_branch != 0) {
				evt_hcalTightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_hcalTightHaloId_isLoaded = true;
		}
		return evt_hcalTightHaloId_;
	}
	int &evt_looseHaloId()
	{
		if (not evt_looseHaloId_isLoaded) {
			if (evt_looseHaloId_branch != 0) {
				evt_looseHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_looseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_looseHaloId_isLoaded = true;
		}
		return evt_looseHaloId_;
	}
	int &evt_tightHaloId()
	{
		if (not evt_tightHaloId_isLoaded) {
			if (evt_tightHaloId_branch != 0) {
				evt_tightHaloId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_tightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_tightHaloId_isLoaded = true;
		}
		return evt_tightHaloId_;
	}
	int &evt_bsType()
	{
		if (not evt_bsType_isLoaded) {
			if (evt_bsType_branch != 0) {
				evt_bsType_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bsType_branch does not exist!\n");
				exit(1);
			}
			evt_bsType_isLoaded = true;
		}
		return evt_bsType_;
	}
	int &evt_bunchCrossing()
	{
		if (not evt_bunchCrossing_isLoaded) {
			if (evt_bunchCrossing_branch != 0) {
				evt_bunchCrossing_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_bunchCrossing_branch does not exist!\n");
				exit(1);
			}
			evt_bunchCrossing_isLoaded = true;
		}
		return evt_bunchCrossing_;
	}
	int &evt_experimentType()
	{
		if (not evt_experimentType_isLoaded) {
			if (evt_experimentType_branch != 0) {
				evt_experimentType_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_experimentType_branch does not exist!\n");
				exit(1);
			}
			evt_experimentType_isLoaded = true;
		}
		return evt_experimentType_;
	}
	int &evt_orbitNumber()
	{
		if (not evt_orbitNumber_isLoaded) {
			if (evt_orbitNumber_branch != 0) {
				evt_orbitNumber_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_orbitNumber_branch does not exist!\n");
				exit(1);
			}
			evt_orbitNumber_isLoaded = true;
		}
		return evt_orbitNumber_;
	}
	int &evt_storeNumber()
	{
		if (not evt_storeNumber_isLoaded) {
			if (evt_storeNumber_branch != 0) {
				evt_storeNumber_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_storeNumber_branch does not exist!\n");
				exit(1);
			}
			evt_storeNumber_isLoaded = true;
		}
		return evt_storeNumber_;
	}
	int &hcalnoise_maxHPDHits()
	{
		if (not hcalnoise_maxHPDHits_isLoaded) {
			if (hcalnoise_maxHPDHits_branch != 0) {
				hcalnoise_maxHPDHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_maxHPDHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxHPDHits_isLoaded = true;
		}
		return hcalnoise_maxHPDHits_;
	}
	int &hcalnoise_maxRBXHits()
	{
		if (not hcalnoise_maxRBXHits_isLoaded) {
			if (hcalnoise_maxRBXHits_branch != 0) {
				hcalnoise_maxRBXHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_maxRBXHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxRBXHits_isLoaded = true;
		}
		return hcalnoise_maxRBXHits_;
	}
	int &hcalnoise_maxZeros()
	{
		if (not hcalnoise_maxZeros_isLoaded) {
			if (hcalnoise_maxZeros_branch != 0) {
				hcalnoise_maxZeros_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_maxZeros_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxZeros_isLoaded = true;
		}
		return hcalnoise_maxZeros_;
	}
	int &hcalnoise_noiseFilterStatus()
	{
		if (not hcalnoise_noiseFilterStatus_isLoaded) {
			if (hcalnoise_noiseFilterStatus_branch != 0) {
				hcalnoise_noiseFilterStatus_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_noiseFilterStatus_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseFilterStatus_isLoaded = true;
		}
		return hcalnoise_noiseFilterStatus_;
	}
	int &hcalnoise_noiseType()
	{
		if (not hcalnoise_noiseType_isLoaded) {
			if (hcalnoise_noiseType_branch != 0) {
				hcalnoise_noiseType_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_noiseType_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseType_isLoaded = true;
		}
		return hcalnoise_noiseType_;
	}
	int &hcalnoise_num10GeVHits()
	{
		if (not hcalnoise_num10GeVHits_isLoaded) {
			if (hcalnoise_num10GeVHits_branch != 0) {
				hcalnoise_num10GeVHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_num10GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num10GeVHits_isLoaded = true;
		}
		return hcalnoise_num10GeVHits_;
	}
	int &hcalnoise_num25GeVHits()
	{
		if (not hcalnoise_num25GeVHits_isLoaded) {
			if (hcalnoise_num25GeVHits_branch != 0) {
				hcalnoise_num25GeVHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_num25GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num25GeVHits_isLoaded = true;
		}
		return hcalnoise_num25GeVHits_;
	}
	int &hcalnoise_numProblematicRBXs()
	{
		if (not hcalnoise_numProblematicRBXs_isLoaded) {
			if (hcalnoise_numProblematicRBXs_branch != 0) {
				hcalnoise_numProblematicRBXs_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_numProblematicRBXs_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numProblematicRBXs_isLoaded = true;
		}
		return hcalnoise_numProblematicRBXs_;
	}
	int &hcalnoise_passHighLevelNoiseFilter()
	{
		if (not hcalnoise_passHighLevelNoiseFilter_isLoaded) {
			if (hcalnoise_passHighLevelNoiseFilter_branch != 0) {
				hcalnoise_passHighLevelNoiseFilter_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_passHighLevelNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passHighLevelNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passHighLevelNoiseFilter_;
	}
	int &hcalnoise_passLooseNoiseFilter()
	{
		if (not hcalnoise_passLooseNoiseFilter_isLoaded) {
			if (hcalnoise_passLooseNoiseFilter_branch != 0) {
				hcalnoise_passLooseNoiseFilter_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_passLooseNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passLooseNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passLooseNoiseFilter_;
	}
	int &hcalnoise_passTightNoiseFilter()
	{
		if (not hcalnoise_passTightNoiseFilter_isLoaded) {
			if (hcalnoise_passTightNoiseFilter_branch != 0) {
				hcalnoise_passTightNoiseFilter_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcalnoise_passTightNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passTightNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passTightNoiseFilter_;
	}
	int &l1_nemiso()
	{
		if (not l1_nemiso_isLoaded) {
			if (l1_nemiso_branch != 0) {
				l1_nemiso_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_nemiso_branch does not exist!\n");
				exit(1);
			}
			l1_nemiso_isLoaded = true;
		}
		return l1_nemiso_;
	}
	int &l1_nemnoiso()
	{
		if (not l1_nemnoiso_isLoaded) {
			if (l1_nemnoiso_branch != 0) {
				l1_nemnoiso_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_nemnoiso_branch does not exist!\n");
				exit(1);
			}
			l1_nemnoiso_isLoaded = true;
		}
		return l1_nemnoiso_;
	}
	int &l1_njetsc()
	{
		if (not l1_njetsc_isLoaded) {
			if (l1_njetsc_branch != 0) {
				l1_njetsc_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_njetsc_branch does not exist!\n");
				exit(1);
			}
			l1_njetsc_isLoaded = true;
		}
		return l1_njetsc_;
	}
	int &l1_njetsf()
	{
		if (not l1_njetsf_isLoaded) {
			if (l1_njetsf_branch != 0) {
				l1_njetsf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_njetsf_branch does not exist!\n");
				exit(1);
			}
			l1_njetsf_isLoaded = true;
		}
		return l1_njetsf_;
	}
	int &l1_njetst()
	{
		if (not l1_njetst_isLoaded) {
			if (l1_njetst_branch != 0) {
				l1_njetst_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_njetst_branch does not exist!\n");
				exit(1);
			}
			l1_njetst_isLoaded = true;
		}
		return l1_njetst_;
	}
	int &l1_nmus()
	{
		if (not l1_nmus_isLoaded) {
			if (l1_nmus_branch != 0) {
				l1_nmus_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_nmus_branch does not exist!\n");
				exit(1);
			}
			l1_nmus_isLoaded = true;
		}
		return l1_nmus_;
	}
	int &pdfinfo_id1()
	{
		if (not pdfinfo_id1_isLoaded) {
			if (pdfinfo_id1_branch != 0) {
				pdfinfo_id1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdfinfo_id1_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_id1_isLoaded = true;
		}
		return pdfinfo_id1_;
	}
	int &pdfinfo_id2()
	{
		if (not pdfinfo_id2_isLoaded) {
			if (pdfinfo_id2_branch != 0) {
				pdfinfo_id2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdfinfo_id2_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_id2_isLoaded = true;
		}
		return pdfinfo_id2_;
	}
	vector<int> &evt_ecaliPhiSuspects()
	{
		if (not evt_ecaliPhiSuspects_isLoaded) {
			if (evt_ecaliPhiSuspects_branch != 0) {
				evt_ecaliPhiSuspects_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ecaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_ecaliPhiSuspects_isLoaded = true;
		}
		return evt_ecaliPhiSuspects_;
	}
	vector<int> &evt_globaliPhiSuspects()
	{
		if (not evt_globaliPhiSuspects_isLoaded) {
			if (evt_globaliPhiSuspects_branch != 0) {
				evt_globaliPhiSuspects_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_globaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_globaliPhiSuspects_isLoaded = true;
		}
		return evt_globaliPhiSuspects_;
	}
	vector<int> &evt_hcaliPhiSuspects()
	{
		if (not evt_hcaliPhiSuspects_isLoaded) {
			if (evt_hcaliPhiSuspects_branch != 0) {
				evt_hcaliPhiSuspects_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_hcaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_hcaliPhiSuspects_isLoaded = true;
		}
		return evt_hcaliPhiSuspects_;
	}
	vector<int> &twrs_numCrystals()
	{
		if (not twrs_numCrystals_isLoaded) {
			if (twrs_numCrystals_branch != 0) {
				twrs_numCrystals_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numCrystals_branch does not exist!\n");
				exit(1);
			}
			twrs_numCrystals_isLoaded = true;
		}
		return twrs_numCrystals_;
	}
	vector<int> &twrsUncleaned_numCrystals()
	{
		if (not twrsUncleaned_numCrystals_isLoaded) {
			if (twrsUncleaned_numCrystals_branch != 0) {
				twrsUncleaned_numCrystals_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numCrystals_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numCrystals_isLoaded = true;
		}
		return twrsUncleaned_numCrystals_;
	}
	vector<int> &taus_calo_charge()
	{
		if (not taus_calo_charge_isLoaded) {
			if (taus_calo_charge_branch != 0) {
				taus_calo_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_charge_branch does not exist!\n");
				exit(1);
			}
			taus_calo_charge_isLoaded = true;
		}
		return taus_calo_charge_;
	}
	vector<int> &taus_calo_leadtrk_idx()
	{
		if (not taus_calo_leadtrk_idx_isLoaded) {
			if (taus_calo_leadtrk_idx_branch != 0) {
				taus_calo_leadtrk_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_leadtrk_idx_branch does not exist!\n");
				exit(1);
			}
			taus_calo_leadtrk_idx_isLoaded = true;
		}
		return taus_calo_leadtrk_idx_;
	}
	vector<int> &taus_calo_tightId()
	{
		if (not taus_calo_tightId_isLoaded) {
			if (taus_calo_tightId_branch != 0) {
				taus_calo_tightId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_tightId_branch does not exist!\n");
				exit(1);
			}
			taus_calo_tightId_isLoaded = true;
		}
		return taus_calo_tightId_;
	}
	vector<int> &els_mc3_id()
	{
		if (not els_mc3_id_isLoaded) {
			if (els_mc3_id_branch != 0) {
				els_mc3_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc3_id_branch does not exist!\n");
				exit(1);
			}
			els_mc3_id_isLoaded = true;
		}
		return els_mc3_id_;
	}
	vector<int> &els_mc3idx()
	{
		if (not els_mc3idx_isLoaded) {
			if (els_mc3idx_branch != 0) {
				els_mc3idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc3idx_branch does not exist!\n");
				exit(1);
			}
			els_mc3idx_isLoaded = true;
		}
		return els_mc3idx_;
	}
	vector<int> &els_mc3_motherid()
	{
		if (not els_mc3_motherid_isLoaded) {
			if (els_mc3_motherid_branch != 0) {
				els_mc3_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			els_mc3_motherid_isLoaded = true;
		}
		return els_mc3_motherid_;
	}
	vector<int> &els_mc3_motheridx()
	{
		if (not els_mc3_motheridx_isLoaded) {
			if (els_mc3_motheridx_branch != 0) {
				els_mc3_motheridx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			els_mc3_motheridx_isLoaded = true;
		}
		return els_mc3_motheridx_;
	}
	vector<int> &els_mc_id()
	{
		if (not els_mc_id_isLoaded) {
			if (els_mc_id_branch != 0) {
				els_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc_id_branch does not exist!\n");
				exit(1);
			}
			els_mc_id_isLoaded = true;
		}
		return els_mc_id_;
	}
	vector<int> &els_mcidx()
	{
		if (not els_mcidx_isLoaded) {
			if (els_mcidx_branch != 0) {
				els_mcidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mcidx_branch does not exist!\n");
				exit(1);
			}
			els_mcidx_isLoaded = true;
		}
		return els_mcidx_;
	}
	vector<int> &els_mc_motherid()
	{
		if (not els_mc_motherid_isLoaded) {
			if (els_mc_motherid_branch != 0) {
				els_mc_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			els_mc_motherid_isLoaded = true;
		}
		return els_mc_motherid_;
	}
	vector<int> &jets_mc3_id()
	{
		if (not jets_mc3_id_isLoaded) {
			if (jets_mc3_id_branch != 0) {
				jets_mc3_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc3_id_branch does not exist!\n");
				exit(1);
			}
			jets_mc3_id_isLoaded = true;
		}
		return jets_mc3_id_;
	}
	vector<int> &jets_mc3idx()
	{
		if (not jets_mc3idx_isLoaded) {
			if (jets_mc3idx_branch != 0) {
				jets_mc3idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc3idx_branch does not exist!\n");
				exit(1);
			}
			jets_mc3idx_isLoaded = true;
		}
		return jets_mc3idx_;
	}
	vector<int> &jets_mc_gpidx()
	{
		if (not jets_mc_gpidx_isLoaded) {
			if (jets_mc_gpidx_branch != 0) {
				jets_mc_gpidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_gpidx_branch does not exist!\n");
				exit(1);
			}
			jets_mc_gpidx_isLoaded = true;
		}
		return jets_mc_gpidx_;
	}
	vector<int> &jets_mc_id()
	{
		if (not jets_mc_id_isLoaded) {
			if (jets_mc_id_branch != 0) {
				jets_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mc_id_branch does not exist!\n");
				exit(1);
			}
			jets_mc_id_isLoaded = true;
		}
		return jets_mc_id_;
	}
	vector<int> &jets_mcidx()
	{
		if (not jets_mcidx_isLoaded) {
			if (jets_mcidx_branch != 0) {
				jets_mcidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_mcidx_branch does not exist!\n");
				exit(1);
			}
			jets_mcidx_isLoaded = true;
		}
		return jets_mcidx_;
	}
	vector<int> &mus_mc3_id()
	{
		if (not mus_mc3_id_isLoaded) {
			if (mus_mc3_id_branch != 0) {
				mus_mc3_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc3_id_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_id_isLoaded = true;
		}
		return mus_mc3_id_;
	}
	vector<int> &mus_mc3idx()
	{
		if (not mus_mc3idx_isLoaded) {
			if (mus_mc3idx_branch != 0) {
				mus_mc3idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc3idx_branch does not exist!\n");
				exit(1);
			}
			mus_mc3idx_isLoaded = true;
		}
		return mus_mc3idx_;
	}
	vector<int> &mus_mc3_motherid()
	{
		if (not mus_mc3_motherid_isLoaded) {
			if (mus_mc3_motherid_branch != 0) {
				mus_mc3_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_motherid_isLoaded = true;
		}
		return mus_mc3_motherid_;
	}
	vector<int> &mus_mc3_motheridx()
	{
		if (not mus_mc3_motheridx_isLoaded) {
			if (mus_mc3_motheridx_branch != 0) {
				mus_mc3_motheridx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_motheridx_isLoaded = true;
		}
		return mus_mc3_motheridx_;
	}
	vector<int> &mus_mc_id()
	{
		if (not mus_mc_id_isLoaded) {
			if (mus_mc_id_branch != 0) {
				mus_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc_id_branch does not exist!\n");
				exit(1);
			}
			mus_mc_id_isLoaded = true;
		}
		return mus_mc_id_;
	}
	vector<int> &mus_mcidx()
	{
		if (not mus_mcidx_isLoaded) {
			if (mus_mcidx_branch != 0) {
				mus_mcidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mcidx_branch does not exist!\n");
				exit(1);
			}
			mus_mcidx_isLoaded = true;
		}
		return mus_mcidx_;
	}
	vector<int> &mus_mc_motherid()
	{
		if (not mus_mc_motherid_isLoaded) {
			if (mus_mc_motherid_branch != 0) {
				mus_mc_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			mus_mc_motherid_isLoaded = true;
		}
		return mus_mc_motherid_;
	}
	vector<int> &trk_mc3_id()
	{
		if (not trk_mc3_id_isLoaded) {
			if (trk_mc3_id_branch != 0) {
				trk_mc3_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc3_id_branch does not exist!\n");
				exit(1);
			}
			trk_mc3_id_isLoaded = true;
		}
		return trk_mc3_id_;
	}
	vector<int> &trk_mc3idx()
	{
		if (not trk_mc3idx_isLoaded) {
			if (trk_mc3idx_branch != 0) {
				trk_mc3idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc3idx_branch does not exist!\n");
				exit(1);
			}
			trk_mc3idx_isLoaded = true;
		}
		return trk_mc3idx_;
	}
	vector<int> &trk_mc3_motherid()
	{
		if (not trk_mc3_motherid_isLoaded) {
			if (trk_mc3_motherid_branch != 0) {
				trk_mc3_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			trk_mc3_motherid_isLoaded = true;
		}
		return trk_mc3_motherid_;
	}
	vector<int> &trk_mc3_motheridx()
	{
		if (not trk_mc3_motheridx_isLoaded) {
			if (trk_mc3_motheridx_branch != 0) {
				trk_mc3_motheridx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			trk_mc3_motheridx_isLoaded = true;
		}
		return trk_mc3_motheridx_;
	}
	vector<int> &trk_mc_id()
	{
		if (not trk_mc_id_isLoaded) {
			if (trk_mc_id_branch != 0) {
				trk_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc_id_branch does not exist!\n");
				exit(1);
			}
			trk_mc_id_isLoaded = true;
		}
		return trk_mc_id_;
	}
	vector<int> &trk_mcidx()
	{
		if (not trk_mcidx_isLoaded) {
			if (trk_mcidx_branch != 0) {
				trk_mcidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mcidx_branch does not exist!\n");
				exit(1);
			}
			trk_mcidx_isLoaded = true;
		}
		return trk_mcidx_;
	}
	vector<int> &trk_mc_motherid()
	{
		if (not trk_mc_motherid_isLoaded) {
			if (trk_mc_motherid_branch != 0) {
				trk_mc_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			trk_mc_motherid_isLoaded = true;
		}
		return trk_mc_motherid_;
	}
	vector<int> &els_closestJet()
	{
		if (not els_closestJet_isLoaded) {
			if (els_closestJet_branch != 0) {
				els_closestJet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_closestJet_branch does not exist!\n");
				exit(1);
			}
			els_closestJet_isLoaded = true;
		}
		return els_closestJet_;
	}
	vector<int> &els_closestMuon()
	{
		if (not els_closestMuon_isLoaded) {
			if (els_closestMuon_branch != 0) {
				els_closestMuon_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_closestMuon_branch does not exist!\n");
				exit(1);
			}
			els_closestMuon_isLoaded = true;
		}
		return els_closestMuon_;
	}
	vector<int> &els_category()
	{
		if (not els_category_isLoaded) {
			if (els_category_branch != 0) {
				els_category_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_category_branch does not exist!\n");
				exit(1);
			}
			els_category_isLoaded = true;
		}
		return els_category_;
	}
	vector<int> &els_charge()
	{
		if (not els_charge_isLoaded) {
			if (els_charge_branch != 0) {
				els_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_charge_branch does not exist!\n");
				exit(1);
			}
			els_charge_isLoaded = true;
		}
		return els_charge_;
	}
	vector<int> &els_class()
	{
		if (not els_class_isLoaded) {
			if (els_class_branch != 0) {
				els_class_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_class_branch does not exist!\n");
				exit(1);
			}
			els_class_isLoaded = true;
		}
		return els_class_;
	}
	vector<int> &els_conv_tkidx()
	{
		if (not els_conv_tkidx_isLoaded) {
			if (els_conv_tkidx_branch != 0) {
				els_conv_tkidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_conv_tkidx_branch does not exist!\n");
				exit(1);
			}
			els_conv_tkidx_isLoaded = true;
		}
		return els_conv_tkidx_;
	}
	vector<int> &els_exp_innerlayers()
	{
		if (not els_exp_innerlayers_isLoaded) {
			if (els_exp_innerlayers_branch != 0) {
				els_exp_innerlayers_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_innerlayers_isLoaded = true;
		}
		return els_exp_innerlayers_;
	}
	vector<int> &els_exp_outerlayers()
	{
		if (not els_exp_outerlayers_isLoaded) {
			if (els_exp_outerlayers_branch != 0) {
				els_exp_outerlayers_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_outerlayers_isLoaded = true;
		}
		return els_exp_outerlayers_;
	}
	vector<int> &els_fiduciality()
	{
		if (not els_fiduciality_isLoaded) {
			if (els_fiduciality_branch != 0) {
				els_fiduciality_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_fiduciality_branch does not exist!\n");
				exit(1);
			}
			els_fiduciality_isLoaded = true;
		}
		return els_fiduciality_;
	}
	vector<int> &els_layer1_det()
	{
		if (not els_layer1_det_isLoaded) {
			if (els_layer1_det_branch != 0) {
				els_layer1_det_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_layer1_det_branch does not exist!\n");
				exit(1);
			}
			els_layer1_det_isLoaded = true;
		}
		return els_layer1_det_;
	}
	vector<int> &els_layer1_layer()
	{
		if (not els_layer1_layer_isLoaded) {
			if (els_layer1_layer_branch != 0) {
				els_layer1_layer_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_layer1_layer_branch does not exist!\n");
				exit(1);
			}
			els_layer1_layer_isLoaded = true;
		}
		return els_layer1_layer_;
	}
	vector<int> &els_layer1_sizerphi()
	{
		if (not els_layer1_sizerphi_isLoaded) {
			if (els_layer1_sizerphi_branch != 0) {
				els_layer1_sizerphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_layer1_sizerphi_branch does not exist!\n");
				exit(1);
			}
			els_layer1_sizerphi_isLoaded = true;
		}
		return els_layer1_sizerphi_;
	}
	vector<int> &els_layer1_sizerz()
	{
		if (not els_layer1_sizerz_isLoaded) {
			if (els_layer1_sizerz_branch != 0) {
				els_layer1_sizerz_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_layer1_sizerz_branch does not exist!\n");
				exit(1);
			}
			els_layer1_sizerz_isLoaded = true;
		}
		return els_layer1_sizerz_;
	}
	vector<int> &els_lostHits()
	{
		if (not els_lostHits_isLoaded) {
			if (els_lostHits_branch != 0) {
				els_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_lostHits_branch does not exist!\n");
				exit(1);
			}
			els_lostHits_isLoaded = true;
		}
		return els_lostHits_;
	}
	vector<int> &els_lost_pixelhits()
	{
		if (not els_lost_pixelhits_isLoaded) {
			if (els_lost_pixelhits_branch != 0) {
				els_lost_pixelhits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_lost_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_lost_pixelhits_isLoaded = true;
		}
		return els_lost_pixelhits_;
	}
	vector<int> &els_nSeed()
	{
		if (not els_nSeed_isLoaded) {
			if (els_nSeed_branch != 0) {
				els_nSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_nSeed_branch does not exist!\n");
				exit(1);
			}
			els_nSeed_isLoaded = true;
		}
		return els_nSeed_;
	}
	vector<int> &els_sccharge()
	{
		if (not els_sccharge_isLoaded) {
			if (els_sccharge_branch != 0) {
				els_sccharge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_sccharge_branch does not exist!\n");
				exit(1);
			}
			els_sccharge_isLoaded = true;
		}
		return els_sccharge_;
	}
	vector<int> &els_trk_charge()
	{
		if (not els_trk_charge_isLoaded) {
			if (els_trk_charge_branch != 0) {
				els_trk_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trk_charge_branch does not exist!\n");
				exit(1);
			}
			els_trk_charge_isLoaded = true;
		}
		return els_trk_charge_;
	}
	vector<int> &els_trkidx()
	{
		if (not els_trkidx_isLoaded) {
			if (els_trkidx_branch != 0) {
				els_trkidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_trkidx_branch does not exist!\n");
				exit(1);
			}
			els_trkidx_isLoaded = true;
		}
		return els_trkidx_;
	}
	vector<int> &els_type()
	{
		if (not els_type_isLoaded) {
			if (els_type_branch != 0) {
				els_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_type_branch does not exist!\n");
				exit(1);
			}
			els_type_isLoaded = true;
		}
		return els_type_;
	}
	vector<int> &els_validHits()
	{
		if (not els_validHits_isLoaded) {
			if (els_validHits_branch != 0) {
				els_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_validHits_branch does not exist!\n");
				exit(1);
			}
			els_validHits_isLoaded = true;
		}
		return els_validHits_;
	}
	vector<int> &els_valid_pixelhits()
	{
		if (not els_valid_pixelhits_isLoaded) {
			if (els_valid_pixelhits_branch != 0) {
				els_valid_pixelhits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch els_valid_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_valid_pixelhits_isLoaded = true;
		}
		return els_valid_pixelhits_;
	}
	vector<int> &genps_id()
	{
		if (not genps_id_isLoaded) {
			if (genps_id_branch != 0) {
				genps_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_id_branch does not exist!\n");
				exit(1);
			}
			genps_id_isLoaded = true;
		}
		return genps_id_;
	}
	vector<int> &genps_id_mother()
	{
		if (not genps_id_mother_isLoaded) {
			if (genps_id_mother_branch != 0) {
				genps_id_mother_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_id_mother_branch does not exist!\n");
				exit(1);
			}
			genps_id_mother_isLoaded = true;
		}
		return genps_id_mother_;
	}
	vector<int> &genps_status()
	{
		if (not genps_status_isLoaded) {
			if (genps_status_branch != 0) {
				genps_status_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_status_branch does not exist!\n");
				exit(1);
			}
			genps_status_isLoaded = true;
		}
		return genps_status_;
	}
	vector<int> &hyp_ll_charge()
	{
		if (not hyp_ll_charge_isLoaded) {
			if (hyp_ll_charge_branch != 0) {
				hyp_ll_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_charge_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_charge_isLoaded = true;
		}
		return hyp_ll_charge_;
	}
	vector<int> &hyp_ll_id()
	{
		if (not hyp_ll_id_isLoaded) {
			if (hyp_ll_id_branch != 0) {
				hyp_ll_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_id_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_id_isLoaded = true;
		}
		return hyp_ll_id_;
	}
	vector<int> &hyp_ll_index()
	{
		if (not hyp_ll_index_isLoaded) {
			if (hyp_ll_index_branch != 0) {
				hyp_ll_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_index_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_index_isLoaded = true;
		}
		return hyp_ll_index_;
	}
	vector<int> &hyp_ll_lostHits()
	{
		if (not hyp_ll_lostHits_isLoaded) {
			if (hyp_ll_lostHits_branch != 0) {
				hyp_ll_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_lostHits_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_lostHits_isLoaded = true;
		}
		return hyp_ll_lostHits_;
	}
	vector<int> &hyp_ll_validHits()
	{
		if (not hyp_ll_validHits_isLoaded) {
			if (hyp_ll_validHits_branch != 0) {
				hyp_ll_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_validHits_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_validHits_isLoaded = true;
		}
		return hyp_ll_validHits_;
	}
	vector<int> &hyp_lt_charge()
	{
		if (not hyp_lt_charge_isLoaded) {
			if (hyp_lt_charge_branch != 0) {
				hyp_lt_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_charge_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_charge_isLoaded = true;
		}
		return hyp_lt_charge_;
	}
	vector<int> &hyp_lt_id()
	{
		if (not hyp_lt_id_isLoaded) {
			if (hyp_lt_id_branch != 0) {
				hyp_lt_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_id_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_id_isLoaded = true;
		}
		return hyp_lt_id_;
	}
	vector<int> &hyp_lt_index()
	{
		if (not hyp_lt_index_isLoaded) {
			if (hyp_lt_index_branch != 0) {
				hyp_lt_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_index_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_index_isLoaded = true;
		}
		return hyp_lt_index_;
	}
	vector<int> &hyp_lt_lostHits()
	{
		if (not hyp_lt_lostHits_isLoaded) {
			if (hyp_lt_lostHits_branch != 0) {
				hyp_lt_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_lostHits_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_lostHits_isLoaded = true;
		}
		return hyp_lt_lostHits_;
	}
	vector<int> &hyp_lt_validHits()
	{
		if (not hyp_lt_validHits_isLoaded) {
			if (hyp_lt_validHits_branch != 0) {
				hyp_lt_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_validHits_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_validHits_isLoaded = true;
		}
		return hyp_lt_validHits_;
	}
	vector<int> &hyp_njets()
	{
		if (not hyp_njets_isLoaded) {
			if (hyp_njets_branch != 0) {
				hyp_njets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_njets_branch does not exist!\n");
				exit(1);
			}
			hyp_njets_isLoaded = true;
		}
		return hyp_njets_;
	}
	vector<int> &hyp_nojets()
	{
		if (not hyp_nojets_isLoaded) {
			if (hyp_nojets_branch != 0) {
				hyp_nojets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_nojets_branch does not exist!\n");
				exit(1);
			}
			hyp_nojets_isLoaded = true;
		}
		return hyp_nojets_;
	}
	vector<int> &hyp_type()
	{
		if (not hyp_type_isLoaded) {
			if (hyp_type_branch != 0) {
				hyp_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_type_branch does not exist!\n");
				exit(1);
			}
			hyp_type_isLoaded = true;
		}
		return hyp_type_;
	}
	vector<int> &hyp_FVFit_ndf()
	{
		if (not hyp_FVFit_ndf_isLoaded) {
			if (hyp_FVFit_ndf_branch != 0) {
				hyp_FVFit_ndf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_ndf_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_ndf_isLoaded = true;
		}
		return hyp_FVFit_ndf_;
	}
	vector<int> &hyp_FVFit_status()
	{
		if (not hyp_FVFit_status_isLoaded) {
			if (hyp_FVFit_status_branch != 0) {
				hyp_FVFit_status_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_FVFit_status_branch does not exist!\n");
				exit(1);
			}
			hyp_FVFit_status_isLoaded = true;
		}
		return hyp_FVFit_status_;
	}
	vector<int> &hyp_ll_mc_id()
	{
		if (not hyp_ll_mc_id_isLoaded) {
			if (hyp_ll_mc_id_branch != 0) {
				hyp_ll_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_mc_id_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_mc_id_isLoaded = true;
		}
		return hyp_ll_mc_id_;
	}
	vector<int> &hyp_ll_mc_motherid()
	{
		if (not hyp_ll_mc_motherid_isLoaded) {
			if (hyp_ll_mc_motherid_branch != 0) {
				hyp_ll_mc_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_ll_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_mc_motherid_isLoaded = true;
		}
		return hyp_ll_mc_motherid_;
	}
	vector<int> &hyp_lt_mc_id()
	{
		if (not hyp_lt_mc_id_isLoaded) {
			if (hyp_lt_mc_id_branch != 0) {
				hyp_lt_mc_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_mc_id_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_mc_id_isLoaded = true;
		}
		return hyp_lt_mc_id_;
	}
	vector<int> &hyp_lt_mc_motherid()
	{
		if (not hyp_lt_mc_motherid_isLoaded) {
			if (hyp_lt_mc_motherid_branch != 0) {
				hyp_lt_mc_motherid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_lt_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_mc_motherid_isLoaded = true;
		}
		return hyp_lt_mc_motherid_;
	}
	vector<int> &hyp_quadlep_first_type()
	{
		if (not hyp_quadlep_first_type_isLoaded) {
			if (hyp_quadlep_first_type_branch != 0) {
				hyp_quadlep_first_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_first_type_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_first_type_isLoaded = true;
		}
		return hyp_quadlep_first_type_;
	}
	vector<int> &hyp_quadlep_fourth_type()
	{
		if (not hyp_quadlep_fourth_type_isLoaded) {
			if (hyp_quadlep_fourth_type_branch != 0) {
				hyp_quadlep_fourth_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_fourth_type_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_fourth_type_isLoaded = true;
		}
		return hyp_quadlep_fourth_type_;
	}
	vector<int> &hyp_quadlep_second_type()
	{
		if (not hyp_quadlep_second_type_isLoaded) {
			if (hyp_quadlep_second_type_branch != 0) {
				hyp_quadlep_second_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_second_type_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_second_type_isLoaded = true;
		}
		return hyp_quadlep_second_type_;
	}
	vector<int> &hyp_quadlep_third_type()
	{
		if (not hyp_quadlep_third_type_isLoaded) {
			if (hyp_quadlep_third_type_branch != 0) {
				hyp_quadlep_third_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_third_type_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_third_type_isLoaded = true;
		}
		return hyp_quadlep_third_type_;
	}
	vector<int> &hyp_trilep_first_type()
	{
		if (not hyp_trilep_first_type_isLoaded) {
			if (hyp_trilep_first_type_branch != 0) {
				hyp_trilep_first_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_first_type_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_first_type_isLoaded = true;
		}
		return hyp_trilep_first_type_;
	}
	vector<int> &hyp_trilep_second_type()
	{
		if (not hyp_trilep_second_type_isLoaded) {
			if (hyp_trilep_second_type_branch != 0) {
				hyp_trilep_second_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_second_type_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_second_type_isLoaded = true;
		}
		return hyp_trilep_second_type_;
	}
	vector<int> &hyp_trilep_third_type()
	{
		if (not hyp_trilep_third_type_isLoaded) {
			if (hyp_trilep_third_type_branch != 0) {
				hyp_trilep_third_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_third_type_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_third_type_isLoaded = true;
		}
		return hyp_trilep_third_type_;
	}
	vector<int> &jets_closestElectron()
	{
		if (not jets_closestElectron_isLoaded) {
			if (jets_closestElectron_branch != 0) {
				jets_closestElectron_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_closestElectron_branch does not exist!\n");
				exit(1);
			}
			jets_closestElectron_isLoaded = true;
		}
		return jets_closestElectron_;
	}
	vector<int> &jets_closestMuon()
	{
		if (not jets_closestMuon_isLoaded) {
			if (jets_closestMuon_branch != 0) {
				jets_closestMuon_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jets_closestMuon_branch does not exist!\n");
				exit(1);
			}
			jets_closestMuon_isLoaded = true;
		}
		return jets_closestMuon_;
	}
	vector<int> &l1_emiso_ieta()
	{
		if (not l1_emiso_ieta_isLoaded) {
			if (l1_emiso_ieta_branch != 0) {
				l1_emiso_ieta_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emiso_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_ieta_isLoaded = true;
		}
		return l1_emiso_ieta_;
	}
	vector<int> &l1_emiso_iphi()
	{
		if (not l1_emiso_iphi_isLoaded) {
			if (l1_emiso_iphi_branch != 0) {
				l1_emiso_iphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emiso_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_iphi_isLoaded = true;
		}
		return l1_emiso_iphi_;
	}
	vector<int> &l1_emiso_rawId()
	{
		if (not l1_emiso_rawId_isLoaded) {
			if (l1_emiso_rawId_branch != 0) {
				l1_emiso_rawId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emiso_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_rawId_isLoaded = true;
		}
		return l1_emiso_rawId_;
	}
	vector<int> &l1_emiso_type()
	{
		if (not l1_emiso_type_isLoaded) {
			if (l1_emiso_type_branch != 0) {
				l1_emiso_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emiso_type_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_type_isLoaded = true;
		}
		return l1_emiso_type_;
	}
	vector<int> &l1_emnoiso_ieta()
	{
		if (not l1_emnoiso_ieta_isLoaded) {
			if (l1_emnoiso_ieta_branch != 0) {
				l1_emnoiso_ieta_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emnoiso_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_ieta_isLoaded = true;
		}
		return l1_emnoiso_ieta_;
	}
	vector<int> &l1_emnoiso_iphi()
	{
		if (not l1_emnoiso_iphi_isLoaded) {
			if (l1_emnoiso_iphi_branch != 0) {
				l1_emnoiso_iphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emnoiso_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_iphi_isLoaded = true;
		}
		return l1_emnoiso_iphi_;
	}
	vector<int> &l1_emnoiso_rawId()
	{
		if (not l1_emnoiso_rawId_isLoaded) {
			if (l1_emnoiso_rawId_branch != 0) {
				l1_emnoiso_rawId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emnoiso_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_rawId_isLoaded = true;
		}
		return l1_emnoiso_rawId_;
	}
	vector<int> &l1_emnoiso_type()
	{
		if (not l1_emnoiso_type_isLoaded) {
			if (l1_emnoiso_type_branch != 0) {
				l1_emnoiso_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_emnoiso_type_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_type_isLoaded = true;
		}
		return l1_emnoiso_type_;
	}
	vector<int> &l1_jetsc_ieta()
	{
		if (not l1_jetsc_ieta_isLoaded) {
			if (l1_jetsc_ieta_branch != 0) {
				l1_jetsc_ieta_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsc_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_ieta_isLoaded = true;
		}
		return l1_jetsc_ieta_;
	}
	vector<int> &l1_jetsc_iphi()
	{
		if (not l1_jetsc_iphi_isLoaded) {
			if (l1_jetsc_iphi_branch != 0) {
				l1_jetsc_iphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsc_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_iphi_isLoaded = true;
		}
		return l1_jetsc_iphi_;
	}
	vector<int> &l1_jetsc_rawId()
	{
		if (not l1_jetsc_rawId_isLoaded) {
			if (l1_jetsc_rawId_branch != 0) {
				l1_jetsc_rawId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsc_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_rawId_isLoaded = true;
		}
		return l1_jetsc_rawId_;
	}
	vector<int> &l1_jetsc_type()
	{
		if (not l1_jetsc_type_isLoaded) {
			if (l1_jetsc_type_branch != 0) {
				l1_jetsc_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsc_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_type_isLoaded = true;
		}
		return l1_jetsc_type_;
	}
	vector<int> &l1_jetsf_ieta()
	{
		if (not l1_jetsf_ieta_isLoaded) {
			if (l1_jetsf_ieta_branch != 0) {
				l1_jetsf_ieta_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsf_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_ieta_isLoaded = true;
		}
		return l1_jetsf_ieta_;
	}
	vector<int> &l1_jetsf_iphi()
	{
		if (not l1_jetsf_iphi_isLoaded) {
			if (l1_jetsf_iphi_branch != 0) {
				l1_jetsf_iphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsf_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_iphi_isLoaded = true;
		}
		return l1_jetsf_iphi_;
	}
	vector<int> &l1_jetsf_rawId()
	{
		if (not l1_jetsf_rawId_isLoaded) {
			if (l1_jetsf_rawId_branch != 0) {
				l1_jetsf_rawId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsf_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_rawId_isLoaded = true;
		}
		return l1_jetsf_rawId_;
	}
	vector<int> &l1_jetsf_type()
	{
		if (not l1_jetsf_type_isLoaded) {
			if (l1_jetsf_type_branch != 0) {
				l1_jetsf_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetsf_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_type_isLoaded = true;
		}
		return l1_jetsf_type_;
	}
	vector<int> &l1_jetst_ieta()
	{
		if (not l1_jetst_ieta_isLoaded) {
			if (l1_jetst_ieta_branch != 0) {
				l1_jetst_ieta_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetst_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_ieta_isLoaded = true;
		}
		return l1_jetst_ieta_;
	}
	vector<int> &l1_jetst_iphi()
	{
		if (not l1_jetst_iphi_isLoaded) {
			if (l1_jetst_iphi_branch != 0) {
				l1_jetst_iphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetst_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_iphi_isLoaded = true;
		}
		return l1_jetst_iphi_;
	}
	vector<int> &l1_jetst_rawId()
	{
		if (not l1_jetst_rawId_isLoaded) {
			if (l1_jetst_rawId_branch != 0) {
				l1_jetst_rawId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetst_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_rawId_isLoaded = true;
		}
		return l1_jetst_rawId_;
	}
	vector<int> &l1_jetst_type()
	{
		if (not l1_jetst_type_isLoaded) {
			if (l1_jetst_type_branch != 0) {
				l1_jetst_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_jetst_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_type_isLoaded = true;
		}
		return l1_jetst_type_;
	}
	vector<int> &l1_mus_flags()
	{
		if (not l1_mus_flags_isLoaded) {
			if (l1_mus_flags_branch != 0) {
				l1_mus_flags_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mus_flags_branch does not exist!\n");
				exit(1);
			}
			l1_mus_flags_isLoaded = true;
		}
		return l1_mus_flags_;
	}
	vector<int> &l1_mus_q()
	{
		if (not l1_mus_q_isLoaded) {
			if (l1_mus_q_branch != 0) {
				l1_mus_q_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mus_q_branch does not exist!\n");
				exit(1);
			}
			l1_mus_q_isLoaded = true;
		}
		return l1_mus_q_;
	}
	vector<int> &l1_mus_qual()
	{
		if (not l1_mus_qual_isLoaded) {
			if (l1_mus_qual_branch != 0) {
				l1_mus_qual_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mus_qual_branch does not exist!\n");
				exit(1);
			}
			l1_mus_qual_isLoaded = true;
		}
		return l1_mus_qual_;
	}
	vector<int> &l1_mus_qualFlags()
	{
		if (not l1_mus_qualFlags_isLoaded) {
			if (l1_mus_qualFlags_branch != 0) {
				l1_mus_qualFlags_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_mus_qualFlags_branch does not exist!\n");
				exit(1);
			}
			l1_mus_qualFlags_isLoaded = true;
		}
		return l1_mus_qualFlags_;
	}
	vector<int> &mus_met_flag()
	{
		if (not mus_met_flag_isLoaded) {
			if (mus_met_flag_branch != 0) {
				mus_met_flag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_met_flag_branch does not exist!\n");
				exit(1);
			}
			mus_met_flag_isLoaded = true;
		}
		return mus_met_flag_;
	}
	vector<int> &mus_closestEle()
	{
		if (not mus_closestEle_isLoaded) {
			if (mus_closestEle_branch != 0) {
				mus_closestEle_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_closestEle_branch does not exist!\n");
				exit(1);
			}
			mus_closestEle_isLoaded = true;
		}
		return mus_closestEle_;
	}
	vector<int> &mus_closestJet()
	{
		if (not mus_closestJet_isLoaded) {
			if (mus_closestJet_branch != 0) {
				mus_closestJet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_closestJet_branch does not exist!\n");
				exit(1);
			}
			mus_closestJet_isLoaded = true;
		}
		return mus_closestJet_;
	}
	vector<int> &mus_charge()
	{
		if (not mus_charge_isLoaded) {
			if (mus_charge_branch != 0) {
				mus_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_charge_branch does not exist!\n");
				exit(1);
			}
			mus_charge_isLoaded = true;
		}
		return mus_charge_;
	}
	vector<int> &mus_gfit_validHits()
	{
		if (not mus_gfit_validHits_isLoaded) {
			if (mus_gfit_validHits_branch != 0) {
				mus_gfit_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validHits_isLoaded = true;
		}
		return mus_gfit_validHits_;
	}
	vector<int> &mus_gfit_validSTAHits()
	{
		if (not mus_gfit_validSTAHits_isLoaded) {
			if (mus_gfit_validSTAHits_branch != 0) {
				mus_gfit_validSTAHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_validSTAHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSTAHits_isLoaded = true;
		}
		return mus_gfit_validSTAHits_;
	}
	vector<int> &mus_gfit_validSiHits()
	{
		if (not mus_gfit_validSiHits_isLoaded) {
			if (mus_gfit_validSiHits_branch != 0) {
				mus_gfit_validSiHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_gfit_validSiHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSiHits_isLoaded = true;
		}
		return mus_gfit_validSiHits_;
	}
	vector<int> &mus_goodmask()
	{
		if (not mus_goodmask_isLoaded) {
			if (mus_goodmask_branch != 0) {
				mus_goodmask_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_goodmask_branch does not exist!\n");
				exit(1);
			}
			mus_goodmask_isLoaded = true;
		}
		return mus_goodmask_;
	}
	vector<int> &mus_iso03_ntrk()
	{
		if (not mus_iso03_ntrk_isLoaded) {
			if (mus_iso03_ntrk_branch != 0) {
				mus_iso03_ntrk_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso03_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_ntrk_isLoaded = true;
		}
		return mus_iso03_ntrk_;
	}
	vector<int> &mus_iso05_ntrk()
	{
		if (not mus_iso05_ntrk_isLoaded) {
			if (mus_iso05_ntrk_branch != 0) {
				mus_iso05_ntrk_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_iso05_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_ntrk_isLoaded = true;
		}
		return mus_iso05_ntrk_;
	}
	vector<int> &mus_lostHits()
	{
		if (not mus_lostHits_isLoaded) {
			if (mus_lostHits_branch != 0) {
				mus_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_lostHits_branch does not exist!\n");
				exit(1);
			}
			mus_lostHits_isLoaded = true;
		}
		return mus_lostHits_;
	}
	vector<int> &mus_nmatches()
	{
		if (not mus_nmatches_isLoaded) {
			if (mus_nmatches_branch != 0) {
				mus_nmatches_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_nmatches_branch does not exist!\n");
				exit(1);
			}
			mus_nmatches_isLoaded = true;
		}
		return mus_nmatches_;
	}
	vector<int> &mus_pid_TM2DCompatibilityLoose()
	{
		if (not mus_pid_TM2DCompatibilityLoose_isLoaded) {
			if (mus_pid_TM2DCompatibilityLoose_branch != 0) {
				mus_pid_TM2DCompatibilityLoose_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_pid_TM2DCompatibilityLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityLoose_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityLoose_;
	}
	vector<int> &mus_pid_TM2DCompatibilityTight()
	{
		if (not mus_pid_TM2DCompatibilityTight_isLoaded) {
			if (mus_pid_TM2DCompatibilityTight_branch != 0) {
				mus_pid_TM2DCompatibilityTight_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_pid_TM2DCompatibilityTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityTight_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityTight_;
	}
	vector<int> &mus_pid_TMLastStationLoose()
	{
		if (not mus_pid_TMLastStationLoose_isLoaded) {
			if (mus_pid_TMLastStationLoose_branch != 0) {
				mus_pid_TMLastStationLoose_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_pid_TMLastStationLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationLoose_isLoaded = true;
		}
		return mus_pid_TMLastStationLoose_;
	}
	vector<int> &mus_pid_TMLastStationTight()
	{
		if (not mus_pid_TMLastStationTight_isLoaded) {
			if (mus_pid_TMLastStationTight_branch != 0) {
				mus_pid_TMLastStationTight_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_pid_TMLastStationTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationTight_isLoaded = true;
		}
		return mus_pid_TMLastStationTight_;
	}
	vector<int> &mus_sta_validHits()
	{
		if (not mus_sta_validHits_isLoaded) {
			if (mus_sta_validHits_branch != 0) {
				mus_sta_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_sta_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_validHits_isLoaded = true;
		}
		return mus_sta_validHits_;
	}
	vector<int> &mus_timeDirection()
	{
		if (not mus_timeDirection_isLoaded) {
			if (mus_timeDirection_branch != 0) {
				mus_timeDirection_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeDirection_branch does not exist!\n");
				exit(1);
			}
			mus_timeDirection_isLoaded = true;
		}
		return mus_timeDirection_;
	}
	vector<int> &mus_timeNumStationsUsed()
	{
		if (not mus_timeNumStationsUsed_isLoaded) {
			if (mus_timeNumStationsUsed_branch != 0) {
				mus_timeNumStationsUsed_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_timeNumStationsUsed_branch does not exist!\n");
				exit(1);
			}
			mus_timeNumStationsUsed_isLoaded = true;
		}
		return mus_timeNumStationsUsed_;
	}
	vector<int> &mus_trk_charge()
	{
		if (not mus_trk_charge_isLoaded) {
			if (mus_trk_charge_branch != 0) {
				mus_trk_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_trk_charge_branch does not exist!\n");
				exit(1);
			}
			mus_trk_charge_isLoaded = true;
		}
		return mus_trk_charge_;
	}
	vector<int> &mus_trkidx()
	{
		if (not mus_trkidx_isLoaded) {
			if (mus_trkidx_branch != 0) {
				mus_trkidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_trkidx_branch does not exist!\n");
				exit(1);
			}
			mus_trkidx_isLoaded = true;
		}
		return mus_trkidx_;
	}
	vector<int> &mus_type()
	{
		if (not mus_type_isLoaded) {
			if (mus_type_branch != 0) {
				mus_type_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_type_branch does not exist!\n");
				exit(1);
			}
			mus_type_isLoaded = true;
		}
		return mus_type_;
	}
	vector<int> &mus_validHits()
	{
		if (not mus_validHits_isLoaded) {
			if (mus_validHits_branch != 0) {
				mus_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_validHits_isLoaded = true;
		}
		return mus_validHits_;
	}
	vector<int> &pfjets_chargedMultiplicity()
	{
		if (not pfjets_chargedMultiplicity_isLoaded) {
			if (pfjets_chargedMultiplicity_branch != 0) {
				pfjets_chargedMultiplicity_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_chargedMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedMultiplicity_isLoaded = true;
		}
		return pfjets_chargedMultiplicity_;
	}
	vector<int> &pfjets_muonMultiplicity()
	{
		if (not pfjets_muonMultiplicity_isLoaded) {
			if (pfjets_muonMultiplicity_branch != 0) {
				pfjets_muonMultiplicity_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_muonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_muonMultiplicity_isLoaded = true;
		}
		return pfjets_muonMultiplicity_;
	}
	vector<int> &pfjets_neutralMultiplicity()
	{
		if (not pfjets_neutralMultiplicity_isLoaded) {
			if (pfjets_neutralMultiplicity_branch != 0) {
				pfjets_neutralMultiplicity_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjets_neutralMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralMultiplicity_isLoaded = true;
		}
		return pfjets_neutralMultiplicity_;
	}
	vector<int> &taus_pf_charge()
	{
		if (not taus_pf_charge_isLoaded) {
			if (taus_pf_charge_branch != 0) {
				taus_pf_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_charge_branch does not exist!\n");
				exit(1);
			}
			taus_pf_charge_isLoaded = true;
		}
		return taus_pf_charge_;
	}
	vector<int> &taus_pf_electronPreID()
	{
		if (not taus_pf_electronPreID_isLoaded) {
			if (taus_pf_electronPreID_branch != 0) {
				taus_pf_electronPreID_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_electronPreID_branch does not exist!\n");
				exit(1);
			}
			taus_pf_electronPreID_isLoaded = true;
		}
		return taus_pf_electronPreID_;
	}
	vector<int> &taus_pf_hasMuonReference()
	{
		if (not taus_pf_hasMuonReference_isLoaded) {
			if (taus_pf_hasMuonReference_branch != 0) {
				taus_pf_hasMuonReference_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_hasMuonReference_branch does not exist!\n");
				exit(1);
			}
			taus_pf_hasMuonReference_isLoaded = true;
		}
		return taus_pf_hasMuonReference_;
	}
	vector<int> &taus_pf_leadtrk_idx()
	{
		if (not taus_pf_leadtrk_idx_isLoaded) {
			if (taus_pf_leadtrk_idx_branch != 0) {
				taus_pf_leadtrk_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_leadtrk_idx_branch does not exist!\n");
				exit(1);
			}
			taus_pf_leadtrk_idx_isLoaded = true;
		}
		return taus_pf_leadtrk_idx_;
	}
	vector<int> &taus_pf_muonPreID()
	{
		if (not taus_pf_muonPreID_isLoaded) {
			if (taus_pf_muonPreID_branch != 0) {
				taus_pf_muonPreID_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_muonPreID_branch does not exist!\n");
				exit(1);
			}
			taus_pf_muonPreID_isLoaded = true;
		}
		return taus_pf_muonPreID_;
	}
	vector<int> &taus_pf_nmuonmatch()
	{
		if (not taus_pf_nmuonmatch_isLoaded) {
			if (taus_pf_nmuonmatch_branch != 0) {
				taus_pf_nmuonmatch_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_nmuonmatch_branch does not exist!\n");
				exit(1);
			}
			taus_pf_nmuonmatch_isLoaded = true;
		}
		return taus_pf_nmuonmatch_;
	}
	vector<int> &taus_pf_tightId()
	{
		if (not taus_pf_tightId_isLoaded) {
			if (taus_pf_tightId_branch != 0) {
				taus_pf_tightId_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_pf_tightId_branch does not exist!\n");
				exit(1);
			}
			taus_pf_tightId_isLoaded = true;
		}
		return taus_pf_tightId_;
	}
	vector<int> &photons_fiduciality()
	{
		if (not photons_fiduciality_isLoaded) {
			if (photons_fiduciality_branch != 0) {
				photons_fiduciality_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch photons_fiduciality_branch does not exist!\n");
				exit(1);
			}
			photons_fiduciality_isLoaded = true;
		}
		return photons_fiduciality_;
	}
	vector<int> &pxl_ndigis_pxb()
	{
		if (not pxl_ndigis_pxb_isLoaded) {
			if (pxl_ndigis_pxb_branch != 0) {
				pxl_ndigis_pxb_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pxl_ndigis_pxb_branch does not exist!\n");
				exit(1);
			}
			pxl_ndigis_pxb_isLoaded = true;
		}
		return pxl_ndigis_pxb_;
	}
	vector<int> &pxl_ndigis_pxf()
	{
		if (not pxl_ndigis_pxf_isLoaded) {
			if (pxl_ndigis_pxf_branch != 0) {
				pxl_ndigis_pxf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pxl_ndigis_pxf_branch does not exist!\n");
				exit(1);
			}
			pxl_ndigis_pxf_isLoaded = true;
		}
		return pxl_ndigis_pxf_;
	}
	vector<int> &ran_srFlag()
	{
		if (not ran_srFlag_isLoaded) {
			if (ran_srFlag_branch != 0) {
				ran_srFlag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ran_srFlag_branch does not exist!\n");
				exit(1);
			}
			ran_srFlag_isLoaded = true;
		}
		return ran_srFlag_;
	}
	vector<int> &scs_detIdSeed()
	{
		if (not scs_detIdSeed_isLoaded) {
			if (scs_detIdSeed_branch != 0) {
				scs_detIdSeed_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_detIdSeed_branch does not exist!\n");
				exit(1);
			}
			scs_detIdSeed_isLoaded = true;
		}
		return scs_detIdSeed_;
	}
	vector<int> &scs_elsidx()
	{
		if (not scs_elsidx_isLoaded) {
			if (scs_elsidx_branch != 0) {
				scs_elsidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_elsidx_branch does not exist!\n");
				exit(1);
			}
			scs_elsidx_isLoaded = true;
		}
		return scs_elsidx_;
	}
	vector<int> &scs_severitySeed()
	{
		if (not scs_severitySeed_isLoaded) {
			if (scs_severitySeed_branch != 0) {
				scs_severitySeed_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch scs_severitySeed_branch does not exist!\n");
				exit(1);
			}
			scs_severitySeed_isLoaded = true;
		}
		return scs_severitySeed_;
	}
	vector<int> &mus_tcmet_flag()
	{
		if (not mus_tcmet_flag_isLoaded) {
			if (mus_tcmet_flag_branch != 0) {
				mus_tcmet_flag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mus_tcmet_flag_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_flag_isLoaded = true;
		}
		return mus_tcmet_flag_;
	}
	vector<int> &trks_algo()
	{
		if (not trks_algo_isLoaded) {
			if (trks_algo_branch != 0) {
				trks_algo_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_algo_branch does not exist!\n");
				exit(1);
			}
			trks_algo_isLoaded = true;
		}
		return trks_algo_;
	}
	vector<int> &trks_charge()
	{
		if (not trks_charge_isLoaded) {
			if (trks_charge_branch != 0) {
				trks_charge_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_charge_branch does not exist!\n");
				exit(1);
			}
			trks_charge_isLoaded = true;
		}
		return trks_charge_;
	}
	vector<int> &trks_exp_innerlayers()
	{
		if (not trks_exp_innerlayers_isLoaded) {
			if (trks_exp_innerlayers_branch != 0) {
				trks_exp_innerlayers_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			trks_exp_innerlayers_isLoaded = true;
		}
		return trks_exp_innerlayers_;
	}
	vector<int> &trks_exp_outerlayers()
	{
		if (not trks_exp_outerlayers_isLoaded) {
			if (trks_exp_outerlayers_branch != 0) {
				trks_exp_outerlayers_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			trks_exp_outerlayers_isLoaded = true;
		}
		return trks_exp_outerlayers_;
	}
	vector<int> &trks_layer1_det()
	{
		if (not trks_layer1_det_isLoaded) {
			if (trks_layer1_det_branch != 0) {
				trks_layer1_det_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_layer1_det_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_det_isLoaded = true;
		}
		return trks_layer1_det_;
	}
	vector<int> &trks_layer1_layer()
	{
		if (not trks_layer1_layer_isLoaded) {
			if (trks_layer1_layer_branch != 0) {
				trks_layer1_layer_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_layer1_layer_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_layer_isLoaded = true;
		}
		return trks_layer1_layer_;
	}
	vector<int> &trks_layer1_sizerphi()
	{
		if (not trks_layer1_sizerphi_isLoaded) {
			if (trks_layer1_sizerphi_branch != 0) {
				trks_layer1_sizerphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_layer1_sizerphi_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_sizerphi_isLoaded = true;
		}
		return trks_layer1_sizerphi_;
	}
	vector<int> &trks_layer1_sizerz()
	{
		if (not trks_layer1_sizerz_isLoaded) {
			if (trks_layer1_sizerz_branch != 0) {
				trks_layer1_sizerz_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_layer1_sizerz_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_sizerz_isLoaded = true;
		}
		return trks_layer1_sizerz_;
	}
	vector<int> &trks_lostHits()
	{
		if (not trks_lostHits_isLoaded) {
			if (trks_lostHits_branch != 0) {
				trks_lostHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_lostHits_branch does not exist!\n");
				exit(1);
			}
			trks_lostHits_isLoaded = true;
		}
		return trks_lostHits_;
	}
	vector<int> &trks_lost_pixelhits()
	{
		if (not trks_lost_pixelhits_isLoaded) {
			if (trks_lost_pixelhits_branch != 0) {
				trks_lost_pixelhits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_lost_pixelhits_branch does not exist!\n");
				exit(1);
			}
			trks_lost_pixelhits_isLoaded = true;
		}
		return trks_lost_pixelhits_;
	}
	vector<int> &trks_nlayers()
	{
		if (not trks_nlayers_isLoaded) {
			if (trks_nlayers_branch != 0) {
				trks_nlayers_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_nlayers_branch does not exist!\n");
				exit(1);
			}
			trks_nlayers_isLoaded = true;
		}
		return trks_nlayers_;
	}
	vector<int> &trks_nlayers3D()
	{
		if (not trks_nlayers3D_isLoaded) {
			if (trks_nlayers3D_branch != 0) {
				trks_nlayers3D_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			trks_nlayers3D_isLoaded = true;
		}
		return trks_nlayers3D_;
	}
	vector<int> &trks_nlayersLost()
	{
		if (not trks_nlayersLost_isLoaded) {
			if (trks_nlayersLost_branch != 0) {
				trks_nlayersLost_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			trks_nlayersLost_isLoaded = true;
		}
		return trks_nlayersLost_;
	}
	vector<int> &trks_qualityMask()
	{
		if (not trks_qualityMask_isLoaded) {
			if (trks_qualityMask_branch != 0) {
				trks_qualityMask_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_qualityMask_branch does not exist!\n");
				exit(1);
			}
			trks_qualityMask_isLoaded = true;
		}
		return trks_qualityMask_;
	}
	vector<int> &trks_validHits()
	{
		if (not trks_validHits_isLoaded) {
			if (trks_validHits_branch != 0) {
				trks_validHits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_validHits_branch does not exist!\n");
				exit(1);
			}
			trks_validHits_isLoaded = true;
		}
		return trks_validHits_;
	}
	vector<int> &trks_valid_pixelhits()
	{
		if (not trks_valid_pixelhits_isLoaded) {
			if (trks_valid_pixelhits_branch != 0) {
				trks_valid_pixelhits_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_valid_pixelhits_branch does not exist!\n");
				exit(1);
			}
			trks_valid_pixelhits_isLoaded = true;
		}
		return trks_valid_pixelhits_;
	}
	vector<int> &trks_elsidx()
	{
		if (not trks_elsidx_isLoaded) {
			if (trks_elsidx_branch != 0) {
				trks_elsidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trks_elsidx_branch does not exist!\n");
				exit(1);
			}
			trks_elsidx_isLoaded = true;
		}
		return trks_elsidx_;
	}
	vector<int> &trk_musidx()
	{
		if (not trk_musidx_isLoaded) {
			if (trk_musidx_branch != 0) {
				trk_musidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trk_musidx_branch does not exist!\n");
				exit(1);
			}
			trk_musidx_isLoaded = true;
		}
		return trk_musidx_;
	}
	vector<int> &vtxs_isFake()
	{
		if (not vtxs_isFake_isLoaded) {
			if (vtxs_isFake_branch != 0) {
				vtxs_isFake_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_isFake_branch does not exist!\n");
				exit(1);
			}
			vtxs_isFake_isLoaded = true;
		}
		return vtxs_isFake_;
	}
	vector<int> &vtxs_isValid()
	{
		if (not vtxs_isValid_isLoaded) {
			if (vtxs_isValid_branch != 0) {
				vtxs_isValid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_isValid_branch does not exist!\n");
				exit(1);
			}
			vtxs_isValid_isLoaded = true;
		}
		return vtxs_isValid_;
	}
	vector<int> &vtxs_tracksSize()
	{
		if (not vtxs_tracksSize_isLoaded) {
			if (vtxs_tracksSize_branch != 0) {
				vtxs_tracksSize_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxs_tracksSize_branch does not exist!\n");
				exit(1);
			}
			vtxs_tracksSize_isLoaded = true;
		}
		return vtxs_tracksSize_;
	}
	vector<vector<int> > &twrs_emMaxEcalMGPASampleADC()
	{
		if (not twrs_emMaxEcalMGPASampleADC_isLoaded) {
			if (twrs_emMaxEcalMGPASampleADC_branch != 0) {
				twrs_emMaxEcalMGPASampleADC_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emMaxEcalMGPASampleADC_branch does not exist!\n");
				exit(1);
			}
			twrs_emMaxEcalMGPASampleADC_isLoaded = true;
		}
		return twrs_emMaxEcalMGPASampleADC_;
	}
	vector<vector<int> > &twrs_emThreshRecoFlag()
	{
		if (not twrs_emThreshRecoFlag_isLoaded) {
			if (twrs_emThreshRecoFlag_branch != 0) {
				twrs_emThreshRecoFlag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThreshRecoFlag_branch does not exist!\n");
				exit(1);
			}
			twrs_emThreshRecoFlag_isLoaded = true;
		}
		return twrs_emThreshRecoFlag_;
	}
	vector<vector<int> > &twrs_emThreshSevLvl()
	{
		if (not twrs_emThreshSevLvl_isLoaded) {
			if (twrs_emThreshSevLvl_branch != 0) {
				twrs_emThreshSevLvl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_emThreshSevLvl_branch does not exist!\n");
				exit(1);
			}
			twrs_emThreshSevLvl_isLoaded = true;
		}
		return twrs_emThreshSevLvl_;
	}
	vector<vector<int> > &twrsUncleaned_emMaxEcalMGPASampleADC()
	{
		if (not twrsUncleaned_emMaxEcalMGPASampleADC_isLoaded) {
			if (twrsUncleaned_emMaxEcalMGPASampleADC_branch != 0) {
				twrsUncleaned_emMaxEcalMGPASampleADC_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emMaxEcalMGPASampleADC_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emMaxEcalMGPASampleADC_isLoaded = true;
		}
		return twrsUncleaned_emMaxEcalMGPASampleADC_;
	}
	vector<vector<int> > &twrsUncleaned_emThreshRecoFlag()
	{
		if (not twrsUncleaned_emThreshRecoFlag_isLoaded) {
			if (twrsUncleaned_emThreshRecoFlag_branch != 0) {
				twrsUncleaned_emThreshRecoFlag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThreshRecoFlag_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThreshRecoFlag_isLoaded = true;
		}
		return twrsUncleaned_emThreshRecoFlag_;
	}
	vector<vector<int> > &twrsUncleaned_emThreshSevLvl()
	{
		if (not twrsUncleaned_emThreshSevLvl_isLoaded) {
			if (twrsUncleaned_emThreshSevLvl_branch != 0) {
				twrsUncleaned_emThreshSevLvl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_emThreshSevLvl_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_emThreshSevLvl_isLoaded = true;
		}
		return twrsUncleaned_emThreshSevLvl_;
	}
	vector<vector<int> > &taus_calo_isotrk_idx()
	{
		if (not taus_calo_isotrk_idx_isLoaded) {
			if (taus_calo_isotrk_idx_branch != 0) {
				taus_calo_isotrk_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_isotrk_idx_branch does not exist!\n");
				exit(1);
			}
			taus_calo_isotrk_idx_isLoaded = true;
		}
		return taus_calo_isotrk_idx_;
	}
	vector<vector<int> > &taus_calo_sigtrk_idx()
	{
		if (not taus_calo_sigtrk_idx_isLoaded) {
			if (taus_calo_sigtrk_idx_branch != 0) {
				taus_calo_sigtrk_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch taus_calo_sigtrk_idx_branch does not exist!\n");
				exit(1);
			}
			taus_calo_sigtrk_idx_isLoaded = true;
		}
		return taus_calo_sigtrk_idx_;
	}
	vector<vector<int> > &genps_lepdaughter_id()
	{
		if (not genps_lepdaughter_id_isLoaded) {
			if (genps_lepdaughter_id_branch != 0) {
				genps_lepdaughter_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_lepdaughter_id_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_id_isLoaded = true;
		}
		return genps_lepdaughter_id_;
	}
	vector<vector<int> > &genps_lepdaughter_idx()
	{
		if (not genps_lepdaughter_idx_isLoaded) {
			if (genps_lepdaughter_idx_branch != 0) {
				genps_lepdaughter_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_lepdaughter_idx_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_idx_isLoaded = true;
		}
		return genps_lepdaughter_idx_;
	}
	vector<vector<int> > &hlt_trigObjs_id()
	{
		if (not hlt_trigObjs_id_isLoaded) {
			if (hlt_trigObjs_id_branch != 0) {
				hlt_trigObjs_id_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_trigObjs_id_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_id_isLoaded = true;
		}
		return hlt_trigObjs_id_;
	}
	vector<vector<int> > &hyp_jets_idx()
	{
		if (not hyp_jets_idx_isLoaded) {
			if (hyp_jets_idx_branch != 0) {
				hyp_jets_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_jets_idx_branch does not exist!\n");
				exit(1);
			}
			hyp_jets_idx_isLoaded = true;
		}
		return hyp_jets_idx_;
	}
	vector<vector<int> > &hyp_other_jets_idx()
	{
		if (not hyp_other_jets_idx_isLoaded) {
			if (hyp_other_jets_idx_branch != 0) {
				hyp_other_jets_idx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_other_jets_idx_branch does not exist!\n");
				exit(1);
			}
			hyp_other_jets_idx_isLoaded = true;
		}
		return hyp_other_jets_idx_;
	}
	unsigned int &evt_ntwrs()
	{
		if (not evt_ntwrs_isLoaded) {
			if (evt_ntwrs_branch != 0) {
				evt_ntwrs_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ntwrs_branch does not exist!\n");
				exit(1);
			}
			evt_ntwrs_isLoaded = true;
		}
		return evt_ntwrs_;
	}
	unsigned int &evt_nels()
	{
		if (not evt_nels_isLoaded) {
			if (evt_nels_branch != 0) {
				evt_nels_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nels_branch does not exist!\n");
				exit(1);
			}
			evt_nels_isLoaded = true;
		}
		return evt_nels_;
	}
	unsigned int &evt_detectorStatus()
	{
		if (not evt_detectorStatus_isLoaded) {
			if (evt_detectorStatus_branch != 0) {
				evt_detectorStatus_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_detectorStatus_branch does not exist!\n");
				exit(1);
			}
			evt_detectorStatus_isLoaded = true;
		}
		return evt_detectorStatus_;
	}
	unsigned int &evt_event()
	{
		if (not evt_event_isLoaded) {
			if (evt_event_branch != 0) {
				evt_event_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_event_branch does not exist!\n");
				exit(1);
			}
			evt_event_isLoaded = true;
		}
		return evt_event_;
	}
	unsigned int &evt_lumiBlock()
	{
		if (not evt_lumiBlock_isLoaded) {
			if (evt_lumiBlock_branch != 0) {
				evt_lumiBlock_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_lumiBlock_branch does not exist!\n");
				exit(1);
			}
			evt_lumiBlock_isLoaded = true;
		}
		return evt_lumiBlock_;
	}
	unsigned int &evt_run()
	{
		if (not evt_run_isLoaded) {
			if (evt_run_branch != 0) {
				evt_run_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_run_branch does not exist!\n");
				exit(1);
			}
			evt_run_isLoaded = true;
		}
		return evt_run_;
	}
	unsigned int &genps_flavorHistoryFilterResult()
	{
		if (not genps_flavorHistoryFilterResult_isLoaded) {
			if (genps_flavorHistoryFilterResult_branch != 0) {
				genps_flavorHistoryFilterResult_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_flavorHistoryFilterResult_branch does not exist!\n");
				exit(1);
			}
			genps_flavorHistoryFilterResult_isLoaded = true;
		}
		return genps_flavorHistoryFilterResult_;
	}
	unsigned int &evt_ngenjets()
	{
		if (not evt_ngenjets_isLoaded) {
			if (evt_ngenjets_branch != 0) {
				evt_ngenjets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ngenjets_branch does not exist!\n");
				exit(1);
			}
			evt_ngenjets_isLoaded = true;
		}
		return evt_ngenjets_;
	}
	unsigned int &genps_signalProcessID()
	{
		if (not genps_signalProcessID_isLoaded) {
			if (genps_signalProcessID_branch != 0) {
				genps_signalProcessID_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genps_signalProcessID_branch does not exist!\n");
				exit(1);
			}
			genps_signalProcessID_isLoaded = true;
		}
		return genps_signalProcessID_;
	}
	unsigned int &hlt_bits1()
	{
		if (not hlt_bits1_isLoaded) {
			if (hlt_bits1_branch != 0) {
				hlt_bits1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits1_branch does not exist!\n");
				exit(1);
			}
			hlt_bits1_isLoaded = true;
		}
		return hlt_bits1_;
	}
	unsigned int &hlt_bits2()
	{
		if (not hlt_bits2_isLoaded) {
			if (hlt_bits2_branch != 0) {
				hlt_bits2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits2_branch does not exist!\n");
				exit(1);
			}
			hlt_bits2_isLoaded = true;
		}
		return hlt_bits2_;
	}
	unsigned int &hlt_bits3()
	{
		if (not hlt_bits3_isLoaded) {
			if (hlt_bits3_branch != 0) {
				hlt_bits3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits3_branch does not exist!\n");
				exit(1);
			}
			hlt_bits3_isLoaded = true;
		}
		return hlt_bits3_;
	}
	unsigned int &hlt_bits4()
	{
		if (not hlt_bits4_isLoaded) {
			if (hlt_bits4_branch != 0) {
				hlt_bits4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits4_branch does not exist!\n");
				exit(1);
			}
			hlt_bits4_isLoaded = true;
		}
		return hlt_bits4_;
	}
	unsigned int &hlt_bits5()
	{
		if (not hlt_bits5_isLoaded) {
			if (hlt_bits5_branch != 0) {
				hlt_bits5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits5_branch does not exist!\n");
				exit(1);
			}
			hlt_bits5_isLoaded = true;
		}
		return hlt_bits5_;
	}
	unsigned int &hlt_bits6()
	{
		if (not hlt_bits6_isLoaded) {
			if (hlt_bits6_branch != 0) {
				hlt_bits6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits6_branch does not exist!\n");
				exit(1);
			}
			hlt_bits6_isLoaded = true;
		}
		return hlt_bits6_;
	}
	unsigned int &hlt_bits7()
	{
		if (not hlt_bits7_isLoaded) {
			if (hlt_bits7_branch != 0) {
				hlt_bits7_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits7_branch does not exist!\n");
				exit(1);
			}
			hlt_bits7_isLoaded = true;
		}
		return hlt_bits7_;
	}
	unsigned int &hlt_bits8()
	{
		if (not hlt_bits8_isLoaded) {
			if (hlt_bits8_branch != 0) {
				hlt_bits8_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hlt_bits8_branch does not exist!\n");
				exit(1);
			}
			hlt_bits8_isLoaded = true;
		}
		return hlt_bits8_;
	}
	unsigned int &evt_njets()
	{
		if (not evt_njets_isLoaded) {
			if (evt_njets_branch != 0) {
				evt_njets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_njets_branch does not exist!\n");
				exit(1);
			}
			evt_njets_isLoaded = true;
		}
		return evt_njets_;
	}
	unsigned int &evt_njpts()
	{
		if (not evt_njpts_isLoaded) {
			if (evt_njpts_branch != 0) {
				evt_njpts_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_njpts_branch does not exist!\n");
				exit(1);
			}
			evt_njpts_isLoaded = true;
		}
		return evt_njpts_;
	}
	unsigned int &l1_bits1()
	{
		if (not l1_bits1_isLoaded) {
			if (l1_bits1_branch != 0) {
				l1_bits1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_bits1_branch does not exist!\n");
				exit(1);
			}
			l1_bits1_isLoaded = true;
		}
		return l1_bits1_;
	}
	unsigned int &l1_bits2()
	{
		if (not l1_bits2_isLoaded) {
			if (l1_bits2_branch != 0) {
				l1_bits2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_bits2_branch does not exist!\n");
				exit(1);
			}
			l1_bits2_isLoaded = true;
		}
		return l1_bits2_;
	}
	unsigned int &l1_bits3()
	{
		if (not l1_bits3_isLoaded) {
			if (l1_bits3_branch != 0) {
				l1_bits3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_bits3_branch does not exist!\n");
				exit(1);
			}
			l1_bits3_isLoaded = true;
		}
		return l1_bits3_;
	}
	unsigned int &l1_bits4()
	{
		if (not l1_bits4_isLoaded) {
			if (l1_bits4_branch != 0) {
				l1_bits4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_bits4_branch does not exist!\n");
				exit(1);
			}
			l1_bits4_isLoaded = true;
		}
		return l1_bits4_;
	}
	unsigned int &l1_techbits1()
	{
		if (not l1_techbits1_isLoaded) {
			if (l1_techbits1_branch != 0) {
				l1_techbits1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_techbits1_branch does not exist!\n");
				exit(1);
			}
			l1_techbits1_isLoaded = true;
		}
		return l1_techbits1_;
	}
	unsigned int &l1_techbits2()
	{
		if (not l1_techbits2_isLoaded) {
			if (l1_techbits2_branch != 0) {
				l1_techbits2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1_techbits2_branch does not exist!\n");
				exit(1);
			}
			l1_techbits2_isLoaded = true;
		}
		return l1_techbits2_;
	}
	unsigned int &evt_nphotons()
	{
		if (not evt_nphotons_isLoaded) {
			if (evt_nphotons_branch != 0) {
				evt_nphotons_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nphotons_branch does not exist!\n");
				exit(1);
			}
			evt_nphotons_isLoaded = true;
		}
		return evt_nphotons_;
	}
	unsigned int &evt_nscs()
	{
		if (not evt_nscs_isLoaded) {
			if (evt_nscs_branch != 0) {
				evt_nscs_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nscs_branch does not exist!\n");
				exit(1);
			}
			evt_nscs_isLoaded = true;
		}
		return evt_nscs_;
	}
	unsigned int &evt_nscjets()
	{
		if (not evt_nscjets_isLoaded) {
			if (evt_nscjets_branch != 0) {
				evt_nscjets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nscjets_branch does not exist!\n");
				exit(1);
			}
			evt_nscjets_isLoaded = true;
		}
		return evt_nscjets_;
	}
	unsigned int &evt_ntrkjets()
	{
		if (not evt_ntrkjets_isLoaded) {
			if (evt_ntrkjets_branch != 0) {
				evt_ntrkjets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_ntrkjets_branch does not exist!\n");
				exit(1);
			}
			evt_ntrkjets_isLoaded = true;
		}
		return evt_ntrkjets_;
	}
	unsigned int &evt_nvtxs()
	{
		if (not evt_nvtxs_isLoaded) {
			if (evt_nvtxs_branch != 0) {
				evt_nvtxs_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nvtxs_branch does not exist!\n");
				exit(1);
			}
			evt_nvtxs_isLoaded = true;
		}
		return evt_nvtxs_;
	}
	vector<unsigned int> &twrs_detid()
	{
		if (not twrs_detid_isLoaded) {
			if (twrs_detid_branch != 0) {
				twrs_detid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_detid_branch does not exist!\n");
				exit(1);
			}
			twrs_detid_isLoaded = true;
		}
		return twrs_detid_;
	}
	vector<unsigned int> &twrs_numBadEcalCells()
	{
		if (not twrs_numBadEcalCells_isLoaded) {
			if (twrs_numBadEcalCells_branch != 0) {
				twrs_numBadEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numBadEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numBadEcalCells_isLoaded = true;
		}
		return twrs_numBadEcalCells_;
	}
	vector<unsigned int> &twrs_numBadHcalCells()
	{
		if (not twrs_numBadHcalCells_isLoaded) {
			if (twrs_numBadHcalCells_branch != 0) {
				twrs_numBadHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numBadHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numBadHcalCells_isLoaded = true;
		}
		return twrs_numBadHcalCells_;
	}
	vector<unsigned int> &twrs_numProblematicEcalCells()
	{
		if (not twrs_numProblematicEcalCells_isLoaded) {
			if (twrs_numProblematicEcalCells_branch != 0) {
				twrs_numProblematicEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numProblematicEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numProblematicEcalCells_isLoaded = true;
		}
		return twrs_numProblematicEcalCells_;
	}
	vector<unsigned int> &twrs_numProblematicHcalCells()
	{
		if (not twrs_numProblematicHcalCells_isLoaded) {
			if (twrs_numProblematicHcalCells_branch != 0) {
				twrs_numProblematicHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numProblematicHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numProblematicHcalCells_isLoaded = true;
		}
		return twrs_numProblematicHcalCells_;
	}
	vector<unsigned int> &twrs_numRecoveredEcalCells()
	{
		if (not twrs_numRecoveredEcalCells_isLoaded) {
			if (twrs_numRecoveredEcalCells_branch != 0) {
				twrs_numRecoveredEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numRecoveredEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numRecoveredEcalCells_isLoaded = true;
		}
		return twrs_numRecoveredEcalCells_;
	}
	vector<unsigned int> &twrs_numRecoveredHcalCells()
	{
		if (not twrs_numRecoveredHcalCells_isLoaded) {
			if (twrs_numRecoveredHcalCells_branch != 0) {
				twrs_numRecoveredHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrs_numRecoveredHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numRecoveredHcalCells_isLoaded = true;
		}
		return twrs_numRecoveredHcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_detid()
	{
		if (not twrsUncleaned_detid_isLoaded) {
			if (twrsUncleaned_detid_branch != 0) {
				twrsUncleaned_detid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_detid_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_detid_isLoaded = true;
		}
		return twrsUncleaned_detid_;
	}
	vector<unsigned int> &twrsUncleaned_numBadEcalCells()
	{
		if (not twrsUncleaned_numBadEcalCells_isLoaded) {
			if (twrsUncleaned_numBadEcalCells_branch != 0) {
				twrsUncleaned_numBadEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numBadEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numBadEcalCells_isLoaded = true;
		}
		return twrsUncleaned_numBadEcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_numBadHcalCells()
	{
		if (not twrsUncleaned_numBadHcalCells_isLoaded) {
			if (twrsUncleaned_numBadHcalCells_branch != 0) {
				twrsUncleaned_numBadHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numBadHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numBadHcalCells_isLoaded = true;
		}
		return twrsUncleaned_numBadHcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_numProblematicEcalCells()
	{
		if (not twrsUncleaned_numProblematicEcalCells_isLoaded) {
			if (twrsUncleaned_numProblematicEcalCells_branch != 0) {
				twrsUncleaned_numProblematicEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numProblematicEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numProblematicEcalCells_isLoaded = true;
		}
		return twrsUncleaned_numProblematicEcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_numProblematicHcalCells()
	{
		if (not twrsUncleaned_numProblematicHcalCells_isLoaded) {
			if (twrsUncleaned_numProblematicHcalCells_branch != 0) {
				twrsUncleaned_numProblematicHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numProblematicHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numProblematicHcalCells_isLoaded = true;
		}
		return twrsUncleaned_numProblematicHcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_numRecoveredEcalCells()
	{
		if (not twrsUncleaned_numRecoveredEcalCells_isLoaded) {
			if (twrsUncleaned_numRecoveredEcalCells_branch != 0) {
				twrsUncleaned_numRecoveredEcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numRecoveredEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numRecoveredEcalCells_isLoaded = true;
		}
		return twrsUncleaned_numRecoveredEcalCells_;
	}
	vector<unsigned int> &twrsUncleaned_numRecoveredHcalCells()
	{
		if (not twrsUncleaned_numRecoveredHcalCells_isLoaded) {
			if (twrsUncleaned_numRecoveredHcalCells_branch != 0) {
				twrsUncleaned_numRecoveredHcalCells_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch twrsUncleaned_numRecoveredHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrsUncleaned_numRecoveredHcalCells_isLoaded = true;
		}
		return twrsUncleaned_numRecoveredHcalCells_;
	}
	vector<unsigned int> &hyp_quadlep_bucket()
	{
		if (not hyp_quadlep_bucket_isLoaded) {
			if (hyp_quadlep_bucket_branch != 0) {
				hyp_quadlep_bucket_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_bucket_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_bucket_isLoaded = true;
		}
		return hyp_quadlep_bucket_;
	}
	vector<unsigned int> &hyp_quadlep_first_index()
	{
		if (not hyp_quadlep_first_index_isLoaded) {
			if (hyp_quadlep_first_index_branch != 0) {
				hyp_quadlep_first_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_first_index_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_first_index_isLoaded = true;
		}
		return hyp_quadlep_first_index_;
	}
	vector<unsigned int> &hyp_quadlep_fourth_index()
	{
		if (not hyp_quadlep_fourth_index_isLoaded) {
			if (hyp_quadlep_fourth_index_branch != 0) {
				hyp_quadlep_fourth_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_fourth_index_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_fourth_index_isLoaded = true;
		}
		return hyp_quadlep_fourth_index_;
	}
	vector<unsigned int> &hyp_quadlep_second_index()
	{
		if (not hyp_quadlep_second_index_isLoaded) {
			if (hyp_quadlep_second_index_branch != 0) {
				hyp_quadlep_second_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_second_index_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_second_index_isLoaded = true;
		}
		return hyp_quadlep_second_index_;
	}
	vector<unsigned int> &hyp_quadlep_third_index()
	{
		if (not hyp_quadlep_third_index_isLoaded) {
			if (hyp_quadlep_third_index_branch != 0) {
				hyp_quadlep_third_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_quadlep_third_index_branch does not exist!\n");
				exit(1);
			}
			hyp_quadlep_third_index_isLoaded = true;
		}
		return hyp_quadlep_third_index_;
	}
	vector<unsigned int> &hyp_trilep_bucket()
	{
		if (not hyp_trilep_bucket_isLoaded) {
			if (hyp_trilep_bucket_branch != 0) {
				hyp_trilep_bucket_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_bucket_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_bucket_isLoaded = true;
		}
		return hyp_trilep_bucket_;
	}
	vector<unsigned int> &hyp_trilep_first_index()
	{
		if (not hyp_trilep_first_index_isLoaded) {
			if (hyp_trilep_first_index_branch != 0) {
				hyp_trilep_first_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_first_index_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_first_index_isLoaded = true;
		}
		return hyp_trilep_first_index_;
	}
	vector<unsigned int> &hyp_trilep_second_index()
	{
		if (not hyp_trilep_second_index_isLoaded) {
			if (hyp_trilep_second_index_branch != 0) {
				hyp_trilep_second_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_second_index_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_second_index_isLoaded = true;
		}
		return hyp_trilep_second_index_;
	}
	vector<unsigned int> &hyp_trilep_third_index()
	{
		if (not hyp_trilep_third_index_isLoaded) {
			if (hyp_trilep_third_index_branch != 0) {
				hyp_trilep_third_index_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hyp_trilep_third_index_branch does not exist!\n");
				exit(1);
			}
			hyp_trilep_third_index_isLoaded = true;
		}
		return hyp_trilep_third_index_;
	}
	int &evt_nEvts()
	{
		if (not evt_nEvts_isLoaded) {
			if (evt_nEvts_branch != 0) {
				evt_nEvts_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_nEvts_branch does not exist!\n");
				exit(1);
			}
			evt_nEvts_isLoaded = true;
		}
		return evt_nEvts_;
	}
	float &evt_filt_eff()
	{
		if (not evt_filt_eff_isLoaded) {
			if (evt_filt_eff_branch != 0) {
				evt_filt_eff_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch evt_filt_eff_branch does not exist!\n");
				exit(1);
			}
			evt_filt_eff_isLoaded = true;
		}
		return evt_filt_eff_;
	}
	bool passHLTTrigger(TString trigName) {
		int trigIndx;
		vector<TString>::const_iterator begin_it = hlt_trigNames().begin();
		vector<TString>::const_iterator end_it = hlt_trigNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, trigName);
		if(found_it != end_it)
			trigIndx = found_it - begin_it;
		else {
			cout << "Cannot find Trigger " << trigName << endl; 
			return 0;
		}

		if(trigIndx <= 31) {
			unsigned int bitmask = 1;
			bitmask <<= trigIndx;
			return hlt_bits1() & bitmask;
		}
		if(trigIndx >= 32 && trigIndx <= 63) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 32); 
			return hlt_bits2() & bitmask;
		}
		if(trigIndx >= 64 && trigIndx <= 95) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 64); 
			return hlt_bits3() & bitmask;
		}
		if(trigIndx >= 96 && trigIndx <= 127) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 96); 
			return hlt_bits4() & bitmask;
		}
		if(trigIndx >= 128 && trigIndx <= 159) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 128); 
			return hlt_bits5() & bitmask;
		}
		if(trigIndx >= 160 && trigIndx <= 191) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 160); 
			return hlt_bits6() & bitmask;
		}
		if(trigIndx >= 192 && trigIndx <= 223) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 192); 
			return hlt_bits7() & bitmask;
		}
		if(trigIndx >= 224 && trigIndx <= 255) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 224); 
			return hlt_bits8() & bitmask;
		}
	return 0;
	}
	bool passL1Trigger(TString trigName) {
		int trigIndx;
		vector<TString>::const_iterator begin_it = l1_trigNames().begin();
		vector<TString>::const_iterator end_it = l1_trigNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, trigName);
		if(found_it != end_it)
			trigIndx = found_it - begin_it;
		else {
			cout << "Cannot find Trigger " << trigName << endl; 
			return 0;
		}

		if(trigIndx <= 31) {
			unsigned int bitmask = 1;
			bitmask <<= trigIndx;
			return l1_bits1() & bitmask;
		}
		if(trigIndx >= 32 && trigIndx <= 63) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 32); 
			return l1_bits2() & bitmask;
		}
		if(trigIndx >= 64 && trigIndx <= 95) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 64); 
			return l1_bits3() & bitmask;
		}
		if(trigIndx >= 96 && trigIndx <= 127) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 96); 
			return l1_bits4() & bitmask;
		}
	return 0;
	}
};

#ifndef __CINT__
extern CMS2 cms2;
#endif

namespace tas {
	TString &evt_CMS2tag();
	TString &evt_dataset();
	vector<TString> &hlt_trigNames();
	vector<TString> &l1_trigNames();
	vector<double> &jets_closestElectron_DR();
	vector<double> &jets_closestMuon_DR();
	float &evt_bs_Xwidth();
	float &evt_bs_XwidthErr();
	float &evt_bs_Ywidth();
	float &evt_bs_YwidthErr();
	float &evt_bs_dxdz();
	float &evt_bs_dxdzErr();
	float &evt_bs_dydz();
	float &evt_bs_dydzErr();
	float &evt_bs_sigmaZ();
	float &evt_bs_sigmaZErr();
	float &evt_bs_xErr();
	float &evt_bs_yErr();
	float &evt_bs_zErr();
	float &evt_bField();
	float &evt_kfactor();
	float &evt_scale1fb();
	float &evt_xsec_excl();
	float &evt_xsec_incl();
	float &gen_met();
	float &gen_metPhi();
	float &genps_alphaQCD();
	float &genps_pthat();
	float &genps_qScale();
	float &genps_weight();
	float &gen_sumEt();
	float &hcalnoise_eventChargeFraction();
	float &hcalnoise_eventEMEnergy();
	float &hcalnoise_eventEMFraction();
	float &hcalnoise_eventHadEnergy();
	float &hcalnoise_eventTrackEnergy();
	float &hcalnoise_max10GeVHitTime();
	float &hcalnoise_max25GeVHitTime();
	float &hcalnoise_min10GeVHitTime();
	float &hcalnoise_min25GeVHitTime();
	float &hcalnoise_minE10TS();
	float &hcalnoise_minE2Over10TS();
	float &hcalnoise_minE2TS();
	float &hcalnoise_minHPDEMF();
	float &hcalnoise_minRBXEMF();
	float &hcalnoise_rms10GeVHitTime();
	float &hcalnoise_rms25GeVHitTime();
	float &l1_met_etTot();
	float &l1_met_met();
	float &l1_mht_htTot();
	float &l1_mht_mht();
	float &evt_ecalendcapm_met();
	float &evt_ecalendcapm_metPhi();
	float &evt_ecalendcapp_met();
	float &evt_ecalendcapp_metPhi();
	float &evt_ecalmet();
	float &evt_ecalmetPhi();
	float &evt_endcapm_met();
	float &evt_endcapm_metPhi();
	float &evt_endcapp_met();
	float &evt_endcapp_metPhi();
	float &evt_hcalendcapm_met();
	float &evt_hcalendcapm_metPhi();
	float &evt_hcalendcapp_met();
	float &evt_hcalendcapp_metPhi();
	float &evt_hcalmet();
	float &evt_hcalmetPhi();
	float &evt_met();
	float &evt_metHO();
	float &evt_metHOPhi();
	float &evt_metHOSig();
	float &evt_metMuonCorr();
	float &evt_metMuonCorrPhi();
	float &evt_metMuonCorrSig();
	float &evt_metMuonJESCorr();
	float &evt_metMuonJESCorrPhi();
	float &evt_metMuonJESCorrSig();
	float &evt_metNoHF();
	float &evt_metNoHFHO();
	float &evt_metNoHFHOPhi();
	float &evt_metNoHFHOSig();
	float &evt_metNoHFPhi();
	float &evt_metNoHFSig();
	float &evt_metOpt();
	float &evt_metOptHO();
	float &evt_metOptHOPhi();
	float &evt_metOptHOSig();
	float &evt_metOptNoHF();
	float &evt_metOptNoHFHO();
	float &evt_metOptNoHFHOPhi();
	float &evt_metOptNoHFHOSig();
	float &evt_metOptNoHFPhi();
	float &evt_metOptNoHFSig();
	float &evt_metOptPhi();
	float &evt_metOptSig();
	float &evt_metPhi();
	float &evt_metSig();
	float &evt_sumet();
	float &evt_sumetHO();
	float &evt_sumetMuonCorr();
	float &evt_sumetNoHF();
	float &evt_sumetNoHFHO();
	float &evt_sumetOpt();
	float &evt_sumetOptHO();
	float &evt_sumetOptNoHF();
	float &evt_sumetOptNoHFHO();
	float &pdfinfo_scale();
	float &pdfinfo_x1();
	float &pdfinfo_x2();
	float &evt_pfmet();
	float &evt_pfmetPhi();
	float &evt_pfmetSig();
	float &evt_pfsumet();
	float &evt_tcmet();
	float &evt_tcmetPhi();
	float &evt_tcmetSig();
	float &evt_tcsumet();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_met_p4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_mht_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_calo_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_gp_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trk_mcp4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_trk_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_trk_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_v4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_mc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_mc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jpts_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emiso_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emnoiso_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsc_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsf_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetst_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_mus_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitdefault_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitfirsthit_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitpicky_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fittev_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_outerPos_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksecalp4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksp4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_pos_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_vtx_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_inner_position();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_position();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_trk_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_vertex_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trkjets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_jets_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_other_jets_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isochargecand_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isogammacand_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isoneutrcand_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_sigchargecand_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_siggammacand_p4();
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signeutrcand_p4();
	vector<float> &jets_combinedSecondaryVertexBJetTag();
	vector<float> &jets_combinedSecondaryVertexMVABJetTag();
	vector<float> &jets_jetBProbabilityBJetTag();
	vector<float> &jets_jetProbabilityBJetTag();
	vector<float> &jets_simpleSecondaryVertexBJetTag();
	vector<float> &jets_softElectronByIP3dBJetTag();
	vector<float> &jets_softElectronByPtBJetTag();
	vector<float> &jets_softMuonBJetTag();
	vector<float> &jets_softMuonByIP3dBJetTag();
	vector<float> &jets_softMuonByPtBJetTag();
	vector<float> &jets_softMuonNoIPBJetTag();
	vector<float> &jets_trackCountingHighEffBJetTag();
	vector<float> &jets_trackCountingHighPurBJetTag();
	vector<float> &trkjets_combinedSecondaryVertexBJetTag();
	vector<float> &trkjets_combinedSecondaryVertexMVABJetTag();
	vector<float> &trkjets_jetBProbabilityBJetTag();
	vector<float> &trkjets_jetProbabilityBJetTag();
	vector<float> &trkjets_simpleSecondaryVertexBJetTag();
	vector<float> &trkjets_softElectronByIP3dBJetTag();
	vector<float> &trkjets_softElectronByPtBJetTag();
	vector<float> &trkjets_softMuonBJetTag();
	vector<float> &trkjets_softMuonByIP3dBJetTag();
	vector<float> &trkjets_softMuonByPtBJetTag();
	vector<float> &trkjets_softMuonNoIPBJetTag();
	vector<float> &trkjets_trackCountingHighEffBJetTag();
	vector<float> &trkjets_trackCountingHighPurBJetTag();
	vector<float> &evt_bs_covMatrix();
	vector<float> &twrs_ecalTime();
	vector<float> &twrs_emEnergy();
	vector<float> &twrs_emEt();
	vector<float> &twrs_emEtcorr();
	vector<float> &twrs_eta();
	vector<float> &twrs_etacorr();
	vector<float> &twrs_etcorr();
	vector<float> &twrs_hadEnergy();
	vector<float> &twrs_hadEt();
	vector<float> &twrs_hadEtcorr();
	vector<float> &twrs_hcalTime();
	vector<float> &twrs_outerEnergy();
	vector<float> &twrs_outerEt();
	vector<float> &twrs_outerEtcorr();
	vector<float> &twrs_pcorr();
	vector<float> &twrs_phi();
	vector<float> &twrs_phicorr();
	vector<float> &twrs_spikeEt();
	vector<float> &twrs_spikeR4();
	vector<float> &twrsUncleaned_ecalTime();
	vector<float> &twrsUncleaned_emEnergy();
	vector<float> &twrsUncleaned_emEt();
	vector<float> &twrsUncleaned_emEtcorr();
	vector<float> &twrsUncleaned_eta();
	vector<float> &twrsUncleaned_etacorr();
	vector<float> &twrsUncleaned_etcorr();
	vector<float> &twrsUncleaned_hadEnergy();
	vector<float> &twrsUncleaned_hadEt();
	vector<float> &twrsUncleaned_hadEtcorr();
	vector<float> &twrsUncleaned_hcalTime();
	vector<float> &twrsUncleaned_outerEnergy();
	vector<float> &twrsUncleaned_outerEt();
	vector<float> &twrsUncleaned_outerEtcorr();
	vector<float> &twrsUncleaned_pcorr();
	vector<float> &twrsUncleaned_phi();
	vector<float> &twrsUncleaned_phicorr();
	vector<float> &twrsUncleaned_spikeEt();
	vector<float> &twrsUncleaned_spikeR4();
	vector<float> &taus_calo_isolationECALhitsEtSum();
	vector<float> &taus_calo_isolationtrksPtSum();
	vector<float> &taus_calo_leadtrk_HCAL3x3hitsEtSum();
	vector<float> &taus_calo_leadtrk_HCAL3x3hottesthitDEta();
	vector<float> &taus_calo_leadtrk_Signed_Sipt();
	vector<float> &taus_calo_leadtrk_lostHits();
	vector<float> &taus_calo_leadtrk_validHits();
	vector<float> &taus_calo_maximumHCALhitEt();
	vector<float> &taus_calo_signaltrksInvariantMass();
	vector<float> &els_mc3dr();
	vector<float> &els_mcdr();
	vector<float> &jets_mc3dr();
	vector<float> &jets_mcdr();
	vector<float> &jets_mc_emEnergy();
	vector<float> &jets_mc_gpdr();
	vector<float> &jets_mc_hadEnergy();
	vector<float> &jets_mc_invEnergy();
	vector<float> &jets_mc_otherEnergy();
	vector<float> &mus_mc3dr();
	vector<float> &mus_mcdr();
	vector<float> &trk_mc3dr();
	vector<float> &trk_mcdr();
	vector<float> &els_ecalJuraIso();
	vector<float> &els_ecalJuraTowerIso();
	vector<float> &els_hcalConeIso();
	vector<float> &els_tkJuraIso();
	vector<float> &els_jetdr();
	vector<float> &els_musdr();
	vector<float> &els_chi2();
	vector<float> &els_conv_dcot();
	vector<float> &els_conv_dist();
	vector<float> &els_d0();
	vector<float> &els_d0Err();
	vector<float> &els_d0corr();
	vector<float> &els_dEtaIn();
	vector<float> &els_dEtaOut();
	vector<float> &els_dPhiIn();
	vector<float> &els_dPhiInPhiOut();
	vector<float> &els_dPhiOut();
	vector<float> &els_deltaEtaEleClusterTrackAtCalo();
	vector<float> &els_deltaPhiEleClusterTrackAtCalo();
	vector<float> &els_e1x5();
	vector<float> &els_e2x5Max();
	vector<float> &els_e3x3();
	vector<float> &els_e5x5();
	vector<float> &els_eMax();
	vector<float> &els_eOverPIn();
	vector<float> &els_eOverPOut();
	vector<float> &els_eSC();
	vector<float> &els_eSCPresh();
	vector<float> &els_eSCRaw();
	vector<float> &els_eSeed();
	vector<float> &els_eSeedOverPIn();
	vector<float> &els_eSeedOverPOut();
	vector<float> &els_ecalEnergy();
	vector<float> &els_ecalEnergyError();
	vector<float> &els_ecalIso();
	vector<float> &els_ecalIso04();
	vector<float> &els_egamma_looseId();
	vector<float> &els_egamma_robustHighEnergy();
	vector<float> &els_egamma_robustLooseId();
	vector<float> &els_egamma_robustTightId();
	vector<float> &els_egamma_tightId();
	vector<float> &els_electronMomentumError();
	vector<float> &els_etaErr();
	vector<float> &els_etaSC();
	vector<float> &els_fbrem();
	vector<float> &els_hOverE();
	vector<float> &els_hcalDepth1OverEcal();
	vector<float> &els_hcalDepth1TowerSumEt();
	vector<float> &els_hcalDepth1TowerSumEt04();
	vector<float> &els_hcalDepth2OverEcal();
	vector<float> &els_hcalDepth2TowerSumEt();
	vector<float> &els_hcalDepth2TowerSumEt04();
	vector<float> &els_hcalIso();
	vector<float> &els_hcalIso04();
	vector<float> &els_layer1_charge();
	vector<float> &els_ndof();
	vector<float> &els_phiErr();
	vector<float> &els_phiSC();
	vector<float> &els_ptErr();
	vector<float> &els_sigmaEtaEta();
	vector<float> &els_sigmaIEtaIEta();
	vector<float> &els_sigmaIPhiIPhi();
	vector<float> &els_sigmaPhiPhi();
	vector<float> &els_tkIso();
	vector<float> &els_tkIso04();
	vector<float> &els_trackMomentumError();
	vector<float> &els_trkdr();
	vector<float> &els_trkshFrac();
	vector<float> &els_z0();
	vector<float> &els_z0Err();
	vector<float> &els_z0corr();
	vector<float> &hyp_Ht();
	vector<float> &hyp_dPhi_nJet_metMuonJESCorr();
	vector<float> &hyp_dPhi_nJet_muCorrMet();
	vector<float> &hyp_dPhi_nJet_tcMet();
	vector<float> &hyp_dPhi_nJet_unCorrMet();
	vector<float> &hyp_ll_chi2();
	vector<float> &hyp_ll_d0();
	vector<float> &hyp_ll_d0Err();
	vector<float> &hyp_ll_d0corr();
	vector<float> &hyp_ll_dPhi_metMuonJESCorr();
	vector<float> &hyp_ll_dPhi_muCorrMet();
	vector<float> &hyp_ll_dPhi_tcMet();
	vector<float> &hyp_ll_dPhi_unCorrMet();
	vector<float> &hyp_ll_etaErr();
	vector<float> &hyp_ll_ndof();
	vector<float> &hyp_ll_phiErr();
	vector<float> &hyp_ll_ptErr();
	vector<float> &hyp_ll_z0();
	vector<float> &hyp_ll_z0Err();
	vector<float> &hyp_ll_z0corr();
	vector<float> &hyp_lt_chi2();
	vector<float> &hyp_lt_d0();
	vector<float> &hyp_lt_d0Err();
	vector<float> &hyp_lt_d0corr();
	vector<float> &hyp_lt_dPhi_metMuonJESCorr();
	vector<float> &hyp_lt_dPhi_muCorrMet();
	vector<float> &hyp_lt_dPhi_tcMet();
	vector<float> &hyp_lt_dPhi_unCorrMet();
	vector<float> &hyp_lt_etaErr();
	vector<float> &hyp_lt_ndof();
	vector<float> &hyp_lt_phiErr();
	vector<float> &hyp_lt_ptErr();
	vector<float> &hyp_lt_z0();
	vector<float> &hyp_lt_z0Err();
	vector<float> &hyp_lt_z0corr();
	vector<float> &hyp_mt2_metMuonJESCorr();
	vector<float> &hyp_mt2_muCorrMet();
	vector<float> &hyp_mt2_tcMet();
	vector<float> &hyp_sumJetPt();
	vector<float> &hyp_FVFit_chi2ndf();
	vector<float> &hyp_FVFit_prob();
	vector<float> &hyp_FVFit_v4cxx();
	vector<float> &hyp_FVFit_v4cxy();
	vector<float> &hyp_FVFit_v4cyy();
	vector<float> &hyp_FVFit_v4czx();
	vector<float> &hyp_FVFit_v4czy();
	vector<float> &hyp_FVFit_v4czz();
	vector<float> &hyp_ll_ecaliso();
	vector<float> &hyp_ll_trkiso();
	vector<float> &hyp_lt_ecaliso();
	vector<float> &hyp_lt_trkiso();
	vector<float> &jets_approximatefHPD();
	vector<float> &jets_approximatefRBX();
	vector<float> &jets_cor();
	vector<float> &jets_emFrac();
	vector<float> &jets_fHPD();
	vector<float> &jets_fRBX();
	vector<float> &jets_fSubDetector1();
	vector<float> &jets_fSubDetector2();
	vector<float> &jets_fSubDetector3();
	vector<float> &jets_fSubDetector4();
	vector<float> &jets_hitsInN90();
	vector<float> &jets_n90Hits();
	vector<float> &jets_nECALTowers();
	vector<float> &jets_nHCALTowers();
	vector<float> &jets_restrictedEMF();
	vector<float> &jpts_emFrac();
	vector<float> &evt_ecalmet_etaslice();
	vector<float> &evt_ecalmet_etaslicePhi();
	vector<float> &evt_hcalmet_etaslice();
	vector<float> &evt_hcalmet_etaslicePhi();
	vector<float> &evt_towermet_etaslice();
	vector<float> &evt_towermet_etaslicePhi();
	vector<float> &mus_met_deltax();
	vector<float> &mus_met_deltay();
	vector<float> &mus_eledr();
	vector<float> &mus_jetdr();
	vector<float> &mus_caloCompatibility();
	vector<float> &mus_chi2();
	vector<float> &mus_d0();
	vector<float> &mus_d0Err();
	vector<float> &mus_d0corr();
	vector<float> &mus_e_em();
	vector<float> &mus_e_emS9();
	vector<float> &mus_e_had();
	vector<float> &mus_e_hadS9();
	vector<float> &mus_e_ho();
	vector<float> &mus_e_hoS9();
	vector<float> &mus_etaErr();
	vector<float> &mus_gfit_chi2();
	vector<float> &mus_gfit_d0();
	vector<float> &mus_gfit_d0Err();
	vector<float> &mus_gfit_d0corr();
	vector<float> &mus_gfit_ndof();
	vector<float> &mus_gfit_qoverp();
	vector<float> &mus_gfit_qoverpError();
	vector<float> &mus_gfit_z0();
	vector<float> &mus_gfit_z0Err();
	vector<float> &mus_gfit_z0corr();
	vector<float> &mus_iso03_emEt();
	vector<float> &mus_iso03_hadEt();
	vector<float> &mus_iso03_hoEt();
	vector<float> &mus_iso03_sumPt();
	vector<float> &mus_iso05_emEt();
	vector<float> &mus_iso05_hadEt();
	vector<float> &mus_iso05_hoEt();
	vector<float> &mus_iso05_sumPt();
	vector<float> &mus_iso_ecalvetoDep();
	vector<float> &mus_iso_hcalvetoDep();
	vector<float> &mus_iso_hovetoDep();
	vector<float> &mus_iso_trckvetoDep();
	vector<float> &mus_ndof();
	vector<float> &mus_phiErr();
	vector<float> &mus_ptErr();
	vector<float> &mus_qoverp();
	vector<float> &mus_qoverpError();
	vector<float> &mus_sta_chi2();
	vector<float> &mus_sta_d0();
	vector<float> &mus_sta_d0Err();
	vector<float> &mus_sta_d0corr();
	vector<float> &mus_sta_ndof();
	vector<float> &mus_sta_qoverp();
	vector<float> &mus_sta_qoverpError();
	vector<float> &mus_sta_z0();
	vector<float> &mus_sta_z0Err();
	vector<float> &mus_sta_z0corr();
	vector<float> &mus_timeAtIpInOut();
	vector<float> &mus_timeAtIpInOutErr();
	vector<float> &mus_timeAtIpOutIn();
	vector<float> &mus_timeAtIpOutInErr();
	vector<float> &mus_vertexphi();
	vector<float> &mus_z0();
	vector<float> &mus_z0Err();
	vector<float> &mus_z0corr();
	vector<float> &pfjets_chargedEmE();
	vector<float> &pfjets_chargedHadronE();
	vector<float> &pfjets_cor();
	vector<float> &pfjets_neutralEmE();
	vector<float> &pfjets_neutralHadronE();
	vector<float> &taus_pf_caloComp();
	vector<float> &taus_pf_ecalStripSumEOverPLead();
	vector<float> &taus_pf_electronPreIDOutput();
	vector<float> &taus_pf_emf();
	vector<float> &taus_pf_hcal3x3OverPLead();
	vector<float> &taus_pf_hcalMaxOverPLead();
	vector<float> &taus_pf_hcalTotOverPLead();
	vector<float> &taus_pf_isolationchargecandPtSum();
	vector<float> &taus_pf_isolationgammacandEtSum();
	vector<float> &taus_pf_lead_chargecand_Signed_Sipt();
	vector<float> &taus_pf_maximumHCALPFClusterEt();
	vector<float> &taus_pf_segComp();
	vector<float> &photons_e1x5();
	vector<float> &photons_e2x5Max();
	vector<float> &photons_e3x3();
	vector<float> &photons_e5x5();
	vector<float> &photons_eMax();
	vector<float> &photons_eSC();
	vector<float> &photons_eSCPresh();
	vector<float> &photons_eSCRaw();
	vector<float> &photons_eSeed();
	vector<float> &photons_ecalIso();
	vector<float> &photons_hOverE();
	vector<float> &photons_hcalIso();
	vector<float> &photons_sigmaEtaEta();
	vector<float> &photons_sigmaIEtaIEta();
	vector<float> &photons_sigmaIPhiIPhi();
	vector<float> &photons_sigmaPhiPhi();
	vector<float> &photons_tkIsoHollow();
	vector<float> &photons_tkIsoSolid();
	vector<float> &ran_dRClosestTower();
	vector<float> &ran_dRClosestTowerEmEt();
	vector<float> &ran_ecalIso03_egamma();
	vector<float> &ran_ecalIso03_mu();
	vector<float> &ran_hcalD1Iso03_egamma();
	vector<float> &ran_hcalD2Iso03_egamma();
	vector<float> &ran_hcalIso03_egamma();
	vector<float> &ran_hcalIso03_mu();
	vector<float> &ran_hoIso03_mu();
	vector<float> &ran_towerEmEt();
	vector<float> &ran_towerHadEt();
	vector<float> &ran_trkIso03_egamma();
	vector<float> &ran_trkIso03_mu();
	vector<float> &scs_clustersSize();
	vector<float> &scs_crystalsSize();
	vector<float> &scs_e1x3();
	vector<float> &scs_e1x5();
	vector<float> &scs_e2nd();
	vector<float> &scs_e2x2();
	vector<float> &scs_e2x5Max();
	vector<float> &scs_e3x1();
	vector<float> &scs_e3x2();
	vector<float> &scs_e3x3();
	vector<float> &scs_e4x4();
	vector<float> &scs_e5x5();
	vector<float> &scs_eMax();
	vector<float> &scs_eSeed();
	vector<float> &scs_energy();
	vector<float> &scs_eta();
	vector<float> &scs_hoe();
	vector<float> &scs_phi();
	vector<float> &scs_preshowerEnergy();
	vector<float> &scs_rawEnergy();
	vector<float> &scs_sigmaEtaEta();
	vector<float> &scs_sigmaEtaPhi();
	vector<float> &scs_sigmaIEtaIEta();
	vector<float> &scs_sigmaIEtaIPhi();
	vector<float> &scs_sigmaIPhiIPhi();
	vector<float> &scs_sigmaPhiPhi();
	vector<float> &scs_timeSeed();
	vector<float> &scjets_approximatefHPD();
	vector<float> &scjets_approximatefRBX();
	vector<float> &scjets_cor();
	vector<float> &scjets_emFrac();
	vector<float> &scjets_fHPD();
	vector<float> &scjets_fRBX();
	vector<float> &scjets_fSubDetector1();
	vector<float> &scjets_fSubDetector2();
	vector<float> &scjets_fSubDetector3();
	vector<float> &scjets_fSubDetector4();
	vector<float> &scjets_hitsInN90();
	vector<float> &scjets_n90Hits();
	vector<float> &scjets_nECALTowers();
	vector<float> &scjets_nHCALTowers();
	vector<float> &scjets_restrictedEMF();
	vector<float> &mus_tcmet_deltax();
	vector<float> &mus_tcmet_deltay();
	vector<float> &trks_chi2();
	vector<float> &trks_d0();
	vector<float> &trks_d0Err();
	vector<float> &trks_d0corr();
	vector<float> &trks_d0corrPhi();
	vector<float> &trks_d0phiCov();
	vector<float> &trks_etaErr();
	vector<float> &trks_layer1_charge();
	vector<float> &trks_ndof();
	vector<float> &trks_phiErr();
	vector<float> &trks_ptErr();
	vector<float> &trks_z0();
	vector<float> &trks_z0Err();
	vector<float> &trks_z0corr();
	vector<float> &trks_d0Errvtx();
	vector<float> &trks_d0vtx();
	vector<float> &vtxs_chi2();
	vector<float> &vtxs_ndof();
	vector<float> &vtxs_sumpt();
	vector<float> &vtxs_xError();
	vector<float> &vtxs_yError();
	vector<float> &vtxs_zError();
	vector<vector<float> > &twrs_em3x3();
	vector<vector<float> > &twrs_em5x5();
	vector<vector<float> > &twrs_emSwiss();
	vector<vector<float> > &twrs_emThresh();
	vector<vector<float> > &twrs_emThreshChi2();
	vector<vector<float> > &twrs_emThreshEta();
	vector<vector<float> > &twrs_emThreshTime();
	vector<vector<float> > &twrsUncleaned_em3x3();
	vector<vector<float> > &twrsUncleaned_em5x5();
	vector<vector<float> > &twrsUncleaned_emSwiss();
	vector<vector<float> > &twrsUncleaned_emThresh();
	vector<vector<float> > &twrsUncleaned_emThreshChi2();
	vector<vector<float> > &twrsUncleaned_emThreshEta();
	vector<vector<float> > &twrsUncleaned_emThreshTime();
	vector<vector<float> > &vtxs_covMatrix();
	int &evt_cscLooseHaloId();
	int &evt_cscTightHaloId();
	int &evt_ecalLooseHaloId();
	int &evt_ecalTightHaloId();
	int &evt_extremeTightHaloId();
	int &evt_globalLooseHaloId();
	int &evt_globalTightHaloId();
	int &evt_hcalLooseHaloId();
	int &evt_hcalTightHaloId();
	int &evt_looseHaloId();
	int &evt_tightHaloId();
	int &evt_bsType();
	int &evt_bunchCrossing();
	int &evt_experimentType();
	int &evt_orbitNumber();
	int &evt_storeNumber();
	int &hcalnoise_maxHPDHits();
	int &hcalnoise_maxRBXHits();
	int &hcalnoise_maxZeros();
	int &hcalnoise_noiseFilterStatus();
	int &hcalnoise_noiseType();
	int &hcalnoise_num10GeVHits();
	int &hcalnoise_num25GeVHits();
	int &hcalnoise_numProblematicRBXs();
	int &hcalnoise_passHighLevelNoiseFilter();
	int &hcalnoise_passLooseNoiseFilter();
	int &hcalnoise_passTightNoiseFilter();
	int &l1_nemiso();
	int &l1_nemnoiso();
	int &l1_njetsc();
	int &l1_njetsf();
	int &l1_njetst();
	int &l1_nmus();
	int &pdfinfo_id1();
	int &pdfinfo_id2();
	vector<int> &evt_ecaliPhiSuspects();
	vector<int> &evt_globaliPhiSuspects();
	vector<int> &evt_hcaliPhiSuspects();
	vector<int> &twrs_numCrystals();
	vector<int> &twrsUncleaned_numCrystals();
	vector<int> &taus_calo_charge();
	vector<int> &taus_calo_leadtrk_idx();
	vector<int> &taus_calo_tightId();
	vector<int> &els_mc3_id();
	vector<int> &els_mc3idx();
	vector<int> &els_mc3_motherid();
	vector<int> &els_mc3_motheridx();
	vector<int> &els_mc_id();
	vector<int> &els_mcidx();
	vector<int> &els_mc_motherid();
	vector<int> &jets_mc3_id();
	vector<int> &jets_mc3idx();
	vector<int> &jets_mc_gpidx();
	vector<int> &jets_mc_id();
	vector<int> &jets_mcidx();
	vector<int> &mus_mc3_id();
	vector<int> &mus_mc3idx();
	vector<int> &mus_mc3_motherid();
	vector<int> &mus_mc3_motheridx();
	vector<int> &mus_mc_id();
	vector<int> &mus_mcidx();
	vector<int> &mus_mc_motherid();
	vector<int> &trk_mc3_id();
	vector<int> &trk_mc3idx();
	vector<int> &trk_mc3_motherid();
	vector<int> &trk_mc3_motheridx();
	vector<int> &trk_mc_id();
	vector<int> &trk_mcidx();
	vector<int> &trk_mc_motherid();
	vector<int> &els_closestJet();
	vector<int> &els_closestMuon();
	vector<int> &els_category();
	vector<int> &els_charge();
	vector<int> &els_class();
	vector<int> &els_conv_tkidx();
	vector<int> &els_exp_innerlayers();
	vector<int> &els_exp_outerlayers();
	vector<int> &els_fiduciality();
	vector<int> &els_layer1_det();
	vector<int> &els_layer1_layer();
	vector<int> &els_layer1_sizerphi();
	vector<int> &els_layer1_sizerz();
	vector<int> &els_lostHits();
	vector<int> &els_lost_pixelhits();
	vector<int> &els_nSeed();
	vector<int> &els_sccharge();
	vector<int> &els_trk_charge();
	vector<int> &els_trkidx();
	vector<int> &els_type();
	vector<int> &els_validHits();
	vector<int> &els_valid_pixelhits();
	vector<int> &genps_id();
	vector<int> &genps_id_mother();
	vector<int> &genps_status();
	vector<int> &hyp_ll_charge();
	vector<int> &hyp_ll_id();
	vector<int> &hyp_ll_index();
	vector<int> &hyp_ll_lostHits();
	vector<int> &hyp_ll_validHits();
	vector<int> &hyp_lt_charge();
	vector<int> &hyp_lt_id();
	vector<int> &hyp_lt_index();
	vector<int> &hyp_lt_lostHits();
	vector<int> &hyp_lt_validHits();
	vector<int> &hyp_njets();
	vector<int> &hyp_nojets();
	vector<int> &hyp_type();
	vector<int> &hyp_FVFit_ndf();
	vector<int> &hyp_FVFit_status();
	vector<int> &hyp_ll_mc_id();
	vector<int> &hyp_ll_mc_motherid();
	vector<int> &hyp_lt_mc_id();
	vector<int> &hyp_lt_mc_motherid();
	vector<int> &hyp_quadlep_first_type();
	vector<int> &hyp_quadlep_fourth_type();
	vector<int> &hyp_quadlep_second_type();
	vector<int> &hyp_quadlep_third_type();
	vector<int> &hyp_trilep_first_type();
	vector<int> &hyp_trilep_second_type();
	vector<int> &hyp_trilep_third_type();
	vector<int> &jets_closestElectron();
	vector<int> &jets_closestMuon();
	vector<int> &l1_emiso_ieta();
	vector<int> &l1_emiso_iphi();
	vector<int> &l1_emiso_rawId();
	vector<int> &l1_emiso_type();
	vector<int> &l1_emnoiso_ieta();
	vector<int> &l1_emnoiso_iphi();
	vector<int> &l1_emnoiso_rawId();
	vector<int> &l1_emnoiso_type();
	vector<int> &l1_jetsc_ieta();
	vector<int> &l1_jetsc_iphi();
	vector<int> &l1_jetsc_rawId();
	vector<int> &l1_jetsc_type();
	vector<int> &l1_jetsf_ieta();
	vector<int> &l1_jetsf_iphi();
	vector<int> &l1_jetsf_rawId();
	vector<int> &l1_jetsf_type();
	vector<int> &l1_jetst_ieta();
	vector<int> &l1_jetst_iphi();
	vector<int> &l1_jetst_rawId();
	vector<int> &l1_jetst_type();
	vector<int> &l1_mus_flags();
	vector<int> &l1_mus_q();
	vector<int> &l1_mus_qual();
	vector<int> &l1_mus_qualFlags();
	vector<int> &mus_met_flag();
	vector<int> &mus_closestEle();
	vector<int> &mus_closestJet();
	vector<int> &mus_charge();
	vector<int> &mus_gfit_validHits();
	vector<int> &mus_gfit_validSTAHits();
	vector<int> &mus_gfit_validSiHits();
	vector<int> &mus_goodmask();
	vector<int> &mus_iso03_ntrk();
	vector<int> &mus_iso05_ntrk();
	vector<int> &mus_lostHits();
	vector<int> &mus_nmatches();
	vector<int> &mus_pid_TM2DCompatibilityLoose();
	vector<int> &mus_pid_TM2DCompatibilityTight();
	vector<int> &mus_pid_TMLastStationLoose();
	vector<int> &mus_pid_TMLastStationTight();
	vector<int> &mus_sta_validHits();
	vector<int> &mus_timeDirection();
	vector<int> &mus_timeNumStationsUsed();
	vector<int> &mus_trk_charge();
	vector<int> &mus_trkidx();
	vector<int> &mus_type();
	vector<int> &mus_validHits();
	vector<int> &pfjets_chargedMultiplicity();
	vector<int> &pfjets_muonMultiplicity();
	vector<int> &pfjets_neutralMultiplicity();
	vector<int> &taus_pf_charge();
	vector<int> &taus_pf_electronPreID();
	vector<int> &taus_pf_hasMuonReference();
	vector<int> &taus_pf_leadtrk_idx();
	vector<int> &taus_pf_muonPreID();
	vector<int> &taus_pf_nmuonmatch();
	vector<int> &taus_pf_tightId();
	vector<int> &photons_fiduciality();
	vector<int> &pxl_ndigis_pxb();
	vector<int> &pxl_ndigis_pxf();
	vector<int> &ran_srFlag();
	vector<int> &scs_detIdSeed();
	vector<int> &scs_elsidx();
	vector<int> &scs_severitySeed();
	vector<int> &mus_tcmet_flag();
	vector<int> &trks_algo();
	vector<int> &trks_charge();
	vector<int> &trks_exp_innerlayers();
	vector<int> &trks_exp_outerlayers();
	vector<int> &trks_layer1_det();
	vector<int> &trks_layer1_layer();
	vector<int> &trks_layer1_sizerphi();
	vector<int> &trks_layer1_sizerz();
	vector<int> &trks_lostHits();
	vector<int> &trks_lost_pixelhits();
	vector<int> &trks_nlayers();
	vector<int> &trks_nlayers3D();
	vector<int> &trks_nlayersLost();
	vector<int> &trks_qualityMask();
	vector<int> &trks_validHits();
	vector<int> &trks_valid_pixelhits();
	vector<int> &trks_elsidx();
	vector<int> &trk_musidx();
	vector<int> &vtxs_isFake();
	vector<int> &vtxs_isValid();
	vector<int> &vtxs_tracksSize();
	vector<vector<int> > &twrs_emMaxEcalMGPASampleADC();
	vector<vector<int> > &twrs_emThreshRecoFlag();
	vector<vector<int> > &twrs_emThreshSevLvl();
	vector<vector<int> > &twrsUncleaned_emMaxEcalMGPASampleADC();
	vector<vector<int> > &twrsUncleaned_emThreshRecoFlag();
	vector<vector<int> > &twrsUncleaned_emThreshSevLvl();
	vector<vector<int> > &taus_calo_isotrk_idx();
	vector<vector<int> > &taus_calo_sigtrk_idx();
	vector<vector<int> > &genps_lepdaughter_id();
	vector<vector<int> > &genps_lepdaughter_idx();
	vector<vector<int> > &hlt_trigObjs_id();
	vector<vector<int> > &hyp_jets_idx();
	vector<vector<int> > &hyp_other_jets_idx();
	unsigned int &evt_ntwrs();
	unsigned int &evt_nels();
	unsigned int &evt_detectorStatus();
	unsigned int &evt_event();
	unsigned int &evt_lumiBlock();
	unsigned int &evt_run();
	unsigned int &genps_flavorHistoryFilterResult();
	unsigned int &evt_ngenjets();
	unsigned int &genps_signalProcessID();
	unsigned int &hlt_bits1();
	unsigned int &hlt_bits2();
	unsigned int &hlt_bits3();
	unsigned int &hlt_bits4();
	unsigned int &hlt_bits5();
	unsigned int &hlt_bits6();
	unsigned int &hlt_bits7();
	unsigned int &hlt_bits8();
	unsigned int &evt_njets();
	unsigned int &evt_njpts();
	unsigned int &l1_bits1();
	unsigned int &l1_bits2();
	unsigned int &l1_bits3();
	unsigned int &l1_bits4();
	unsigned int &l1_techbits1();
	unsigned int &l1_techbits2();
	unsigned int &evt_nphotons();
	unsigned int &evt_nscs();
	unsigned int &evt_nscjets();
	unsigned int &evt_ntrkjets();
	unsigned int &evt_nvtxs();
	vector<unsigned int> &twrs_detid();
	vector<unsigned int> &twrs_numBadEcalCells();
	vector<unsigned int> &twrs_numBadHcalCells();
	vector<unsigned int> &twrs_numProblematicEcalCells();
	vector<unsigned int> &twrs_numProblematicHcalCells();
	vector<unsigned int> &twrs_numRecoveredEcalCells();
	vector<unsigned int> &twrs_numRecoveredHcalCells();
	vector<unsigned int> &twrsUncleaned_detid();
	vector<unsigned int> &twrsUncleaned_numBadEcalCells();
	vector<unsigned int> &twrsUncleaned_numBadHcalCells();
	vector<unsigned int> &twrsUncleaned_numProblematicEcalCells();
	vector<unsigned int> &twrsUncleaned_numProblematicHcalCells();
	vector<unsigned int> &twrsUncleaned_numRecoveredEcalCells();
	vector<unsigned int> &twrsUncleaned_numRecoveredHcalCells();
	vector<unsigned int> &hyp_quadlep_bucket();
	vector<unsigned int> &hyp_quadlep_first_index();
	vector<unsigned int> &hyp_quadlep_fourth_index();
	vector<unsigned int> &hyp_quadlep_second_index();
	vector<unsigned int> &hyp_quadlep_third_index();
	vector<unsigned int> &hyp_trilep_bucket();
	vector<unsigned int> &hyp_trilep_first_index();
	vector<unsigned int> &hyp_trilep_second_index();
	vector<unsigned int> &hyp_trilep_third_index();
	int &evt_nEvts();
	float &evt_filt_eff();
	bool passHLTTrigger(TString trigName);
	bool passL1Trigger(TString trigName);
}
#endif
