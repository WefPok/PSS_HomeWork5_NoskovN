//
// Created by nikno on 25.04.2021.
//

#include "Car.h"

Car::Car(string model, string number, int color, int carType) {
    this->model = std::move(model);
    this->number = std::move(number);
    this->color = color;
    this->carType = carType;
}

Car::Car() {}

Car::Car(Car *pCar) {

}