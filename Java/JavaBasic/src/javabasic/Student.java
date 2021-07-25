
package javabasic;

/*
 @author SHAFIQ
 */
public class Student extends Person{ 
    int id; 
    int section;
    Course Bangla = new Course();
    Course OOP = new Course();
    
    public Student(){}
    
    public Student(String name, int id, int section, int age, String nationality){
        this.name = name;
        this.id = id;
        this.section = section;
        this.age = age;
        this.nationality = nationality;
    }

    public void showInfo(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("ID : "+id);
        System.out.println("Section : "+section);
        System.out.println("Nationality : "+nationality);
        System.out.println();
    }
}
