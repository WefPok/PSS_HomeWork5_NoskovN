cmake_minimum_required(VERSION 3.19)
project(PSS_HomeWork5_NoskovN)

set(CMAKE_CXX_STANDARD 20)

add_executable(PSS_HomeWork5_NoskovN main.cpp GateWays/PassengerGateway.cpp GateWays/PassengerGateway.h GateWays/AdminGateway.cpp GateWays/AdminGateway.h GateWays/DriverGateway.cpp GateWays/DriverGateway.h System.cpp System.h Users/Admin.cpp Users/Admin.h Users/Driver.cpp Users/Driver.h Users/Passenger.cpp Users/Passenger.h Utility/Order.cpp Utility/Order.h Utility/Car.cpp Utility/Car.h)