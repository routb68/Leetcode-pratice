class Solution:
    def maxSatisfaction(self, s: List[int]) -> int:
        s.sort()
        ans =0
        res=0
        for i in range(len(s)-1,-1,-1):
            if(res+s[i]>0):
                res+=s[i]
                ans+=res
            else:
                return ans 
        return ans