class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        def check(x, ok):
            if ok :
                if x==0:
                    return 1
                else :
                    return 0
            return x
        def go (n,k):
            if n==0 :
                return 0 
            ok = False
            if k%2==1:
                ok = True
            x = go(n-1,k//2)
            return check(x,ok)
        return go(n-1,k-1)