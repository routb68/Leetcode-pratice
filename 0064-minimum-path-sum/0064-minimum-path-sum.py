class Solution:
    def minPathSum(self, gd: List[List[int]]) -> int:
        n,m = len(gd), len(gd[0])
        dp = [[0 for _ in range(m)] for i in range(n)]
        dp[0][0] = gd[0][0]
        for _ in range(1,m):
            dp[0][_]= dp[0][_-1]+gd[0][_]
        for _ in range(1,n):
            dp[_][0] = dp[_-1][0]+ gd[_][0]
        for i in range(1,n):
            for j in range(1,m):
                dp[i][j] = gd[i][j] + min(dp[i-1][j],dp[i][j-1])
        # print(dp)
        return dp[n-1][m-1]