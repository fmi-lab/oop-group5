Date: 01.04.2016

Assignment operator:  
* X& operator=(const X& other);  
Binary arithmetic operators:
* X& operator+=(const X& rhs);
* friend X operator+(X lhs,  const X& rhs);
* ...  
Relational operators:  
* friend bool operator<(const X& lhs, const X& rhs);
* friend bool operator==(const X& lhs, const X& rhs);
* friend bool operator>(const X& lhs, const X& rhs);
* ...  
Array subscript operator:  
* value& operator[](std::size_t index);
* const value& operator[](std::size_t index) const;  

and many others (<<, >>, ++,--, (), &, &=, ^, ^=, |, |= ...)  

#### Problem 0

Define a class implementing a 3D Vector(x,y,z) in the Cartesian coordinate system. 
You shoud be able to:  
* construct a 3D vector by three given coordinates
* get the vector's length  
* add two vectors
* substract two vectors
* multiply a vector by scalar
* index the coordinates of the vector  
* normalize a vector  
* find the dot product of two vectors  
* find the cross product of two vectors  
* find the angle between two vectors  
* determine the area of a triangle by two given vectors from it  
