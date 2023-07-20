class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        dp[0]=1;
        for(int i=1;i<nums.size();++i){
            dp[i]=1;
            for(int j=0;j<i;++j){
                if(nums[j]<nums[i]){
                    dp[i]= max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp,dp+nums.size());
    }
};