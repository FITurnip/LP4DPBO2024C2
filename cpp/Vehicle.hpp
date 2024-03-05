#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string number_plate, merk, color;
    int production_year;

public:
    // Constructor
    Vehicle(const std::string &plate, const std::string &brand, const std::string &clr, int year);
    
    // Destructor
    ~Vehicle();
    
    // Getters
    std::string getNumberPlate() const;
    std::string getBrand() const;
    std::string getColor() const;
    int getProductionYear() const;
    
    // Setters
    void setNumberPlate(const std::string &plate);
    void setBrand(const std::string &brand);
    void setColor(const std::string &clr);
    void setProductionYear(int year);
};

#endif