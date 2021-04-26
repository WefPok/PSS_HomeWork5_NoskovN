#include <iostream>
#include <ctime>
#include "Users/Driver.h"
#include "Users/Passenger.h"
#include "Gateways/PassengerGateway.h"
#include "Gateways/DriverGateway.h"
#include "System.h"
#include "Gateways/AdminGateway.h"
#include "Users/Admin.h"

using namespace std;

int main() {
    srand(time(0));
    Driver driver("Daniil", "qwerty");
    Passenger passenger("Niki4", "qwerty");
    Passenger passengerFromSecondDevice("Niki4", "qwerty");
    Admin admin("admin","admin");
    Driver driver1("Max","qwerty");
    System backEnd;
    PassengerGateway passengerGateway(backEnd);
    DriverGateway driverGateway(backEnd);
    AdminGateway adminGateway(backEnd);


    cout << "<------------------TEST1-------------------->";
    cout<<endl;
    /// validating a car
    Car car("TT","1234",2,3);
    driverGateway.addCar(driver,car);
    cout<<endl;
    adminGateway.lookForCarsInQueue(admin);
    cout<<endl;
    adminGateway.validateCar(admin,0);
    cout<<endl;
    cout << "<------------------TEST1-------------------->";
    cout<<endl;
    cout << "<------------------TEST2-------------------->";
    cout<<endl;
    /// creating, accepting and execution of order, getting coordinates, showing order history
    passengerGateway.createOrder(passenger,"fromAddress","toAddress",1);
    cout<<endl;
    passengerGateway.acceptRide(passenger,1);
    cout<<endl;
    driverGateway.lookForOrders(driver1);
    cout<<endl;
    driverGateway.acceptOrder(driver1,0);
    cout<<endl;
    passengerGateway.getCoordinates(passengerFromSecondDevice);
    cout<<endl;
    driverGateway.endOrder(driver1);
    cout<<endl;
    passengerGateway.orderHistory(passengerFromSecondDevice);
    cout<<endl;
    cout << "<------------------TEST2-------------------->";
    cout<<endl;

    cout << "<------------------TEST3-------------------->";
    cout<<endl;
    /// creating and declining order
    passengerGateway.createOrder(passenger,"fromAddress","toAddress",3);
    cout<<endl;
    passengerGateway.acceptRide(passenger,0);
    cout<<endl;
    cout << "<------------------TEST3-------------------->";
    cout<<endl;

    cout << "<------------------TEST4-------------------->";
    cout<<endl;
    /// driver is looking for available orders, but there is no such
    driverGateway.lookForOrders(driver1);
    cout<<endl;
    cout << "<------------------TEST4-------------------->";
    cout<<endl;

    cout << "<------------------TEST5-------------------->";
    cout<<endl;
    /// passenger is adding payment method and looking for it from second device
    passengerGateway.addPayment(passenger,"visa*9999");
    cout<<endl;
    passengerGateway.lookForPayment(passengerFromSecondDevice);
    cout << "<------------------TEST5-------------------->";
    cout<<endl;

    cout << "<------------------TEST6-------------------->";
    cout<<endl;
    /// admin is looking for all drives and blocks one of them
    adminGateway.allDriversLookup(admin);
    adminGateway.unblockDriver(admin,1002);
    cout << "<------------------TEST6-------------------->";
    cout<<endl;

    cout << "<------------------TEST7-------------------->";
    cout<<endl;
    /// not logged driver is trying to look for order
    Driver notDriver("wrongLogin","password");
    driverGateway.lookForOrders(notDriver);
    cout << "<------------------TEST7-------------------->";
    cout<<endl;
    return 0;
}
