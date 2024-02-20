/*
************************************************************
* File Name: Vehicle.h
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the source file which defines and implements
  a class representing a vehicle.
************************************************************
*/
#ifndef ELECTRICVEHICLE_H_
#include "ElectricVehicle.h"
#endif

ElectricVehicle::ElectricVehicle(float maximumEnergy, float efficiencyRating) {
	currentCharge = maximumEnergy;
	maximumCharge = maximumEnergy;
	setEngineEfficiency(efficiencyRating);
}

ElectricVehicle::ElectricVehicle() : ElectricVehicle(0.0f, 0.0f) { };

ElectricVehicle::~ElectricVehicle() {
	cout << "In ElectricVehicle Destructor" << endl;
}

float ElectricVehicle::calculateRange() {
	float currentRange;
	currentRange = (currentCharge * 100) / getEngineEfficiency();
	return currentRange;
}

float ElectricVehicle::percentEnergyRemaining() {
	float energyRemaining;
	energyRemaining = (currentCharge / maximumCharge) * 100.0f;
	return energyRemaining;
}

void ElectricVehicle::drive(float km) {
	if (currentCharge < 0) {
		cout << "Your car is out of energy!" << endl;
	} else {
		currentCharge -= ((km / 100) * getEngineEfficiency());
	}
}

void ElectricVehicle::setCurrentCharge(float currnCharge) {
	currentCharge = currnCharge;
}

float ElectricVehicle::getCurrentCharge() {
	return currentCharge;
}

void ElectricVehicle::setMaximumCharge(float maxmCharge) {
	maximumCharge = maxmCharge;
}

float ElectricVehicle::getMaximumCharge() {
	return maximumCharge;
}