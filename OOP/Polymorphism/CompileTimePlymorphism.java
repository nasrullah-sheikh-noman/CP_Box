class Student {
  String name;
  String age;

  //  Function Overloadin / Method Overloading
  public void studentInfo(String name) {
    System.out.println(name);
  }

  public void studentInfo(int age) {
    System.out.println(age);
  }

  public void studentInfo(String name, int age) {
    System.out.println(name);
    System.out.println(age);
  }
}

public class CompileTimePolymorphism {
    public static void main(String args[]) {
    Student s1 = new Student();
    s1.studentInfo(21);
    s1.studentInfo("Noman");
    s1.studentInfo("nasrullah", 20);
  }
}
