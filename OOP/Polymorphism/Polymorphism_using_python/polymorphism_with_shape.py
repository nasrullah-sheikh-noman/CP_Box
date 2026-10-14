from math import pi

class Shape:
  def __init__(self, name):
    self.name = name

class Rectangle(Shape):
  def __init__(self, name, lenght, widht):
    self.length = lenght
    self.widht = widht
    super().__init__(name)
  def area(self):
    return self.length * self.widht

class Triangle(Rectangle):
  def __init__(self, name, lenght, widht):
    super().__init__(name, lenght, widht)
  def area(self):
    return 0.5 * self.length * self.widht

class Circle(Shape):
  def __init__(self, name, radius):
    self.radius = radius
    super().__init__(name)
  def area(self):
    return pi * (self.radius**2)

rec = Rectangle("Rectangle", 4, 2)
print(rec.area())

tran = Triangle("Triangle", 6, 3)
print(tran.area())

cir = Circle("Circle", 5)
print(cir.area())
