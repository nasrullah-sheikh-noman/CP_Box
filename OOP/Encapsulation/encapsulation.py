class Bank:
  def __init__(self, holder_name, initial_deposit):
    if initial_deposit < 0:
      raise ValueError("Initial deposit can\'t be negative")
    self.holder_name = holder_name  # Public
    self._branch = "Banani, 1200"  # Protected
    self.__balance = initial_deposit  # Private

  def get_balanced(self):
    return self.__balance

  def deposit(self, ammount):
    if ammount < 0:
      raise ValueError("Deposit must be positive")
    
    self.__balance += ammount

  def withdraw(self, ammount):
    if ammount <= 0:
      raise ValueError("Withdraw must be positive")
    
    if ammount > self.__balance:
      raise ValueError("Insufficient balance")
    
    self.__balance -= ammount
    return f'Now, your balance is {self.__balance}'
   


rafsan = Bank("Rafsan", 10000)
# rafsan._Bank__balance = 0
# print(rafsan._Bank__balance)
rafsan.deposit(30000)
print(rafsan._branch)
print(rafsan.holder_name)
print(rafsan.get_balanced())
print(rafsan.withdraw(20000))
# print(dir(rafsan))
