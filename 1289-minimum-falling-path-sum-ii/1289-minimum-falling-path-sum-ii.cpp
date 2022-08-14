class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        int dp[n][m];
        for(int i=0;i<m;++i){
            dp[0][i]=arr[0][i];
        }
        for(int i=1;i<n;++i){
            for(int j=0;j<m;++j){
                dp[i][j]=INT_MAX;
                for(int k=0;k<m;++k){
                    if(k!=j){
                        dp[i][j]=min(dp[i-1][k],dp[i][j]);
                    }
                }
                dp[i][j]+=arr[i][j];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<m;++i){
            ans=min(dp[n-1][i],ans);
        }
        return ans;
    }
};