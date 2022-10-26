class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        x=0
        for i in range (len(nums)+1):
            x^=i
            if i != len(nums):
                x^=nums[i]
        return x
        