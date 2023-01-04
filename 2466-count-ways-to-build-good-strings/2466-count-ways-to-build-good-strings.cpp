class Solution {
public:
    const int mod= 1e9+7;
    int countGoodStrings(int low, int high, int z, int o) {
        vector<int64_t> dp(high+1);
        ++dp[z];
        ++dp[o];
        int64_t ans=0;
        for(int i=min(z,o);i<=high;++i){
            if(i-z>0) dp[i]+=dp[i-z];
            if(i-o>0) dp[i]+=dp[i-o];
            dp[i]=(dp[i]%mod);
            if(i>=low){
                ans+=dp[i];
                ans%=mod;
            }
        }
        return ans;
    }
};