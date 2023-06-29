class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        ans = 0
        lst = []
        fst = []
        for i in range (len(nums)):
            lst.append(nums[i]%10);
            while nums[i] > 9:
                nums[i]//=10
        for i in range (len(nums)):
            for j in range(i+1,len(nums)):
                if  gcd(nums[i],lst[j]) == 1:
                    ans +=1
        return ans