class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int64_t sum = 0,d = k+k+1;
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
            if(i+1>=d){
                if(i>=d){
                    sum-=nums[i-d];
                }
                ans[i-k]=sum/d;
            }
        }
        return ans;
    }
};