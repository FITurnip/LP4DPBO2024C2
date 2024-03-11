class Vehicle:
    def __init__(self, plate, brand, clr, year):
        self._numberPlate = plate
        self._brand = brand
        self._productionYear = year
        self._color = clr

    # Getters
    def getNumberPlate(self):
        return self._numberPlate

    def getBrand(self):
        return self._brand

    def getProductionYear(self):
        return self._productionYear

    def getColor(self):
        return self._color

    # Setters
    def setNumberPlate(self, plate):
        self._numberPlate = plate

    def setBrand(self, brand):
        self._brand = brand

    def setProductionYear(self, year):
        self._productionYear = year

    def setColor(self, clr):
        self._color = clr
