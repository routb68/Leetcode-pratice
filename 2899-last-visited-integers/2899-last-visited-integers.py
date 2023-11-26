class Solution:
    def lastVisitedIntegers(self, words: List[str]) -> List[int]:
        temp, ans = [], []
        cnt = 0
        for i in range(len(words)):
            if words[i] == "prev":
                cnt += 1
                if len(temp)>=cnt:
                    ans.append(temp[len(temp)-cnt])
                else:
                    ans.append(-1)
            else:
                cnt = 0
                temp.append(int(words[i]))
        return ans
                