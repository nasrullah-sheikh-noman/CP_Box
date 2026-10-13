class Grandpa:
  def __init__(self, name, age):
    self.name = name
    self.age = age
  def __repr__(self):
    return f'Name: {self.name}, Age: {self.age}'

class Father(Grandpa):
  def __init__(self, name, age):
    super().__init__(name, age)

class Uncle(Grandpa):
  def __init__(self, name, age, district):
    self.district = district
    super().__init__(name, age)
  def __repr__(self):
    return super().__repr__() + f', District: {self.district}'

class Anty:
  def __init__(self, isMarried):
    self.isMarried = isMarried
  def __repr__(self):
    return f'IaMarried: {self.isMarried}'

class MySelf(Father, Anty):
  def __init__(self, name, age, isMarried):
    Anty.__init__(self, isMarried)
    Father.__init__(self, name, age)
  def __repr__(self):
    return f'{Father.__repr__(self)}, {Anty.__repr__(self)}'

class Cousin(Uncle, Anty):
  def __init__(self, name, age, district, isMarried):
    Uncle.__init__(self, name, age, district)
    Anty.__init__(self, isMarried)
  def __repr__(self):
    return f'{Uncle.__repr__(self)}, {Anty.__repr__(self)}'

noman = MySelf("Noman", 18, False)
print(noman)
nasrullah = Cousin("Nasrullah", 19, "Tokyo", True)
print(nasrullah)
