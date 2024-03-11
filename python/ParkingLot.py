class ParkingLot:
    def __init__(self, motorcycleCapacity, carCapacity):
        self._motorcycleCapacity = motorcycleCapacity
        self._carCapacity = carCapacity
        self._listOfCar = []
        self._listOfMotorcycle = []

    # Search methods
    def searchCarPos(self, numberPlate):
        for i, car in enumerate(self._listOfCar):
            if car.getNumberPlate() == numberPlate:
                return i
        return -1

    def searchMotorcyclePos(self, numberPlate):
        for i, motorcycle in enumerate(self._listOfMotorcycle):
            if motorcycle.getNumberPlate() == numberPlate:
                return i
        return -1

    # Getters
    def getMotorcycleCapacity(self):
        return self._motorcycleCapacity

    def getCarCapacity(self):
        return self._carCapacity

    def getCars(self):
        return self._listOfCar

    def getMotorcycles(self):
        return self._listOfMotorcycle

    # Setters
    def setMotorcycleCapacity(self, capacity):
        self._motorcycleCapacity = capacity

    def setCarCapacity(self, capacity):
        self._carCapacity = capacity

    # Parking methods
    def addCar(self, car):
        if len(self._listOfCar) < self._carCapacity:
            self._listOfCar.append(car)
        else:
            print("There is no parking lot for", car.getNumberPlate())

    def addMotorcycle(self, motorcycle):
        if len(self._listOfMotorcycle) < self._motorcycleCapacity:
            self._listOfMotorcycle.append(motorcycle)
        else:
            print("There is no parking lot for", motorcycle.getNumberPlate())

    def startParkingTheCar(self, car):
        self.addCar(car)

    def startParkingTheMotorcycle(self, motorcycle):
        self.addMotorcycle(motorcycle)

    def finishParkingTheCar(self, car):
        pos = self.searchCarPos(car.getNumberPlate())
        if pos != -1:
            del self._listOfCar[pos]
        else:
            print("Number plate doesn't match")

    def finishParkingTheMotorcycle(self, motorcycle):
        pos = self.searchMotorcyclePos(motorcycle.getNumberPlate())
        if pos != -1:
            del self._listOfMotorcycle[pos]
        else:
            print("Number plate doesn't match")

    def print(self):
        print("Parking Lot")

        print("\nList of number plates of cars")
        for car in self._listOfCar:
            print(car.getNumberPlate())

        print("\nList of number plates of motorcycles")
        for motorcycle in self._listOfMotorcycle:
            print(motorcycle.getNumberPlate())

        print()
