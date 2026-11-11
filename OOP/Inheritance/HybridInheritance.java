class Shape {
  public void display() {
    System.out.println("This is shape.");
  }
}

class Rectangle extends Shape {
  public void area(int l, int w) {
    System.out.println("Area : " + l * w);
  }
}

interface Colored {
  public void showColor(String color);
}

class ColoredRactangle extends Rectangle implements Colored {
  public void showColor(String color) {
    System.out.println("Color : "+ color);
  }
}

public class HybridInheritance {
  public static void main(String args[]) {
    ColoredRactangle cr1 = new ColoredRactangle();
    cr1.showColor("Pink");  // Colored interface method
    cr1.area(6, 9);  // Rectangle class method
    cr1.display();  // Shape class method
  }
}
