/*
************************************************************
* File Name: Vehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 5.
* Date: February 13, 2024.
* Purpose: This is the source file which defines and implements
  a class representing a vehicle.
************************************************************
*/
#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
}

Vehicle::Vehicle() : Vehicle(4, 2) { }

Vehicle::Vehicle(Vehicle& copy) {
	setWheels(copy.getWheels());
	setDoors(copy.getDoors());
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle() {
	setWheels(copy->getWheels());
	setDoors(copy->getDoors());
}

Vehicle::~Vehicle() { }

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
	cout << "w=" << getWheels() << endl;
	cout << "d=" << getDoors() << endl;
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

ostream& operator<<(ostream& outOb, const Vehicle& someVehicle) {
	outOb << "w=" << someVehicle.numWheels;
	outOb << " d=" << someVehicle.numDoors << endl;

	return outOb;
}