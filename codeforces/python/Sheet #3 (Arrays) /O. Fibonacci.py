n=int(input())
lst=[0,1]
i=2
while i<n:
    lst.append(lst[i-1]+lst[i-2])
    i+=1

print(str(lst[n-1]))
