<?php
class Vehicle {
    private $numberPlate;
    private $brand;
    private $productionYear;
    private $color;

    // Constructor
    public function __construct($plate, $brand, $clr, $year) {
        $this->numberPlate = $plate;
        $this->brand = $brand;
        $this->productionYear = $year;
        $this->color = $clr;
    }

    // Getters
    public function getNumberPlate() {
        return $this->numberPlate;
    }

    public function getBrand() {
        return $this->brand;
    }

    public function getProductionYear() {
        return $this->productionYear;
    }

    public function getColor() {
        return $this->color;
    }

    // Setters
    public function setNumberPlate($plate) {
        $this->numberPlate = $plate;
    }

    public function setBrand($brand) {
        $this->brand = $brand;
    }

    public function setProductionYear($year) {
        $this->productionYear = $year;
    }

    public function setColor($clr) {
        $this->color = $clr;
    }
}
