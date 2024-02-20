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
#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Vehicle {
	//friend ostream& operator<<(ostream&, const Vehicle&);
 private:
	float engineEfficiency;

 protected:
	 Vehicle(float);
	 Vehicle();
	 
 public:
	virtual ~Vehicle();
	void setEngineEfficiency(float);
	float getEngineEfficiency();
	void printVehicle();
	virtual float calculateRange() = 0;
	virtual float percentEnergyRemaining() = 0;
	virtual void drive(float km) = 0;
};
#endif