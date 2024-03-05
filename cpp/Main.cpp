#include <iostream>
#include "Garage.hpp"
#include "ParkingLot.hpp"

int main() {
    Garage garage("Abdul Garage", 200);
    ParkingLot parkingLot(1, 1);

    Car A("A", "A", 1990, "A", 4, 4), B("B", "B", 1991, "B", 2, 2);
    Motorcycle C("C", "C", 2000, "C", 0, 1000), D("D", "D", 2001, "D", 0, 1000);

    garage.addCar(A);
    garage.addCar(B);
    garage.addMotorcycle(C);
    garage.addMotorcycle(D);

    garage.print();

    parkingLot.startParkingTheCar(A);
    parkingLot.startParkingTheCar(B);
    parkingLot.startParkingTheMotorcycle(C);
    parkingLot.startParkingTheMotorcycle(D);

    std::cout << "\n";
    parkingLot.print();
    return 0;
}