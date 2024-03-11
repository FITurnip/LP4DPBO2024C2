from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plate, brand, year, clr, capacity, doors):
        super().__init__(plate, brand, clr, year)
        self._humanCapacity = capacity
        self._numberOfDoors = doors

    # Getters
    def getHumanCapacity(self):
        return self._humanCapacity

    def getNumberOfDoors(self):
        return self._numberOfDoors

    # Setters
    def setHumanCapacity(self, capacity):
        self._humanCapacity = capacity

    def setNumberOfDoors(self, doors):
        self._numberOfDoors = doors
