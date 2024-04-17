#read only---> you can not set the value. Value can not be chnage

# Getter --> get a value of a property through a method. Most of the time, you will get the value of a private attributes

#setter--> set a value of a property trhough a method. Most of the time, you will set the value of a private property

class User:
  def __init__(self,name,age,money) -> None:
    self._name=name
    self._age=age
    self.__money=money

  #getter without any setter is readyonly attribute
  @property
  def age(self):
    return self._age
  
  #getter
  @property
  def salary(self):
    return self.__money
  
  @salary.setter
  def salary(self,value):
    if value<0:
      return "salary can't be negative"
    self.__money+=value

samsu=User("rafiu",13,231)
print(samsu._name)
print(samsu.age)
print(samsu.salary)
samsu.salary=400
print(samsu.salary)