#ifndef CAR_H
#define CAR_H

#include <string>
#include "Vehicle.hpp"

class Car : public Vehicle {
private:
    int humanCapacity, numberOfDoors;
public:
    // Constructor
    Car(const std::string &plate, const std::string &brand, int year, const std::string &clr,
        int capacity, int doors);

    // Destructor
    ~Car();

    // Getters
    int getHumanCapacity() const;
    int getNumberOfDoors() const;

    // Setters
    void setHumanCapacity(int capacity);
    void setNumberOfDoors(int doors);
};

#endif