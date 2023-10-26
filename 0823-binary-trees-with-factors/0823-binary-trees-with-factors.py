class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        arr.sort()
        mod = 1e9 + 7
        n = len(arr)
        dp = [ 1 for i in range(n)]
        dic = {}
        for i in range(n):
            dic[arr[i]] = i
        for i in range(1,n):
            temp = 0 
            for j in range(0,i):
                if arr[i]%arr[j]==0 :
                    x = arr[i]//arr[j]
                    if x in dic:
                        temp += int ((dp[j]*dp[dic[x]])%mod)
            temp %= mod 
            dp[i] += temp
        ans = 0 
        for i in dp:
            ans += i
        return int (ans%mod )
        