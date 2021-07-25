package javabasic;

/*
 @author SHAFIQ
 */
public class Car {
    String carName;
    String carModel;
    int carPrice;
    int releaseYear;
    
    //public Car(){}
    
    public Car(String carName, String carmodel, int carPrice, int releaseYear){
        this.carName = carName;
        this.carModel = carmodel;
        this.carPrice = carPrice;
        this.releaseYear = releaseYear;
    }
    
    public void CarInfo(){
       System.out.println("Car Name : "+carName);
       System.out.println("Car Model : "+carModel);
       System.out.println("Car Price : "+carPrice);
       System.out.println("Release Year : "+releaseYear);
    }
    
}
