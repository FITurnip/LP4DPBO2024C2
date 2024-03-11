from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plate, brand, year, clr, type, tankCapacity):
        super().__init__(plate, brand, clr, year)
        self._type = type
        self._tankCapacity = tankCapacity

    # Getters
    def getType(self):
        return self._type

    def getTankCapacity(self):
        return self._tankCapacity

    # Setters
    def setType(self, type):
        self._type = type

    def setTankCapacity(self, capacity):
        self._tankCapacity = capacity
