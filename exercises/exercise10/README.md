#Exercise 10
03/06/2016

## Problem 0 

Write the following hierarchy:

                        Station
                      /    |    \
           TrainStation Airport BusStation
           /        \
      People        Cargo
           \        /
             Hybrid


Station should have: 
- location;
- array of transport numbers (up to 150);
- array of the the time that transportNumbers[i] leaves the station;

TrainStation should have methods that specify whether it's people or cargo trainstation.

CargoStation should have load and indicate it's cargo.
PeopleStation should have number of seats.
HybridStation should have both.

Airport should have seats.

BusStation should have number of seats.
