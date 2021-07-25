
package SuperKeyWord;

/*
 * @author SHAFIQ
 */
public class SuperKey extends SuperKeyDemo{
     int x = 10;
    SuperKey(){
        super();
        System.out.println("shafiq");
    }
    public void displayx(){
        System.out.println(super.x);
    }
    @Override
    public void display(){
        super.display();
        System.out.println("Superdemo");
    }
}
