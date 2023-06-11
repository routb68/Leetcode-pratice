class Solution {
public:
    int jump(vector<int>& nums) {
        int dp[nums.size()];
        dp[0]=0;
        for (int i=1;i<nums.size();++i){
            dp[i]=INT_MAX;
            for(int j=0;j<i;++j){
                if(dp[j]!=INT_MAX and nums[j]+j>=i){
                    dp[i]=min(dp[i],dp[j]+1);
                }
            }
            // cout<<dp[i]<<" ";
        }
        if(dp[nums.size()-1]==INT_MAX) return -1;
        return dp[nums.size()-1];
    }
};