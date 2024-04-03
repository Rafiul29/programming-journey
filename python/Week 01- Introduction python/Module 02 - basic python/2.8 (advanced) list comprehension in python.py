# nums=[5,10,15,20,25,30,40,50]
# odds=[]
# for num in nums:
#     if num%2==1 and num%5==0:
#         odds.append(num)
# print(odds)

# short hand
# odd_nums=[num for num in nums if num%2==1]
# print(odd_nums)


numbers=[[123,123,123],[211,213,123],[2],]

for nums in numbers:
    for num in nums:
        print(num)

num1=[num for nums in numbers for  num in nums]
print(num1)



def solve(a, b):
    return a**b
    
result = solve(2, 4)
print(result)



def display_person(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")


numbers =[7,6,5,3,3,2,1]
print(numbers[-4])