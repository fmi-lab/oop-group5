### 11.03.2016

**Deadline:** ` 18.03.2016`

#### Problem 0 (7.5 Points)

You have organized a drinking competition and you got the results from it. Write a program which takes as input the number N (max 100) and then N participants. Each participant has the properties: registration number, name, and litres alcohol drank before passing out. The program prints the contenstants in sorted order first by their numbers, then by their names and finally by their litres.

###### Example
```c++
Input:
1 Martin 2.0 
2 Stiliyan 2.5
3 Mariya 2.2

Output:
1 Martin 2.0 
2 Stiliyan 2.5
3 Mariya 2.2
  
3 Mariya 2.2
1 Martin 2.0 
2 Stiliyan 2.5

1 Martin 2.0 
3 Mariya 2.2
2 Stiliyan 2.5
  
```

---

#### Problem 1 (7.5 Points)

Define a class Movie with fields:
* name (dynamic array of characters)
* genre (static array of characters -> the max size is 50)
* rating (from 0.0 to 10.0)  
* duration in minutes  
  
You should implement a Constructor, Destructor, get/set methods and a print method, which prints the movie in the following format:  
Name of the Movie  
     genre  
rating | duration  
Separate the implementation of the methods from the interface of the class.
Add "const" to methods which don't change the class' fields.
Delete only the data allocated dynamically (with new).
You will also need to use functions from the cstring library like strcpy(strcpy_s for Visual Studio), strlen and possibly other.
