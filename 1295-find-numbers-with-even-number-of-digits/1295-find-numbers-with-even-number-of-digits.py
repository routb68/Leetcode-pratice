class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        cnt , ans = 0,0
        for x in nums:
            cnt = 0
            while x:
                x//=10
                cnt+=1
            if cnt %2==0:
                ans +=1
        return ans