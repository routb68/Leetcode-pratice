class Solution:
    def sortTheStudents(self, scr: List[List[int]], k: int) -> List[List[int]]:
        temp =[]
        for i in range(len(scr)):
            temp.append([scr[i][k],i])
            # print(scr[i][k])
        temp.sort(reverse=True)
        # print(temp)
        res = []
        for i in range(len(temp)):
            res.append(scr[temp[i][1]])
        return res