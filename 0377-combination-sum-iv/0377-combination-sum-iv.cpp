class Solution {
public:
    int dp[1001];
    int go(vector<int>& nums,int t){
        if(dp[t]!=-1) return dp[t];
        if(t==0){
            return 1 ;
        }
        int ans =0;
        for(int i=0;i<nums.size();++i){
            if(t>=nums[i]){
                ans += go(nums,t-nums[i]);
            }
        }
        return dp[t]=ans;
    }
    int combinationSum4(vector<int>& nums, int t) {
        for(int i=0;i<t+2;++i){
            dp[i]=-1;
        }
        return go(nums,t);
    }
};