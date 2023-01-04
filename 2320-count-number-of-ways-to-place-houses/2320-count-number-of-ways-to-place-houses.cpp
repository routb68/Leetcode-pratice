class Solution {
public:
    int64_t mod = 1e9+7;
    int64_t dp[10004][2];
    int64_t com(int n,int ok){
        if(n==1) return 1;
        if(dp[n][ok]!=-1 )return dp[n][ok];
        if(ok) dp[n][ok]= com(n-1,0);
        else dp[n][ok]= (com(n-1,0)+com(n-1,1))%mod;
        return dp[n][ok];
    }
    int countHousePlacements(int n) {
        for(int i=0;i<10004;++i)
            for(int j=0;j<2;++j)
                dp[i][j]=-1;
        int64_t ans=(com(n,0)+com(n,1));
        return (ans*ans)%mod;
    }
};