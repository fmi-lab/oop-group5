#include "Customer.h"

Customer::Customer(const char * name, int age, int weight, int height, int ID, int maxSIZE) : 
	               Person(name, age, weight, height), ID(ID), maxSIZE(maxSIZE), size(0) {
	products = new char*[maxSIZE];
	for (int i = 0; i < maxSIZE; i++) {
		products[i] = nullptr;
	}
}

Customer::Customer(const Customer &other) : Person(other) {
	copyCustomer(other);
}

Customer::~Customer() {
	delCustomer();
}

Customer &Customer::operator=(const Customer &other)
{
	Person::operator=(other);
	if (this != &other) {
		delCustomer();
		copyCustomer(other);
	}
	return *this;
}

const char *Customer::getProductAt(int index) const {
	if (index >= maxSIZE || index < 0) {
		return nullptr;
	}
	return products[index];
}

void Customer::addProduct(const char *newProduct) {
	if (size == maxSIZE) {
		resize();
	}
	int len = strlen(newProduct) + 1;
	products[size] = new char[len];
	strcpy_s(products[size], len, newProduct);
	size++;
}

int Customer::getID() const {
	return ID;
}

void Customer::setID(int newID) {
	ID = newID;
}

void Customer::print() const {
	Person::print();
	std::cout << std::setw(17) << std::right << "ID: " << ID << std::endl;
	std::cout << std::setw(17) << std::right << "Products Bought: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << std::setw(10) << std::right << i + 1 << ". " << products[i] << std::endl;
	}
}

void Customer::copyCustomer(const Customer &other) {
	ID = other.ID;
	size = 0;
	maxSIZE = other.maxSIZE;
	products = new char*[maxSIZE];
	for (int i = 0; i < maxSIZE; i++) {
		products[i] = nullptr;
	}
	for (int i = 0; i < other.size; i++) {
		addProduct(other.getProductAt(i));
	}
}

void Customer::delCustomer() {
	for (int i = 0; i < size; i++) {
		delete[] products[i];
	}
	delete products;
}

void Customer::resize() {
	maxSIZE *= 2;
	char **newProducts = new char*[maxSIZE];
	for (int i = 0; i < maxSIZE; i++) {
		newProducts[i] = nullptr;
	}
	int len;
	for (int i = 0; i < size; i++) {
		len = strlen(products[i]) + 1;
		newProducts[i] = new char[len];
		strcpy_s(newProducts[i], len, products[i]);
		delete[] products[i];
	}
	delete products;
	products = newProducts;
}
