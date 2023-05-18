class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool dp[nums.size()];
        dp[0]=true;
        for(int i=1;i<nums.size();++i){
            dp[i]=false;
            for(int j=i-1;j>=0;--j){
                if(nums[j]+j>=i and dp[j]){
                    dp[i]=true;
                    break;
                }
            }
            if(dp[i]==false) return false;
        }
        return dp[nums.size()-1];
    }
};