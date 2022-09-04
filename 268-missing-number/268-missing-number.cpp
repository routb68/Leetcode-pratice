class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<=nums.size();++i){
            ans^=i;
            ans^=nums[i-1];
        }
        return ans;
    }
};