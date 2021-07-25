
package ResultSheet;

import java.util.Scanner;

/*
 *@author SHAFIQ
 */
public class Main {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);  
        Subject course = new Subject();
        course.showCourseName();
        System.out.println("Your Can take 3 To 5 Courses From The List :");
        System.out.println("How Many Courses Do You Choice From List");
        int n = input.nextInt();
        if(n == 3){
            System.out.println("Enter Your 3 Subjects Serial Number and Earn Grade On that Course:");
            int a, b, c;
            String s1, s2, s3;
            a = input.nextInt();
            s1 = input.nextLine();
            b = input.nextInt();
            s2 = input.nextLine();
            c = input.nextInt();
            s3 = input.nextLine();
            Subject mouChoice = new Subject(a,s1,b,s2,c,s3);
            mouChoice.showSubject3();
            mouChoice.showResult3();
            
        }
        else if(n == 4){
            System.out.println("Enter Your 4 Subjects Serial Number and Earn Grade On that Course:");
            int a, b, c, d;
            String s1, s2, s3, s4;
            a = input.nextInt();
            s1 = input.nextLine();
            b = input.nextInt();
            s2 = input.nextLine();
            c = input.nextInt();
            s3 = input.nextLine();
            d = input.nextInt();
            s4 = input.nextLine();
            Subject mouChoice = new Subject(a, b,c, d);
            mouChoice.read(s1, s2, s3, s4);
            mouChoice.showSubject4();
            mouChoice.showResult4();
        }
        else{
            System.out.println("Enter Your 5 Subjects Serial Number and Earn Grade On that Course:");
            int a, b, c, d, e;
            String s1, s2, s3, s4, s5;
            a = input.nextInt();
            s1 = input.nextLine();
            b = input.nextInt();
            s2 = input.nextLine();
            c = input.nextInt();
            s3 = input.nextLine();
            d = input.nextInt();
            s4 = input.nextLine();
            e = input.nextInt();
            s5 = input.nextLine();
            Subject mouChoice = new Subject(a, b,c, d, e);
            mouChoice.read(s1, s2, s3, s4, s5);
            mouChoice.showSubject5();
            mouChoice.showResult5();
        }
    }
}