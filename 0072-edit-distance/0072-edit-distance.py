class Solution:
    
    def minDistance(self, s1: str, s2: str) -> int:
        dp = {}
        def go(m:int,n:int)-> int:
            if (m,n) in dp:
                return dp[(m,n)]
            if(m==0 or n==0):
                return max(n,m)
                # return dp[m][n]
            if(s1[m-1]==s2[n-1]):
                ans=go(m-1,n-1)
                # return dp[m][n]
            else :
                ans=1+min(go(m,n-1),go(m-1,n),go(m-1,n-1))
            dp[(m,n)]=ans
            return ans
            # return dp[m][n]
        return go(len(s1),len(s2))