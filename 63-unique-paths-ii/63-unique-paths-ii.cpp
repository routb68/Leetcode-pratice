class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0;i<n;++i){
            if(v[i][0]){
                break;
            }else{
                dp[i][0]=1;
            }
        }
        for(int i=0;i<m;++i){
            if(v[0][i]){
                break;
            }else{
                dp[0][i]=1;
            }
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                if(v[i][j]){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
                }
            }
        }
        return dp[n-1][m-1];
    }
};