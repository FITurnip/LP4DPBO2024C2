public class Car extends Vehicle {
    private int humanCapacity;
    private int numberOfDoors;

    // Constructor
    public Car(String plate, String brand, int year, String clr, int capacity, int doors) {
        super(plate, brand, clr, year);
        this.humanCapacity = capacity;
        this.numberOfDoors = doors;
    }

    // Getters
    public int getHumanCapacity() {
        return humanCapacity;
    }

    public int getNumberOfDoors() {
        return numberOfDoors;
    }

    // Setters
    public void setHumanCapacity(int capacity) {
        this.humanCapacity = capacity;
    }

    public void setNumberOfDoors(int doors) {
        this.numberOfDoors = doors;
    }
}
