from Garage import Garage
from ParkingLot import ParkingLot
from Car import Car
from Motorcycle import Motorcycle


class Main:
    def main(self):
        garage = Garage("Abdul Garage", 200)
        parking_lot = ParkingLot(1, 1)

        A = Car("A", "A", 1990, "A", 4, 4)
        B = Car("B", "B", 1991, "B", 2, 2)
        C = Motorcycle("C", "C", 2000, "C", 0, 1000)
        D = Motorcycle("D", "D", 2001, "D", 0, 1000)

        garage.addCar(A)
        garage.addCar(B)
        garage.addMotorcycle(C)
        garage.addMotorcycle(D)

        garage.printGarage()

        parking_lot.startParkingTheCar(A)
        parking_lot.startParkingTheCar(B)
        parking_lot.startParkingTheMotorcycle(C)
        parking_lot.startParkingTheMotorcycle(D)

        print()
        parking_lot.print()


if __name__ == "__main__":
    main_obj = Main()
    main_obj.main()
