from abc import ABC,abstractmethod
from math import pi

class Shape(ABC):
  @abstractmethod
  def area(self):
    pass

  @abstractmethod
  def perimeter(self):
    pass

class Rectangle(Shape):
  def __init__(self,width,length) -> None:
    self.width=width
    self.length=length
    
  def area(self):
    return self.width*self.length
  
  def perimeter(self):
    return 2*(self.width*self.length)


class Circle(Shape):
  def __init__(self,radius) -> None:
    self.radius=radius

  def area(self):
    return pi* self.radius**2
  
  def perimeter(self):
    return 2*pi*self.radius



rec1=Rectangle(2,3)
print(rec1.area(),rec1.perimeter())

cir1=Circle(3)
print(cir1.area(),cir1.perimeter())