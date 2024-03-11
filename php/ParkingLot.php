<?php

require_once 'Car.php';
require_once 'Motorcycle.php';
require_once "Vehicle.php";

class ParkingLot {
    private $motorcycleCapacity;
    private $carCapacity;
    private $listOfCar;
    private $listOfMotorcycle;

    // Constructor
    public function __construct($motorcycleCapacity, $carCapacity) {
        $this->motorcycleCapacity = $motorcycleCapacity;
        $this->carCapacity = $carCapacity;
        $this->listOfCar = array();
        $this->listOfMotorcycle = array();
    }

    // Getters
    public function getMotorcycleCapacity() {
        return $this->motorcycleCapacity;
    }

    public function getCarCapacity() {
        return $this->carCapacity;
    }

    public function getCars() {
        return $this->listOfCar;
    }

    public function getMotorcycles() {
        return $this->listOfMotorcycle;
    }

    // Setters
    public function setMotorcycleCapacity($capacity) {
        $this->motorcycleCapacity = $capacity;
    }

    public function setCarCapacity($capacity) {
        $this->carCapacity = $capacity;
    }

    // Parking methods
    public function addCar($car) {
        if (count($this->listOfCar) < $this->carCapacity) {
            $this->listOfCar[] = $car;
        } else {
            echo "There is no parking lot for " . $car->getNumberPlate() . "<br/>";
        }
    }

    public function addMotorcycle($motorcycle) {
        if (count($this->listOfMotorcycle) < $this->motorcycleCapacity) {
            $this->listOfMotorcycle[] = $motorcycle;
        } else {
            echo "There is no parking lot for " . $motorcycle->getNumberPlate() . "<br/>";
        }
    }

    public function startParkingTheCar($car) {
        $this->addCar($car);
    }

    public function startParkingTheMotorcycle($motorcycle) {
        $this->addMotorcycle($motorcycle);
    }

    public function finishParkingTheCar($car) {
        $pos = $this->searchCarPos($car->getNumberPlate());
        if ($pos !== -1) {
            array_splice($this->listOfCar, $pos, 1);
        } else {
            echo "Number plate doesn't match<br/>";
        }
    }

    public function finishParkingTheMotorcycle($motorcycle) {
        $pos = $this->searchMotorcyclePos($motorcycle->getNumberPlate());
        if ($pos !== -1) {
            array_splice($this->listOfMotorcycle, $pos, 1);
        } else {
            echo "Number plate doesn't match<br/>";
        }
    }

    private function searchCarPos($numberPlate) {
        foreach ($this->listOfCar as $key => $car) {
            if ($car->getNumberPlate() === $numberPlate) {
                return $key;
            }
        }
        return -1;
    }

    private function searchMotorcyclePos($numberPlate) {
        foreach ($this->listOfMotorcycle as $key => $motorcycle) {
            if ($motorcycle->getNumberPlate() === $numberPlate) {
                return $key;
            }
        }
        return -1;
    }

    public function print() {
        echo "Parking Lot<br/>";

        echo "<br/>List of number plates of cars<br/>";
        foreach ($this->listOfCar as $car) {
            echo $car->getNumberPlate() . "<br/>";
        }

        echo "<br/>List of number plates of motorcycles<br/>";
        foreach ($this->listOfMotorcycle as $motorcycle) {
            echo $motorcycle->getNumberPlate() . "<br/>";
        }

        echo "<br/>";
    }
}
