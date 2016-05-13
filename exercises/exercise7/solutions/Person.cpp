#include "Person.h"

Person::Person(const char *name, int age, int weight, int height): 
	           name(nullptr), age(age), weight(weight), height(height) {
	if (name != nullptr) {
		setName(name);
	}
}
Person::Person(const Person &other) {
	copyPerson(other);
}
Person::~Person() {
	delPerson();
}
Person &Person::operator=(const Person &other) {
	if (this != &other) {
		delPerson();
		copyPerson(other);
	}
	return *this;
}
const char *Person::getName() const {
	return name;
}
int Person::getAge() const {
	return age;
}
int Person::getWeight() const {
	return weight;
}
int Person::getHeight() const {
	return height;
}
void Person::setName(const char *newname) {
	if (name != nullptr) {
		delete[] name;
	}
	int len = strlen(newname) + 1;
	name = new char[len];
	strcpy_s(name, len, newname);
}
void Person::setAge(int newage) {
	age = newage;
}
void Person::setWeight(int newweight) {
	weight = newweight;
}
void Person::setHeight(int newheight) {
	height = newheight;
}

void Person::copyPerson(const Person &other) {
	name = nullptr;
	setName(other.name);
	setAge(other.age);
	setWeight(other.weight);
	setHeight(other.height);
}
void Person::delPerson() {
	delete[] name;
}

void Person::print() const {
	std::cout << std::setw(17) << std::right
			  << "Name: " << name << std::endl;
	std::cout << std::setw(17) << std::right
		      << "Age: " << age << std::endl;
	std::cout << std::setw(17) << std::right
		      << "Weight: " << weight << "kg" << std::endl;
	std::cout << std::setw(17) << std::right
		      << "Height: " << height << "cm" << std::endl;
}