#ifndef PRODUCT_H
#define PRODUCT_H
#include <fstream>
#include <cstring>

using std::ostream;
using std::istream;

class Product {
public:
	Product(const char *newName = nullptr, const char newType[30] = "", int newPrice = 0);
	Product(const Product &other);
	~Product();
	Product& operator=(const Product &other);
	const char *getName() const;
	const char *getType() const;
	int getPrice() const;
	void setName(const char *newName);
	void setType(const char newType[30]);
	void setPrice(int newPrice);
	friend ostream& operator<<(ostream &out,const Product &p);
	friend istream& operator>>(istream  &in, Product &p);
private:
	char *name;
	char type[30];
	int price;
	void copyProduct(const Product &other);
	void delProduct();
};
#endif