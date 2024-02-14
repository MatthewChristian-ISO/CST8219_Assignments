/*
************************************************************
* File Name: Week2.cpp
* Course: CST8219 – C++ Programming.
* Lab Section: [303].
* Professor: Mohammad Patoary.
* Assignment: Lab 5.
* Date: February 13, 2024.
* Purpose: This is the source file which defines the main()
  function used to begin execution of the program.
************************************************************
*/
#ifndef VEHICLE_H_
#include "Vehicle.h"
#endif

/*
void CreateVehicle(Vehicle &aVehicle, int wheels = 4, int doors = 2) {
	aVehicle.setWheels(wheels);
	aVehicle.setDoors(doors);
}
*/
	
int main(int argc, char** argv) {
	/* Creates an Object of type Vehicle. */
	Vehicle original;
	/* Copy constructor by reference. */
	Vehicle copy(original); 

	cout << "Original is: " << original << "Copy is: " << copy << endl;

	cout << "Increment original: " << original++ << endl;

	cout << "Increment copy: " << ++copy<< endl;

	cout << "Decrement original: " << --original << endl;

	cout << "Decrement copy: " << copy-- << endl;

	// should be true :
	cout << "Compare equality 1: " << (original == copy) << endl;

	//should be false:
	cout << "Compare equality 2: " << (--original == ++copy) << endl;

	//should be true:
	cout << "Compare inequality: " << (original != copy) << endl;

	//This should make original = copy, and then return a Vehicle for output:
	cout << "Assignment operator: " << (original = copy) << endl;

	return 0;
}