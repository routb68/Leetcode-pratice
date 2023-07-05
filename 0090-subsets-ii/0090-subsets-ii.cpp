class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> res,ans;
        int n = 1<<nums.size();
        for(int i=0;i<n;++i){
            vector<int>temp;
            for(int j=0;j<nums.size();++j){
                if(i & (1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            res.push_back(temp);
        }
        sort(begin(res),end(res));
        ans.push_back(res[0]);
        for(int i=1;i<res.size();++i){
            if(res[i]!=res[i-1]){
                ans.push_back(res[i]);
            }
        }
        return ans;
    }
};