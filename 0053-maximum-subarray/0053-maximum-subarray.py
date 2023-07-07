class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans, psum = -1e18,0
        for i in nums:
            psum+=i
            ans = max(psum,ans)
            psum = max(0,psum)
        return ans