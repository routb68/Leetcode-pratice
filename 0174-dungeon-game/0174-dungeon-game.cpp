class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>&v) {
        int dp[201][201];
        dp[v.size()-1][v[0].size()-1]= v[v.size()-1][v[0].size()-1];
        if(dp[v.size()-1][v[0].size()-1]<=0)dp[v.size()-1][v[0].size()-1]=1- 
            v[v.size()-1][v[0].size()-1];
        else dp[v.size()-1][v[0].size()-1]=1;
        for(int i=v.size()-2;i>=0;--i){
            dp[i][v[0].size()-1]=dp[i+1][v[0].size()-1]-v[i][v[0].size()-1];
            if(dp[i][v[0].size()-1]<=0) dp[i][v[0].size()-1]=1;
        }
        for(int i=v[0].size()-2;i>=0;--i){
            dp[v.size()-1][i]=dp[v.size()-1][i+1]-v[v.size()-1][i];
            if(dp[v.size()-1][i]<=0) dp[v.size()-1][i]=1;
        }
        for(int i=v.size()-2;i>=0;--i)
            for(int j=v[0].size()-2;j>=0;--j){
                dp[i][j]=min(dp[i+1][j],dp[i][j+1]);
                dp[i][j]-=v[i][j];
                if(dp[i][j]<=0) dp[i][j]=1;
            }
        return dp[0][0];
    }
};