#kargs
def fullName(first,last):
    name=f'full name is {first} {last}'
    return name
# take parameters in order(serial order)
# print(fullName("rafiul","islam"))

name=fullName(last='Rafiul islam',first="rafiul")
print(name)

# def famous(first,last,*addition):
#     print(addition)
#     return f'{first} {last}'

# take parameter in orders
# name=famous("rafiul","islam","depart","3r3r")
# print(name)


# kargs parameter order not serial then (**) double staric symbol

def famous(first,last,**addition):
    print(addition)
    return f'{first} {last}'

name=famous(first="rafiul",last="islam",title="Web Developers", depart="Cse")
print(name)



#multiple return from a function
def a_lot(num1,num2):
    sum=num1+num2
    div=num1/num2
    mul=num1*num2
    #return sum,div,mul #return value tuples
    return [sum,div,mul] #return value list 
print(a_lot(3,4))