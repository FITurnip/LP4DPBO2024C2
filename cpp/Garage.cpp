#include <iostream>
#include "Garage.hpp"

// Constructor
Garage::Garage(const std::string &name, int sizeArea)
    : name(name), sizeArea(sizeArea) {
}

// Destructor
Garage::~Garage() {
    // Destructor content, if needed
}

// Getters
std::string Garage::getName() const {
    return name;
}

int Garage::getSizeArea() const {
    return sizeArea;
}

std::vector<Car>& Garage::getCars() {
    return listOfCar;
}

std::vector<Motorcycle>& Garage::getMotorcycles() {
    return listOfMotorcycle;
}

// Setters
void Garage::setName(const std::string &name) {
    this->name = name;
}

void Garage::setSizeArea(int sizeArea) {
    this->sizeArea = sizeArea;
}

void Garage::addCar(const Car &car) {
    listOfCar.push_back(car);
}

void Garage::addMotorcycle(const Motorcycle &motorcycle) {
    listOfMotorcycle.push_back(motorcycle);
}

void Garage::print() {
    std::cout << name << std::endl;

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