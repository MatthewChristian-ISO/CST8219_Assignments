/*
  Initial Class.
class MyFirstClass {
*/

/*
  This is an access specifier, any variable or
  function following it now have this level of access.
 private:
*/	
	/*
	  These are Class variables/members.
	int age;
	char* firstName;
	char* lastName;
	*/

/*
  This is also an access specifier.
 public:
 */
	/*
	  Default Constructor without Constructor Chaining.
	MyFirstClass() {
		age = 0;
		firstName = NULL;
		lastName = NULL;
	}
	*/

	/*
	  Parameterized Constructor.
	MyFirstClass(int a, char* f, char* l) : firstName(f), lastName(l) {
		age = a;
	 }
	*/

	/*
	  Default Constructor using Constructor Chaining.
	MyFirstClass() : MyFirstClass(0, NULL, NULL) {}
	*/

	/*
	  This is a Destructor.
	  Destructors do not have parameters.
	  There can only be one destructor.
	  The compiler calls the destructor for you.
	  Never call a destructor directly.
	~MyFirstClass() {}
	*/

	/*
	  This is NOT a Constructor, NOR does it call a
	  Constructor.
	  This is a Function declaration.
	  The Function's name is mfc, and it returns an Object
	  of MyFirstClass{}.
	MyFirstClass mfc();
	*/

	/*
	  Returns the variable age.
	int getAge() {
		return age;
	}
	*/

	/*
	  Returns the variable firstName.
	char* getFirstName() {
		return firstName;
	}
	*/

	/*
	  Returns the variable lastName.
	char* getLastName() {
		return lastName;
	}
	*/

/*
  This is also an access specifier.
 protected:
*/
	/*
	  Sets the value of the variable age.
	void setAge(int a) {
		age = a;
	}
	*/

	/*
	  Sets the value of the variable firstName.
	void setFirstName(char* f) {
		firstName = f;
	}
	*/

	/*
	  Sets the value of the variable lastName.
	void setLastName(char* l) {
		lastName = l;
	}
};
	*/


#include<iostream>
using namespace std;

/*
  Namespaces allow you to wrap your Class names so that
  they won't conflict with other Class names.
  It is good practice to create a namespace so that
  your Class names are unique.
  Namespaces are similar to packages in Java
  The following statement creates a namespace.
*/
namespace CST8219 {
	// Class to represent a vehicle.
	class Vehicle {
	 private:
		int numWheels;
		int numDoors;

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
	};
}

using namespace CST8219;
int main(int argc, char** argv) {
	/*
	  Calls an empty Constructor.
	MyFirstClass mfc;
	*/

	/*
	  Also calls an empty Constructor.
	MyFirstClass mfc = MyFirstClass();
	*/

	/*
	  Calls a Constructor with parameters.
	MyFirstClass mfc(15, "Joshua", "Dane");
	*/

	/*
	  Also calls a Constructor with parameters.
	MyFirstClass mfc = MyFirstClass(5, "Ally", "Johnson");
	*/

	/*
	  Outputs a message to the screen.
	cout << "Hello World!" << endl;
	*/

	/*
	  Calls the Constructor Vehicle().
	CST8219::Vehicle myVehicle;
	*/

	/*
	  Calls the Constructor Vehicle(int).
	CST8219::Vehicle myVehicle(4);
	*/
	
	/*
	  Calls the Constructor Vehicle(int, int).
	*/
	CST8219::Vehicle myVehicle(4, 2);

	// Outputs a message to the screen.
	cout << "I made a Vehicle!" << endl;
	return 0;
}