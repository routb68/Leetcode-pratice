class Solution:
    def numberOfWays(self, startPos: int, endPos: int, k: int) -> int:
        dp = [[-1 for x in range(1001)] for y in range(1001)]
        mod = 1e9+7
        def go(k,dis):
            if(k<=dis):
                if(k==dis):
                    return 1
                return 0
            if(dp[k][dis]==-1):
                dp[k][dis] = (go(k-1,dis+1)+ go(k-1,abs(dis-1)))%mod
            return int(dp[k][dis])
        return int(go(k,abs(startPos-endPos)))