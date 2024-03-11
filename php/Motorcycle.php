<?php

require_once "Vehicle.php";

class Motorcycle extends Vehicle {
    private $type;
    private $tankCapacity;

    // Constructor
    public function __construct($plate, $brand, $year, $clr, $type, $tankCapacity) {
        parent::__construct($plate, $brand, $clr, $year);
        $this->type = $type;
        $this->tankCapacity = $tankCapacity;
    }

    // Getters
    public function getType() {
        return $this->type;
    }

    public function getTankCapacity() {
        return $this->tankCapacity;
    }

    // Setters
    public function setType($type) {
        $this->type = $type;
    }

    public function setTankCapacity($capacity) {
        $this->tankCapacity = $capacity;
    }
}
