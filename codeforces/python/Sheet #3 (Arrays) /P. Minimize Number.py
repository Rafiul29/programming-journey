n=int(input())
arr=[int(x) for x in input().split()]

operation=0
flag=True

while True:
    for i in range(0,len(arr)):
        if arr[i]%2==1:
            flag=False
            break
        else:
            arr[i]=arr[i]//2
    if flag==False:
        break
    else:
        operation+=1

print(operation)
