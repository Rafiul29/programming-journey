""" 
  1.Simple inheritance: parent class ---> child class(Gadget--->Phone) (Gadget--->Laptop)
  2.Multi-level inheritance: Gadget--->parent-->child
  (vehicle--->BUS--->ACBUS)
  (vehicle--->Track--->PickupTruck)
  3. Multiple inheritance:Student(Family,School,Shports)
  4.Hybrid: Granda-->father,uncle,Aunty--->child(Father,uncle)
"""

class Family:
  def __init__(self,address) -> None:
    self.address=address

class School:
  def __init__(self,id,level) -> None:
    self.id=id
    self.level=level

class Shports:
  def __init__(self,game) -> None:
    self.game=game

class Student(Family,School,Shports):
  def __init__(self, address,id,level,game) -> None:
    School.__init__(self,id,level)
    Shports.__init__(self,game)
    super().__init__(address)
