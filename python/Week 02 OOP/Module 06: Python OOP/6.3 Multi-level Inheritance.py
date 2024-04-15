""" 
  1.Simple inheritance: parent class ---> child class(Gadget--->Phone) (Gadget--->Laptop)
  2.Multi-level inheritance: Gadget--->parent-->child
  (vehicle--->bus--->ACBUS)
"""

class Vehicle:
  def __init__(self,name,price) -> None:
    self.name=name
    self.price=price
  
  def move(self):
    pass

class Bus(Vehicle):

  def __init__(self, name, price,seat) -> None:
    self.seat=seat
    super().__init__(name, price)


class Truck(Vehicle):
  def __init__(self, name, price,weight) -> None:
    self.weight=weight
    super().__init__(name, price)

class PickUpTruck(Truck):
  def __init__(self, name, price, weight) -> None:
    super().__init__(name, price, weight)


class ACBUS(Bus):
  def __init__(self, name, price, seat,temparature) -> None:
    self.temparature=temparature
    super().__init__(name, price, seat)
    
  def __repr__(self) -> str:
    print(f'{self.seat}')
    return "done"
green_line=ACBUS('green',211313,40,16)
print(green_line)




arr = []
arr.append(10)
arr.append(10)
print(11)