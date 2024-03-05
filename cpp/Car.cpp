#include "Car.hpp"

// Constructor
Car::Car(const std::string &plate, const std::string &brand, int year, const std::string &clr,
        int capacity, int doors)
    : Vehicle(plate, brand, clr, year), humanCapacity(capacity), numberOfDoors(doors) {
}

// Destructor
Car::~Car() {
}

// Getters
int Car::getHumanCapacity() const {
    return humanCapacity;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// Setters
void Car::setHumanCapacity(int capacity) {
    humanCapacity = capacity;
}

void Car::setNumberOfDoors(int doors) {
    numberOfDoors = doors;
}
