/*
************************************************************
* File Name: Vehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 5.
* Date: February 13, 2024.
* Purpose: This is the header file used to declare classes
  and function signatures for the Vehicle.cpp source file.
************************************************************
*/
#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
	friend ostream& operator<<(ostream&, const Vehicle&);
 private:
	int numWheels = 0;
	int numDoors = 0;

 public:
	Vehicle operator=(const Vehicle&);
	bool operator==(const Vehicle&);
	bool operator!=(const Vehicle&);
	Vehicle operator++();
	Vehicle operator++(int);
	Vehicle operator--();
	Vehicle operator--(int);
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