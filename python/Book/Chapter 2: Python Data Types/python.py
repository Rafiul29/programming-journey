a_str='Hello World'
print(a_str)
print(a_str[0])
print(a_str[0:5])

numbers={1,2,3,4,5,65,4,3,21,1,1,2,3,4}
print(numbers)

a=set('aaababbbaaabbccccbaa')
print(a)

b=frozenset('asdfasdaa')
print(b)

# Section 2.3: Numbers data type
int_num = 10 #int value
float_num = 10.2 #float value
complex_num = 3.14j #complex value

long_num = 1234567
print(int_num,float_num,complex_num,long_num)

# Section 2.4: List Data Type
list=[123,'abcd',10.2,'d']
list1=['hello','world']
print(list)
print(list[0:2])
print(list1*3)
print(list1+list)


# Section 2.5: Dictionary Data Type
dic={
  'name':'rafi',
  'age':24
}
print(dic)
print(dic['name'])
print(dic.values())
print(dic.keys())

# Section 2.6: Tuple Data Type
tuple=(123,'hello')
tuple1=('world','jh')
print(tuple,tuple1)
print(tuple + tuple1)
# tuple[1]='upda' #this will give you error.