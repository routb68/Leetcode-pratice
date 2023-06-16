class Solution:
    def minPathCost(self, gd: List[List[int]], mc: List[List[int]]) -> int:
        n = len(gd)
        m = len(gd[0])
        dp = [[-1 for i in range(m)]for j in range (n)]
        def go(r,c):
            if dp[r][c]!=-1:
                return dp[r][c]
            if(r==0):
                dp[r][c] = gd[r][c]
                return dp[r][c]
            x = 1e18
            for i in range (m):
                x = min(x, mc[gd[r-1][i]][c]+go(r-1,i))
            x+=gd[r][c]
            dp[r][c]=x
            return dp[r][c]
        ans = 1e18
        for i in range (m):
            ans = min(ans,go(n-1,i))
        return ans
        