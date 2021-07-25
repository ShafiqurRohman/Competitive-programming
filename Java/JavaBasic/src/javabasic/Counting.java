
package javabasic;

/**
 * @author SHAFIQ
 */
public class Counting{
    static int count = 0;
    Counting(){
        count++;
        System.out.println("Counter : "+count);
    }
    public static void main(String[] args) {
        Counting a = new Counting();
        Counting b = new Counting();
    }
}
