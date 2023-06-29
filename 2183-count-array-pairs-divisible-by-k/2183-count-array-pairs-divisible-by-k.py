from math import gcd
class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        ump = {}
        ans = 0
        for i in range(len(nums)):
            currgcd = gcd(nums[i],k)
            for x in ump:
                x1 = int(x)
                if ( x1* currgcd) %k==0:
                    ans+= ump[x]
            if currgcd in ump:
                ump[currgcd]+=1
            else:
                ump[currgcd] =1
        return ans