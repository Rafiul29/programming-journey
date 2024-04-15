class Bank:
  
  def __init__(self,balance):
    self.balance=balance
    self.min_withdraw=100
    self.max_withdraw=10000
  
  def get_balance(self):
    return self.balance
  
  def deposit(self,amount):
    if amount>0:
      self.balance+=amount
      print(f'your balance after deposit {self.get_balance()}')

  def withdraw(self,amount):
    if amount<self.min_withdraw:
        print(f'insufficient balance {self.min_withdraw}')
    elif amount>self.max_withdraw:
      print(f'you can not with more than {self.max_withdraw}')
    else:
      self.balance-=amount
      print(f'here is your money {amount}')
      print(f'your balance after withdraw {self.get_balance()}')
  
brac=Bank(15000)
brac.withdraw(400)
brac.deposit(50)

