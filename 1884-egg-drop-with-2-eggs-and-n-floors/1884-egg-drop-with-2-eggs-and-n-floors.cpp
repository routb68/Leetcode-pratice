class Solution {
public:
    int twoEggDrop(int n) {
        int f=n,egg=2;
        int dp[egg+1][f+1];
        for(int i=1;i<=egg;++i){
            dp[i][0]=0;
            dp[i][1]=1;
        }
        for(int i=0;i<=f;++i){
            dp[1][i]=i;
        }
        for(int i =2;i<=f;++i){
            for(int j=2;j<=egg;++j){
                dp[j][i]=INT_MAX;
                for(int x=1;x<=i;++x){
                    dp[j][i]=min(dp[j][i],1+max(dp[j-1][x-1],dp[j][i-x]));
                }
            }
        }
        return dp[egg][f];
        
    }
};