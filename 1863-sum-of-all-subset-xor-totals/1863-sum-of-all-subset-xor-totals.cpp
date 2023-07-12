class Solution {
public:
    int ans ;
    void com(vector<int>&nums,int idx,int temp){
        if(idx==nums.size()){
            ans+=temp;
            return;
        }
        com(nums,idx+1,temp);
        com(nums,idx+1,temp^nums[idx]);
    }
    int subsetXORSum(vector<int>& nums) {
        ans =0;
        com(nums,0,0);
        return ans;
    }
};