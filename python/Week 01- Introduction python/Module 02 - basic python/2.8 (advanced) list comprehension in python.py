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