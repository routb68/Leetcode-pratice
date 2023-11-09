class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i,j,cnt = 0,0,0 
        while i<len(nums):
            if nums[i]!=val:
                nums[j]=nums[i]
                j+=1
                i+=1
                cnt +=1
            else:
                i+=1
        return cnt