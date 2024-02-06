/**
 * Assignment: Lab 3
 * Course: CST819: C++ Programming
 * Lab Section: 303
 * Lab Professor: Mohammad Patoary
 * Due Date: 01/30/2024
 * Submission Date: 01/30/2024
*/
#include<iostream>
#include<string>
using namespace std;

namespace CST8219 {
	// Class to represent a vehicle.
	class Vehicle {
	 private:
		int numWheels;
		int numDoors;
		Vehicle* pVehicle = NULL;

	 public: 
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;

			cout << "In constructor with 2 parameters" << endl;
		}

		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameters, wheels = "
				<< w << endl;
		}

		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}

		~Vehicle() {
			cout << "In destructor" << endl;
		}

		void userVehicle() {
			int userD = 0;
			int userW = 0;
			char userChar = NULL;

			while (userChar != 'q') {
				userChar = NULL;
				userD = 0;
				userW = 0;
				cout << "Press ANY KEY to create a vehicle or q to quit: ";
				cin >> userChar;
				if (userChar != 'q') {
					delete pVehicle;
					// Asks user for input.
					cout << "Enter number of doors: ";
					while ((!(cin >> userD)) || (userD <= 0)) {
						cout << "Error! Please enter a number: ";
						cin.clear();
						cin.ignore(256, '\n');
					}

					// Asks user for input.
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Enter number of wheels: ";
					while ((!(cin >> userW)) || (userW <= 0)) {
						cout << "Error! Please enter a number:";
						cin.clear();
						cin.ignore(256, '\n');
					}

					pVehicle = new Vehicle(userW, userD);
				} else {
					continue;
				}
			}
		}
	};
}

using namespace CST8219;
int main(int argc, char** argv) {
	// Calls the Constructor Vehicle().
	Vehicle vehicle1;

	// Outputs a message to the screen.
	cout << "Vehicle takes " << sizeof(vehicle1) << endl;

	// Calls the Constructor Vehicle(int).
	Vehicle vehicle2(4);

	// Outputs a message to the screen.
	cout << "Vehicle takes " << sizeof(vehicle2) << endl;

	// Calls the Constructor Vehicle(int, int).
	Vehicle vehicle3(4, 2);

	// Outputs a message to the screen.
	cout << "Vehicle takes " << sizeof(vehicle3) << endl;

	// Outputs a message to the screen.
	cout << "I made Vehicles!" << endl;

	vehicle1.userVehicle();

	return 0;
}