class Solution:
    def countHomogenous(self, s: str) -> int:
        temp ,ans, mod = 1,0,1e9+7
        for i in range(1,len(s)):
            if s[i]==s[i-1]:
                temp+=1
            else : 
                ans += (((temp*(temp+1))//2))
                ans %=mod
                temp = 1
        ans += (((temp*(temp+1))//2))
        ans %=mod
        return int(ans )