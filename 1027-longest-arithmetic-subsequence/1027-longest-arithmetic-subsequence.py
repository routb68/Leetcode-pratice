class Solution:
    def longestArithSeqLength(self, nums: List[int]) -> int:
        def go(d):
            dp ={nums[0]:1}
            ans = 1
            for i in range(1,len(nums)):
                if (nums[i]-d) in dp:
                    x = 0
                    if(nums[i]) in dp:
                        x= dp[nums[i]]
                    dp[nums[i]] = max(dp[nums[i] - d] + 1, x)
                else :
                    dp[nums[i]] = 1
                ans = max(dp[nums[i]],ans)
            return ans
                    
        diff = max(nums) - min(nums)
        res = 0
        for i in range(-diff,diff+1):
            res = max(res,go(i))
        return res