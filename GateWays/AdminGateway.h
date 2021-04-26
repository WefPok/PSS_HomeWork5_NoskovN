//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_ADMINGATEWAY_H
#define PSS_HOMEWORK5_NOSKOVN_ADMINGATEWAY_H

#include "../System.h"

class AdminGateway {
private:
    System back;
public:
    AdminGateway(System backEnd);

    void blockPassenger(Admin admin, int passengersId);

    void unblockPassenger(Admin admin, int passengersId);

    void blockDriver(Admin admin, int driverId);

    void unblockDriver(Admin admin, int driverId);

    void validateCar(Admin admin, int numerInList);

    void lookForCarsInQueue(Admin admin);

    void allPassengerLookup(Admin admin);

    void lookForAllActiveOrders(Admin admin);

    void allDriversLookup(Admin admin);
};


#endif //PSS_HOMEWORK5_NOSKOVN_ADMINGATEWAY_H
