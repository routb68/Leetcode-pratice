class Solution:
    def isFascinating(self, n: int) -> bool:
        m = n
        cnt= 0
        arr = []
        while(m):
            if(m%10  in arr):
                return False
            else:
                arr.append(m%10)
            m//=10;
        m = 2*n
        while(m):
            if(m%10  in arr):
                return False
            else:
                arr.append(m%10)
            m//=10;
        m = 3*n
        while(m):
            if(m%10  in arr):
                return False
            else:
                arr.append(m%10)
            m//=10;
        # print(len(arr))
        if(0 in arr):
            return False
        return len(arr)==9