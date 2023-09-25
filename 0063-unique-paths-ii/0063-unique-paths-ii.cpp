class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n =obs.size(),m=obs[0].size();
        int dp[n][m];
        bool ok =false;
        for(int i=0;i<m;++i){
            if(ok){
                dp[0][i]=0;
            }else{
                if(obs[0][i]==0){
                    dp[0][i]=1;
                }else{
                    dp[0][i]=0;
                    ok = true;
                }
            }
        }
        ok = false;
        for(int i=0;i<n;++i){
            if(ok){
                dp[i][0]=0;
            }else{
                if(obs[i][0]==0){
                    dp[i][0]=1;
                }else{
                    dp[i][0]=0;
                    ok= true;
                }
            }
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                if(obs[i][j]==1) dp[i][j]=0;
            }
        }
        return dp[n-1][m-1];
    }
};