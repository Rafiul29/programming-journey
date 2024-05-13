class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums.sort()
        m=1
        for i in nums:
            if i==m:
                m+=1
        return m

