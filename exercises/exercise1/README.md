### 11.03.2016

#### Problem 0

Define a class IntArray, which resembles one dimensional array (allowing max size -> 10 000 000).  
The class should contain: 
* Constructors; 
* Destructor;
* Method for adding a value; 
* Method for getting a value at specific index; 
* Method which checks if the array contains a given value;
* Method for sorting the array;

Implement the methods in the most effective way you can think of.

Store the interface of the class and its implementation in different files. The interface in a header file and the implementation in a .cpp file. 

#### Problem 1

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
