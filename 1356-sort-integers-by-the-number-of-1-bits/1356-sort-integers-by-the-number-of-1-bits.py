class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        temp = []
        for i in range(len(arr)):
            cnt = 0
            num = arr[i]
            while(num):
                if ( num & 1):
                    cnt+=1
                num = num>>1
            temp.append([cnt,arr[i]])
        temp.sort()
        for i in range(len(arr)):
            arr[i]= temp[i][1]
        return arr