#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <string>
#include <vector>
#include "Car.hpp"
#include "Motorcycle.hpp"

class ParkingLot {
private:
    int motorcycleCapacity;
    int carCapacity;
    std::vector<Car> listOfCar;
    std::vector<Motorcycle> listOfMotorcycle;

public:
    // Constructors
    ParkingLot(int motorcycleCapacity, int carCapacity);

    // Destructor
    ~ParkingLot();

    int searchCarPos(std::string numberPlate);
    int searchMotorcyclePos(std::string numberPlate);

    // Getters
    int getMotorcycleCapacity() const;
    int getCarCapacity() const;
    std::vector<Car>& getCars();
    std::vector<Motorcycle>& getMotorcycles();

    // Setters
    void setMotorcycleCapacity(int capacity);
    void setCarCapacity(int capacity);
    void addCar(const Car &car);
    void addMotorcycle(const Motorcycle &motorcycle);

    void startParkingTheCar(const Car &car);
    void startParkingTheMotorcycle(const Motorcycle &motorcycle);
    void finishParkingTheCar(const Car &car);
    void finishParkingTheMotorcycle(const Motorcycle &motorcycle);

    void print();
};

#endif