Date: 17.05.2016

### Preparations for exam

#### Problem 0

Define a class Product with the following properties: 
* name (dynamic array)  
* type with max length 30 (static array)  
* price
Implement constructors, destructor, operator=. Also define get/set methods for every property.

Also define a class Shop containing a dynamic array of products.
The shop should have the following functionalities: 
* Adding a product to the end of the shop
* Removing a product by a given name
* Searching for a product by a given name
* Reading the whole shop from file
* Writing the whole shop in a file

#### Problem 1

Define a template function which takes as arguments:
* two dynamic arrays from a template type
* the sizes of the two arrays  
and returns the number of matching elements in the two arrays

###### Example
```c++
Input:
8
[1,2,3,4,5,6,7,8]
6
[3,8,9,13,2,55] 

Output: 
3
```

#### Problem 2

Implement the higher order function filter which takes as arguments: 
* dynamic array of integers (lets call it -> arr)
* the size of the dynamic array
* function which takes as argument int and returns bool (lets call it -> pred)  
and prints the elements which satisfy the bool function (the elements arr[i] for which pred(arr[i]) returns true)

---

