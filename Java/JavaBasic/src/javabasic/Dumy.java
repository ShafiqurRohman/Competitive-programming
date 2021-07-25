
package javabasic;

/**
 *
 * @author SHAFIQ
 */
public class Dumy {

    public int a;
    public float b;
    public Dumy(){}
    public Dumy(Dumy obj){
        this.a = obj.a;
        this.b = obj.b;
    }
    public void show(){
        System.out.println("a : "+a);
        System.out.println("b : "+b);
    }
}
