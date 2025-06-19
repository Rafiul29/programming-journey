balance=500

def buy_things(item,price):
    #local scope variable
    #if can access global variable, you have to use the global keword
    #if want to modify a global variable, you have to use the global keyword
    global balance
    print(f'previous blance value {balance}')
    balance=balance-price
    print(f'balance after buying {item} {balance}')

buy_things("pizza",200)