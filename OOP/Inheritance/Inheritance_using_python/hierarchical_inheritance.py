class Vehicle:
  def __init__(self, name, price) -> str:
    self.name = name
    self.price = price

  def move(self):
    pass

  def __repr__(self):
    return f'Name: {self.name}, Price: {self.price}'


class Bus(Vehicle):
  def __init__(self, name, price, seat):
    self.seat = seat
    super().__init__(name, price)

  def __repr__(self):
    return super().__repr__() + f', Seat: {self.seat}'

class Truck(Vehicle):
  def __init__(self, name, price, weight):
    self.weight = weight
    super().__init__(name, price)
  def __repr__(self):
    return super().__repr__() + f', Weight: {self.weight}KG'


greenLineBus = Bus("Green Bus", 2000000, 40)
print(greenLineBus)

lightTruck = Truck("Light Truck", 800000, 500)
print(lightTruck)
