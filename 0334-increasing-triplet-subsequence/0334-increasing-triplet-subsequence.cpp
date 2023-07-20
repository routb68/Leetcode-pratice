class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smlest=INT_MAX,sml=INT_MAX;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<smlest){
                smlest=nums[i];
            }else if (nums[i]<sml and nums[i]>smlest){
                sml=nums[i];
            }else if (nums[i]>sml and nums[i]>smlest){
                return true;
            }
        }
        return false;
    }
};