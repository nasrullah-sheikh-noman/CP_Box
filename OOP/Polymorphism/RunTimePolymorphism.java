class Student {
  String name;
  int age;

  public void printDetails() {
    System.out.println("I am a student.");
  }
}

class CSEStudent extends Student {

  @Override 
  public void printDetails() {
    System.out.println("I am a CSE student.");
  }
}

public class RunTimePolymorphism {
  public static void main(String args[]) {
    Student s1 = new CSEStudent();
    s1.printDetails();
  }
}
