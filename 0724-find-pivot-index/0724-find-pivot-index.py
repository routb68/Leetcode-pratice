class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        ans = 0
        for i in nums :
            ans +=i
        res = 0
        print(ans)
        for i in range(len(nums)):
            if res+res==ans-nums[i]:
                return i
            res+=nums[i]
            
        return -1