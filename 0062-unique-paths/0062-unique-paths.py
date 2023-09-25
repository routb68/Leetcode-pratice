class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [[0 for _ in range(m)] for x in range(n)]
        # print(dp)
        for i in range(n):
            # t=0
            dp[i][0]=1
        for i in range(m):
            # t=0
            dp[0][i]=1
        for i in range (1,n):
            for j in range(1,m):
                # t=0
                dp[i][j]= dp[i-1][j]+dp[i][j-1]
        # print(dp)
        return dp[n-1][m-1]