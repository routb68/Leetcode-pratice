class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        l = []
        for i in range(len(s)):
            if s[i]=='1':
                l.append(i)
        for i in range(1,len(l)):
            if l[i]-l[i-1] >1:
                return False
        return True