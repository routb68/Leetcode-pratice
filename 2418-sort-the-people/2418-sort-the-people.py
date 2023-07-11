class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        temp = []
        for i in range(len(names)):
            temp.append([heights[i],names[i]])
        temp.sort()
        idx =0
        for i in reversed(range(len(names))):
            names[idx]= temp[i][1]
            idx+=1
        return names