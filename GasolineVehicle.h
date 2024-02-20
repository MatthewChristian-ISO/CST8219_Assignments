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
#ifndef GASOLINEVEHICLE_H_
#define GASOLINEVEHICLE_H_

#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

class GasolineVehicle : public Vehicle {
private:
	float currentGasoline;
	float maximumGasoline;
public:
	GasolineVehicle(float, float);
	GasolineVehicle();
	virtual ~GasolineVehicle();
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
	void setCurrentGasoline(float);
	float getCurrentGasoline();
	void setMaximumGasoline(float);
	float getMaximumGasoline();
};
#endif