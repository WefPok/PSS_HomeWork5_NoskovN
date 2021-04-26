//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_DRIVER_H
#define PSS_HOMEWORK5_NOSKOVN_DRIVER_H

#include <string>
#include <utility>
#include "../Utility/Order.h"
#include "vector"
#include "../Utility/Car.h"
class Driver {
public:
    int id;
    vector<Order> proposedOrders;
    Driver(string driverLogin, string driverPassword) {
        login=driverLogin;
        password=driverPassword;
    }

    Driver(Driver *pDriver) {

    }
    vector<Order> activeOrder;
    vector<Car> cars;
    vector<Order> orderHistory;
    int chosenCar;
    bool isBlocked;
    string getName() { return name; }

    bool getStatus() { return status; }

    void setStatus(bool status) { this->status = status; }
    string login;
    string password;
    double rating;
    string name;

    bool status =  false;
private:


};


#endif //PSS_HOMEWORK5_NOSKOVN_DRIVER_H
