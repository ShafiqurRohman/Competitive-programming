
package Final_KeyWord;

/*
 * @author SHAFIQ
 */
public class University {
    final String name = "UITS";
    final int fee ;//blank final variable
    University(){
        fee = 40000;//final variable initialize kora jodi na thake constructor dia kora lage
    }
   // static final int students = 100;//eivabe intialize kora jai
    static final int students ;
    static{
        students = 1000;//eibaveo intialize kora jay
    }
    final public void display(){
        System.out.println(name);
        System.out.println(fee);
        System.out.println(students);
    }
}
