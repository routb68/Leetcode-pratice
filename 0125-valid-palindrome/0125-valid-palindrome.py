class Solution:
    def isPalindrome(self, s: str) -> bool:
        i = 0
        j = len(s)-1
        while (j>i):
            while (s[i].isalnum()== False and j>i):
                i+=1
            while(s[j].isalnum()==False and j>i):
                j-=1
            if(s[i].lower() != s[j].lower()):
                return False
            j-=1
            i+=1
        return True