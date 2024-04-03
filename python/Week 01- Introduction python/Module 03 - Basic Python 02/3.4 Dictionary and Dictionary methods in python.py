person={
    'name':"rafiul islam",
    'age':23,
    'dpt':"cse"
}
print(person['name'],person['age'],person['dpt'])
print(person.keys())
print(person.values())
person['job']='dev'
print(person)


#looping
for key,value in person.items():
    print(key,value)


nums=[1,1,1,1,3,3,3,4,3,3,3,23,2,23,]

for i,num in enumerate(nums):
    print(i,num)


