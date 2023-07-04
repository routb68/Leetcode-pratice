class Solution {
public:
    vector<vector<int>>res;
    void go(vector<int>&nums,vector<int>temp,int idx){
        if(idx==nums.size()){
            res.push_back(temp);
            return ;
        }
        go(nums,temp,idx+1);
        temp.push_back(nums[idx]);
        go(nums,temp,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        vector<int>temp;
        go(nums,temp,0);
        return res;
    }
};