#include "Product.h"

Product::Product(const char * newName, const char newType[30], int newPrice): name(nullptr), price(newPrice){
	setType(newType);
	if (newName != nullptr) {
		setName(newName);
	}
}

Product::Product(const Product &other){
	copyProduct(other);
}

Product::~Product(){
	delProduct();
}

Product & Product::operator=(const Product &other) {
	if (this != &other) {
		delProduct();
		copyProduct(other);
	}
	return *this;
}

const char *Product::getName() const {
	return name;
}

const char *Product::getType() const {
	return type;
}

int Product::getPrice() const {
	return price;
}

void Product::setName(const char *newName) {
	if (name != nullptr) {
		delete[] name;
	}
	int len = strlen(newName) + 1;
	name = new char[len];
	strcpy_s(name, len, newName);
}

void Product::setType(const char newType[30]) {
	strcpy_s(type, strlen(newType) + 1, newType);
}

void Product::setPrice(int newPrice) {
	price = newPrice;
}

void Product::copyProduct(const Product &other) {
	name = nullptr;
	setName(other.name);
	setType(other.type);
	setPrice(other.price);
}

void Product::delProduct() {
	delete[] name;
}

ostream& operator<<(ostream &out, const Product &p) {
	out << "Product: \n";
	out << "Name: " << p.name << std::endl;
	out << "Type: " << p.type << std::endl;
	out << "Price: " << p.price << std::endl;
	return out;
}

istream & operator>>(istream &in, Product &p)
{
	int sizeOfName;
	in >> sizeOfName;
	p.name = new char[sizeOfName+1];
	in >> p.name;
	in >> p.type;
	in >> p.price;
	return in;
}