class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 1;
        i=0
        j=1
        while(j<len(nums)):
            if(nums[j]==nums[j-1]):
                j+=1
            else :
                i+=1
                nums[i]=nums[j];
                j+=1
        return i+1;