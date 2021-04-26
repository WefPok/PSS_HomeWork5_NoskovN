# Building and Running
[![made-for-VSCode](https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg)](https://code.visualstudio.com/)

Project is using CMake as a building tool.
You can download CMake from [here](https://cmake.org/download/).

Run following command to build the project:

```
cmake --build --target PSS_HomeWork5_NoskovN
```

# Project structure

Project has three main modules: 
* Gateway - includes `AdminGateway, PassengerGateway, DriverGateway`.
* System - includes main `System class (backend of the program)`.
* User - includes classes `Admin, Driver and Passenger`.

`System.h` contains 'System' class, which is responsible for database interaction and management of user's classes

`*Gateway` classes contain the methods for passing values and queries from users to the `System`

`Admin.h, Passenger.h, Driver.h` are the classes which contain info about the user - password, login, name, history and etc.
___
# Gateways
## Passenger Gateway

Methods in passenger gateway:

* `LogIn()`  - login passenger
* `orderHistory()` - get order history of user
* `createOrder()` - create and add order to available orders
* `acceptRide()` - accept or decline the conditions (price) of order
* `getCoordinates()` - output the relative position during the ride
* `lookForPayment()` - list the payment methods
* `addPayment()` - add the payment method to the list of payment methods
* `addPinnedAddress` - save the address to the pinned addresses
* `lookForPinnedAddresses` - list the pinned addresses

Fields in Passenger gateway:
* `System system` - main system to connect and send queries

## Driver Gateway

Methods in DriverGateway:

* `LogIn()`  - login driver
* `lookForOrders()` - check the available orders
* `acceptOrder()` - take one of the available orders
* `endOrder()` - finishes the ride and closes current order
* `addCar()` - adds another car to the driver

Fields in DriverGateway:
* `System system` - main system to connect and send queries

## Admin Gateway

* `blockPassenger()`  - blocks user from placing any orders
* `unBlockPassenger()`  - unblocks user
* `blockDriver()` - blocks from checking new orders and accepting orders
* `unBlockDriver()` - unblocks driver
* `validateCar()` - validate new car from queue
* `lookForCarsInQueue()` - lists cars to be validated by admin
* `lookForAllPassengers()` - lists all passengers
* `lookForAllActiveOrders()` - lists all orders
* `lookForAllDrivers` - lists all drivers

Fields in DriverGateway:
* `System system` - main system to connect and send queries

___
# Users
## Passenger
Class `Passenger` has following fields:
* `isBlocked` - status of user (blocked/not blocked)
* `id` - unique identifier of the passenger
* `login` - login of the passenger
* `password` - password of passenger.
* `rating` - rating of the passenger (from 1 to 5)
* `name` - name of passenger.
* `paymentMethods` - vector containing payment methods
* `orderHistory` - vector of previous orders
* `pinnedAdresses` - vector of pinned addresses
* `activeOrder` - current active order
* `proposedOrder` - order offered by system to be accepted/declined
* `propose` - status of the proposed order
* `active` - status of user (in a ride or not)

## Driver

Class `Driver` has following unique fields:

* `cars` - vector of driver's cars 
* `chosenCar` - car currently in use
* `proposedOrders` - available orders from passengers

Other fields are the same as in `Passenger` class.

## Admin

Has only three fields - `id, login and password`

#Utility classes
## Car
Class car contains info about the car, such as model, number, color, type, and etc.

## Order
Class order contains info about the person who placed this order, time, number, and etc.
# Project work scheme

Project is based on the relationship between 4 entities:
* **System** - backend implementation
* **User** - user imitation
* **Gateway** - protective module, responsible for safe interaction between System and Users
* **Database** - data storage

User ←→ Gateway ←→ System ←→ Database

### Database
Implemented using 5 txt files:

* Passengers.txt - stores all data connected to passengers
* Drivers.txt - stores all data connected to drivers
* Admins.txt - stores all data connected to admins
* Orders.txt - stores all the orders which are currently wasn't accepted by drivers yet
* CarQueue.txt - cars not yet validated by admins

###Car types:

In ascending order:

Ecomomy → Comfort → ComfortPlus → Business

Type | Free Water | Park in front of intrance
------------- | ------------- | --------------
Ecomomy | - | -
Comfort  | +| -
ComfortPlus  | +|-
Business | -|+


# Usage
Main contains the tests and samples of usage of the project components.

### Test 1
New car is created.
Admin looks for new cars to validate
Admin validates car from queue

### Test 2
New order is created
Passenger accepts the ride
Driver looks for available orders
Driver accepts order
Passenger gets position during the ride
Driver completes the order
Passenger queries order history

### Test 3
Passenger creates order
Passenger declines order for some reason

### Test 4
Driver looks for available orders, but there is no available orders currently

### Test 5
Passenger adds a payment method
Passenger checks payment methods from second device

### Test 6
Admin looks for all drivers
Admin blocks one of the drivers

### Test 7
Driver, who is not logged in tries to look for orders
