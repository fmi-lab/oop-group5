#ifndef SHOP_H
#define SHOP_H
#include "Product.h"
#include <vector>
using std::vector;

class Shop{
public:
	void add(const Product &newProduct);
	void remove(const char *name);
	Product search(const char *name);
	void readWithSize(ifstream &in);
	void readWithoutSize(ifstream &in);
	void write(ofstream &out);
private:
	vector<Product> shop;
};
#endif