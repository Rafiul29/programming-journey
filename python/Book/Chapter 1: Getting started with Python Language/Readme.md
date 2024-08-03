# Getting started with Python Language

## Section 1.1: Getting Started
Python is a widely used high-level programming language for general-purpose programming, created by Guido van Rossum and first released in 1991.

## Python features 
- dynamic type system  
- automatic memory management  
- supports multiple programming paradigms
- including object-oriented
- imperative
- functional programming
- procedural styles

Two major versions of Python are currently in active use:
- Python 3.x is the current version and is under active development.
- Python 2.x is the legacy version and will receive only security updates until 2020. No new features will be implemented. Note that many projects still use Python 2, although migrating to Python 3 is getting easier


Verify if Python is installed
```sh
python --version
```

First Pyhton Programming 
```sh
print('Hello World')
```

## Section 1.2: Creating variables and assigning values

create variable
```sh 
#<varible_name> = <value>
a=4
```

variable declare

Integer
```sh
a=2323232
print(a)
```

Float
```sh
pi=3.1416
print(pi)
```

String
```sh
a='A'
print(a)
name='Rafiul Islam'
print(name)
```

Boolean
```sh
q=True
print(q)
p=False
print(p)
```
Empty value or null data type
```sh
x=None
print(x)
```

Python Keyword list
```sh
import keyword
print(keyword.kwlist)
```


Rules for variable naming:
- Variables names must start with a letter or an underscore.
```sh
 x = True # valid
 _y = True # valid
 9x=False # invalid syntax
 $y=False # invalid syntax
```
- The remainder of your variable name may consist of letters, numbers and underscores.
```sh
has_0_in_it = "Still Valid"
```
- Names are case sensitive.
```sh
x = 9
y = X*5
#=>NameError: name 'X' is not defined
```



Python interpreter automatically picks the most suitable built-in type
```sh
a=2
print(type(a))
# Output: <type 'int'>
```
```sh
pi=3.1416
print(type(pi))
# Output: <type 'float'>
```
```sh
c='A'
print(type(c))
# <class 'str'>
```
```sh
name="Rafiul Islam"
print(type(name))
# <class 'str'>
```
```sh
q=True
print(type(q))
# <class 'bool'>
```
```sh
x=None
print(type(x))
# <class 'NoneType'>
```

Assign multiple values to multiple variables in one line
```sh
a,b,c=1,2,3
print(a,b,c)
```

```sh
a, b, c = 1, 2
print(a,b,c)
'''
Traceback (most recent call last):
  File "python.py", line 104, in <module>
    a, b, c = 1, 2
ValueError: not enough values to unpack (expected 3, got 2)
'''
```

conventional to use the underscore (_) for assigning unwanted values
```sh
a, b, _ = 1, 2, 3
print(a, b)
# Output: 1, 2
```
assign a single value to several variables simultaneously
```sh
a = b = c = 1
print(a, b, c)
# Output: 1 1 1
```

```sh
a = b = c = 1 
# all three names a, b and c refer to same int object with value 1
print(a, b, c)
# Output: 1 1 1
b = 2 
# b now refers to another int object, one with a value of 2
print(a, b, c)
# Output: 1 2 1 # so output is as expected.
```
He above is also true for mutable types (like list, dict, etc.) just as it is true for immutable types (like int, string,tuple, etc.):
```sh
x = y = [7, 8, 9] 
# x and y refer to the same list object just created, [7, 8, 9]
x = [13, 8, 9] 
# x now refers to a different list object just created, [13, 8, 9]
print(y,x) 
# y still refers to the list it was first assigned
# Output: [7, 8, 9]
```


## Section 1.4: Datatypes

Built-in Types

Booleans
- bool: A boolean value of either True or False. Logical operations like and, or, not can be performed on booleans.
```sh
x or y # if x is False then y otherwise x
x and y # if x is False then x otherwise y
not x # if x is True then False, otherwise True
```

Numbers
- int: Integer number
```sh
a = 2
b = 100
c = 123456789
d = 38563846326424324
```
- float: Floating point number; precision depends on the implementation and system architecture, for
CPython the float datatype corresponds to a C double.
```sh
a = 2.0
b = 100.e0
c = 123456789.e1
```
- complex: Complex numbers
```sh
a = 2 + 1j
b = 100 + 10j
```


## Sequences and collections
Python differentiates between ordered sequences and unordered collections (such as set and dict).
- Strings (str, bytes, unicode) are sequences
- reversed: A reversed order of str with reversed function
```sh
a = reversed('hello')
```
- tuple: An ordered collection of n values of any type (n >= 0)
```sh
a=(1,2,3)
b=('a',1,'python',(1,2))
b[2]='something else' // return TypeErros
# immutable
```
- list: An ordered collection of n values (n >= 0)
```sh
a=[1,2,3]
b=[ 'a',1,'python',(1,2),[1,2]]
b[2]='something else' # allowed
# mutable
```

- set: An unordered collection of unique values. Items must be hashable.
```sh
a=[1,2,3,1,2,3]
print(set(a))
# output: a = {1, 2, 'a'}
```
- dict: An unordered collection of unique key-value pairs; keys must be hashable
```sh
a = {1: 'one',
2: 'two'}
b = {'a': [1, 2, 3],
'b': 'a string'}
```

## Built-in constants
- True: The true value of the built-in type bool
- False: The false value of the built-in type bool
- None: A singleton object used to signal that a value is absent
- Ellipsis or ...: used in core Python3+ anywhere and limited usage in Python2.7+ as part of array notation. numpy and related packages use this as a 'include everything' reference in arrays.
- NotImplemented: a singleton used to indicate to Python that a special method doesn't support the specific
arguments, and Python will try alternatives if available.

## Converting between datatypes
You can perform explicit datatype conversion

For example, '123' is of str type and it can be converted to integer using int function.
```sh
a='123'
b=int(a)
print(b)
```

Converting from a float string such as '123.456' can be done using float function.
```sh
a = '123.456'
b = float(a)
c = int(a) # ValueError: invalid literal for int() with base 10: '123.456'
d = int(b) # 123
```

You can also convert sequence or collection types
```sh
a = 'hello'
list(a) # ['h', 'e', 'l', 'l', 'o']
set(a) # {'o', 'e', 'l', 'h'}
tuple(a) # ('h', 'e', 'l', 'l', 'o')
```

## Mutable Data Types
- List
- bytearray
- set
- dict

## Immutable Data Types
- int,long,float,complex
- str
- bytes
- tuple
- frozenset

## Section 1.5: Collection Types
- Lists
The list type is probably the most commonly used collection type in Python. Despite its name, a list is more like an array in other languages, mostly JavaScript.

```sh
numbers=[1,2,3,4,5,6,7,8,9,10]
names=['rafiul','islam','rafi','rahman','asraful','sadman','samiul,'rahim']
mixed_list=[1,'abc',True,2.45,None]
```
Element Accessed
```sh
names = ['Alice', 'Bob', 'Craig', 'Diana', 'Eric']
print(names[0]) #Alice
print(names[2]) #Bob
print(names[-1]) #Eric
print(names[-4]) #bob
names[0]='Ann'
print(names)
```
add and/or remove elements from a list:
```sh
names = ['Alice', 'Bob', 'Craig', 'Diana', 'Eric']
# Append object to end of list with L
names.append('slia')
print(names)
#Add a new element to list at a specific index L
names.insert(1,'Nikki');
print(names)
#Remove the first occurrence of a value with L.
names.remove('Bob')
print(names)
# Remove and return item at index (defaults to the last item) with L
names.pop()
print(names)
#count the len of list
print(len(names))

# count occurrence of any item in list
a=[1,1,1,2,2,2,3,4]
print(a.count(1))
# Reverse the list
a.reverse()
print(a)
a[::-1]
print(a)
```
- Tuples
A tuple is similar to a list except that it is fixed-length and immutable. So the values in the tuple cannot be changed nor the values be added to or removed from the tuple
```sh
p_address = ('10.20.30.40', 8080)
```
- Dictionaries
A dictionary in Python is a collection of key-value pairs. The dictionary is surrounded by curly braces. Each pair is separated by a comma and the key and value are separated by a colon.
```sh
state_capitals = {
'Arkansas': 'Little Rock',
'Colorado': 'Denver',
'California': 'Sacramento',
'Georgia': 'Atlanta'
}
print(state_capitals['Colorado'])

for k in state_capitals.keys():
  print('{} is the capital of {}'.format(state_capitals[k], k))
```

- set
A set is a collection of elements with no repeats and without insertion order but sorted order. They are used in situations where it is only important that some things are grouped together, and not what order they were included. For large groups of data, it is much faster to check whether or not an element is in a set than it is to do the same for a list.
```sh
my_list=[1,2,3,1,5,3,3,4]
print(set(my_list))
```


## Section 1.7: User Input
```sh
name = input("What is your name?")
print(name)
```

## Section 1.8: Built in Modules and Functions
A module is a file containing Python definitions and statements. Function is a piece of code which execute some logic.
```sh
print(pow(2,3))
print(dir(__builtins__))
print(help(max))
```
```sh
import math
print(math.sqrt(16))
print(dir(math))
print(math.__doc__) # This module is always available. It provides access to the\nmathematical functions defined by the C standard.'
```

```sh
class MyClassObject(object):
  pass
print(dir(MyClassObject))
```


## Section 1.11: String function - str() and repr()
There are two functions that can be used to obtain a readable representation of an object.
- repr(x) calls x.__repr__(): a representation of x. eval will usually convert the result of this function back to the
original object.
- str(x) calls x.__str__(): a human-readable string that describes the object. This may elide some technical detail
```sh
import datetime
today=datetime.datetime.now()
print(str(today)) # Output: '2016-09-15 06:58:46.915000'
print(repr(today)) # Output: 'datetime.datetime(2016, 9, 15, 6, 58, 46, 915000)'
```
```sh
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
```