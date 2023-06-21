class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(begin(nums),end(nums));
        int ans =0;
        vector<long long>v(nums.size());
        for(int i=0;i<nums.size();++i){
            ans+=nums[i];
            v[i]=ans;
        }
        long long res = INT_MAX;
        for(int i=0;i<nums.size();++i){
            long long x = ((long long)nums[i]*(i+1))-v[i];
            x+=(ans-v[i]) - (nums[i]*(nums.size()-i-1));
            res = min(res,x);
        }
        return res;
    }
};