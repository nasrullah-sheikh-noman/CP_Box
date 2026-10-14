from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass

    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name):
        self.category = "Monkey"
        self.name = name

    def eat(self):
        return "Monkey eating.........."

    def move(self):
        return "Monkey moving..........."


tom = Monkey("Tomy")

print(tom.eat())
print(tom.move())
