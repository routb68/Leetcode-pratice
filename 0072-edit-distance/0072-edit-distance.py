class Solution:
    def minDistance(self, s1: str, s2: str) -> int:
        m = len(s1)
        n = len(s2)
        dp = [ [ 0 for x in range(m+1)] for y in range (n+1)]
        for x in range (m+1):
            dp[0][x]=x
        for y in range (n+1):
            dp[y][0]=y
        for y in range (1,n+1):
            for x in range (1,m+1):
                if(s1[x-1]==s2[y-1]):
                    dp[y][x] = dp[y-1][x-1]
                else :
                    dp[y][x]= 1 +min(dp[y-1][x],dp[y-1][x-1],dp[y][x-1])
                # print(dp[y][x],end=" ")
            # print()
        return dp[n][m]