
def dobule(x):
    return x*2

#lambda
dobule=lambda num:num*2
square=lambda num:num**2

print(dobule(3),square(4))


add =lambda x,y,z:x+y+z
print(add(1,2,3))



nums=[1,2,3,2,2,2,1212,121,2,121]

# db_nums=map(dobule,nums)
db_nums=map(lambda num:num**2,nums)

print(list(db_nums))



actors=[
    {'name':'rafiul','age':23},
    {'name':'rafi','age':34},
    {'name':'riul','age':56},
    {'name':'raul','age':34},
]

junior=filter(lambda actor:actor['age']<25,actors)
print(list(junior))


numbers = [10, 20, 30, 40, 50]
print(numbers[-4:-1])


numbers = [9, 15, 2, 36]
numbers[1:4] = [20, 14, 36]
print(numbers)

person_info = {"name": "Sakib", "salary": 80000}
value = person_info.get("salary")
print(value)



student = { 
  "name": "Amir", 
  "class": 10, 
  "marks": 85 
}

student.pop('marks')
print(student)

from math import *
result=ceil(5.00001)
print(result)

num = lambda a:a*a
print(num(2**2))