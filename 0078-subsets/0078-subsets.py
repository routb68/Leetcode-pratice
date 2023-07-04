class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        def go(temp,idx):
            if(idx==len(nums)):
                res.append(temp)
                return
            go(temp,idx+1)
            go(temp+[nums[idx]],idx+1)
        go([],0)
        return res