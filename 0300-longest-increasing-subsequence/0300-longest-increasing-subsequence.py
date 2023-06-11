class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        dp = [ 0 for x in range(len(nums))]
        dp[0]=1
        for x in range(1,len(nums)):
            dp[x]=1
            for y in range(x):
                if(nums[y]<nums[x]):
                    dp[x]=max(dp[x],dp[y]+1)
        return max(dp)