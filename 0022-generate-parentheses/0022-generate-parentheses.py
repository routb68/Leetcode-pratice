class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        def go(s,l,h):
            if l==h and l==n :
                ans.append(s);
                return
            if h>l or l>n:
                return
            go(s+'(',l+1,h)
            go(s+')',l,h+1)
        go("",0,0)
        return ans