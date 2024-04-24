from food_item import FoodItem
from menu import Menu
from orders import Order
from restaurent import Restaurent
from users import Customer,Admin,Employee


mamar_restaurent=Restaurent("Mamar Restaurent")

def customer_menu():
  name=input("Enter your name : ")
  email=input("Enter Your Email : ")
  phone=input("Enter Your Phone : ")
  add=input("Enter Your Address : ")
  customer=Customer(name=name,phone=phone,email=email,address=add)

  while True:
    print(f"Welcome {customer.name} !!")
    print("1. View Menu")
    print("2 Add item to cart")
    print("3 View Cart")
    print("4 PayBill")
    print("5 Exit")

    ch=int(input("Enter Your Choice : "))
    if ch==1:
      customer.view_menu(mamar_restaurent)
    elif ch==2:
      item_name=input("Enter item name : ")
      item_quantity=int(input("Enter item quantity : "))
      customer.add_to_cart(mamar_restaurent,item_name,item_quantity)
    elif ch==3:
      customer.view_cart()
    elif ch==4:
      customer.pay_bill()
    elif ch==5:
      break
    else:
      print("invalid input")

def admin_menu():
  name=input("Enter your name : ")
  email=input("Enter Your Email : ")
  phone=input("Enter Your Phone : ")
  add=input("Enter Your Address : ")
  admin=Admin(name=name,phone=phone,email=email,address=add)

  while True:
    print(f"Welcome {admin.name} !!")
    print("1 Add new item")
    print("2 Add new Employee")
    print("3 View Employee")
    print("4 View Items")
    print("5 Delete Item")
    print("6 Exit")

    ch=int(input("Enter Your Choice : "))
    if ch==1:
      item_name=input("Enter item name : ")
      item_price=int(input("Enter item Price : "))
      item_quantity=int(input("Enter item quantity : "))

      item=FoodItem(item_name,item_price,item_quantity)
      admin.add_new_item(mamar_restaurent,item)
    elif ch==2:
      name=input("Enter your name : ")
      email=input("Enter Your Email : ")
      phone=input("Enter Your Phone : ")
      add=input("Enter Your Address : ")
      designation=input("Enter Your designation : ")
      age=input("Enter Your age : ")
      salary=input("Enter Your salary : ")

      employee=Employee(name=name,phone=phone,email=email,address=add,salary=salary,designation=designation,age=age)
      admin.add_employee(mamar_restaurent,employee)
    elif ch==3:
      admin.view_employee(mamar_restaurent)
    elif ch==4:
      admin.view_menu(mamar_restaurent)
    elif ch==5:
      item_name=input("Enter item name : ")
      admin.remove_item(mamar_restaurent,item_name)
    elif ch==6:
      break
    else:
      print("invalid input")


while True:
  print("Welcome")
  print("1. Customer")
  print("2 Admin")
  print("3 Exit")
  ch=int(input("Enter your choice : "))

  if ch==1:
    customer_menu()
  elif ch==2:
    admin_menu()
  elif ch==3:
    break
  else:
    print("Invalid Input")