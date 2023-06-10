class Solution:
    def coinChange(self, cs: List[int], amt: int) -> int:
        dp = [1e18]*(amt+1)
        dp[0]=0
        for i in range(amt+1):
            for x in cs:
                if(i>=x):
                    dp[i]=min(dp[i], dp[i-x]+1)
        if(dp[amt]==1e18):
            return -1;
        return dp[amt];