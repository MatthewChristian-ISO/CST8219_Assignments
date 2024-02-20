/*
************************************************************
* File Name: Vehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the header file used to declare classes
  and function signatures for the Vehicle.cpp source file.
************************************************************
*/
#ifndef HYBRIDVEHICLE_H_
#define HYBRIDVEHICLE_H_

#ifndef GASOLINEVEHICLE_H_
#include "GasolineVehicle.h"
#endif

#ifndef ELECTRICVEHICLE_H_
#include "ElectricVehicle.h"
#endif

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {
public:
	HybridVehicle(float, float, float, float);
	HybridVehicle();
	virtual ~HybridVehicle();
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
};
#endif