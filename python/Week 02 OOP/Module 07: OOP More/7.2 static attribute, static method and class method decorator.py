class Shopping:
  cart=[] #class attributues #static attributes

  def __init__(self,name,location) -> None:
    self.name=name #instance attributes
    self.location=location

  def purchase(self,item, price,amount):
    print(f'buying: {item} for price: {price} and remaning: {amount-price}')

  @staticmethod
  def multiply(a,b):
    print(a*b) 

  @classmethod
  def cls_Method(self):
    print("clas method done")


basundara=Shopping("basun dhara","Dhaka")
basundara.purchase('lungi',500,1000)

basundara.cls_Method()
Shopping.cls_Method()

basundara.multiply(3,4)
Shopping.multiply(3,4)