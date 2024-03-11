public class Main {
    public static void main(String[] args) {
        Garage garage = new Garage("Abdul Garage", 200);
        ParkingLot parkingLot = new ParkingLot(1, 1);

        Car A = new Car("A", "A", 1990, "A", 4, 4);
        Car B = new Car("B", "B", 1991, "B", 2, 2);
        Motorcycle C = new Motorcycle("C", "C", 2000, "C", 0, 1000);
        Motorcycle D = new Motorcycle("D", "D", 2001, "D", 0, 1000);

        garage.addCar(A);
        garage.addCar(B);
        garage.addMotorcycle(C);
        garage.addMotorcycle(D);

        garage.print();

        parkingLot.startParkingTheCar(A);
        parkingLot.startParkingTheCar(B);
        parkingLot.startParkingTheMotorcycle(C);
        parkingLot.startParkingTheMotorcycle(D);

        System.out.println();
        parkingLot.print();
    }
}
