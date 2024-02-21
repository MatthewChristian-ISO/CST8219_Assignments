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
#ifndef ELECTRICVEHICLE_H_
#define ELECTRICVEHICLE_H_

#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

class ElectricVehicle : public Vehicle {
private:
	float currentCharge;
	float maximumCharge;
public:
	ElectricVehicle(float, float);
	ElectricVehicle();
	virtual ~ElectricVehicle();
	virtual float calculateRange() override;
	virtual float percentEnergyRemaining() override;
	virtual void drive(float km) override;
	void setCurrentCharge(float);
	float getCurrentCharge();
	void setMaximumCharge(float);
	float getMaximumCharge();
};
#endif