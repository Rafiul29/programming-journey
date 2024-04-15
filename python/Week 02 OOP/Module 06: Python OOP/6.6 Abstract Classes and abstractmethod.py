from abc import ABC,abstractmethod

class Animal(ABC):
  @abstractmethod #enforce all derive class to have eat method
  def eat(self):
    print("i need food")

  @abstractmethod
  def move(self):
    pass

class Monkey(Animal):
  def __init__(self,name) -> None:
    self.category="Monkey"
    self.name=name
    super().__init__()

  def eat(self):
    print("i need food")

  def move(self):
    pass

layka=Monkey('lucky')
layka.eat()