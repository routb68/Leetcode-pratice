class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()<2) return accumulate(begin(nums),end(nums),0ll);
        int dp[10001];
        for(int i=0;i<10001;++i)dp[i]=0;
        for(int &x:nums)dp[x]+=x;
        int dp1[10001];
        dp1[0]=0,dp1[1]=max(dp[0],dp[1]);
        for(int i=2;i<10001;++i){
            dp1[i]=max(dp[i]+dp1[i-2],dp1[i-1]);
        }
        return dp1[10000];
    }
};