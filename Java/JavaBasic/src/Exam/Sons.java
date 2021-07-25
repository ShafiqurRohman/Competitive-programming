
package Exam;

/*
 * @author SHAFIQ
 */
public class Sons extends Father{
    String capability;
    Sons(String name,String capability){
        this.name = name;
        this.capability = capability;
    }
    public void showInfo(){
        System.out.println("Name of the sons : "+name);
        System.out.println("Color of the sons : "+color);
        System.out.println("Capability of the sons : "+capability);
    }
}
