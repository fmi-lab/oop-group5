### 04.04.2016

Link for Upload: https://my.pcloud.com/#page=puplink&code=oXzZrEGVplvCKTYdUFvmzvFkoH3xKdyX

#### Problem 0

Define a class -> Music Album in Spotify. The music album contains songs.   
Every song has:
* number  
* title  
* duration(in seconds)  
* number of plays

The music album has:
* name of the artist who made the album and every record in it.  
* title

The user can: 
* add a song to the music album  
* get and change every record's property  
* print the album in order of the song's numbers  
* get the most famous song in the album  

---

#### Problem 1

Define a class implementing a 3D Vector(x,y,z) in the Cartesian coordinate system. 
You shoud be able to:  
* 1. construct a 3D vector by three given coordinates
* 2. get the vector's length  
* 3. add two vectors
* 4. substract two vectors
* 5. multiply a vector by scalar
* 6. index the coordinates of the vector  
* 7. normalize a vector  
* 8. find the dot product of two vectors  
* 9. find the cross product of two vectors  
* 10. find the angle between two vectors  
* 11. determine the area of a triangle by two given vectors from it  

The method's declarations follow: 
* 1. 
* Vector(double x = 0, double y = 0, double z = 0);
* 2. 
* double length() const;
* 3. 
* Vector& operator+=(const Vector& rhs);
* friend Vector(Vector lhs, const Vector& rhs);
* 4. 
* Vector& operator-=(const Vector& rhs);
* friend Vector operator-(Vector lhs, const Vector& rhs);
* 5. 
* Vector& operator*=(double scalar);
* friend Vector operator*(Vector lhs, double scalar);
* 6. 
* double& operator\[\](int index);
* const double& operator\[\](int index) const;
* 7. 
* void normalize();
* 8. 
* double dot(const Vector& other) const;
* friend double operator*(Vector lhs, const Vector& rhs);
* 9. 
* Vector& operator^=(const Vector& rhs);
* friend Vector operator^(Vector lhs, const Vector& rhs);
* 10. 
* float getAngle(const Vector& other) const;
* 11. 
* float getTriangleArea(const Vector& other) const;  

Avoid repetitive code where possible  

---

#### Problem 2

Define a class implementing a Fraction. You should keep a numerator and denominator as class-members.
You should be to:  
* construct a Fraction
* set/get the numerator and the denominator
* sum two Fractions
* substract two Fractions
* multiply two Fractions
* divide two Fractions
* compare two Fractions with operators ==, !=, <, <=, > and >=

Overload the appropriate operators where possible
