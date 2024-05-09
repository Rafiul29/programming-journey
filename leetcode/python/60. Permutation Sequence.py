from itertools import permutations
class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        l=[]
        for num in range(1,n+1):
            l.append(num)
        p=permutations(l)
        for i,value in enumerate(p):
          if i==k-1:
            return ''.join(map(str, value))

res=Solution.getPermutation(3,3,3) 
print(res)



for i in range(0,100):
   print("Again")