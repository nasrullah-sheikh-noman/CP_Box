#include <bits/stdc++.h>
using namespace std;

class Teacher {
  private:
    double salary;

  public:
    //  Properties / Attributes
    string name;
    string dept;
    string subject;

    //  Parameterized
    Teacher(string name, string dept, string subject, double salary) {
      this->name = name;
      this->dept = dept;
      this->subject = subject;
      this->salary = salary;
    }

    //  Copy Constructor
    Teacher(Teacher &obj) {
      cout << "Custom copy constructor" << endl;
      this->name = obj.name;
      this->dept = obj.dept;
      this->subject = obj.subject;
      this->salary = obj.salary;
    }

    //  Non-parameterized
    // Teacher() {
    //   dept = "Computer Science";
    // }
  
    //  Methods / Number of functions
    void changeDept(string newDept) {
      dept = newDept;
    }
    //  setter
    void setSalary(double newSalary) {
      salary = newSalary;
    }
    //  getter
    double getSalary() {
      return salary;
    }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Dept. : " << dept << endl;
      cout << "Subject : " << subject << endl;
      cout << "Salary : " << salary << endl;
    }
};

class Student {
  public:
    string name;
    int roll;
    int age;
    double *cgpaptr;

    //  Constructor
    Student(string name, int roll, int age, double cgpa) {
      this->age = age;
      this->name = name;
      this->roll = roll;
      cgpaptr = new double;
      *cgpaptr = cgpa;
      cout << "Constructor\n";
    }

    //  Destrcutor
    ~Student() {
      cout << *cgpaptr << endl;
      cout << "Destructor\n";
      delete cgpaptr;
    }

    // Student (Student &obj) {
    //   this->age = obj.age;
    //   this->roll = obj.roll;
    //   this->name = obj.name;
    //   cgpaptr = new double;
    //   *cgpaptr = *obj.cgpaptr;
    // }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Roll : " << roll << endl;
      cout << "Age : " << age << endl;
      cout << "CGPA : " << *cgpaptr << endl;
    }
};

int main () {
  Student s1("Noman", 32, 18, 3.45);
  s1.getInfo();

  // Student s1("Noman", 32, 18, 3.45);
  // s1.getInfo();
  // Student s2(s1);
  // *s2.cgpaptr = 3.89;
  // s2.name = "joya";
  // s1.getInfo();
  // s2.getInfo();

  // Teacher t1("Noman", "CSE", "C++", 120000);
  // Teacher t2(t1);
  // t2.getInfo();

  // t1.getInfo();

  // cout << t1.name << endl;
  // cout << t1.dept << endl;
  // cout << t1.subject << endl;

  // Teacher t2;
  // t1.name = "noman";
  // cout << t1.dept << endl;
  // t1.changeDept("CSE");
  // t1.setSalary(120000);
  // cout << t1.getSalary() << endl;

  //  35 minit

  return 0;
}
