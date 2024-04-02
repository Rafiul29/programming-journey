# comment
# Ctrl+/ : Single Line of comment
# Alt + Shift + A : Doc String of Multi line comment



age=321
name='Md Rafiul islam'
district='pabna'
is_human=True
is_single=True
n1=32.23

print(age)
print(name)
print("district=",district)
print(is_human)
print(is_single)


#Get the type
# You can get the data type of a variable with the type() function.
print(type(age))
print(type(name))
print(type(is_human))
print(type (district))
print(type(n1))

# Many Values to Multiple Variables
x,y,z="orange","banana","cherry"
print(x,y,z)

# One value to Multiple variables
x=y=z="Orange"
print(x,y,z)


# The Python print() function is often used to output variables.

first_name='Md'
middle_name='rafiul'
last_name='islam'

print(first_name +" " + middle_name +" "+ last_name)

print(type(2+3j))


import json
x = {
  "name": "John",
  "age": 30,
  "city": "New York"
}
print(x)
# convert into JSON:
y = json.dumps(x)

# the result is a JSON string:
print(y) 

x=5
if x%2==0:
    print("even")
else: 
    print("odd")   