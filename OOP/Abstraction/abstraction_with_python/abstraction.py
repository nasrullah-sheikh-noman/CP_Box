# abc = Abstract Based Class
from abc import abstractmethod, ABC

class Animal(ABC):
  @abstractmethod  # Enforce all derived class to have a eat method
  def eat(self):
    return f'Eating.........'
  @abstractmethod  # Enforce all derived class to hava a move method
  def move(self):
    return f'Moving...........'

class Monkey(Animal):
  def __init__(self, name):
    self.category = "Monkey"
    self.name = name
    super().__init__()
  def eat(self):
    return f'Monkey eating..........'
  def move(self):
    return f'Monkey moving...........'

tom = Monkey("Tomy")
print(tom.eat())
print(tom.move())
