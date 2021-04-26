//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_PASSENGERGATEWAY_H
#define PSS_HOMEWORK5_NOSKOVN_PASSENGERGATEWAY_H

#include "../System.h"

class PassengerGateway {
private:
    System back;

public:
    PassengerGateway(System backEnd);
    bool LogIn(Passenger passenger);
    void orderHistory(Passenger passenger);

    void createOrder(Passenger passenger, string from, string to, int carType);

    void acceptRide(Passenger passenger, bool accept);

    void getCoordinates(Passenger passenger);

    void lookForPayment(Passenger passenger);

    void addPayment(Passenger passenger, string payment);

    void addPinnedAddress(Passenger passenger, string address);

    void lookForPinnedAddress(Passenger passenger);
};


#endif //PSS_HOMEWORK5_NOSKOVN_PASSENGERGATEWAY_H
