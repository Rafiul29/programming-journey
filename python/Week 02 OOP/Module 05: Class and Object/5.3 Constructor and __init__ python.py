
class Phone:
   #attributes
   manufactures="China"
   
   #constructor
   def __init__(self,owner,brand,price):
       self.owner=owner
       self.brand=brand
       self.price=price
   
   #method
   def call(self):
        # return "calling one person"
        print("calling one person")
   
   def send_sms(self,phone,sms):
        text=f'sending sms to: {phone} and message: {sms}'
        return text
   def send_product(self):
       return f'{self.brand} {self.price}'
        
rafi=Phone("Rafi","Hp",12311)
print(rafi.owner,rafi.brand,rafi.price)
print(rafi.send_product())


class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)
