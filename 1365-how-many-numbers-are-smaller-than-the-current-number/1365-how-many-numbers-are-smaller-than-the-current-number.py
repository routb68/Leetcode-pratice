class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans= []
        i=0
        for num in nums:
            res=0
            for num1 in nums:
                if num1<num:
                    res+=1
            ans.insert(i,res)
            i+=1
        return ans;