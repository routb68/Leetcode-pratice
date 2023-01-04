class Solution {
public:
    int countHousePlacements(int n) {
        int64_t mod = 1e9+7;
        int64_t dp[10004][2];
        for(int i=0;i<10004;++i)
            for(int j=0;j<2;++j)
                dp[i][j]=-1;
        dp[1][0]=1;dp[1][1]=1;
        for(int i=2;i<=n;++i){
            for(int j=0;j<2;++j){
                if(j==0) dp[i][j]= (dp[i-1][0]+dp[i-1][1])%mod;
                else dp[i][j]=dp[i-1][0];
            }
        }
        int64_t ans= (dp[n][0]+dp[n][1])%mod;
        return (ans*ans)%mod;
    }
};