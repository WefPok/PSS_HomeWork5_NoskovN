//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_DRIVERGATEWAY_H
#define PSS_HOMEWORK5_NOSKOVN_DRIVERGATEWAY_H


using namespace std;

#include "../System.h"

class DriverGateway {
private:
    System back;
public:

    explicit DriverGateway(System anEnd);

    bool logIn(Driver driver);
    void lookForOrders(Driver driver);

    void acceptOrder(Driver driver, int numberForAccept);

    void endOrder(Driver driver);

    void addCar(Driver driver, Car car);
};




#endif //PSS_HOMEWORK5_NOSKOVN_DRIVERGATEWAY_H
