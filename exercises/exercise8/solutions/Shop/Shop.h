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
	void read(istream &in);
	void write(ostream &out);
private:
	vector<Product> shop;
};
#endif