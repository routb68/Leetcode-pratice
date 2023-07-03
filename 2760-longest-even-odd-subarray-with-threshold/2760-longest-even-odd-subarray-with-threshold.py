class Solution:
    def longestAlternatingSubarray(self, nums: List[int], th: int) -> int:
        res =0
        cnt =0
        for i in range(len(nums)):
            if(nums[i]<=th):
                if(cnt >0 and nums[i]%2 != nums[i-1]%2):
                    cnt +=1
                elif (cnt >0 and nums[i]%2==nums[i-1]%2):
                    if(nums[i]%2 ==1):
                        cnt =0
                    else :
                        cnt =1
                elif (cnt ==0 and nums[i]%2==0):
                    cnt =1
            else :
                cnt =0
            res = max(res,cnt)
        return res