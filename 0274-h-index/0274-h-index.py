class Solution:
    def hIndex(self, cs: List[int]) -> int:
        c = [0 for i in range(1001)]
        for i in cs:
            c[i]+=1
        for i in reversed(range(999)):
            c[i]+=c[i+1]
        for i in reversed(range(1000)):
            if c[i]>=i :
                return i
        return 0