class Person:
  def __init__(self,name,age,height,weight) -> None:
    self.name=name
    self.age=age
    self.height=height
    self.weight=weight
  
  def eat(self):
    print("he is eating banana")
  def exercise(self):
    raise NotImplementedError

class Cricketer(Person):
  def __init__(self, name, age, height, weight,team) -> None:
    self.team=team
    super().__init__(name, age, height, weight)
  
  def eat(self):
    print("vegetables")
  
  def exercise(self):
    print("gum is the man perfect")

  # + sing operator overload
  def __add__(self,other):
    return self.age+other.age
  
  # *sing operator overload
  def __mul__(self,other):
    return self.weight*other.weight
  
  # len overload
  def __len__(self):
    return self.height
  
  # > operator overload
  def __gt__(self,other):
    return self.age> other.age

sakib=Cricketer("sakib",38,69,80,'BD')
# sakib.eat()
# sakib.exercise()
musi=Cricketer('musi',36,60,65,'BD')

#operator overloading
print(23+34)
print('sakib'+"rakib")
print([1,2,3]+[4,5,6,7])
print(sakib+musi)
print(sakib*musi)
print(len(sakib))
print(sakib>musi)