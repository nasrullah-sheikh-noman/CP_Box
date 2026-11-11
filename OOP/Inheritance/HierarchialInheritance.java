class Shape {
  public void area() {
    System.out.println("Displays ares.");
  }
}

class Triangle extends Shape {
  public void area(int l, int h) {
    System.out.println(.5 * l * h);
  }
}

class Circle extends Shape {
  public void area(int r) {
    System.out.println(3.14 * r * r);
  }
}

public class HierarchialInheritance {
  public static void main(String args[]) {
    Circle c1 = new Circle();
    c1.area(4);
    Triangle t1 = new Triangle();
    t1.area(4, 5);
  }
}
