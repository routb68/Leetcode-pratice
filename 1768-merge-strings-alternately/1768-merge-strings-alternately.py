class Solution:
    def mergeAlternately(self, w1: str, w2: str) -> str:
        m = ""
        i = 0
        while i < min(len(w1),len(w2)):
            m+=w1[i]
            m+=w2[i]
            i+=1
        while i <len(w1):
            m+=w1[i]
            i+=1
        while i<len(w2):
            m+=w2[i]
            i+=1
        return m
        