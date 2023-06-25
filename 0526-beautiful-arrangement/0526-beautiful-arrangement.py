class Solution:
    def countArrangement(self, n: int) -> int:
        seen = [False for i in range (16)]
        # print(seen[10])
        res = 0
        def go(n,pos):
            nonlocal seen
            nonlocal res
            if(pos>n):
                res+=1
                print(res)
                return 
            for i in range(1,n+1):
                # print(seen[i])
                if(seen[i]==False and (i%pos==0 or pos%i==0)):
                    seen[i]=True
                    go(n,pos+1)
                    seen[i]=False
        if(n<4):
            return n
        go(n,1)
        return res