# abc = Abstract Based Class
from abc import ABC, abstractmethod

class AnimalInterface(ABC):
    @abstractmethod
    def eat(self):
        pass

    @abstractmethod
    def move(self):
        pass


class Monkey(AnimalInterface):
    def __init__(self, name):
        self.category = "Monkey"
        self.name = name

    def eat(self):
        return f"{self.name} is eating.........."

    def move(self):
        return f"{self.name} is moving..........."


tom = Monkey("Tomy")

print(tom.eat())
print(tom.move())
