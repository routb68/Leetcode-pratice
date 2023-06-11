class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n=len(nums)
        dp = [0 for x in range(n)]
        dp[0] = nums[0]
        len1 =1
        def cell(low:int,hi:int,ele:int)->int:
            while(low<hi):
                m = low +(hi-low)//2
                if(dp[m]>=ele):
                    hi = m
                else :
                    low = m+1
            return hi
        for i in range(1,len(nums)):
            if(nums[i]>dp[len1-1]):
                dp[len1]=nums[i]
                len1+=1
            else:
                idx = cell(0,len1-1,nums[i])
                dp[idx]=nums[i]
        return len1