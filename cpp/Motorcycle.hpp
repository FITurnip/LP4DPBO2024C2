#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <string>
#include "Vehicle.hpp"

class Motorcycle : public Vehicle {
private:
    int type;
    int tankCapacity;

public:
    // Constructor
    Motorcycle(const std::string &plate, const std::string &brand, int year, const std::string &clr,
               int type, int tankCapacity);

    // Destructor
    ~Motorcycle();

    // Getters
    int getType() const;
    int getTankCapacity() const;

    // Setters
    void setType(int type);
    void setTankCapacity(int capacity);
};

#endif
