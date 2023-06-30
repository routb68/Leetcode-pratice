class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = [0 for i in range(len(nums))]
        cnt = 0
        mul = 1
        for i in nums:
            if i==0:
                cnt+=1
            else :
                mul *=i
        if cnt == 0 :
            for i in range (len(nums)):
                ans[i] = mul//nums[i]
        elif cnt == 1 :
            for i in range(len(nums)):
                if nums[i]== 0:
                    ans[i] = mul
        return ans