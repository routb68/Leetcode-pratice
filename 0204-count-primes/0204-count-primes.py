class Solution:
    def countPrimes(self, n: int) -> int:
        prime_arr = [True for x in range (n+1)]
        for i in range (2,n):
            if prime_arr[i]==True:
                for j in range ( i*i,n,i):
                    prime_arr[j] = False
        ans = 0
        # print(prime_arr)
        for i in range(2,n):
            if prime_arr[i]==True:
                ans+=1
        return ans