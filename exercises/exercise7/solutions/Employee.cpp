#include "Employee.h"

Employee::Employee(const char *name, int age, int weight, int height, 
				   const char *department, int ID, int salary):
	               Person(name,age,weight,height),	department(nullptr), ID(ID), salary(salary) {
	if (department != nullptr) {
		setDep(department);
	}
}

Employee::Employee(const Employee &other): Person(other) {
	copyEmployee(other);
}

Employee::~Employee() {
	delEmployee();
}

Employee &Employee::operator=(const Employee &other) {
	Person::operator=(other);
	if (this != &other) {
		delEmployee();
		copyEmployee(other);
	}
	return *this;
}

const char *Employee::getDep() const {
	return department;
}

int Employee::getID() const {
	return ID;
}

int Employee::getSalary() const {
	return salary;
}

void Employee::setDep(const char * newDep) {
	if (department != nullptr) {
		delete[] department;
	}
	int len = strlen(newDep) + 1;
	department = new char[len];
	strcpy_s(department, len, newDep);
}

void Employee::setID(int newID) {
	ID = newID;
}

void Employee::setSalary(int newSalary) {
	salary = newSalary;
}

void Employee::print() const {
	Person::print();
	std::cout << std::setw(17) << std::right
		      << "Department: " << department << std::endl;
	std::cout << std::setw(17) << std::right
		      << "ID: " << ID << std::endl;
	std::cout << std::setw(17) << std::right
		      << "Salary: " << salary << "BGN per day" << std::endl;
}

void Employee::copyEmployee(const Employee &other) {
	department = nullptr;
	setDep(other.department);
	setID(other.ID);
	setSalary(other.salary);
}

void Employee::delEmployee() {
	delete[] department;
}
