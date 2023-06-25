class Solution:
    def longestString(self, x: int, y: int, z: int) -> int:
        ans = z
        if(max(x,y)==min(x,y)):
            ans +=(2*min(x,y))
        else:
            ans +=1
            ans +=(2*min(x,y))
        return ans*2