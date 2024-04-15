
# class Animal:
#   def __init__(self,name) -> None:
#     self.name=name

#   def make_sound(self):
#     print('animal making some sound')

# class Cat(Animal):
#   def __init__(self, name) -> None:
#     super().__init__(name)

#   def make_sound(self):
#     print("meow meow")
  

# class Dog(Animal):
#   def __init__(self, name) -> None:
#     super().__init__(name)

#   def make_sound(self):
#     print("gheu gheu")
  
# don=Cat("Real don")
# don.make_sound()

# shepart=Dog("Local Shepard")
# shepart.make_sound()

# animals=[don,shepart]

# for animal in animals:
#   animal.make_sound()

from math import pi
class Shape:
  def __init__(self,name) -> None:
    self.name=name

class Rectangle(Shape):
  def __init__(self,name,length,width) -> None:
    self.length=length
    self.width=width
    super().__init__(name)

  def area(self):
    return self.length*self.width

class Circle(Shape):
  def __init__(self, name,radius) -> None:
    self.radius=radius
    super().__init__(name)
  
  def area(self):
    return pi*(self.radius)**2

Ci=Circle('cirle',2)
print(Ci.area())