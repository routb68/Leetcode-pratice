class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = [[]]
        n = 1<<len(nums)
        for i in range(1,n):
            res = []
            for j in range (len(nums)):
                if(i & ( 1<<j)):
                    res.append(nums[j])
            ans.append(res)
        return ans