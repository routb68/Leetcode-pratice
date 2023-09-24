class Solution {
public:
    int minCostClimbingStairs(vector<int>& cs) {
        int n = cs.size();
        int dp[n+1];
        dp[0]=0,dp[1]=0;
        for(int i=2;i<=n;++i){
            dp[i]=min(cs[i-1]+dp[i-1],cs[i-2]+dp[i-2]);
        }
        return dp[n];
    }
};