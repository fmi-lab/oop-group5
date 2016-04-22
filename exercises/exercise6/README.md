Date: 22.04.2016  

##Inheritance

### Example
---

```c++
class Shape
{
protected:
	float width, height;
public:
	void Shape(float w, float h)
	{
		width = w;
		height = h;
	}
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};

int main ()
{
	Rectangle rect(5,3);
	Triangle tri(2,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
```

### Public inheritance

| Access | public | protected | private |
|--------|--------|-----------|-------|
| Same class | yes | yes | yes |
| Derived classes | yes | yes | no |
| Outside classes | yes | no | no |

### Problems

#### Problem 0
![Shape Hierarchy](http://www.cppforschool.com/images/inheritance-example.png)
![Vehicle hierarchy](http://ecomputernotes.com/images/inheritance.jpg)  

Implement the following Hierarchy

Vehicle:
* speed
* weight
* brand
* harmful emission (for one km)
* number of wheels
* capacity

Automobiles:
* engine horsepower
* type ( hybrid/eletrical/diesel/gas )

Pulled-Vehicles:
* number of foot pedals

Cars:
* number of doors
* type of coupet (string)

Scooter/Motorcycle

Bicycle:
* type of bike
* type of disc-based break system

Rickshaw:
* is it self-driven

Implement a method in Vehicle -> void travel(int kms) const, which prints both time of travel of the concrete vehicle and its harmful emissions during the travel;


---

#### Problem 1

![Shape Hierarchy -> Extended](http://www.learncpp.com/images/CppTutorial/Section11/ShapesInheritance.png)

---
