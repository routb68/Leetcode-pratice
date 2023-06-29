class Solution:
    def subarrayLCM(self, nums: List[int], k: int) -> int:
        ans = 0
        for i in range ( len(nums)):
            x = nums[i]
            if(x==k):
                ans+=1
            for j in range(i+1,len(nums)):
                x = math.lcm(x,nums[j])
                if(x==k):
                    ans+=1
                if(x>k):
                    break
        return ans