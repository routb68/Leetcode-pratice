class Solution {
public:
    int go(vector<int>&nums,int d){
        unordered_map<int,int>dp;
        dp[nums[0]] =1;
        int ans =1;
        for(int i=1;i<nums.size();++i){
            if (dp.find(nums[i] - d) != dp.end()) {
                dp[nums[i]] = max(dp[nums[i] - d] + 1, (dp.find(nums[i]) == dp.end() ? 0 : dp[nums[i]]));
            } else {
                dp[nums[i]] = 1;
            }
            ans = max(ans, dp[nums[i]]);
        }
        
               return ans;
    }
    int longestArithSeqLength(vector<int>& nums) {
        int diff = *max_element(begin(nums),end(nums)) - 
            *min_element(begin(nums),end(nums));
        int res = 0;
        for(int i=-diff;i<=diff;++i){
            res = max(res,go(nums,i));
        }
        return res;
    }
};