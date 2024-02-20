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
	/*
	cout << "Gas Curr:" << getCurrentGasoline() << endl;
	cout << "Elec Curr:" << getCurrentCharge() << endl;
	cout << "Gas Eff:" << GasolineVehicle::getEngineEfficiency() << endl;
	cout << "Elec Eff:" << ElectricVehicle::getEngineEfficiency() << endl;
	*/
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
	//gasEnergyRemaining = (getCurrentGasoline() / getMaximumGasoline()) * 100.0f;
	//elecEnergyRemaining = (getCurrentCharge() / getMaximumCharge()) * 100.0f;
	gasEnergyRemaining = GasolineVehicle::percentEnergyRemaining();
	elecEnergyRemaining = ElectricVehicle::percentEnergyRemaining();
	energyRemaining = (gasEnergyRemaining + elecEnergyRemaining) / 2;
	return energyRemaining;
}

void HybridVehicle::drive(float km) {
	float newCurrentCharge = getCurrentCharge();
	float newCurrentGas = getCurrentGasoline();
	if ((getCurrentCharge() < 0) && (getCurrentGasoline() < 0)) {
		cout << "Your car is out of energy!" << endl;
	} else {
		newCurrentCharge -= ((km / 100) * ElectricVehicle::getEngineEfficiency());
		setCurrentCharge(newCurrentCharge);
		newCurrentGas -= ((km / 100) * GasolineVehicle::getEngineEfficiency());
		setCurrentGasoline(newCurrentGas);
	}
}