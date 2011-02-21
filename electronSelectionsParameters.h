
#ifndef ELECTRONSELECTIONSPARAMETERS_H
#define ELECTRONSELECTIONSPARAMETERS_H

#include <vector>

//
// Data required for V02 of 
// Branson/Sani electron ID
//
// Settings provided
//
//--------------------------------
enum cic_tightness {
    CIC_VERYLOOSE,
    CIC_LOOSE,
    CIC_MEDIUM,
    CIC_TIGHT,
    CIC_SUPERTIGHT,
    CIC_HYPERTIGHT1,
    CIC_HYPERTIGHT2,
    CIC_HYPERTIGHT3,
    CIC_HYPERTIGHT4,
};
//--------------------------------

//
// Data required for VBTF ID
// optimised for us by N. Rompotis/C. Seez
//
// Settings provided
//
//--------------------------------
enum vbtf_tightness {
    VBTF_35X_95,
    VBTF_35X_90,
    VBTF_35X_85,
    VBTF_35X_80,
    VBTF_35X_70,
    VBTF_35X_60,
    VBTF_35Xr2_70,
    VBTF_35Xr2_60,
};
//--------------------------------

//
// Data required for CAND ID
//
// Settings provided
//
//--------------------------------
enum cand_tightness {
    CAND_01,
    CAND_02,
};
//--------------------------------

void eidGetCand(const cand_tightness tightness, std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuthoe, std::vector<double> &cutslat);

void eidGetVBTF(const vbtf_tightness tightness, std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuthoe, std::vector<double> &cutsee, std::vector<double> &cutreliso);

void eidGetCIC_V06(const cic_tightness tightness, std::vector<double>cutiso_sum, std::vector<double>cutiso_sumoet, std::vector<double>cuthoe, std::vector<double>cutsee, std::vector<double>cutdphiin, std::vector<double>cutdetain, std::vector<double>cuteseedopcor, std::vector<double>cutfmishits, std::vector<double>cutdcotdist, std::vector<double>cutip_gsf, std::vector<double>cutiso_sumoetl, std::vector<double> cuthoel, std::vector<double>cutseel, std::vector<double>cutdphiinl, std::vector<double>cutdetainl, std::vector<double>cutip_gsfl);

void eidGetCIC_V04(const cic_tightness tightness, std::vector<double> &cutdcotdist, std::vector<double> &cutdetain, std::vector<double> &cutdphiin, std::vector
<double> &cuteseedopcor, std::vector<double> &cutet, std::vector<double> &cutfmishits, std::vector<double> &cuthoe, std::vector<double> &cutip_gsf, std::vector
<double> &cutiso_sum, std::vector<double> &cutiso_sumoet, std::vector<double> &cutsee);

void eidGetCIC_V03(const cic_tightness tightness, std::vector<double> &cutdcotdist, std::vector<double> &cutdetain, std::vector<double> &cutdphiin, std::vector<double> &cuteseedopcor, std::vector<double> &cutet, std::vector<double> &cutfmishits, std::vector<double> &cuthoe, std::vector<double> &cutip_gsf, std::vector<double> &cutiso_sum, std::vector<double> &cutiso_sumoet, std::vector<double> &cutsee);

void eidGetCIC_V02(const cic_tightness tightness, std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee);

void eidAssign(std::vector<double> &cutarr, double cutvals[], unsigned int size);
unsigned int eidClassify(const unsigned int version, const unsigned int index);
bool eidComputeCut(double x, double et, double cut_min, double cut_max, bool gtn=false);

#endif

