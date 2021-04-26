//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_PASSENGER_H
#define PSS_HOMEWORK5_NOSKOVN_PASSENGER_H
#include <system_error>
#include "string"
#include "../Utility/Order.h"
#include "vector"
using namespace std;

class Passenger {
public:
    Passenger(string PassengerLogin, string passengerPassword) {
        login = PassengerLogin;
        password = passengerPassword;
    }
    bool isBlocked;
    int id;
    string login;
    string password;
    double rating;

    string getName() { return name; }

    string name;
    vector<string> paymentMethods;

    vector<Order> orderHistory;
    vector<string> pinnedAdresses;
    vector<Order> activeOrder;
    vector<Order> proposedOrder;
    bool propose=false;
    bool active=false;
};


#endif //PSS_HOMEWORK5_NOSKOVN_PASSENGER_H
