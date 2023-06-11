class Solution:
    def jump(self, nums: List[int]) -> int:
        if(len(nums)<2):
            return 0
        pos=0
        can_reach =0
        jump = 0
        while(True):
            max_reach = pos
            for x in range(pos,can_reach+1):
                max_reach = max(max_reach,x+nums[x])
            jump+=1
            if(max_reach>=len(nums)-1):
                return jump
            pos=can_reach+1
            can_reach=max_reach
        return 0