class Shopping:
  def __init__(self,name):
    self.name=name
    self.cart=[]

  def add_to_cart(self,item,price,quantity):
    product={
      'item':item,
      'price':price,
      'quantity':quantity
    }
    self.cart.append(product)
  
  def remove_item(self,name):
    item1=filter(lambda item: item['item']!=name,self.cart)
    self.cart=list(item1)
    print(self.cart)

  def checkout(self,amount):
    total=0
    for item in self.cart:
      total+=item['price'] * item['quantity']
    print(total)
    if amount<total:
      print(f'Please provided {total-amount} more')
    else:
      extra=amount-total
      print(f'Here is your items and exra money {extra} ')


rafi=Shopping('Md rafiul islam')
rafi.add_to_cart('alu',50,6)
rafi.add_to_cart('onion',500,6)
rafi.remove_item('alu')
# print(rafi.cart)

asfia=Shopping('Mst asfia hossen')
asfia.add_to_cart('alu',50,6)
asfia.add_to_cart('onion',30,3)
# asfia.checkout(34241)
# print(asfia.cart)