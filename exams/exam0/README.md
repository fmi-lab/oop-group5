### 25.03.2016
 
You want to host a Showroom in Sofia but you need to organize all the cars and to be able to easily modify the showroom parameters.  
Here is some guidance for representing it with Object-Oriented Programming :
 
Define a class Car with fields:
* Company which made the car
* Country where the car was made
* Model (string with maximum size 20)
* Max speed (in km/h)
* Number of doors
* Number of seats
* ... (add others if you want)
You should make get and set methods for each field. Also make a print method.  
  
Also define a class representing the Showroom. The Showroom contains a dynamic array of Cars.  
The Showroom class should have methods for:  
* Adding a Car to the Showroom
* Getting a Car by a company which made it and a model
* Removing a Car by a given company and model
* Removing the slowest Car from the Showroom
* Sorting the cars in the Showroom by maximum speed (ascending order)
* Printing all the Cars made in specific country
* Printing all the Cars in the Showroom
When the Showroom fills with cars you should be able to hire a bigger hall with enough space to handle all the cars (preferably -> twice the size of the old one)  
BONUS:  
* When the Showroom becomes 30% full, you shoul be able to hire a smaller hall with smaller space. (preferably 50% of the capacity of the current hall)
