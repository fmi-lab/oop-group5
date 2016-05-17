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

void Shop::read(istream &in) {
	int size;
	in >> size;
	Product temp;
	for (int i = 0; i < size; i++) {
		in >> temp;
		shop.push_back(temp);
	}
}

void Shop::write(ostream &out) {
	int size = shop.size();
	for (int i = 0; i < size; i++) {
		out << shop[i] << std::endl;
	}
}
