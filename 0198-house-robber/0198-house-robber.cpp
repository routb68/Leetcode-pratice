class Solution {
public:
    int dp[105];
    int go(vector<int>&v,int idx){
        if(dp[idx]!=-1) return dp[idx];
        if(idx==1) return dp[idx]=v[0];
        if(idx==2) return dp[idx]=max(v[0],v[1]);
        return dp[idx]=max(go(v,idx-1),go(v,idx-2)+v[idx-1]);
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<105;++i)dp[i]=-1;
        return go(nums,nums.size());
    }
};