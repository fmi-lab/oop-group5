Date: 15.04.2016

##Templates  

#### Template function (with Example) 

```
#include <iostream>

template <typename T>
inline const &T max (T const &a, T const &b) 
{ 
    return a < b ? b:a; 
} 
int main ()
{
 
    int i = 39;
    int j = 20;
    std::cout << "Max(i, j): " << Max(i, j) << std::endl; 

    double f1 = 13.5; 
    double f2 = 20.7; 
    std::cout << "Max(f1, f2): " << Max(f1, f2) << std::endl; 

    char c1 = 'b'; 
    char c2 = 'e'; 
    std::cout << "Max(c1, c2): " << Max(c1, c2) << endl; 

   return 0;
}
```

#### Templates in classes  
```
template <class T> class Calc
{
  public:
    const T& multiply(const T &x, const T &y);
    T add(const T &x,const T &y);
};
template <class T> 
T calc<T>::multiply(const T &x,const T &y)
{
  return x*y;
}
template <class T> 
A_Type calc<T>::add(const T &x,const T &y)
{
  return x+y;
}
```
---

### Problem 0

Make the matrix class from the last exercise work with a template type.

---

### Problem 1

Create a class representing the data structure Stack for a template type.
