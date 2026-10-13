class Family:
  def __init__(self, address):
    self.address = address
  def __repr__(self):
    return f'Address: {self.address}'

class School:
  def __init__(self, id, level):
    self.id = id
    self.level = level
  def __repr__(self):
    return f'Id: {self.id}, Level: {self.level}'

class Sports:
  def __init__(self, game):
    self.game = game
  def __repr__(self):
    return f'Game: {self.game}'

class Student(Family, School, Sports):
  def __init__(self, address, id, level, game):
    Family.__init__(self, address)
    School.__init__(self, id, level)
    Sports.__init__(self, game)

  def __repr__(self):
    return f'{Family.__repr__(self)}, {School.__repr__(self)}, {Sports.__repr__(self)}'


noman = Student("Tokyo, London", 101, 12, "PUBG")
print(noman)
