class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        ans = 0
        def com(idx, temp):
            nonlocal ans
            if(idx==len(nums)):
                ans += temp
                return
            com(idx+1,temp)
            com(idx+1,temp^nums[idx])
        com(0,0)
        return ans