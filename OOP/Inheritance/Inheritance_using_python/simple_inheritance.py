class Gadget:
  def __init__(self, brand, price, color):
    self.brand = brand
    self.price = price
    self.color = color

  def run(self):
    return f'Running'

class Laptop(Gadget):
  def __init__(self, brand, price, color, memory):
    self.memory = memory
    super().__init__(brand, price, color)

  def coding(self):
    return f'Learing python in: {self.brand}'

  def __repr__(self) -> str:
    return f'Laptop: {self.brand}, Price: {self.price}, Color: {self.color}, Memory: {self.memory}GB'


my_laptop = Laptop("Apple", 1000000, "Pink", 1024)
print(my_laptop)
