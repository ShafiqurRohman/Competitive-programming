
package ResultSheet;

import java.util.HashMap;
import java.util.Map;

/*
 * @author SHAFIQ
 */
public class Subject{
   
   String []sub ={
   "      3      Programming fundamental 1",
   "      3      Programming fundamental 2",
   "      3      Data Sturcture           ",
   "      2      Object oriented language ",
   "      2      Calculus                 ",
   "      2      Physics                  ",
   "      2      Chemistry                "
   };
   
   Map<String, Float> map = new HashMap<String, Float>(){
      {
          put(" A+", (float)4.00);
          put(" A", (float)3.75);
          put(" A-", (float)3.50);
          put(" B+", (float)3.25);
          put(" B", (float)3.00);
          put(" B-", (float)2.75);
          put(" C+", (float)2.50);
          put(" C", (float)2.25);
          put(" D", (float)2.00);
          put(" F", (float)0.00);
      }
    };
  
   public int subject1, subject2, subject3, subject4, subject5;
   public String result1, result2, result3, result4, result5;
   
    Subject(){}
    Subject(int subject1,String r1, int subject2,String r2, int subject3, String r3){
       this.subject1 = subject1;
       this.result1 = r1;
       this.subject2 = subject2;
       this.result2 = r2;
       this.subject3 = subject3;
       this.result3 = r3;
   }
    
   Subject(int subject1, int subject2, int subject3, int subject4){
       this.subject1 = subject1;
       this.subject2 = subject2;
       this.subject3 = subject3;
       this.subject4 = subject4;
   }
   
   Subject(int subject1, int subject2, int subject3, int subject4, int subject5){
       this.subject1 = subject1;
       this.subject2 = subject2;
       this.subject3 = subject3;
       this.subject4 = subject4;
       this.subject5 = subject5;
   }
   
   public void read(String r1, String r2, String r3, String r4){
       this.result1 = r1;
       this.result2 = r2;
       this.result3 = r3;
       this.result4 = r4;
   }
   
   public void read(String r1, String r2, String r3, String r4, String r5){
       this.result1 = r1;
       this.result2 = r2;
       this.result3 = r3;
       this.result4 = r4;
       this.result5 = r5;
   }
   public void showCourseName(){
       System.out.println(" Serial   Credit  Course Title");
       System.out.println("   1."+sub[0]+"\n"+"   2."+sub[1]+"\n"+"   3."+sub[2]+"\n"+"   4."+sub[3]);
       System.out.println("   5."+sub[4]+"\n"+"   6."+sub[5]+"\n"+"   7."+sub[6]+"\n");
   }
   public void showSubject3(){
      System.out.println("Your Choices Courses & Result:");
      System.out.println("Serial   Credit   Course Title                 Grade");
      System.out.println("   1."+sub[subject1-1]+"     "+result1);
      System.out.println("   2."+sub[subject2-1]+"     "+result2);
      System.out.println("   3."+sub[subject3-1]+"     "+result3);
   }
   
   public void showSubject4(){
      System.out.println("Your Choices Courses & Result:");
      System.out.println("Serial   Credit   Course Title                 Grade");
      System.out.println("   1."+sub[subject1-1]+"     "+result1);
      System.out.println("   2."+sub[subject2-1]+"     "+result2);
      System.out.println("   3."+sub[subject3-1]+"     "+result3);
      System.out.println("   4."+sub[subject4-1]+"     "+result4);
   }
   public void showSubject5(){
      System.out.println("Your Choices Courses & Result:");
      System.out.println("Serial   Credit   Course Title                 Grade");
      System.out.println("   1."+sub[subject1-1]+"     "+result1);
      System.out.println("   2."+sub[subject2-1]+"     "+result2);
      System.out.println("   3."+sub[subject3-1]+"     "+result3);
      System.out.println("   4."+sub[subject4-1]+"     "+result4);
      System.out.println("   5."+sub[subject5-1]+"     "+result5);
   }
  
   public void showResult3(){
      float sum = (float) 0.0;
      float totalCredit = (float) 0.0;
      boolean ok = false;
      if(map.get(result1) == (float)0.0 || map.get(result2) == (float)0.0 || map.get(result1) == (float)0.0)ok = true;
      if(subject1 >3){
          sum += (float)(map.get(result1))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result1))*3;
          totalCredit += 3;
      }
      
      if(subject2 >3){
          sum += (float)(map.get(result2))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result2))*3;
          totalCredit += 3;
      }
      
      if(subject3 >3){
          sum += (float)(map.get(result3))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result3))*3;
          totalCredit += 3;
      }
      if(ok == false){
          System.out.println("Result : You Are Passed.");
      }
      else{
          System.out.println("Result : You Are Fail.");
      }
      System.out.println("Your CGPA = "+sum/totalCredit);
       
   }
     
     
    public void showResult4(){
      float sum = (float) 0.0;
      float totalCredit = (float) 0.0;
      boolean ok = false;
      if(map.get(result1) == (float)0.0 || map.get(result2) == (float)0.0 || map.get(result1) == (float)0.0)ok = true;
      if(map.get(result4) == (float)0.0)ok = true;
      if(subject1 >3){
          sum += (float)(map.get(result1))*2;
          totalCredit += 2;
      }
      else {
          sum += (float)(map.get(result1))*3;
          totalCredit += 3;
      }
      
      if(subject2 >3){
          sum += (float)(map.get(result2))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result2))*3;
          totalCredit += 3;
      }
      
      if(subject3 >3){
          sum += (float)(map.get(result3))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result3))*3;
          totalCredit += 3;
      }
      if(subject4 >3){
          sum += (float)(map.get(result4))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result4))*3;
          totalCredit += 3;
      }
      
      if(ok == false){
          System.out.println("Result : You Are Passed.");
      }
      else{
          System.out.println("Result : You Are Fail.");
      }
      System.out.println("Your CGPA = "+sum/totalCredit);
   }
    
    
   public void showResult5(){
      float sum = (float) 0.0;
      float totalCredit = (float) 0.0;
      boolean ok = false;
      if(map.get(result1) == (float)0.0 || map.get(result2) == (float)0.0 || map.get(result1) == (float)0.0)ok = true;
      if(map.get(result4) == (float)0.0 || map.get(result5) == (float)0.0)ok = true;
      if(subject1 >3){
          sum += (float)(map.get(result1))*2;
          totalCredit += 2;
      }
      else {
          sum += (float)(map.get(result1))*3;
          totalCredit += 3;
      }
      
      if(subject2 >3){
          sum += (float)(map.get(result2))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result2))*3;
          totalCredit += 3;
      }
      
      if(subject3 >3){
          sum += (float)(map.get(result3))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result3))*3;
          totalCredit += 3;
      }
      if(subject4 >3){
          sum += (float)(map.get(result4))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result4))*3;
          totalCredit += 3;
      }
      if(subject5 >3){
          sum += (float)(map.get(result5))*2;
          totalCredit += 2;
      }
      else{
          sum += (float)(map.get(result5))*3;
          totalCredit += 3;
      }
      
      if(ok == false){
          System.out.println("Result : You Are Passed.");
      }
      else{
          System.out.println("Result : You Are Fail.");
      }
      System.out.println("Your CGPA = "+sum/totalCredit);
   }
   
}
