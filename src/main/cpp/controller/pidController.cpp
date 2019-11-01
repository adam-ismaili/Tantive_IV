#include <stdio.h>
#include "pidController.h"

pidController::pidController(double p, double i, double d)
{
    pK = p;
    iK = i;
    dK = d;
    
    // Standard cycle time of RoboRio cpu on iterative.
    cycleTimeK = 0.02;
}

pidController::~pidController()
{
    pidController::reset();
}

void pidController::reset()
{
    pK = 0.0;
    iK = 0.0;
    dK = 0.0;

    setpointK = 0.0;
    proccessVariableM = 0.0;
    
    errorPM = 0.0;
    errorIM = 0.0;
    errorDM = 0.0;

    prevErrorM = 0.0;
    outputM = 0.0;
}

double pidController::update(double proccessVariable)
{
    proccessVariableM = proccessVariable;
    // Calculate the new p error.
    errorPM = setpointK - proccessVariableM;

    // Calculate the new d error.
    errorDM = errorPM - prevErrorM;
    errorDM = errorDM / cycleTimeK;
    
    // Calculate the new i error.
    errorIM = errorIM + errorPM * cycleTimeK;
    
    // Calculate the new error in general.
    outputM = pK*errorPM + iK*errorIM + dK*errorDM;

    prevErrorM = errorPM;
    return outputM;
}