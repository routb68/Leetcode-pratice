class Solution {
public:
    int go(vector<int>&v,int a,int b){
        int c = b-a;
        int dp[c];
        dp[0]=v[a],dp[1]=max(v[a],v[a+1]);
        for(int i=2;i<c;++i){
            dp[i]=max(dp[i-1],dp[i-2]+v[i+a]);
        }
        return dp[c-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()<=2) return *max_element(begin(nums),end(nums));
        return max(go(nums,0,nums.size()-1),go(nums,1,nums.size()));
    }
};