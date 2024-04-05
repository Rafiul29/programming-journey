num=int(input())

lst=[int(x) for x in input().split()]


i=0
j=len(lst)-1
isP=True
while i<=j:
    if lst[i]!=lst[j]:
        isP=False
        break
    i=i+1
    j=j-1

if isP:
    print("YES")
else:
    print("NO")

