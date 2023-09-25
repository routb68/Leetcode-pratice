class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        c = 0
        for _ in s:
            c = (c^ ord (_))
        for _ in t:
            c = (c^ord(_))
        return chr(c)