class Shop:

  def __init__(self,name) -> None:
    self.name=name 
    self.products=[]
    self.__balance=500

  def __repr__(self) -> str:
    return f'shop name is {self.name} balance {self.__balance}'
  
  def add_product(self,name,price):
    product=Product(name,price)
    self.products.append(product)
  def sell(self,product):
    self.balance+=product.price

  def __text_add(self):
    return self.__balance*0.10
  def get_balance(self):
    return self.__balance-self.__text_add()
  
class Product:
  def __init__(self,name,price) -> None:
    self.name=name
    self.price=price

  def __repr__(self) -> str:
    return self.name
 

shop1=Shop("test Shop1")
shop1.add_product("Iphone",31313)
shop1.add_product("Macbook",2321)

shop2=Shop("test Shop2")
shop2.add_product("apple",31313)
shop2.add_product("hp",2321)

print(shop1.get_balance())

#privet atrributes and privet method 