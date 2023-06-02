class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        int a=nums[0],b=max(nums[0],nums[1]),ans=b;
        for(int i=2;i<nums.size();++i){
            int temp = max(b,a+nums[i]);
            a=b,b=temp,ans=temp;
        }
        return ans;
    }
};