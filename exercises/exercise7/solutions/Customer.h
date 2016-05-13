#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"

class Customer : public Person {
public:
	Customer(const char *name, int age, int weight, int height, int ID, int maxSIZE = 2);
	Customer(const Customer &other);
	~Customer();
	Customer &operator=(const Customer &other);
	const char *getProductAt(int index) const;
	void addProduct(const char *newProduct);
	int getID() const;
	void setID(int newID);
	void print() const;
private:
	char **products;
	int size, ID, maxSIZE;
	void copyCustomer(const Customer &other);
	void delCustomer();
	void resize();
};

#endif