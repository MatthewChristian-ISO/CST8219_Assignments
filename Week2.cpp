/*
************************************************************
* File Name: Week2.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Professor: Mohammad Patoary.
* Assignment: Lab 6.
* Date: February 20, 2024.
* Purpose: This is the source file which defines the main()
  function used to begin execution of the program.
************************************************************
*/
#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

#ifndef GASOLINEVEHICLE_H_
#include "GasolineVehicle.h"
#endif

#ifndef ELECTRICVEHICLE_H_
#include "ElectricVehicle.h"
#endif

#ifndef HYBRIDVEHICLE_H_
#include "HybridVehicle.h"
#endif

Vehicle* testVehicle(Vehicle* pVehicle, const char* vehicleName) {
	cout << vehicleName << "'s range is: " << pVehicle->calculateRange() << endl;
	pVehicle->drive(150);
	cout << vehicleName << "'s energy left is: " << pVehicle->percentEnergyRemaining() << endl;
	cout << vehicleName << "'s range is now: " << pVehicle->calculateRange() << endl;

	return pVehicle;
}
	
int main(int argc, char** argv) {
	delete testVehicle(new GasolineVehicle(50, 7.1f), "Corolla");

	delete testVehicle(dynamic_cast<GasolineVehicle*> (new HybridVehicle(42, 4.3f, 8.8f, 22.0f)), "Prius");

	delete testVehicle(new ElectricVehicle(75, 16), "Tesla 3");

	return 0;
}