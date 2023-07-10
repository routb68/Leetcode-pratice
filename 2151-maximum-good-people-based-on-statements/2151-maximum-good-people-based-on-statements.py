class Solution:
    def maximumGood(self, st: List[List[int]]) -> int:
        def go(good):
            for i in range(len(st)):
                if good[i]:
                    for j in range(len(st)):
                        if i==j:
                            continue;
                        if st[i][j]==1 and good[j]==False:
                            return False
                        if st[i][j]==0 and good[j]==True:
                            return False
            return True
        good = [False for x in range(len(st))]
        ans = 0 
        n = 1<<len(st)
        for i in range(n):
            for j in range(len(st)):
                if(i & (1<<j)):
                    good[j]=True
                else:
                    good[j]=False
            if go(good)==True:
                ans = max(ans,good.count(True))
        return ans