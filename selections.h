#ifndef SELECTION_H
#define SELECTION_H
#include "TLorentzVector.h"

bool inZmassWindow (float mass);
bool supertightElectron (int index);
bool deltaPhiInElectron (int index);
bool goodElectronWithoutIsolation(int index);
bool goodElectronWithoutIsolationWithoutd0(int index);
bool goodMuonWithoutIsolation(int index);
bool passElectronIsolation(int index, bool use_calo_iso = false);
bool passElectronIsolationLoose(int index, bool use_calo_iso = false);
bool passElectronIsolationLoose2(int index, bool use_calo_iso = false);
bool passMuonIsolation(int index);
bool goodMuonIsolated(int index);
bool goodElectronIsolated(int index, bool use_calo_iso = false);
bool goodLooseElectronWithoutIsolation(int index);
bool pass2Met(int index, const class TVector3& corr);
double nearestDeltaPhi(double Phi, int index);
double MetSpecial(double MET, double MetPhi, int index);
bool pass4Met(int index, const class TVector3& corr);
bool met10(int index, const class TVector3& corr);
bool met1(int index, const class TVector3& corr);
bool sumEt10(double sumEt);
bool sumEt1(double sumEt);
bool passMuonBVeto (int i_dilep, bool soft_nonisolated);
bool passTriLepVeto (int i_dilep);
int tagMuonIdx (int i_dilep);
double tagMuonPt (int i_dilep);
double tagMuonRelIso (int i_dilep);
bool additionalZveto();
bool isDYee();
bool isDYmm();
bool isDYtt();
int nTrkJets(int i_hyp);
bool passTrkJetVeto(int i_hyp);
bool passCaloTrkjetCombo ();

double mu_rel_iso (int index);
double el_rel_iso (int index, bool use_calo_iso);
double reliso_lt (int i_hyp, bool use_calo_iso = false);
double reliso_ll (int i_hyp, bool use_calo_iso = false);

int conversionPartner (int i_el);
double conversionDeltaPhi (int i_conv, int i_el);

bool passTrackIsolation(int index);
int passTrackZVeto(int hyp_index);
#endif
