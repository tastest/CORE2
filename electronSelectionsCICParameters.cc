//
// Data required for V02 of 
// Branson/Sani electron ID
//
// Settings provided
//
//--------------------------------
//eidLoose
//eidMedium
//eidTight
//eidSuperTight
//eidHyperTight1
//eidHyperTight2
//eidHyperTight3
//eidHyperTight4
//--------------------------------

#include <iostream>
#include "electronSelectionsCICParameters.h"

void eidGet(const cic_tightness tightness, std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee)
{

    switch (tightness) {
        case CIC_VERYLOOSE:
            eidVeryLoose(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_LOOSE:
            eidLoose(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_MEDIUM:
            eidMedium(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_TIGHT:
            eidTight(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_SUPERTIGHT:
            eidSuperTight(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_HYPERTIGHT1:
            eidHyperTight1(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_HYPERTIGHT2:
            eidHyperTight2(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_HYPERTIGHT3:
            eidHyperTight3(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        case CIC_HYPERTIGHT4:
            eidHyperTight4(cutdeta, cutdphi, cuteopin, cutet, cuthoe, cutip, cutisoecal, cutisohcal, cutisotk, cutmishits, cutsee);
        default:
            std::cout << "[eidGet] ERROR! Invalid tightness level" << std::endl;
    }

    return;

}

void eidAssign(std::vector<double> &cutarr, double cutvals[])
{
    cutarr.clear();
    for (unsigned int i = 0; i < 18; ++i) {
        cutarr.push_back(cutvals[i]);
    }
}

void eidVeryLoose(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        9.59e-03, 5.11e-03, 1.46e-02, 1.37e-02, 9.65e-03, 1.48e-02, 
        1.14e-02, 4.41e-03, 1.06e-02, 1.50e-02, 7.62e-03, 1.33e-02, 
        1.39e-02, 4.14e-03, 1.38e-02, 1.49e-02, 6.86e-03, 1.32e-02};
    double cutdphi_tmp[18] = {
        3.75e-02, 1.16e-01, 1.19e-01, 4.88e-02, 1.19e-01, 1.19e-01, 
        6.69e-02, 7.52e-02, 1.19e-01, 7.62e-02, 9.95e-02, 1.20e-01, 
        9.06e-02, 5.08e-02, 1.19e-01, 6.71e-02, 3.39e-02, 1.19e-01};
    double cuteopin_tmp[18] = {
        8.78e-01, 8.02e-01, 8.14e-01, 9.42e-01, 7.35e-01, 7.74e-01, 
        8.29e-01, 8.30e-01, 8.05e-01, 7.99e-01, 7.02e-01, 7.88e-01, 
        8.18e-01, 8.21e-01, 8.01e-01, 8.47e-01, 7.16e-01, 7.87e-01};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.20e+01, 1.20e+01, 1.20e+01, 1.20e+01, 1.21e+01, 1.20e+01};
    double cuthoe_tmp[18] = {
        8.96e-02, 9.63e-02, 9.82e-02, 1.01e-01, 6.65e-02, 9.21e-02, 
        9.98e-02, 6.15e-02, 1.02e-01, 1.01e-01, 4.31e-02, 9.94e-02, 
        7.88e-02, 7.14e-02, 9.97e-02, 9.84e-02, 1.89e-02, 9.84e-02};
    double cutip_tmp[18] = {
        2.53e-02, 7.64e-02, 9.69e-02, 8.91e-02, 4.45e-01, 2.71e-01, 
        3.71e-02, 3.92e-02, 8.79e-02, 4.67e-02, 5.00e-01, 3.08e-01, 
        7.33e+00, 1.88e-02, 6.04e+00, 7.31e+00, 2.02e+00, 5.77e+00};
    double cutisoecal_tmp[18] = {
        3.34e+01, 2.87e+01, 1.16e+01, 2.74e+01, 1.86e+01, 2.47e+01, 
        1.04e+02, 1.02e+02, 2.28e+01, 7.07e+01, 3.84e+01, 5.37e+01, 
        2.52e+01, 2.70e+02, 2.97e+01, 5.30e+01, 3.20e+01, 1.59e+01};
    double cutisohcal_tmp[18] = {
        1.35e+01, 1.27e+01, 1.14e+01, 1.48e+01, 9.86e+00, 1.76e+01, 
        4.87e+01, 2.35e+01, 2.15e+01, 5.05e+01, 6.27e+00, 7.36e+00, 
        1.89e+01, 5.36e+01, 3.87e+01, 1.74e+01, 5.00e+01, 3.45e+00};
    double cutisotk_tmp[18] = {
        2.44e+01, 1.89e+01, 1.94e+01, 2.78e+01, 9.63e+00, 1.74e+01, 
        4.11e+01, 1.46e+01, 2.18e+01, 6.36e+01, 9.11e+00, 1.78e+01, 
        1.68e+01, 1.19e+01, 1.42e+01, 2.32e+01, 1.36e+01, 2.37e+01};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.50e+00, 4.50e+00, 2.50e+00, 2.50e+00, 
        3.50e+00, 5.50e+00, 7.50e+00, 4.50e+00, 2.50e+00, 1.50e+00, 
        1.50e+00, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.73e-02, 1.34e-02, 2.32e-02, 3.45e-02, 3.15e-02, 3.45e-02, 
        1.83e-02, 1.16e-02, 1.40e-02, 3.49e-02, 3.09e-02, 3.38e-02, 
        1.78e-02, 1.14e-02, 1.42e-02, 3.50e-02, 3.18e-02, 3.47e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidLoose(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        9.58e-03, 4.06e-03, 1.22e-02, 1.37e-02, 8.37e-03, 1.27e-02, 
        1.10e-02, 3.36e-03, 9.77e-03, 1.50e-02, 6.75e-03, 1.09e-02, 
        1.40e-02, 5.08e-03, 1.09e-02, 1.46e-02, 5.06e-03, 1.27e-02};
    double cutdphi_tmp[18] = {
        3.72e-02, 1.14e-01, 1.18e-01, 4.88e-02, 1.17e-01, 1.19e-01, 
        6.06e-02, 5.48e-02, 1.17e-01, 7.00e-02, 3.55e-02, 1.17e-01, 
        8.80e-02, 4.50e-02, 1.18e-01, 9.19e-02, 2.36e-02, 5.15e-02};
    double cuteopin_tmp[18] = {
        8.78e-01, 8.02e-01, 8.14e-01, 9.42e-01, 7.35e-01, 7.74e-01, 
        8.29e-01, 9.09e-01, 8.29e-01, 8.13e-01, 8.60e-01, 8.97e-01, 
        8.17e-01, 8.31e-01, 8.18e-01, 8.61e-01, 7.87e-01, 7.89e-01};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.20e+01, 1.20e+01, 1.29e+01, 1.21e+01, 1.25e+01, 1.29e+01};
    double cuthoe_tmp[18] = {
        8.87e-02, 9.34e-02, 9.49e-02, 9.86e-02, 4.31e-02, 8.78e-02, 
        9.70e-02, 5.09e-02, 9.80e-02, 9.91e-02, 3.21e-02, 9.28e-02, 
        6.63e-02, 7.17e-02, 9.66e-02, 7.58e-02, 1.49e-02, 1.31e-02};
    double cutip_tmp[18] = {
        2.46e-02, 7.60e-02, 9.66e-02, 8.85e-02, 4.41e-01, 2.05e-01, 
        2.92e-02, 2.93e-02, 6.19e-02, 2.51e-02, 1.59e-01, 8.15e-02, 
        7.29e+00, 1.06e-02, 5.76e+00, 6.89e+00, 1.27e+00, 5.89e+00};
    double cutisoecal_tmp[18] = {
        3.34e+01, 2.81e+01, 7.32e+00, 2.74e+01, 7.33e+00, 2.17e+01, 
        9.38e+01, 1.02e+02, 1.21e+01, 2.60e+01, 8.91e+00, 1.00e+01, 
        1.61e+01, 3.13e+01, 1.69e+01, 1.54e+01, 1.33e+01, 3.77e+01};
    double cutisohcal_tmp[18] = {
        1.35e+01, 9.93e+00, 7.56e+00, 1.48e+01, 8.10e+00, 1.08e+01, 
        4.27e+01, 2.01e+01, 9.11e+00, 1.04e+01, 6.89e+00, 5.59e+00, 
        8.53e+00, 9.59e+00, 2.42e+01, 2.78e+00, 8.67e+00, 2.88e-01};
    double cutisotk_tmp[18] = {
        2.43e+01, 8.45e+00, 1.44e+01, 2.78e+01, 6.02e+00, 1.05e+01, 
        1.41e+01, 1.02e+01, 1.45e+01, 1.91e+01, 6.10e+00, 1.41e+01, 
        8.59e+00, 8.33e+00, 8.30e+00, 8.93e+00, 8.60e+00, 1.60e+01};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.50e+00, 2.50e+00, 2.50e+00, 2.50e+00, 
        3.50e+00, 5.50e+00, 5.00e-01, 1.50e+00, 2.50e+00, 5.00e-01, 
        1.50e+00, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.72e-02, 1.15e-02, 1.43e-02, 3.44e-02, 2.95e-02, 3.04e-02, 
        1.45e-02, 1.08e-02, 1.28e-02, 3.47e-02, 3.07e-02, 3.16e-02, 
        1.80e-02, 1.10e-02, 1.32e-02, 3.49e-02, 3.10e-02, 3.27e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}


void eidMedium(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        9.37e-03, 3.28e-03, 7.70e-03, 1.37e-02, 6.57e-03, 8.60e-03, 
        1.02e-02, 2.86e-03, 8.26e-03, 1.18e-02, 7.03e-03, 8.67e-03, 
        1.23e-02, 2.67e-03, 1.01e-02, 1.45e-02, 4.98e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        3.72e-02, 5.32e-02, 1.18e-01, 4.87e-02, 6.60e-02, 1.19e-01, 
        5.72e-02, 3.40e-02, 1.12e-01, 6.91e-02, 1.82e-02, 1.13e-01, 
        8.00e-02, 8.89e-02, 7.75e-02, 4.54e-02, 1.61e-02, 4.15e-02};
    double cuteopin_tmp[18] = {
        8.78e-01, 8.07e-01, 8.43e-01, 9.42e-01, 7.35e-01, 7.74e-01, 
        8.27e-01, 9.54e-01, 8.50e-01, 8.34e-01, 9.04e-01, 9.71e-01, 
        8.23e-01, 9.44e-01, 8.23e-01, 8.46e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.32e+01, 1.39e+01, 1.50e+01, 1.45e+01, 1.52e+01, 1.53e+01};
    double cuthoe_tmp[18] = {
        8.86e-02, 9.02e-02, 9.39e-02, 9.81e-02, 3.43e-02, 5.64e-02, 
        7.45e-02, 4.83e-02, 8.09e-02, 9.60e-02, 2.42e-02, 8.72e-02, 
        6.44e-03, 8.80e-02, 4.03e-02, 2.51e-02, 1.51e-02, 2.07e-02};
    double cutip_tmp[18] = {
        2.45e-02, 5.64e-02, 8.79e-02, 8.59e-02, 3.91e-01, 1.61e-01, 
        1.22e-02, 1.95e-02, 3.77e-02, 2.10e-02, 1.26e-01, 4.50e-02, 
        7.33e+00, 9.38e-03, 5.28e+00, 6.52e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        2.87e+01, 2.81e+01, 5.29e+00, 2.10e+01, 4.11e+00, 4.86e+00, 
        2.79e+01, 2.67e+01, 8.86e+00, 1.47e+01, 4.94e+00, 6.09e+00, 
        1.12e+01, 1.49e+01, 1.36e+01, 1.31e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        1.15e+01, 7.62e+00, 8.80e+00, 5.23e+00, 7.17e+00, 2.55e+00, 
        3.17e+01, 2.12e+01, 6.10e+00, 6.03e+00, 8.84e+00, 3.71e+00, 
        3.52e+00, 5.94e+00, 2.00e+01, 1.29e-01, 4.10e+00, 1.35e-02};
    double cutisotk_tmp[18] = {
        1.00e+01, 6.04e+00, 8.94e+00, 1.29e+01, 4.14e+00, 8.03e+00, 
        8.51e+00, 6.73e+00, 7.49e+00, 1.19e+01, 3.59e+00, 6.70e+00, 
        5.88e+00, 5.95e+00, 6.60e+00, 5.87e+00, 6.21e+00, 7.44e-01};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.50e+00, 2.50e+00, 2.50e+00, 1.50e+00, 
        3.50e+00, 5.50e+00, 5.00e-01, 1.50e+00, 1.50e+00, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.69e-02, 1.07e-02, 1.20e-02, 3.18e-02, 2.83e-02, 2.89e-02, 
        1.32e-02, 1.06e-02, 1.19e-02, 3.29e-02, 2.96e-02, 3.00e-02, 
        1.66e-02, 1.12e-02, 1.15e-02, 3.48e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidTight(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        9.15e-03, 3.02e-03, 6.10e-03, 1.35e-02, 5.65e-03, 7.93e-03, 
        1.02e-02, 2.66e-03, 1.06e-02, 9.03e-03, 7.66e-03, 7.23e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        3.69e-02, 3.07e-02, 1.17e-01, 4.75e-02, 2.16e-02, 1.17e-01, 
        3.72e-02, 2.46e-02, 4.26e-02, 6.12e-02, 1.42e-02, 3.90e-02, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        8.78e-01, 8.59e-01, 8.74e-01, 9.44e-01, 7.37e-01, 7.73e-01, 
        8.60e-01, 9.67e-01, 9.17e-01, 8.12e-01, 9.15e-01, 1.01e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        8.71e-02, 2.89e-02, 7.83e-02, 9.46e-02, 2.45e-02, 3.63e-02, 
        6.71e-02, 4.80e-02, 6.14e-02, 9.24e-02, 1.58e-02, 4.90e-02, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        2.39e-02, 2.70e-02, 7.68e-02, 2.31e-02, 1.78e-01, 9.57e-02, 
        1.02e-02, 1.68e-02, 4.30e-02, 1.66e-02, 5.94e-02, 3.08e-02, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        2.00e+01, 2.72e+01, 4.48e+00, 1.35e+01, 4.56e+00, 3.19e+00, 
        1.22e+01, 1.31e+01, 7.42e+00, 7.67e+00, 4.12e+00, 4.85e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        1.09e+01, 7.01e+00, 8.75e+00, 3.51e+00, 7.75e+00, 1.62e+00, 
        1.16e+01, 9.90e+00, 4.97e+00, 5.33e+00, 3.18e+00, 2.32e+00, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        6.53e+00, 4.60e+00, 6.00e+00, 8.63e+00, 3.11e+00, 7.77e+00, 
        5.42e+00, 4.81e+00, 4.06e+00, 6.47e+00, 2.80e+00, 3.45e+00, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.00e-01, 1.50e+00, 2.50e+00, 5.00e-01, 
        3.50e+00, 5.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.31e-02, 1.06e-02, 1.15e-02, 3.06e-02, 2.80e-02, 2.93e-02, 
        1.31e-02, 1.06e-02, 1.15e-02, 3.17e-02, 2.90e-02, 2.89e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidSuperTight(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        8.92e-03, 2.77e-03, 5.35e-03, 1.19e-02, 5.21e-03, 6.88e-03, 
        9.66e-03, 2.66e-03, 1.02e-02, 7.68e-03, 5.22e-03, 5.91e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        3.70e-02, 2.06e-02, 1.13e-01, 4.59e-02, 1.46e-02, 1.12e-01, 
        3.35e-02, 1.99e-02, 2.98e-02, 3.07e-02, 1.02e-02, 1.94e-02, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        8.78e-01, 9.35e-01, 8.87e-01, 9.50e-01, 8.61e-01, 7.65e-01, 
        8.99e-01, 9.75e-01, 9.69e-01, 7.99e-01, 9.47e-01, 1.00e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        8.13e-02, 2.19e-02, 2.82e-02, 5.87e-02, 1.94e-02, 1.66e-02, 
        5.51e-02, 3.56e-02, 7.75e-02, 7.83e-02, 2.14e-02, 3.76e-02, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        2.37e-02, 1.97e-02, 7.91e-02, 1.38e-02, 6.88e-02, 4.15e-02, 
        9.36e-03, 9.66e-03, 1.45e-02, 1.37e-02, 6.01e-02, 1.32e-02, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        9.09e+00, 1.18e+01, 3.92e+00, 4.71e+00, 1.34e+01, 2.58e+00, 
        8.75e+00, 8.10e+00, 6.41e+00, 5.70e+00, 3.47e+00, 4.17e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        9.93e+00, 8.32e+00, 2.76e+00, 2.98e+00, 3.81e+00, 1.08e+00, 
        6.66e+00, 6.67e+00, 2.79e+00, 3.10e+00, 1.56e+00, 2.00e+00, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        5.02e+00, 3.71e+00, 3.80e+00, 7.73e+00, 2.13e+00, 8.76e+00, 
        4.46e+00, 3.73e+00, 2.79e+00, 3.25e+00, 2.51e+00, 2.18e+00, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.00e-01, 1.50e+00, 1.50e+00, 5.00e-01, 
        5.00e-01, 5.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.18e-02, 1.05e-02, 1.12e-02, 3.05e-02, 2.76e-02, 2.86e-02, 
        1.25e-02, 1.01e-02, 1.08e-02, 3.37e-02, 2.77e-02, 2.93e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidHyperTight1(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        8.81e-03, 2.39e-03, 5.60e-03, 8.00e-03, 5.30e-03, 6.18e-03, 
        9.96e-03, 2.43e-03, 1.06e-02, 7.83e-03, 6.12e-03, 4.94e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        3.64e-02, 1.61e-02, 4.33e-02, 4.19e-02, 1.34e-02, 4.40e-02, 
        2.75e-02, 2.22e-02, 2.17e-02, 2.04e-02, 9.14e-03, 1.13e-02, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        8.79e-01, 9.65e-01, 9.04e-01, 9.50e-01, 7.91e-01, 7.74e-01, 
        9.20e-01, 9.83e-01, 9.89e-01, 7.98e-01, 9.70e-01, 1.02e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        5.29e-02, 1.71e-02, 1.95e-02, 3.93e-02, 1.38e-02, 1.13e-02, 
        5.01e-02, 2.99e-02, 5.38e-02, 5.44e-02, 2.05e-02, 1.35e-02, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        2.38e-02, 2.02e-02, 4.23e-02, 1.39e-02, 2.00e-02, 3.00e-02, 
        8.61e-03, 1.50e-02, 1.08e-02, 1.07e-02, 1.65e-02, 1.06e-02, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        5.42e+00, 9.14e+00, 3.65e+00, 3.92e+00, 2.90e+00, 2.45e+00, 
        6.92e+00, 6.49e+00, 5.08e+00, 5.26e+00, 2.71e+00, 3.57e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        9.95e+00, 8.15e+00, 4.13e+00, 2.98e+00, 3.22e+00, 9.25e-01, 
        5.35e+00, 5.67e+00, 2.45e+00, 1.91e+00, 1.01e+00, 1.78e+00, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        4.26e+00, 3.26e+00, 2.34e+00, 8.33e+00, 1.40e+00, 3.45e+00, 
        3.35e+00, 3.16e+00, 2.37e+00, 2.22e+00, 2.14e+00, 1.58e+00, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.13e-02, 1.06e-02, 1.08e-02, 2.96e-02, 2.73e-02, 2.86e-02, 
        1.25e-02, 1.00e-02, 1.05e-02, 3.40e-02, 2.69e-02, 2.87e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidHyperTight2(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        8.53e-03, 2.22e-03, 5.15e-03, 6.94e-03, 6.10e-03, 6.05e-03, 
        8.34e-03, 1.88e-03, 2.46e-03, 4.61e-03, 3.20e-03, 3.28e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        2.01e-02, 1.21e-02, 2.13e-02, 4.45e-02, 1.15e-02, 1.70e-02, 
        3.62e-02, 1.93e-02, 1.37e-02, 1.81e-02, 6.43e-03, 9.47e-03, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        8.79e-01, 9.81e-01, 8.77e-01, 9.61e-01, 9.29e-01, 7.84e-01, 
        8.88e-01, 1.01e+00, 1.02e+00, 9.12e-01, 1.01e+00, 1.03e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        2.91e-02, 2.35e-02, 1.84e-02, 2.58e-02, 1.19e-02, 1.02e-02, 
        4.38e-02, 2.61e-03, 5.73e-02, 4.52e-02, 5.93e-02, 6.31e-04, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        1.95e-02, 1.97e-02, 1.58e-02, 1.48e-02, 1.31e-02, 1.80e-02, 
        7.56e-03, 1.81e-02, 1.11e-02, 9.29e-03, 2.39e-02, 6.64e-03, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        6.72e+00, 5.83e+00, 3.59e+00, 2.91e+00, 2.63e+00, 2.54e+00, 
        5.28e+00, 5.43e+00, 4.82e+00, 3.68e+00, 2.54e+00, 3.25e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        8.30e+00, 8.23e+00, 4.99e+00, 2.16e+00, 3.45e+00, 7.47e+00, 
        3.12e+00, 4.67e+00, 2.82e+00, 1.12e+00, 9.91e-01, 1.59e+00, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        3.30e+00, 2.34e+00, 1.74e+00, 7.26e+00, 9.64e-01, 1.35e+00, 
        2.45e+00, 2.66e+00, 1.89e+00, 1.83e+00, 5.53e-01, 7.39e-02, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.50e+00, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.10e-02, 1.01e-02, 1.09e-02, 2.99e-02, 2.72e-02, 2.77e-02, 
        1.07e-02, 9.80e-03, 1.01e-02, 3.01e-02, 2.71e-02, 2.62e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidHyperTight3(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        8.19e-03, 2.41e-03, 5.34e-03, 5.93e-03, 5.79e-03, 5.99e-03, 
        3.80e-03, 1.66e-03, 1.71e-03, 4.59e-03, 2.41e-03, 3.31e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        1.72e-02, 1.02e-02, 1.57e-02, 3.54e-02, 8.80e-03, 1.14e-02, 
        3.97e-02, 5.64e-03, 1.32e-02, 1.08e-02, 8.53e-03, 9.25e-03, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        8.91e-01, 9.84e-01, 9.22e-01, 9.61e-01, 9.53e-01, 7.97e-01, 
        9.51e-01, 1.01e+00, 1.12e+00, 1.26e+00, 1.03e+00, 1.12e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        2.49e-02, 1.63e-02, 1.94e-02, 1.72e-02, 1.26e-02, 1.12e-02, 
        5.70e-02, 7.18e-02, 4.03e-02, 8.01e-02, 2.77e-03, 4.80e-02, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        1.91e-02, 1.03e-02, 2.19e-02, 1.44e-02, 1.36e-02, 1.25e-02, 
        7.44e-03, 7.45e-03, 8.02e-03, 5.16e-03, 5.57e-03, 3.86e-03, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        4.03e+00, 9.81e+00, 3.34e+00, 3.74e+00, 2.05e+00, 2.30e+00, 
        4.60e+00, 4.69e+00, 4.80e+00, 3.65e+00, 2.65e+00, 3.96e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        5.00e+00, 3.99e+00, 6.63e+00, 1.94e+00, 2.62e+00, 4.54e+00, 
        2.59e+00, 3.93e+00, 1.21e+00, 1.44e+00, 3.90e+00, 3.83e-01, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        2.66e+00, 1.30e+00, 1.07e+00, 2.39e+00, 9.35e-01, 8.17e-01, 
        2.07e+00, 2.89e+00, 1.92e+00, 6.11e-01, 2.58e-02, 3.45e-03, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.07e-02, 1.01e-02, 1.02e-02, 3.13e-02, 2.72e-02, 2.67e-02, 
        9.46e-03, 9.61e-03, 9.85e-03, 2.69e-02, 2.55e-02, 2.53e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

void eidHyperTight4(std::vector<double> &cutdeta, std::vector<double> &cutdphi, std::vector<double> &cuteopin, std::vector<double> &cutet, std::vector<double> &cuthoe, std::vector<double> &cutip, std::vector<double> &cutisoecal, std::vector<double> &cutisohcal, std::vector<double> &cutisotk, std::vector<double> &cutmishits, std::vector<double> &cutsee) { 
    double cutdeta_tmp[18] = {
        8.22e-03, 2.04e-03, 8.82e-03, 4.98e-03, 5.35e-03, 4.54e-03, 
        3.41e-03, 3.92e-03, 1.64e-03, 1.00e-02, 3.32e-03, 6.44e-03, 
        1.16e-02, 2.03e-03, 6.59e-03, 1.48e-02, 5.55e-03, 1.28e-02};
    double cutdphi_tmp[18] = {
        1.82e-02, 5.88e-03, 1.11e-02, 1.61e-02, 5.32e-03, 9.21e-03, 
        8.33e-03, 3.82e-03, 1.61e-02, 7.76e-03, 7.18e-03, 9.03e-03, 
        7.37e-02, 5.66e-02, 3.59e-02, 1.87e-02, 1.20e-02, 3.58e-02};
    double cuteopin_tmp[18] = {
        9.37e-01, 9.84e-01, 9.45e-01, 9.65e-01, 9.67e-01, 1.13e+00, 
        8.97e-01, 1.01e+00, 1.26e+00, 1.29e+00, 1.03e+00, 1.33e+00, 
        8.47e-01, 9.53e-01, 9.79e-01, 8.41e-01, 7.71e-01, 1.09e+00};
    double cutet_tmp[18] = {
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 0.00e+00, 
        1.46e+01, 1.44e+01, 1.61e+01, 1.52e+01, 1.53e+01, 1.61e+01};
    double cuthoe_tmp[18] = {
        2.54e-02, 2.34e-02, 1.60e-03, 2.63e-02, 1.54e-02, 1.80e-02, 
        1.47e-02, 5.92e-02, 6.22e-02, 1.18e-02, 1.29e-04, 4.94e-02, 
        3.82e-02, 9.15e-02, 4.51e-02, 4.52e-02, 1.96e-03, 4.30e-03};
    double cutip_tmp[18] = {
        1.72e-02, 1.38e-02, 1.45e-02, 1.07e-02, 5.34e-02, 1.01e-02, 
        5.37e-03, 5.31e-03, 3.90e-03, 4.58e-03, 4.94e-03, 3.90e-03, 
        2.10e+00, 5.27e-03, 3.17e+00, 4.91e+00, 7.69e-01, 5.90e+00};
    double cutisoecal_tmp[18] = {
        3.49e+00, 2.68e+00, 2.44e+00, 8.86e+00, 1.01e+00, 1.87e+00, 
        4.46e+00, 4.85e+00, 4.74e+00, 3.29e+00, 2.50e+00, 4.44e+00, 
        1.01e+01, 1.24e+01, 1.11e+01, 1.10e+01, 1.06e+01, 1.34e+01};
    double cutisohcal_tmp[18] = {
        1.56e+00, 6.13e+00, 6.24e+00, 1.03e+00, 2.49e+00, 6.78e-01, 
        2.66e+00, 2.84e+00, 2.55e+00, 6.70e-02, 4.76e+00, 4.80e-01, 
        1.64e-01, 5.46e+00, 1.20e+01, 6.04e-03, 4.10e+00, 6.28e-04};
    double cutisotk_tmp[18] = {
        2.00e+00, 7.84e-01, 7.16e-01, 1.53e+00, 9.23e-01, 2.91e-01, 
        4.32e-01, 7.54e-01, 2.05e+00, 2.85e-02, 1.20e-03, 1.61e-04, 
        5.29e+00, 5.18e+00, 1.54e+01, 5.38e+00, 4.47e+00, 3.47e-02};
    double cutmishits_tmp[18] = {
        5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 5.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01, 
        5.00e-01, 1.50e+00, 5.00e-01, 5.00e-01, 5.00e-01, 5.00e-01};
    double cutsee_tmp[18] = {
        1.04e-02, 1.06e-02, 9.82e-03, 3.29e-02, 2.69e-02, 2.65e-02, 
        9.21e-03, 9.35e-03, 9.99e-03, 2.62e-02, 2.55e-02, 2.52e-02, 
        1.42e-02, 1.06e-02, 1.03e-02, 3.50e-02, 2.96e-02, 3.33e-02};

    eidAssign(cutdeta, cutdeta_tmp);
    eidAssign(cutdphi, cutdphi_tmp);
    eidAssign(cuteopin, cuteopin_tmp);
    eidAssign(cutet, cutet_tmp);
    eidAssign(cuthoe, cuthoe_tmp);
    eidAssign(cutip, cutip_tmp);
    eidAssign(cutisoecal, cutisoecal_tmp);
    eidAssign(cutisohcal, cutisohcal_tmp);
    eidAssign(cutisotk, cutisotk_tmp);
    eidAssign(cutmishits, cutmishits_tmp);
    eidAssign(cutsee, cutsee_tmp);

}

