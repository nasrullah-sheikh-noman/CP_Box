class Animal:
  def __init__(self, name):
    self.name = name

  def make_sound(self):
    return f'Animal making some sound.'

class Cat(Animal):
  def __init__(self, name):
    super().__init__(name)
  def make_sound(self):
    return f'Meaw Meaw'

class Dog(Animal):
  def __init__(self, name):
    super().__init__(name)
  def make_sound(self):
    return f'Ghew Ghew'

class Goat(Animal):
  def __init__(self, name):
    super().__init__(name)
  def make_sound(self):
    return f'Vhea Vhea'

don = Cat("Don")
print(don.make_sound())

tomy = Dog("Tomy")
print(tomy.make_sound())

nisu = Goat("nisu")
print(nisu.make_sound())

animals = [don, tomy, nisu]
for animal in animals:
  print(animal.make_sound())
