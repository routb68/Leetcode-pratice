class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();++i){
            if(nums[i]>v.back()){
                v.push_back(nums[i]);
            }else{
                int idx = lower_bound(begin(v),end(v),nums[i])-v.begin();
                // cout<<idx<<endl;
                v[idx]=nums[i];
            }
        }
        return v.size();
    }
};