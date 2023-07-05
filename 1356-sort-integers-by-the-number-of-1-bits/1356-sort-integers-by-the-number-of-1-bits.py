class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:              
        def count_ones(n):
            count = 0
            for i in range(14):
                if (n & (1<<i)):
                    count+=1
            return count
        lst = [];
        for i in arr:
            lst.append([count_ones(i),i])
        lst.sort()
        ans = []
        for i in range(len(lst)):
            ans.append(lst[i][1])
        return ans