
package Interface;
class MyClass{  
    interface MyInterfaceB{  
        void myMethod();  
    }
}  

interface First{

void Firstmethod();
}
interface Second{
void Secondmethod();
}
interface Third{
void Thirdmethod();
}
public class NewClass implements First,Second,Third,MyClass.MyInterfaceB
   
    
{
public void Firstmethod()
{
    System.out.println("this is my first interface method");
}
public void Secondmethod()
{
    System.out.println("this is my second interface method");
}
public void Thirdmethod()
{
    System.out.println("this is my third interface method");
}
 public void myMethod(){
         System.out.println("Nested interface method");
     }  
    
}