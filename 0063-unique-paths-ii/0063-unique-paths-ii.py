class Solution:
    def uniquePathsWithObstacles(self, obs: List[List[int]]) -> int:
        n, m = len(obs),len(obs[0])
        dp = [ [0 for _ in range(m)] for y in range(n)]
        
        # print(dp)
        ok = False
        for i in range(n):
            if ok :
                dp[i][0] = 0
            else :
                if obs[i][0]==1:
                    ok = True
                    dp[i][0] = 0
                else :
                    dp[i][0]=1
        ok = False
        for j in range(m):
            if ok :
                dp[0][j] = 0
            else :
                if obs[0][j] == 1:
                    ok = True
                    dp[0][j]=0
                else :
                    dp[0][j] = 1
        for i in range(1,n):
            for j in range(1,m):
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
                if obs[i][j] == 1:
                    dp[i][j] = 0
                    
        return dp[n-1][m-1]
                    