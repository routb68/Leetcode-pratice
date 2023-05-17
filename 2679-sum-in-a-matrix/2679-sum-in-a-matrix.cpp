class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();++i){
            sort(begin(nums[i]),end(nums[i]));
        }
        int ans=0;
        for(int i=0;i<nums[0].size();++i){
            int res=-1;
            for(int j=0;j<nums.size();++j){
                res=max(res,nums[j][i]);
            }
            ans+=res;
        }
        return ans;
    }
};