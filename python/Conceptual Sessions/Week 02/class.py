class Shop:

  def __init__(self,name) -> None:
    self.name=name
    self.products=[]

  def __repr__(self) -> str:
    return f'shop name is {self.name}'
  
  def add_product(self,name,price):
    product=Product(name,price)
    self.products.append(product)


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

print(shop1.products)
print(shop2.products)