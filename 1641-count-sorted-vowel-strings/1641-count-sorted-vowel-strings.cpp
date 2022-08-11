class Solution {
public:
    int countVowelStrings(int n) {
      int dp[n+1][5];
        dp[0][0]=5,dp[0][1]=4,dp[0][2]=3,dp[0][3]=2,dp[0][4]=1;
        for(int i=1;i<=n;++i){
            for(int j=4;j>=0;--j){
                int ans=0;
                for(int k=j;k<=4;++k){
                    ans+=dp[i-1][k];
                }
                dp[i][j]=ans;
                cout<<ans<<' ';
            }
            cout<<endl;
        }
        return dp[n-1][0];
    }
};