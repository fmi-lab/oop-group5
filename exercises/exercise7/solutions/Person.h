#ifndef PERSON_H
#define PERSON_H
#include <cstring>
#include <iostream>
#include <iomanip>

class Person {
public:
	Person(const char *name, int age, int weight, int height);
	Person(const Person &other);
	~Person();
	Person &operator=(const Person &other);
	const char *getName() const;
	int getAge() const;
	int getWeight() const;
	int getHeight() const;
	void setName(const char *newname);
	void setAge(int newage);
	void setWeight(int newWeight);
	void setHeight(int newcm);
	virtual void print() const;
private:
	char *name;
	int age, weight, height; 
	void copyPerson(const Person &other);
	void delPerson();
};

#endif