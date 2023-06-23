class Solution:
    def minCost(self, nums: List[int], cost: List[int]) -> int:
        def go(x):
            ans = 0
            nonlocal cost
            nonlocal nums
            for i in range(len(nums)):
                ans +=(cost[i]*(abs(nums[i]-x)))
            return ans
        low = min(nums)
        high = max(nums)
        res = go(low)
        while(low<high):
            mid = (low+high)//2
            c1 = go(mid)
            c2 = go(mid+1)
            res = min(c1,c2)
            if c1<c2 :
                high = mid
            else :
                low = mid+1
        return res