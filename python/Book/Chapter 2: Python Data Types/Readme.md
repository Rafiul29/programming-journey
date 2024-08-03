# Python Data Types
Data types are nothing but variables you use to reserve some space in memory. Python variables do not need an explicit declaration to reserve memory space. The declaration happens automatically when you assign a value to a variable.

## Section 2.1: String Data Type
String are identified as a contiguous set of characters represented in the quotation marks. Python allows for either pairs of single or double quotes. Strings are immutable sequence data type, i.e each time one makes any changes to a string, completely new string object is created.
```sh
a_str='Hello World'
print(a_str)
print(a_str[0])
print(a_str[0:5])
```
## Section 2.2: Set Data Types
Sets are unordered collections of unique objects, there are two types of set:
- [Sets] - They are mutable and new elements can be added once sets are defined
```sh
numbers={1,2,3,4,5,65,4,3,21,1,1,2,3,4}
print(numbers)

a=set('aaababbbaaabbccccbaa')
print(a)
```
- [Frozen Sets] - They are immutable and new elements cannot added after its defined.
```sh
b=frozenset('asdfasdaa')
print(b) #frozenset({'d', 's', 'a', 'f'})
```
## Section 2.3: Numbers data type
Numbers have four types in Python.
- Int
```sh
int_num=10
```
- float
```sh
num=10.322
```
- Complex
```sh
num=3+4j
```
- Long
```sh
num=23213131L
```

## Section 2.4: List Data Type
A list contains items separated by commas and enclosed within square brackets [].lists are almost similar to arrays in C. One difference is that all the items belonging to a list can be of different data type.
```sh
list=[123,'abcd',10.2,'d']
list1=['hello','world']
print(list)
print(list[0:2])
print(list1*3)
print(list1+list)
```
## Section 2.5: Dictionary Data Type
Dictionary consists of key-value pairs. It is enclosed by curly braces {} and values can be assigned and accessed using square brackets[].
```sh
dic={
  'name':'rafi',
  'age':24
}
print(dic)
print(dic['name'])
print(dic.values())
print(dic.keys())
```
## Section 2.6: Tuple Data Type
Lists are enclosed in brackets  ([ ]) and their elements and size can be changed, while tuples are enclosed in parentheses ( ) and cannot be updated. Tuples are immutable.
```sh
tuple=(123,'hello')
tuple1=('world','jh')
print(tuple,tuple1)
print(tuple + tuple1)
# tuple[1]='upda' #this will give you error.
```

