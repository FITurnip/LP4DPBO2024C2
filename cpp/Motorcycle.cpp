#include "Motorcycle.hpp"

// Constructor
Motorcycle::Motorcycle(const std::string &plate, const std::string &brand, int year,
                       const std::string &clr, int type, int tankCapacity)
    : Vehicle(plate, brand, clr, year), type(type), tankCapacity(tankCapacity) {
}

// Destructor
Motorcycle::~Motorcycle() {
}

// Getters
int Motorcycle::getType() const {
    return type;
}

int Motorcycle::getTankCapacity() const {
    return tankCapacity;
}

// Setters
void Motorcycle::setType(int type) {
    this->type = type;
}

void Motorcycle::setTankCapacity(int capacity) {
    tankCapacity = capacity;
}
