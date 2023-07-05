class Solution:
    def minBitFlips(self, a: int, b: int) -> int:
        cnt = 0
        while(a>0 or b>0):
            if( (a&1)!=(b&1)):
                cnt+=1
            # print(a,b)
            a = a>>1
            b = b>>1
        return cnt