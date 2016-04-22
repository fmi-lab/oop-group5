Date: 22.04.2016  

##Inheritance

```
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

| Access | public | protected | private |
|--------|--------|-----------|-------|
| Same class | yes | yes | yes |
| Derived classes | yes | yes | no |
| Outside classes | yes | no | no |

### Problem 0

// TODO

---

### Problem 1

// TODO

---
