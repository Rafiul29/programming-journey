#base class, parent class, common attributes + functionality class
#derived class, child class uncommon attributes + functionality class

class Gadget:
#constructor
  def __init__(self,brand,price,color,origin) -> None:
    self.brand=brand
    self.price=price
    self.color=color
    self.origin=origin

#method
  def run(self):
    return f'Running  {self.brand}'
  


class Laptop:

  def __init__(self,memory,ssd) -> None:
    self.memory=memory
    self.ssd=ssd

  def coding(self):
    return f'learning python and parcticing'
  
  
class Phone:
  def __init__(self,dual_sim) -> None:
    self.dual_sim=dual_sim
  
  def phone_call(self,number,text):
    return f'sending sms to: {number} with: {text}'
  
class Camera:
  def __init__(self,pixel) -> None:
    self.pixel=pixel

 
  def change_lens(self):
    pass


#base class, parent class, common attributes + functionality class
#derived class, child class uncommon attributes + functionality class

class Gadget:
#constructor
  def __init__(self,brand,price,color,origin) -> None:
    self.brand=brand
    self.price=price
    self.color=color
    self.origin=origin

#method
  def run(self):
    return f'Running  {self.brand}'
  

class Laptop:

  def __init__(self,memory,ssd) -> None:
    self.memory=memory
    self.ssd=ssd

  def coding(self):
    return f'learning python and parcticing'
  
  
class Phone(Gadget):
  def __init__(self,brand,price,color,origin,dual_sim) -> None:
    self.dual_sim=dual_sim
    super().__init__(brand,price,color,origin)

  def phone_call(self,number,text):
    return f'sending sms to: {number} with: {text}'
  
  def __repr__(self) -> str:
    return f'phone {self.brand} {self.price} {self.color} {self.origin} {self.dual_sim}'


class Camera:
  def __init__(self,pixel) -> None:
    self.pixel=pixel
 
  def change_lens(self):
    pass

  my_phone=Phone('iphone',3212321,'silver','china',True)
  print(my_phone)


 