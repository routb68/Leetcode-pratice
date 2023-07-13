class Solution:
    def twoSum(self, nums: List[int], tar: int) -> List[int]:
        low, high = 0,len(nums)-1
        while(low<high):
            if nums[low]+nums[high]==tar:
                return [low+1,high+1]
            if nums[low] + nums[high]>tar:
                high-=1
            else:
                low+=1
        return [0,0]