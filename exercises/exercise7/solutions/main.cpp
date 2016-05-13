#include "Employee.h"
#include "Customer.h"

int main() {
	Employee yavor("Yavor Ivanov", 20, 68, 176, "Product C++ Team", 837, 40);
	yavor.print();
	std::cout << "-----------------------------------------------------------" << std::endl;

	/// Implicit Casting - Possible
	Person yavor2(yavor);
	yavor2.print();
	std::cout << "-----------------------------------------------------------" << std::endl;
	
	/// Employee gosho(ivan); <- Isn't possible

	Customer georgi("Gosho Goshev", 50, 80, 180, 666);
	georgi.addProduct("Google Chrome");
	georgi.addProduct("Visual Studio");
	georgi.addProduct("Spotify");
	georgi.print();
	std::cout << "-----------------------------------------------------------" << std::endl;

	///Implicit Casting - Possible
	Person georgi2(georgi);
	georgi2.print();
	std::cout << "-----------------------------------------------------------" << std::endl;

	/// Polymorphism
	/// "virtual" + pointers !
	Customer georgi3(georgi);
	Person *goshoPoly = &georgi3;
	goshoPoly->print();
	std::cout << "-----------------------------------------------------------" << std::endl;

	Employee yavor3(yavor);
	Person *yavPoly = &yavor3;
	yavPoly->print();
	return 0;
}