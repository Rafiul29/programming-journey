def a_lot(num1,num2):
    sum=num1+num2
    div=num1/num2
    mul=num1*num2
    #return sum,div,mul #return value tuples
    return [sum,div,mul] #return value list 
print(a_lot(3,4))