class BankAccount {
  private String accountHolder;
  private double balance;

  BankAccount (String accountHolder, double balance) {
    this.accountHolder = accountHolder;
    if (balance >= 0) {
      this.balance = balance;
    }
  }

  public String getAccountHolder() {
    return this.accountHolder;
  }
  
  public double getBalance() {
    return this.balance;
  }

  public void deposit(double ammount) {
    if (ammount > 0) {
      this.balance += ammount;
      System.out.println("Sucessfully deposited $" + ammount);
    } else {
      System.out.println("Invalid deposit amount!");
    }
  }
}

public class Encapsulation {
  public static void main(String args[]) {
    BankAccount user1 = new BankAccount("123", 10000.00);
    System.out.println(user1.getAccountHolder());
    System.out.println(user1.getBalance());
    user1.deposit(2000);
    System.out.println(user1.getBalance());
    user1.deposit(-200);
    System.out.println(user1.getBalance());
  }
}
