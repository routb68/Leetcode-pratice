class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        temp = []
        for i in range(len(names)):
            temp.append([heights[i],names[i]])
        temp.sort(reverse=True)
        for i in range(len(names)):
            names[i]= temp[i][1]
        return names