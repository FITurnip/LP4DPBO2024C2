#ifndef GARAGE_H
#define GARAGE_H

#include <string>
#include <vector>
#include "Car.hpp"
#include "Motorcycle.hpp"

class Garage {
private:
    std::string name;
    int sizeArea;
    std::vector<Car> listOfCar;
    std::vector<Motorcycle> listOfMotorcycle;

public:
    // Constructor
    Garage(const std::string &name, int sizeArea);

    // Destructor
    ~Garage();

    // Getters
    std::string getName() const;
    int getSizeArea() const;
    std::vector<Car>& getCars();
    std::vector<Motorcycle>& getMotorcycles();

    // Setters
    void setName(const std::string &name);
    void setSizeArea(int sizeArea);
    void addCar(const Car &car);
    void addMotorcycle(const Motorcycle &motorcycle);

    void print();
};

#endif