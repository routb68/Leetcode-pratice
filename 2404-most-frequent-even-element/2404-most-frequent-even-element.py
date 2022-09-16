class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        res=-1
        fr=0
        for x in nums:
            if((x&1)==0):
                fr1=nums.count(x);
                if(fr1>fr):
                    fr=fr1
                    res=x
                elif(fr1==fr):
                    if(res>x):
                        res=x
        return res