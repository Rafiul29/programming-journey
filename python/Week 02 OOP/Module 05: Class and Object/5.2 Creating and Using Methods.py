def call():
    print("calling some i dont know")
    return 'call done'

class Phone:
    price=3212
    color="red"
    brand="samsung"
    features=['camera','speaker','hammer']

    def call(self):
        # return "calling one person"
        print("calling one person")
    
    def send_sms(self,phone,sms):
        text=f'sending sms to: {phone} and message: {sms}'
        return text

        

my_phone=Phone()
print(my_phone.features)
my_phone.call()

result=my_phone.send_sms(312312,"i forget to miss u")
print(result)
# print(my_phone.price,my_phone.color,my_phone.brand)

