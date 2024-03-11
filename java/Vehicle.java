public class Vehicle {
    private String numberPlate;
    private String brand;
    private int productionYear;
    private String color;

    // Constructor
    public Vehicle(String plate, String brand, String clr, int year) {
        this.numberPlate = plate;
        this.brand = brand;
        this.productionYear = year;
        this.color = clr;
    }

    // Getters
    public String getNumberPlate() {
        return numberPlate;
    }

    public String getBrand() {
        return brand;
    }

    public int getProductionYear() {
        return productionYear;
    }

    public String getColor() {
        return color;
    }

    // Setters
    public void setNumberPlate(String plate) {
        this.numberPlate = plate;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setProductionYear(int year) {
        this.productionYear = year;
    }

    public void setColor(String clr) {
        this.color = clr;
    }
}
