class Garage:
    def __init__(self, name, sizeArea):
        self._name = name
        self._sizeArea = sizeArea
        self._listOfCar = []
        self._listOfMotorcycle = []

    # Getters
    def getName(self):
        return self._name

    def getSizeArea(self):
        return self._sizeArea

    def getCars(self):
        return self._listOfCar

    def getMotorcycles(self):
        return self._listOfMotorcycle

    # Setters
    def setName(self, name):
        self._name = name

    def setSizeArea(self, sizeArea):
        self._sizeArea = sizeArea

    def addCar(self, car):
        self._listOfCar.append(car)

    def addMotorcycle(self, motorcycle):
        self._listOfMotorcycle.append(motorcycle)

    def printGarage(self):
        print(self._name)

        print("\nList of number plates of cars")
        for car in self._listOfCar:
            print(car.getNumberPlate())

        print("\nList of number plates of motorcycles")
        for motorcycle in self._listOfMotorcycle:
            print(motorcycle.getNumberPlate())

        print()
