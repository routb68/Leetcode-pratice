class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        dic = {}
        for x in s:
            if x in dic:
                dic[x]+=1
            else :
                dic[x]=1
        cnt = dic[s[0]]
        for x in dic:
            if dic[x]!=cnt:
                return False
        return True