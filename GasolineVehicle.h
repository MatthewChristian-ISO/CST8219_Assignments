/*
************************************************************
* File Name: GasolineVehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the header file used to declare classes
  and function signatures for the GasolineVehicle.cpp source file.
************************************************************
*/
#ifndef GASOLINEVEHICLE_H_
#define GASOLINEVEHICLE_H_

#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

/* Derived Non-Abstract Class to represent a gasoline vehicle. */
class GasolineVehicle : public Vehicle {
private:
	float currentGasoline;
	float maximumGasoline;
public:
	GasolineVehicle(float, float);
	GasolineVehicle();
	virtual ~GasolineVehicle();
	virtual float calculateRange() override;
	virtual float percentEnergyRemaining() override;
	virtual void drive(float km) override;
	void setCurrentGasoline(float);
	float getCurrentGasoline();
	void setMaximumGasoline(float);
	float getMaximumGasoline();
};
#endif