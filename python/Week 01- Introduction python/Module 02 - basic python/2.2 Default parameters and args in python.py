def sum(n1,n2,n3=0,n4=0,n5=0):
    result=n1+n2+n3
    return result

print("total sum is = ",sum(10,30))

#args
def all_sum(num1,num2,*numers):
    sum=0
    for num in numers:
        sum+=num
    return sum

print(all_sum(1,2,3,4,4))