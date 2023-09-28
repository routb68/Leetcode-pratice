class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<nums.size() and i<j){
            while(i<nums.size() and nums[i]%2!=1){
                ++i;
            }
            while(j>=0 and nums[j]%2!=0){
                --j;
            }
            if(i<j and i<nums.size() and nums[i]%2==1){
                swap(nums[i],nums[j]);
            }
            // cout<<nums[i]<<" "<<nums[j]<<endl;
        }
        return nums;
    }
};