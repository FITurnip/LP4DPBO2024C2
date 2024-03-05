#include "Vehicle.hpp"

// Constructor
Vehicle::Vehicle(const std::string &plate, const std::string &brand, const std::string &clr, int year)
    : number_plate(plate), merk(brand), production_year(year), color(clr) {
}

// Destructor
Vehicle::~Vehicle() {
}

// Getters
std::string Vehicle::getNumberPlate() const {
    return number_plate;
}

std::string Vehicle::getBrand() const {
    return merk;
}

int Vehicle::getProductionYear() const {
    return production_year;
}

std::string Vehicle::getColor() const {
    return color;
}

// Setters
void Vehicle::setNumberPlate(const std::string &plate) {
    number_plate = plate;
}

void Vehicle::setBrand(const std::string &brand) {
    merk = brand;
}

void Vehicle::setProductionYear(int year) {
    production_year = year;
}

void Vehicle::setColor(const std::string &clr) {
    color = clr;
}
