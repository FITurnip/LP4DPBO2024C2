<?php

require_once 'Car.php';
require_once 'Motorcycle.php';

class Garage {
    private $name;
    private $sizeArea;
    private $listOfCar;
    private $listOfMotorcycle;

    // Constructor
    public function __construct($name, $sizeArea) {
        $this->name = $name;
        $this->sizeArea = $sizeArea;
        $this->listOfCar = array();
        $this->listOfMotorcycle = array();
    }

    // Getters
    public function getName() {
        return $this->name;
    }

    public function getSizeArea() {
        return $this->sizeArea;
    }

    public function getCars() {
        return $this->listOfCar;
    }

    public function getMotorcycles() {
        return $this->listOfMotorcycle;
    }

    // Setters
    public function setName($name) {
        $this->name = $name;
    }

    public function setSizeArea($sizeArea) {
        $this->sizeArea = $sizeArea;
    }

    public function addCar($car) {
        $this->listOfCar[] = $car;
    }

    public function addMotorcycle($motorcycle) {
        $this->listOfMotorcycle[] = $motorcycle;
    }

    public function print() {
        echo $this->name . "<br/>";

        echo "<br/>List of number plate of car<br/>";
        foreach ($this->listOfCar as $car) {
            echo $car->getNumberPlate() . "<br/>";
        }

        echo "<br/>List of number plate of motorcycle<br/>";
        foreach ($this->listOfMotorcycle as $motorcycle) {
            echo $motorcycle->getNumberPlate() . "<br/>";
        }

        echo "<br/>";
    }
}
