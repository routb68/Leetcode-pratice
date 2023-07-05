class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        v =[]
        for i in range(len(s)):
            if(s[i].isalpha()):
                v.append(i)
        ans = []
        n = 1<<len(v)
        for i in range(n):
            arr = [0 for x in range(len(s))]
            for j in range(len(v)):
                if(i & (1<<j)):
                    arr[v[j]]=1
            s1=""
            for x in range(len(s)):
                if(s[x].isalpha()):
                    if(arr[x]):
                        s1+= s[x].upper()
                    else:
                        s1+=s[x].lower()
                else:
                    s1+=s[x]
            ans.append(s1)
        return ans