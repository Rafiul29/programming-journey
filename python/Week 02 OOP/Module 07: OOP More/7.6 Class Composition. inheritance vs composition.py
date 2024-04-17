# inheritance provides you "is a relation"
# inheritance vs composition

class Animal:
  pass

class Dog(Animal):
  pass


class Furniture:
  pass

class Chair(Furniture):
  pass

class Bed(Furniture):
  pass



class Engine:
  def __init__(self) -> None:
    pass
  def start(self):
    return "Engine started"
  
class Driver:
  def __init__(self) -> None:
    pass

#car "has a" engine
class Car:
  def __init__(self) -> None:
    self.engine=Engine()
    self.driver=Driver()
  
  def start(self):
    self.engine.start()


class CPU:
  def __init__(self,cores) -> None:
    self.cores=cores

class RAM:
  def __init__(self,size) -> None:
    self.size=size
  

class HardDrive:
  def __init__(self,capacity) -> None:
    self.capacity=capacity

class Computer:
  def __init__(self,cores,ram_size,hd_capacity) -> None:
    self.cpu=CPU(cores)
    self.ram=RAM(ram_size)
    self.hard_disc=HardDrive(hd_capacity)



# computer has a cpu
# computer has a ram
# computer has a hard drive
mac=Computer(8,16,512)