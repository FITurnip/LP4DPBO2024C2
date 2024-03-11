import java.util.ArrayList;
import java.util.List;

public class ParkingLot {
    private int motorcycleCapacity;
    private int carCapacity;
    private List<Car> listOfCar;
    private List<Motorcycle> listOfMotorcycle;

    // Constructor
    public ParkingLot(int motorcycleCapacity, int carCapacity) {
        this.motorcycleCapacity = motorcycleCapacity;
        this.carCapacity = carCapacity;
        this.listOfCar = new ArrayList<>();
        this.listOfMotorcycle = new ArrayList<>();
    }

    // Destructor
    // No destructor needed in Java due to automatic garbage collection

    // Search methods
    private int searchCarPos(String numberPlate) {
        for (int i = 0; i < listOfCar.size(); i++) {
            if (listOfCar.get(i).getNumberPlate().equals(numberPlate)) {
                return i;
            }
        }
        return -1;
    }

    private int searchMotorcyclePos(String numberPlate) {
        for (int i = 0; i < listOfMotorcycle.size(); i++) {
            if (listOfMotorcycle.get(i).getNumberPlate().equals(numberPlate)) {
                return i;
            }
        }
        return -1;
    }

    // Getters
    public int getMotorcycleCapacity() {
        return motorcycleCapacity;
    }

    public int getCarCapacity() {
        return carCapacity;
    }

    public List<Car> getCars() {
        return listOfCar;
    }

    public List<Motorcycle> getMotorcycles() {
        return listOfMotorcycle;
    }

    // Setters
    public void setMotorcycleCapacity(int capacity) {
        motorcycleCapacity = capacity;
    }

    public void setCarCapacity(int capacity) {
        carCapacity = capacity;
    }

    // Parking methods
    public void addCar(Car car) {
        if (listOfCar.size() < carCapacity) {
            listOfCar.add(car);
        } else {
            System.out.println("There is no parking lot for " + car.getNumberPlate());
        }
    }

    public void addMotorcycle(Motorcycle motorcycle) {
        if (listOfMotorcycle.size() < motorcycleCapacity) {
            listOfMotorcycle.add(motorcycle);
        } else {
            System.out.println("There is no parking lot for " + motorcycle.getNumberPlate());
        }
    }

    public void startParkingTheCar(Car car) {
        addCar(car);
    }

    public void startParkingTheMotorcycle(Motorcycle motorcycle) {
        addMotorcycle(motorcycle);
    }

    public void finishParkingTheCar(Car car) {
        int pos = searchCarPos(car.getNumberPlate());
        if (pos != -1) {
            listOfCar.remove(pos);
        } else {
            System.out.println("Number plate doesn't match");
        }
    }

    public void finishParkingTheMotorcycle(Motorcycle motorcycle) {
        int pos = searchMotorcyclePos(motorcycle.getNumberPlate());
        if (pos != -1) {
            listOfMotorcycle.remove(pos);
        } else {
            System.out.println("Number plate doesn't match");
        }
    }

    public void print() {
        System.out.println("Parking Lot");

        System.out.println("\nList of number plates of cars");
        for (Car car : listOfCar) {
            System.out.println(car.getNumberPlate());
        }

        System.out.println("\nList of number plates of motorcycles");
        for (Motorcycle motorcycle : listOfMotorcycle) {
            System.out.println(motorcycle.getNumberPlate());
        }

        System.out.println();
    }
}
