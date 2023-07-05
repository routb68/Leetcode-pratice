class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans =0,temp=-1;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();++i){
            ans ^=(i+1);
            ans ^=nums[i];
            if(i>0 and nums[i]==nums[i-1]){
                temp = nums[i];
            }
        }
        return {temp,ans^temp};
    }
};