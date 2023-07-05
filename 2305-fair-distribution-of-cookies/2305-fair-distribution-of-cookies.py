class Solution:
    def distributeCookies(self, c: List[int], k: int) -> int:
        ans = 1e18
        def go(temp,idx):
            nonlocal ans
            if(idx==len(c)):
                res =0
                for x in temp:
                    res=max(res,x)
                ans = min(ans,res)
                return
            for i in range(len(temp)):
                temp[i]+=c[idx]
                go(temp,idx+1)
                temp[i]-=c[idx]
                if(temp[i]==0):
                    break
        temp = [0 for x in range(k)]
        go(temp,0)
        return ans
    