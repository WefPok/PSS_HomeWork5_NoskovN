//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_ORDER_H
#define PSS_HOMEWORK5_NOSKOVN_ORDER_H
#include "string"
using namespace std;

class Order {
private:
public:
    int time;
    int type;
    double price;
    int PassengerID;
    int DriverID;

    string from;
    string to;
    Order(int passengerId, int driverId, string fromAddress, string toAddress, int carType, double orderPrice,
          int timeInSeconds);

    string print();
};



#endif //PSS_HOMEWORK5_NOSKOVN_ORDER_H
