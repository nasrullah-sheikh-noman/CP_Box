abstract class Animal {
  abstract void walk();
}

class Horse extends Animal {
  @Override 
  public void walk() {
    System.out.println("Horse walking.");
  }
}

class Cows extends Animal {
  @Override 
  public void walk() {
    System.out.println("Cows walking.");
  }
}

public class Abstraction {
  public static void main(String args[]) {
    Cows c1 = new Cows();
    c1.walk();
    Horse h1 = new Horse();
    h1.walk();
  }
}
