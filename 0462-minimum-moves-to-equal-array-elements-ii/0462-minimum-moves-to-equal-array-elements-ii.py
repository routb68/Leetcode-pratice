class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        ans =0
        v = []
        for i in range (len(nums)):
            ans += nums[i]
            v.append(ans)
        res = 1e18
        for i in range (len(nums)):
            x = (nums[i]*(i+1))- v[i]
            x += ((ans - v[i]) - (nums[i] * (len(nums)-i-1)))
            res = min(res,x)
        return res
            