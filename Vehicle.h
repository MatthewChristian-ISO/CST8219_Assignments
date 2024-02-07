/*
************************************************************
* File Name: Vehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 4.
* Date: February 5, 2024.
* Purpose: This is the header file used to declare classes
  and function signatures for the Vehicle.cpp source file.
************************************************************
*/
#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include <string>

class Vehicle {
 private:
	int numWheels = 0;
	int numDoors = 0;
	//Vehicle* pVehicle;

 public:
	Vehicle(int, int);
	Vehicle();
	Vehicle(Vehicle&);
	Vehicle(Vehicle*);
	~Vehicle();
	void setWheels(int);
	int getWheels(void);
	void setDoors(int);
	int getDoors(void);
	void printVehicle(void);
};
#endif