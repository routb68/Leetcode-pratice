class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=nums.size()-1;
        while(idx>0 and nums[idx-1]>=nums[idx]) --idx;
        --idx;
        if(idx<0){
            reverse(begin(nums),end(nums));
            return;
        }
        int a=nums.size()-1;
        while(nums[a]<=nums[idx])--a;
        swap(nums[a],nums[idx]);
        reverse(begin(nums)+idx+1,end(nums));
    }
};