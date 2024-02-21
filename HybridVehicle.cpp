/*
************************************************************
* File Name: HybridVehicle.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Lab Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the source file which defines and implements
  a class representing a hybrid vehicle.
************************************************************
*/
#ifndef HYBRIDVEHICLE_H_
#include "HybridVehicle.h"
#endif

HybridVehicle::HybridVehicle(float maxGasoline, float gasolineEfficency, float maxCharge, float electricEfficiency) {
	setCurrentGasoline(maxGasoline);
	setMaximumGasoline(maxGasoline);
	GasolineVehicle::setEngineEfficiency(gasolineEfficency);
	setCurrentCharge(maxCharge);
	setMaximumCharge(maxCharge);
	ElectricVehicle::setEngineEfficiency(electricEfficiency);
}

HybridVehicle::HybridVehicle() : HybridVehicle(0.0f, 0.0f, 0.0f, 0.0f) { };

HybridVehicle::~HybridVehicle() {
	cout << "In HybridVehicle Destructor" << endl;
}

float HybridVehicle::calculateRange() {
	float currentRange;
	float currentGasRange;
	float currentElecRange;
	//currentGasRange = (getCurrentGasoline() * 100) / GasolineVehicle::getEngineEfficiency();
	//currentElecRange = (getCurrentCharge() * 100) / ElectricVehicle::getEngineEfficiency();
	currentGasRange = GasolineVehicle::calculateRange();
	currentElecRange = ElectricVehicle::calculateRange();
	currentRange = currentGasRange + currentElecRange;
	return currentRange;
}

float HybridVehicle::percentEnergyRemaining() {
	float energyRemaining;
	float gasEnergyRemaining;
	float elecEnergyRemaining;
	gasEnergyRemaining = GasolineVehicle::percentEnergyRemaining();
	elecEnergyRemaining = ElectricVehicle::percentEnergyRemaining();
	//gasEnergyRemaining = (getCurrentGasoline() / getMaximumGasoline()) * 100.0f;
	//elecEnergyRemaining = (getCurrentCharge() / getMaximumCharge()) * 100.0f;
	//cout << gasEnergyRemaining << endl;
	//cout << elecEnergyRemaining << endl;
	energyRemaining = (gasEnergyRemaining + elecEnergyRemaining) / 2;
	return energyRemaining;
}

void HybridVehicle::drive(float km) {
	float newCurrentCharge;
	float newCurrentGas;
	newCurrentCharge = ElectricVehicle::getCurrentCharge();
	newCurrentGas = GasolineVehicle::getCurrentGasoline();
	if (((newCurrentCharge - ((km / 100) * ElectricVehicle::getEngineEfficiency())) < 0) 
		&& ((newCurrentGas - ((km / 100) * GasolineVehicle::getCurrentGasoline())) < 0)) {
		cout << "Your car is out of energy!" << endl;
	} else {
		newCurrentCharge -= ((km / 100) * ElectricVehicle::getEngineEfficiency());
		ElectricVehicle::setCurrentCharge(newCurrentCharge);
		newCurrentGas -= ((km / 100) * GasolineVehicle::getEngineEfficiency());
		GasolineVehicle::setCurrentGasoline(newCurrentGas);
	}
}