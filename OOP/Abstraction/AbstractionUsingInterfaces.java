interface Animal {
  void walk();
}

class Tiger implements Animal {
  @Override 
  public void walk() {
    System.out.println("Tiger walking.");
  }
}

class Cows implements Animal {
  @Override 
  public void walk() {
    System.out.println("Cows walking.");
  }
}

public class AbstractionUsingInterfaces {
  public static void main(String args[]) {
    Tiger t1 = new Tiger();
    t1.walk();
    Cows c1 = new Cows();
    c1.walk();
  }
}
