class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        v = [0]
        x = 0
        for i in range(len(arr)):
            x^=arr[i]
            v.append(x)
        ans = 0
        for i in range(len(arr)):
            for j in range(i+1,len(arr)):
                if(v[i]==v[j+1]):
                    ans += (j-i)
        return ans