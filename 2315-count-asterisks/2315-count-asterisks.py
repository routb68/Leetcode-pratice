class Solution:
    def countAsterisks(self, s: str) -> int:
        bar, ans = 0,0
        for x in s:
            if x=='|':
                bar+=1
            if x =='*':
                if bar %2==0 :
                    ans +=1
        return ans