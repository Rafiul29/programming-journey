class Bank:
  def __init__(self,holder_name,initial_deposit) -> None:

    self.holder_name=holder_name #public
    self.__balance=initial_deposit #privet
    self._branch='banani 11' #protected one underscore

  def deposit(self,amount):
    self.__balance+=amount

  def withdraw(self,amount):
    if amount<self.__balance:
      self.__balance=self.__balance-amount
      return amount
    else:
      return f'insufficient balance {self.__balance}'
    
  def get_balance(self):
    return self.__balance
  
rafiul=Bank('rafiul',40000)
# rafiul.holder_name="d"
rafiul.deposit(1000)
# rafiul._branch='we'
print(rafiul.get_balance(),rafiul.holder_name,rafiul._branch)

# print(dir(rafiul))
print(rafiul._Bank__balance)