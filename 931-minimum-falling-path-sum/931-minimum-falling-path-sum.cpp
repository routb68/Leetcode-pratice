class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int dp[n][m];
        for(int i=0;i<m;++i){
            dp[0][i]=mat[0][i];
        }
        for(int i=1;i<n;++i){
            for(int j=0;j<m;++j){
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                if(j-1>=0){
                    a=dp[i-1][j-1];
                }
                b=dp[i-1][j];
                if(j+1<=m-1){
                    c=dp[i-1][j+1];
                }
                dp[i][j]=min({a,b,c})+mat[i][j];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<m;++i){
            ans=min(ans,dp[n-1][i]);
        }
        return ans;
    }
};