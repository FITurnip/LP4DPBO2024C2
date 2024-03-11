<?php
require_once 'Garage.php';
require_once 'ParkingLot.php';
require_once 'Car.php';
require_once 'Motorcycle.php';

$garage = new Garage("Abdul Garage", 200);
$parkingLot = new ParkingLot(1, 1);

$A = new Car("A", "A", 1990, "A", 4, 4);
$B = new Car("B", "B", 1991, "B", 2, 2);
$C = new Motorcycle("C", "C", 2000, "C", 0, 1000);
$D = new Motorcycle("D", "D", 2001, "D", 0, 1000);

$garage->addCar($A);
$garage->addCar($B);
$garage->addMotorcycle($C);
$garage->addMotorcycle($D);

$garage->print();

$parkingLot->startParkingTheCar($A);
$parkingLot->startParkingTheCar($B);
$parkingLot->startParkingTheMotorcycle($C);
$parkingLot->startParkingTheMotorcycle($D);

echo "\n";
$parkingLot->print();
