class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if(len(nums)<2):
            return True
        pos=0
        can_reach =0
        jump = 0
        while(True):
            max_reach = pos
            for x in range(pos,can_reach+1):
                max_reach = max(max_reach,x+nums[x])
            jump+=1
            if(max_reach>=len(nums)-1):
                return True
            if(max_reach<=can_reach):
                return False
            pos=can_reach+1
            can_reach=max_reach
        return False