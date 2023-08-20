class Solution:
    def countPairs(self, n: List[int], t: int) -> int:
        cnt =0
        for i in range( len(n)):
            for j in range (i+1,len(n)):
                if n[i]+n[j] < t:
                    cnt+=1
        return cnt