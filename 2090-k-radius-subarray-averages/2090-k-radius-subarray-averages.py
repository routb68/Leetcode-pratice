class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        arrsum,d=0,k+k+1
        ans = [-1 for i in range(len(nums))]
        for i in range(len(nums)):
            arrsum+=nums[i]
            if i+1>=d:
                if i>=d:
                    arrsum-=nums[i-d]
                ans[i-k] = (arrsum//d)
        return ans