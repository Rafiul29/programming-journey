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
  
toyota=Car("32213","Toyota","red",233,321)
print(toyota)

