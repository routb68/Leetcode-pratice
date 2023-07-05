class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        for i in range(0,32,2):
            if(n==(1<<i)):
                return True
        return False