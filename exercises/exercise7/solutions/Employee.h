#include "Person.h"
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee : public Person {
public:
	Employee(const char *name, int age, int weight, int height,
		     const char *department, int ID, int salary);
	Employee(const Employee &other);
	~Employee();
	Employee &operator=(const Employee &other);
	const char *getDep() const;
	int getID() const;
	int getSalary() const;
	void setDep(const char *newDep);
	void setID(int newID);
	void setSalary(int newSalary);
	void print() const;
private:
	char *department;
	int ID;
	int salary;
	void copyEmployee(const Employee &other);
	void delEmployee();
};
#endif