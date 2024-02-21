/*
************************************************************
* File Name: Vehicle.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the source file which defines and implements
  a class representing a vehicle.
************************************************************
*/
#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

Vehicle::Vehicle(float engEfficiency) {
	engineEfficiency = engEfficiency;
}

Vehicle::Vehicle() : Vehicle(0.0f) { }

Vehicle::~Vehicle() {
	cout << "In Vehicle Destructor" << endl;
}

void Vehicle::setEngineEfficiency(float engEfficiency) {
	engineEfficiency = engEfficiency;
}

float Vehicle::getEngineEfficiency() {
	return engineEfficiency;
}


/*
Vehicle::Vehicle(Vehicle& copy) {
	setWheels(copy.getWheels());
	setDoors(copy.getDoors());
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle() {
	setWheels(copy->getWheels());
	setDoors(copy->getDoors());
}


Vehicle Vehicle::operator=(const Vehicle& origin) {
	numWheels = origin.numWheels;
	numDoors = origin.numDoors;

	return this;
}

bool Vehicle::operator==(const Vehicle& origin) {
	if ((numWheels == origin.numWheels) && (numDoors == origin.numDoors)) {
		return true;
	} else {
		return false;
	}
}

bool Vehicle::operator!=(const Vehicle& origin) {
	if ((numWheels != origin.numWheels) && (numDoors != origin.numDoors)) {
		return true;
	} else {
		return false;
	}
}

Vehicle Vehicle::operator++() {
	numWheels = numWheels + 1;
	numDoors = numDoors + 1;

	return Vehicle(this);
}

Vehicle Vehicle::operator++(int someNum) {
	Vehicle vehicleAddCopy(this);
	numWheels = numWheels + 1;
	numDoors = numDoors + 1;

	return vehicleAddCopy;
}

Vehicle Vehicle::operator--() {
	numWheels = numWheels - 1;
	numDoors = numDoors - 1;

	return Vehicle(this);
}

Vehicle Vehicle::operator--(int someNum) {
	Vehicle vehicleSubCopy(this);
	numWheels = numWheels - 1;
	numDoors = numDoors - 1;

	return vehicleSubCopy;
}

void Vehicle::printVehicle() {
	cout << "w=" << getWheels() << endl;
	cout << "d=" << getDoors() << endl;
}

ostream& operator<<(ostream& outOb, const Vehicle& someVehicle) {
	outOb << "w=" << someVehicle.numWheels;
	outOb << " d=" << someVehicle.numDoors << endl;

	return outOb;
}
*/
