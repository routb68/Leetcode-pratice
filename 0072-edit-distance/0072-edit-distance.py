class Solution:
    
    def minDistance(self, word1: str, word2: str) -> int:
        dp = {}
        def go(s1:str,s2:str,m:int,n:int)-> int:
            if (m,n) in dp:
                return dp[(m,n)]
            if(m==0 or n==0):
                return max(n,m)
                # return dp[m][n]
            if(s1[m-1]==s2[n-1]):
                ans=go(s1,s2,m-1,n-1)
                # return dp[m][n]
            else :
                ans=1+min(go(s1,s2,m,n-1),go(s1,s2,m-1,n),go(s1,s2,m-1,n-1))
            dp[(m,n)]=ans
            return ans
            # return dp[m][n]
        return go(word1,word2,len(word1),len(word2))