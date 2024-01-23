
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
	class MyFirstClass {};
}

// Inital Class.
class MyFirstClass {
private:
	int age;
	char* firstName;
	char* lastName;

public:
	/*
	  Default Constructor.
	MyFirstClass() {
		age = 0;
		firstName = NULL;
		lastName = NULL;
	}
	*/

	// Default Constructor using Constructor Chaining.
	MyFirstClass() : MyFirstClass(0, NULL, NULL) {}

	MyFirstClass(int a, char* f, char* l) : firstName(f), lastName(l) {
		age = a;
	}

	/*
	  This is a Destructor.
	  Destructors do not have parameters.
	  There can only be one destructor.
	  The compiler calls the destructor for you.
	  Never call a destructor directly.
	*/
	~MyFirstClass() {
	}

	/*
	  This is NOT a Constructor, NOR does it call a
	  Constructor.
	  This is a Function declaration.
	  The Function's name is mfc, and it returns an Object
	  of MyFirstClass{}.
	MyFirstClass mfc();
	*/
	int getAge() {
		return age;
	}

	char* getFirstName() {
		return firstName;
	}

	char* getLastName() {
		return lastName;
	}

protected:
	void setFirstName(char* f) {
		firstName = f;
	}

	void setLastName(char* l) {
		lastName = l;
	}
};

// Separate Class.
class MySecondClass {};

int main(int argc, char** argv) {
	// Calls an empty Constructor.
	MyFirstClass mfc;

	// Also calls an empty Constructor.
	MyFirstClass mfc = MyFirstClass();

	// Calls a Constructor with parameters.
	MyFirstClass mfc(15, "Joshua", "Dane");

	// Also calls a Constructor with parameters.
	MyFirstClass mfc = MyFirstClass(5, "Ally", "Johnson");
	cout << "Hello World!" << endl;
	return 0;

}