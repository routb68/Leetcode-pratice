class Solution:
    def maxProduct(self, s: str) -> int:
        def go (t1):
            n = len(t1)
            dp = [[0 for x in range (n+1)]for y in range (n+1)]
            t2 = t1[::-1]
            for i in range(1,n+1):
                for j in range (1,n+1):
                    if(t1[i-1]==t2[j-1]):
                        dp[i][j] = dp[i-1][j-1]+1
                    else :
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1])
            return dp[n][n]
        r = 1<<(len(s))
        res = 0
        for i in range (r+1):
            s1 = ""
            s2 = ""
            for j in range (len(s)):
                if(i & (1<<j)):
                    s1+=s[j]
                else :
                    s2 += s[j]
            res = max(res,go(s1)*go(s2))
        return res