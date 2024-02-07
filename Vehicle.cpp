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
#include "Vehicle.h"
#endif

using namespace std;

Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
}

Vehicle::Vehicle() : Vehicle(0, 0) {}

Vehicle::Vehicle(Vehicle &copy) {
	setWheels(copy.getWheels());
	setDoors(copy.getDoors());
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle() {
	setWheels(copy->getWheels());
	setDoors(copy->getDoors());
}

Vehicle::~Vehicle(){};

void Vehicle::setWheels(int wheels) {
	numWheels = wheels;
}

int Vehicle::getWheels(void) {
	return numWheels;
}

void Vehicle::setDoors(int doors) {
	numDoors = doors;
}

int Vehicle::getDoors(void) {
	return numDoors;
}

void Vehicle::printVehicle() {
	cout << "Number of Wheels: " << getWheels() << endl;
	cout << "Number of Doors: " << getDoors() << endl;
}