#include <bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;

    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }

    // Person() {
    //   cout << "Parent constructor \n";
    // }

    // ~Person() {
    //   cout << "Parent destructure \n";
    // }

};

class Student : public Person {
  public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age) {
      this->roll = roll;
    }

    // Student() {
    //   cout << "child constructor \n";
    // }

    // ~Student() {
    //   cout << "Child destructure \n";
    // }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Roll : " << roll << endl;
    }
};

class Graduate : private Student {
  public:
    string researchTopic;
    
    Graduate(string researchTopic, string name, int age, int roll) : Student(name, age, roll) {
      this->researchTopic = researchTopic;
    }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "ResearchArea : " << researchTopic << endl;
      cout << "Age : " << age << endl;
      cout << "Roll : " << roll << endl;
    }
};

int main() {
  Graduate g1("Algorithms", "Noman", 18, 623274);
  g1.getInfo();

  return 0;
}
