
package Exam;

/*
 * @author SHAFIQ
 */
public class DogOwner extends Animals{
    public String name,nid, mobileNumber;
    public DogOwner(String name, String nid, String mobileNumber){
        this.name = name;
        this.nid = nid;
        this.mobileNumber = mobileNumber;
    }
    public void showInfo(){
        System.out.println("Name of the dog owner      : "+name);
        System.out.println("NID NO of the dog owner    : "+nid);
        System.out.println("Mobile Number of dog owner : "+mobileNumber);
        System.out.println("");
    }
}
