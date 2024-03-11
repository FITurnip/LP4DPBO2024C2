public class Motorcycle extends Vehicle {
    private int type;
    private int tankCapacity;

    // Constructor
    public Motorcycle(String plate, String brand, int year, String clr, int type, int tankCapacity) {
        super(plate, brand, clr, year);
        this.type = type;
        this.tankCapacity = tankCapacity;
    }

    // Getters
    public int getType() {
        return type;
    }

    public int getTankCapacity() {
        return tankCapacity;
    }

    // Setters
    public void setType(int type) {
        this.type = type;
    }

    public void setTankCapacity(int capacity) {
        this.tankCapacity = capacity;
    }
}
