/*
************************************************************
* File Name: GasolineVehicle.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the source file which defines and implements
  a class representing a gasoline vehicle.
************************************************************
*/
#ifndef GASOLINEVEHICLE_H_
#include "GasolineVehicle.h"
#endif

GasolineVehicle::GasolineVehicle(float maximumEnergy, float efficiencyRating) {
	currentGasoline = maximumEnergy;
	maximumGasoline = maximumEnergy;
	setEngineEfficiency(efficiencyRating);
}

GasolineVehicle::GasolineVehicle() : GasolineVehicle(0.0f, 0.0f) { };

GasolineVehicle::~GasolineVehicle() {
	cout << "In GasolineVehicle Destructor" << endl;
}

float GasolineVehicle::calculateRange() {
	float currentRange;
	currentRange = (currentGasoline * 100) / getEngineEfficiency();
	return currentRange;
}

float GasolineVehicle::percentEnergyRemaining() {
	float energyRemaining;
	energyRemaining = (currentGasoline / maximumGasoline) * 100.0f;
	return energyRemaining;
}

void GasolineVehicle::drive(float km) {
	if ((currentGasoline - ((km / 100) * getEngineEfficiency())) < 0) {
		cout << "Your car is out of energy!" << endl;
	} else {
		currentGasoline -= ((km / 100) * getEngineEfficiency());
	}
}

void GasolineVehicle::setCurrentGasoline(float currentGas) {
	currentGasoline = currentGas;
}

float GasolineVehicle::getCurrentGasoline() {
	return currentGasoline;
}

void GasolineVehicle::setMaximumGasoline(float maximumGas) {
	maximumGasoline = maximumGas;
}

float GasolineVehicle::getMaximumGasoline() {
	return maximumGasoline;
}