class Solution:
    def maximalSquare(self, mat: List[List[str]]) -> int:
        ans = 0
        dp = [[0 for _ in range(len(mat[0]))] for __ in range(len(mat))]
        for i in range(len(mat[0])):
            if(mat[0][i]=='1'):
                dp[0][i]=1
                ans = 1
        for i in range(len(mat)):
            if(mat[i][0]=='1'):
                dp[i][0]=1
                ans =1
        for i in range(1, len(mat)):
            for j in range(1,len(mat[0])):
                if(mat[i][j]=='1'):
                    dp[i][j]= 1+ min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))
                    ans = max(ans,dp[i][j])
        return ans*ans