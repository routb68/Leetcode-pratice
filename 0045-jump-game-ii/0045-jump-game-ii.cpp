class Solution {
public:
    int jump(vector<int>& nums) {
        int dp[nums.size()];
        dp[0]=0;
        for(int i=1;i<nums.size();++i){
            dp[i]=INT_MAX;
            for(int j=0;j<i;++j){
                if(nums[j]+j>=i){
                    if(dp[j]!=INT_MAX){
                        dp[i]=min(dp[i],dp[j]+1);
                    }
                }
            }
        }
        return dp[nums.size()-1];
    }
};