abstract class Animal {
  abstract void walk();

  Animal() {
    System.out.println("You are creating a new animal.");
  }

  public void eat() {
    System.out.println("Animal eating.");
  }
}

class Horse extends Animal {
  Horse() {
    System.out.println("Created a house");
  }
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
