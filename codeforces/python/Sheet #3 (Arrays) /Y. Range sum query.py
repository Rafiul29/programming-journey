NandQ=[int(n) for n in input().split()]
arr=[int(n) for n in input().split()]

for i in range(NandQ[1]):
    LandR=[int(n) for n in input().split()]
    splitArr=arr[LandR[0]-1:LandR[1]]
    sum=0
    for i in range(len(splitArr)):
        sum+=splitArr[i]
    print(sum)




