#include <bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;
    

    //  Operator overloading
    // int x = 10;
    // int y = 30;
    // Person() {
    //   x = y;
    //   cout << "Y : " << y << endl;
    //   cout << "X : " << x << endl;
    // }

    // function overloading

    // void show(int x) {
    //   cout << "int : " << x << endl;
    // }
    // void show(char ch) {
    //   cout << "char : " << ch << endl;
    // }

    //  Compile time Polymorphism (Constructor Overloading)
    // Person() {
    //   cout << "Non_parametarized\n";
    // }

    // Person(int x) {
    //   cout << "Parametarized\n";
    // }
};

class parent {
  public:
    void getInfo() {
      cout << "Parent class\n";
    }
    virtual void show() {
      cout << "Parent virtural\n";
    }
};

class child: public parent {
  public:
    // void getInfo() {
    //   cout << "child class\n";
    // }
    void show() {
      cout << "Child virtural\n";
    }
};

int main() {
  // Person p1(9);
  // parent p;
  // p.getInfo();

  child p1;
  p1.show();
  p1.getInfo();

  return 0;
}
