class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        int n =nums.size();
        int dp[n];
        dp[0]=nums[0];dp[1]=max(nums[0],nums[1]);
        int ans = max(dp[0],dp[1]);
        for(int i=2;i<n;++i){
            if(i==2)dp[i]=dp[i-2];
            else dp[i] = max(dp[i-3],dp[i-2]);
            dp[i]+=nums[i];
            ans =max(ans,dp[i]);
        }
        return ans;
    }
};