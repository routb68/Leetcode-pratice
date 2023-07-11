class Solution:
    def customSortString(self, order: str, s: str) -> str:
        hashset = {}
        for x in s:
            if x in hashset:
                hashset[x]+=1
            else :
                hashset[x] =1
        ans = ""
        for x in order :
            if x in hashset:
                ans += x*hashset[x]
                hashset.pop(x)
        for x in hashset:
            ans +=x*hashset[x]
        return ans