from itertools import permutations
class Solution:
    def permutate(self,nums):
      p=permutations(nums)
      ans=[]
      for n1 in p:
        ans.append(list(n1))
      print(ans)
        

Solution.permutate(2,[1,2,3])

for i, val in (enumerate