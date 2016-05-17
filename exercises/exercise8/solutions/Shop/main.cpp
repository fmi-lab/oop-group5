#include "Shop.h"
#include <iostream>

int main() {
	Shop candyShop;
	candyShop.read(std::cin);
	candyShop.write(std::cout);
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << candyShop.search("Banan");
	std::cout << "-------------------------------------------------------" << std::endl;
	candyShop.remove("Banan");
	std::cout << candyShop.search("Banan");
	std::cout << "-------------------------------------------------------" << std::endl;
	candyShop.write(std::cout);
	return 0;
}

/* Example Input: 
3
5
Banan
Hranitelen
3
10
Krastavica
Hranitelen
1
9
Televizor
Tehnika
600
*/