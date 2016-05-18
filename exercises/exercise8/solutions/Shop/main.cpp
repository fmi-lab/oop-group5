#include <iostream>
#include "Shop.h"

int main() {
	Shop candyShop1;
	ifstream fileReader1("inputWithSize.txt");
	candyShop1.readWithSize(fileReader1);
	ofstream fileWriter1("output1.txt");
	candyShop1.write(fileWriter1);
	/// -------------------- ///
	Shop candyShop2;
	ifstream fileReader2("inputWithoutSize.txt");
	candyShop2.readWithoutSize(fileReader2);
	ofstream fileWriter2("output2.txt");
	candyShop2.write(fileWriter2);
	return 0;
}