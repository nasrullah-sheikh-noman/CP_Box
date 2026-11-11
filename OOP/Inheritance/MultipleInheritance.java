interface Swimmer {
  public void swim();
}

interface Flyer {
  public void fly();
}

class Duck implements Swimmer, Flyer {
  public void swim() {
    System.out.println("Duck is swimming.");
  }

  public void fly() {
    System.out.println("Duck is flying.");
  }
}

public class MultipleInheritance {
  public static void main(String args[]) {
    Duck d1 = new Duck();
    d1.swim();
    d1.fly();
  }
}
