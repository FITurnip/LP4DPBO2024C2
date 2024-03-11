import java.util.ArrayList;
import java.util.List;

public class Garage {
    private String name;
    private int sizeArea;
    private List<Car> listOfCar;
    private List<Motorcycle> listOfMotorcycle;

    // Constructor
    public Garage(String name, int sizeArea) {
        this.name = name;
        this.sizeArea = sizeArea;
        this.listOfCar = new ArrayList<>();
        this.listOfMotorcycle = new ArrayList<>();
    }

    // Getters
    public String getName() {
        return name;
    }

    public int getSizeArea() {
        return sizeArea;
    }

    public List<Car> getCars() {
        return listOfCar;
    }

    public List<Motorcycle> getMotorcycles() {
        return listOfMotorcycle;
    }

    // Setters
    public void setName(String name) {
        this.name = name;
    }

    public void setSizeArea(int sizeArea) {
        this.sizeArea = sizeArea;
    }

    public void addCar(Car car) {
        listOfCar.add(car);
    }

    public void addMotorcycle(Motorcycle motorcycle) {
        listOfMotorcycle.add(motorcycle);
    }

    public void print() {
        System.out.println(name);

        System.out.println("\nList of number plate of car");
        for (Car car : listOfCar) {
            System.out.println(car.getNumberPlate());
        }

        System.out.println("\nList of number plate of motorcycle");
        for (Motorcycle motorcycle : listOfMotorcycle) {
            System.out.println(motorcycle.getNumberPlate());
        }

        System.out.println();
    }
}
