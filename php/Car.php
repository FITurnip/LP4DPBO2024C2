<?php

require_once "Vehicle.php";

class Car extends Vehicle {
    private $humanCapacity;
    private $numberOfDoors;

    // Constructor
    public function __construct($plate, $brand, $year, $clr, $capacity, $doors) {
        parent::__construct($plate, $brand, $clr, $year);
        $this->humanCapacity = $capacity;
        $this->numberOfDoors = $doors;
    }

    // Getters
    public function getHumanCapacity() {
        return $this->humanCapacity;
    }

    public function getNumberOfDoors() {
        return $this->numberOfDoors;
    }

    // Setters
    public function setHumanCapacity($capacity) {
        $this->humanCapacity = $capacity;
    }

    public function setNumberOfDoors($doors) {
        $this->numberOfDoors = $doors;
    }
}
