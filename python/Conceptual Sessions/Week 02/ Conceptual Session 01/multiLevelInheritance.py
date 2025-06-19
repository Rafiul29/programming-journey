class Vehicle:
  def __init__(self,model,brand,color,price) -> None:
    self.brand=brand
    self.model=model
    self.color=color
    self.price=price


class Car(Vehicle):
  def __init__(self, model, brand, color, price,capacity) -> None:
    self.capacity=capacity
    super().__init__(model, brand, color, price)
  def __repr__(self) -> str:
    return f'{self.model} {self.color} {self.capacity}'
  
class ElectricCar(Car):
  def __init__(self, model, brand, color, price, capacity,battry_capacity) -> None:
    self.battry_capacity=battry_capacity
    super().__init__(model, brand, color, price, capacity)


toyota=Car("32213","Toyota","red",233,321)
print(toyota)

tesla=ElectricCar(22231,"Tesla","blue",1231,3,231313123.21313)
print(tesla.battry_capacity)