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

class ACBus(Bus):
  def __init__(self, name, price, seat, temperature):
    self.temperature = temperature
    super().__init__(name, price, seat)

  def __repr__(self):
    return super().__repr__() + f', Temperature: {self.temperature} deg C'


greenLineACBus = ACBus("Green line AC Bus", 3000000, 20, 17)
print(greenLineACBus)
