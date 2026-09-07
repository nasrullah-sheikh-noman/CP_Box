#include <bits/stdc++.h>
using namespace std;

class shape {
  public:
    virtual void draw() = 0;
};

class circle: public shape {
  public:
    void draw() {
      cout << "Deawing a circle\n";
    }
};

class square: public shape {
  public:
    void draw() {
      cout << "Deawig a square\n";
    }
};

// static function
// void fnc() {
//   static int x = 0;
//   cout << "x -> " << x << "\n";
//   x+=2;
// }

// static class
// class A {
//   public:
//     int x;
//     void incx() {
//       cout << "x -> " << x << "\n";
//       x++;
//     }
// };

// static object
class ABC {
  public:
    ABC() {
      cout << "Constructor\n";
    }
    ~ABC() {
      cout << "Destructor\n";
    }
};

int main() {
  // circle c;
  // c.draw();
  // square s;
  // s.draw();

  // static
  // fnc();
  // fnc();
  // fnc();

  // A obj, obj2;
  // obj.x = 20;
  // obj.incx();
  // obj.incx();
  // obj.incx();
  // obj2.x = 10;
  // obj2.incx();
  // obj2.incx();
  // obj2.incx();

  if(true) static ABC a;
  cout << "Main function end\n";

  return 0;
}
