package javabasic;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/*
  @author Shafiqur Rohman
 */
public class Myclass {
    
    public static void main(String[] args) {
        
//        Student rafi = new Student("Rafi", 30, 2, 21, "Bangladeshi");
//        rafi.showInfo();
        
//        Car MyCar = new Car("BMW", "328i", 300000000, 2019);
//        MyCar.CarInfo();
//        
//        Dumy obj = new Dumy();
//        obj.a = 5;
//        obj.b = 5.6f;
//        obj.show();
//        Dumy obj2 = new Dumy(obj);
//        obj2.show();

//         Student shafiq = new Student();
//         
//         shafiq.Bangla.couresCredit = 1.5;
//         shafiq.Bangla.courseName = "Bangla";
//    int n = 10;
//    while(n>0){
//        n--;
//        System.out.println("shafiq");
//    }
    Scanner input = new Scanner(System.in);
    Map<String, Float> map = new HashMap<String, Float>(){
      {
          put("A+", (float)4.00);
          put("A", (float)3.75);
          put("A-", (float)3.50);
          put("B+", (float)3.25);
          put("B", (float)3.00);
          put("B-", (float)2.75);
          put("C+", (float)2.50);
          put("C", (float)2.25);
          put("D", (float)2.00);
          put("F", (float)0.00);
      }
    };
    String re = input.nextLine();
    
        System.out.println(map.get(re));
    
    
    
    }
}
