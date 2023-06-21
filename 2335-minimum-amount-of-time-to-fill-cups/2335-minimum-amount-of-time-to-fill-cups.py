class Solution:
    def fillCups(self, a: List[int]) -> int:
        ans = 0
        while(max(a)!=0):
            a.sort()
            a[1]-=1
            a[2]-=1
            ans+=1
        return ans