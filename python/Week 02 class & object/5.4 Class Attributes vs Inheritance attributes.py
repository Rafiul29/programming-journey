# class Shop:
#   cart=[] # cart is a class atrributes

#   def __init__(self,buyer):
#     self.buyer=buyer
  
#   def add_to_cart(self,item):
#     self.cart.append(item)

# rafi=Shop("Rafi")
# rafi.add_to_cart("sales")
# rafi.add_to_cart("phone")
# print(rafi.cart)


class Shop:
  shopping_mall="Jumuna"

  def __init__(self,buyer):
    self.buyer=buyer
    self.cart=[] # cart is an instance attributes 
  
  def add_to_cart(self,item):
    self.cart.append(item)

rafi=Shop("Rafi")
rafi.add_to_cart("sales")
rafi.add_to_cart("phone")
print(rafi.cart)


asfia=Shop('asfia')
asfia.add_to_cart("sales")
asfia.add_to_cart("laptop")
asfia.add_to_cart("phone")

print(asfia.cart)