class Solution:
    def interchangeableRectangles(self, r: List[List[int]]) -> int:
        ans = 0
        dic = {}
        for i in range(len(r)):
            x = r[i][0]
            y = r[i][1]
            z = x/y
            if z in dic:
                ans+=dic[z]
                dic[z]+=1
            else:
                dic[z]=1
        return ans