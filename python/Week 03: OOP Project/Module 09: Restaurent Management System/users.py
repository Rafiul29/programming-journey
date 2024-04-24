# Customer
# Employee
# Admin

from abc import ABC
from orders import Order
class User(ABC):
  def __init__(self,name,phone,email,address) -> None:
    self.name=name
    self.phone=phone
    self.email=email
    self.address=address

class Customer(User):
  def __init__(self, name, phone, email, address) -> None:
    super().__init__(name, phone, email, address)
    self.cart=Order()
  
  def view_menu(self,restaurent):
    restaurent.menu.show_menu()
  
  def add_to_cart(self,restaurent,item_name,quantity):
    item=restaurent.menu.find_item(item_name)
    if item:
      if quantity>item.quantity:
        print("Item quantity exeeded")
      else:
        item.quantity=quantity
        self.cart.add_item(item)
        print("item added")
    else:
      print("item not found")

  def view_cart(self):
    print("**view cart**")
    print("Name\tPrice\tQuantity")
    for item,quantity in self.cart.items.items():
      print(f'{item.name} {item.price} {quantity}')
    print(f"Total Price : {self.cart.total_price}")
  def pay_bill(self):
    print(f"Total {self.cart.total_price} paid successfully")
    self.cart.clear()

class Employee(User):
  def __init__(self, name, phone, email, address,age,designation,salary) -> None:
    self.age=age
    self.designation=designation
    self.salary=salary
    super().__init__(name, phone, email, address)



class Admin(User):
  def __init__(self, name, phone, email, address) -> None:
    super().__init__(name, phone, email, address)

  # add employee
  def add_employee(self,restaurent,employee):
    restaurent.add_employee(employee)
   
  def view_employee(self,restaurent):
    restaurent.view_employee()
  
  def add_new_item(self,restaurent,item):
    restaurent.menu.add_menu_item(item)
  
  def remove_item(self,restaurent,item):
    restaurent.menu.remove_item(item)

  def view_menu(self,restaurent):
    restaurent.menu.show_menu()







