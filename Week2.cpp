/*
************************************************************
* File Name: Week2.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Professor: Mohammad Patoary.
* Assignment: Lab 4.
* Date: February 5, 2024.
* Purpose: This is the source file which defines the main()
  function used to begin execution of the program.
************************************************************
*/
#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

using namespace std;

void CreateVehicle(Vehicle &aVehicle, int wheels = 4, int doors = 2) {
	aVehicle.setWheels(wheels);
	aVehicle.setDoors(doors);

}
	
int main(int argc, char** argv) {
	// Calls the Constructor Vehicle().
	Vehicle original;

	// Creates a copy using a reference.
	Vehicle copy(original);

	// Creates a copy using a pointer.
	Vehicle secondCopy(&original);
	copy.printVehicle();

	CreateVehicle(copy, 2);
	copy.printVehicle();

	CreateVehicle(copy, 2, 3);
	copy.printVehicle();
	copy = secondCopy;
	copy.printVehicle();

	return 0;
}