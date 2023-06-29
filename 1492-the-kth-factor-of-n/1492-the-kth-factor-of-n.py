class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        arr  =[]
        for i in range(1,int((n)/2)+1):
            if n%i==0:
                arr.append(i)
        arr.append(n)
        # print(arr)
        if(len(arr)<k):
            return -1
        return arr[k-1]