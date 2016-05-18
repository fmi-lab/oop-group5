#include "Shop.h"

void Shop::add(const Product &newProduct) {
	shop.push_back(newProduct);
}

void Shop::remove(const char *name) {
	int size = shop.size();
	for (int i = 0; i < size; i++) {
		if (strcmp(name, shop[i].getName()) == 0) {
			Product temp = shop[size - 1];
			shop[size - 1] = shop[i];
			shop[i] = temp;
			shop.pop_back();
			return;
		}
	}
}

Product Shop::search(const char *name) {
	int size = shop.size();
	for (int i = 0; i < size; i++) {
		if (strcmp(name, shop[i].getName()) == 0) {
			return shop[i];
		}
	}
	return Product("Invalid", "Invalid", -1);
}

void Shop::readWithSize(ifstream &in) {
	int size, sizeOfName;
	in >> size;
	char *tempName;
	char tempType[30];
	int tempPrice;
	for (int i = 0; i < size; i++) {
		in >> sizeOfName;
		tempName = new char[sizeOfName+1];
		in >> tempName;
		in >> tempType;
		in >> tempPrice;
		shop.push_back(Product(tempName, tempType, tempPrice));
		delete[] tempName;
	}
}

void Shop::readWithoutSize(ifstream &in) {
	int sizeOfName;
	char *tempName;
	char tempType[30];
	int tempPrice;
	while(in>>sizeOfName){
		tempName = new char[sizeOfName+1];
		in >> tempName;
		in >> tempType;
		in >> tempPrice;
		shop.push_back(Product(tempName, tempType, tempPrice));
		delete[] tempName;
	}
}

void Shop::write(ofstream &out) {
	int size = shop.size();
	for (int i = 0; i < size; i++) {
		out << "Product: ";
		out << "Name: " << shop[i].getName() << std::endl;
		out << "Type: " << shop[i].getType() << std::endl;
		out << "Price: " << shop[i].getPrice() << std::endl;
	}
}
