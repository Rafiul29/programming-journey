# Section 1.1: Getting Started

"""
***Python is a widely used high-level programming language for general-purpose programming, created by Guido van Rossum and first released in 1991.





***Python features 
--dynamic type system  
--automatic memory management  
--supports multiple programming paradigms,--including object-oriented,
--imperative,
--functional programming,
--procedural styles. 
It has a large and comprehensive standard library.

Two major versions of Python are currently in active use:

*Python 3.x is the current version and is under active development.

*Python 2.x is the legacy version and will receive only security updates until 2020. No new features will be implemented. Note that many projects still use Python 2, although migrating to Python 3 is getting easier
"""

print('hello world')

# Section 1.2: Creating variables and assigning values

# <variable name> = <value>

#integer
a=2
print(a) # output 2

# Integer
b=9232323232323232
print(b)

# Floating point
pi=3.14
print(pi)

# String
a='A'
print(a)

# String
name = 'Rafiul Islam'
print(name)

# Boolean
q= True
print(q)

#Empty value or null data type
x=None
print(x)



# Rules for variable naming:
# 1. Variables names must start with a letter or an underscore.


import keyword
print(keyword.kwlist)

# Rules for variable naming:
  # 1. Variables names must start with a letter or an underscore.


  # 2. The remainder of your variable name may consist of letters, numbers and underscores.



#Python interpreter automatically picks the most suitable built-in type

a=2
print(type(a))
# <class 'int'>

pi=3.1416
print(type(pi))
# <class 'float'>

c='A'
print(type(c))
# <class 'str'>

name="Rafiul Islam"
print(type(name))
# <class 'str'>

q=True
print(type(q))
# <class 'bool'>

x=None
print(type(x))
# <class 'NoneType'>

# assign multiple values to multiple variables in one line
a,b,c=1,2,3
print(a,b,c)


# a, b, c = 1, 2
# print(a,b,c)

# conventional to use the underscore (_) for assigning unwanted values
a, b, _ = 1, 2, 3
print(a, b)
# Output: 1, 2


# assign a single value to several variables simultaneously

a = b = c = 1
print(a, b, c)
# Output: 1 1 1


a = b = c = 1 # all three names a, b and c refer to same int object with value 1
print(a, b, c)
# Output: 1 1 1
b = 2 # b now refers to another int object, one with a value of 2
print(a, b, c)
# Output: 1 2 1 # so output is as expected.


# The above is also true for mutable types (like list, dict, etc.) just as it is true for immutable types (like int, string,tuple, etc.):
x = y = [7, 8, 9] # x and y refer to the same list object just created, [7, 8, 9]
x = [13, 8, 9] # x now refers to a different list object just created, [13, 8, 9]
print(y,x) # y still refers to the list it was first assigned
# Output: [7, 8, 9]


# Section 1.4: Datatypes

# Built-in Types
# Booleans
# bool: A boolean value of either True or False. Logical operations like and, or, not can be performed on booleans.
x or y # if x is False then y otherwise x
x and y # if x is False then x otherwise y
not x # if x is True then False, otherwise True


a = 2
b = 100
c = 123456789
d = 38563846326424324
a=reversed('hello')
print(a)

a=[1,2,3,1]
b=[ 'a',1,'python',(1,2),[1,2],'a']
b[2]='something else'
print(b)
print(set(a))
 # allowed
# mutable
a=[1,2,3,1,2,3]
print(set(a))
# output: a = {1, 2, 'a'}

a='123'
b=int(a)
print(b)


a = '123.456'
b = float(a)
# c = int(a) # ValueError: invalid literal for int() with base 10: '123.456'
d = int(b) # 123



names = ['Alice', 'Bob', 'Craig', 'Diana', 'Eric']
print(names[0]) #Alice
print(names[2]) #Bob
print(names[-1]) #Eric
print(names[-4]) #bob


names = ['Alice', 'Bob', 'Craig', 'Diana', 'Eric']
# Append object to end of list with L
names.append('slia')
print(names)
#Add a new element to list at a specific index L
names.insert(1,'Nikki');
print(names)


state_capitals = {
'Arkansas': 'Little Rock',
'Colorado': 'Denver',
'California': 'Sacramento',
'Georgia': 'Atlanta'
}
print(state_capitals['Colorado'])

for k in state_capitals.keys():
  print('{} is the capital of {}'.format(state_capitals[k], k))

my_list=[1,2,3,1,5,3,3,4]
print(set(my_list))

print(pow(2,3))
print(dir(__builtins__))


import math
print(math.sqrt(16))
print(dir(math))
print(math.__doc__) 

class MyClassObject(object):
  pass

print(dir(MyClassObject))

import datetime
today=datetime.datetime.now()
print(str(today))
print(repr(today))


class Represent(object):
  def __init__(self,x,y) -> None:
    self.x,self.y=x,y
  
  def __repr__(self) -> str:
    return "Represent(x={},y=\"{}\")".format(self.x, self.y)
  
  def __str__(self):
    return "Representing x as {} and y as {}".format(self.x, self.y)
  
r = Represent(1, "Hopper")
print(r)
print(r.__repr__())