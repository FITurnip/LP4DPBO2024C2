#include "ParkingLot.hpp"
#include <iostream>
#include <algorithm>

// Constructor
ParkingLot::ParkingLot(int motorcycleCapacity, int carCapacity)
    : motorcycleCapacity(motorcycleCapacity), carCapacity(carCapacity) {
}

// Destructor
ParkingLot::~ParkingLot() {
    // Destructor content, if needed
}

int ParkingLot::searchCarPos(std::string numberPlate) {
    bool found = false;
    int itr = 0, size = listOfCar.size();
    while(itr < size || !found) {
        if(listOfCar[itr].getNumberPlate() != numberPlate) {
            itr++;
        } else {
            found = true;
        }
    }

    return itr;
}

int ParkingLot::searchMotorcyclePos(std::string numberPlate) {
    bool found = false;
    int itr = 0, size = listOfMotorcycle.size();
    while(itr < size || !found) {
        if(listOfMotorcycle[itr].getNumberPlate() != numberPlate) {
            itr++;
        } else {
            found = true;
        }
    }

    return itr;
}

// Getters
int ParkingLot::getMotorcycleCapacity() const {
    return motorcycleCapacity;
}

int ParkingLot::getCarCapacity() const {
    return carCapacity;
}

std::vector<Car>& ParkingLot::getCars() {
    return listOfCar;
}

std::vector<Motorcycle>& ParkingLot::getMotorcycles() {
    return listOfMotorcycle;
}

// Setters
void ParkingLot::setMotorcycleCapacity(int capacity) {
    motorcycleCapacity = capacity;
}

void ParkingLot::setCarCapacity(int capacity) {
    carCapacity = capacity;
}

void ParkingLot::addCar(const Car &car) {
    if(listOfCar.size() < carCapacity) listOfCar.push_back(car);
    else std::cout << "There is not parking lot for" << car.getNumberPlate() << "\n";
}

void ParkingLot::addMotorcycle(const Motorcycle &motorcycle) {
    if(listOfMotorcycle.size() < motorcycleCapacity) listOfMotorcycle.push_back(motorcycle);
    else std::cout << "There is not parking lot for " << motorcycle.getNumberPlate() << "\n";
}

void ParkingLot::startParkingTheCar(const Car &car) {
    addCar(car);
}

void ParkingLot::startParkingTheMotorcycle(const Motorcycle &motorcycle) {
    addMotorcycle(motorcycle);
}

void ParkingLot::finishParkingTheCar(const Car &car) {
    int pos = searchCarPos(car.getNumberPlate());
    if(pos < listOfCar.size()) {
        std::vector<Car>::iterator locationOfCar = listOfCar.begin() + pos;
        listOfCar.erase(locationOfCar);
    } else {
        std::cout << "Number of plate doesn't match\n";
    }
}

void ParkingLot::finishParkingTheMotorcycle(const Motorcycle &motorcycle) {
    int pos = searchMotorcyclePos(motorcycle.getNumberPlate());
    if(pos < listOfMotorcycle.size()) {
        std::vector<Motorcycle>::iterator locationOfMotorcycle = listOfMotorcycle.begin() + pos;
        listOfMotorcycle.erase(locationOfMotorcycle);
    } else {
        std::cout << "Number of plate doesn't match\n";
    }
}

void ParkingLot::print() {
    std::cout << "Parking Lot" << std::endl;

    std::cout << "\nList of number plate of car\n";
    for(Car car: listOfCar) {
        std::cout << car.getNumberPlate() << std::endl;
    }

    std::cout << "\nList of number plate of motorcyle\n";
    for(Motorcycle motorcycle: listOfMotorcycle) {
        std::cout << motorcycle.getNumberPlate() << std::endl;
    }

    std::cout << std::endl;
}