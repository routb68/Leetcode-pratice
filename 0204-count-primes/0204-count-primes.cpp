class Solution {
public:
    int countPrimes(int n) {
        bool p[n+1];
        memset(p,true,sizeof(p));
        for(long long i=2;i<n;++i){
            if(p[i]){
                for(long long j = i*i;j<n;j+=i){
                    p[j]=false;
                }
            }
        }
        int ans =0;
        for(long long i=2;i<n;++i){
            if(p[i])++ans;
        }
        return ans;
    }
};