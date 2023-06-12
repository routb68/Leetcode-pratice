class Solution:
    def doesValidArrayExist(self, derived: List[int]) -> bool:
        a =0
        for x in derived:
            a = (a^x)
        if(a==0):
            return True
        return False