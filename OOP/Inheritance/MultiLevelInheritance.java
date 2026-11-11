class Shape {
  public void area() {
    System.out.println("Displays area.");
  }
}

class Triangle extends Shape {
  public void area(int l, int h) {
    System.out.println(.5 * l * h);
  }
}

class EquilateralTriangle extends Triangle {
  public void area(int l, int h) {
    System.out.println(l*h*.5);
  }
}
 
public class MultiLevelInheritance {
  public static void main(String args[]) {
    EquilateralTriangle t1 = new EquilateralTriangle();
    t1.area(5, 6);
  }
}
