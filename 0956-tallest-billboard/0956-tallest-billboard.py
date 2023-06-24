class Solution:
    def tallestBillboard(self, rods: List[int]) -> int:
        dp = {0 :0}
        for x in rods:
            d = dp.copy()
            for f,s in d.items():
                dp[f+x] = max(dp.get(x+f,0),s)
                dp[abs(f-x)] = max(dp.get(abs(x-f),0),s+min(f,x))
        return dp.get(0)