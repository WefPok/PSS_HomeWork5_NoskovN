//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_CAR_H
#define PSS_HOMEWORK5_NOSKOVN_CAR_H



#include <string>
#include <utility>
#include <iostream>
#include "Order.h"

using namespace std;

class Car {
public:
//    static int carType;

    Car(Car *pCar);

    Car(string model, string number, int color, int carType);
    Car();

    string getModel() const { return model; }
    string getCarType() const {
        switch (carType) {
            case 1: return "Economy";
            case 2: return "Comfort";
            case 3: return "Comfort Plus";
            case 4: return "Business";
        }
    }
    string getNumber() const { return number; }
    string getColor() const {
        switch (color) {
            case 1: return "Yellow";
            case 2: return "Black";
            case 3: return "White";
            case 4: return "Gray";
            case 5: return "Red";
            case 6: return "Pink";
        }
    }

    int carType;
    string model;
    string number;
    int color;
};


#endif //PSS_HOMEWORK5_NOSKOVN_CAR_H
