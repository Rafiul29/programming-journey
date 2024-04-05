from math import *
num=int(input())

lst=[int(x) for x in input().split()]
mi=min(lst)
mx=max(lst)

minIndex=lst.index(mi)
maxIndex=lst.index(mx)
lst[minIndex]=mx
lst[maxIndex]=mi

print(' '.join(str(x) for x in lst))
