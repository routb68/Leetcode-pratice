class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        for(int i=0;i<nums.size();++i){
            int idx = upper_bound(begin(nums),end(nums),tar-nums[i])-nums.begin();
            cout<<idx<<endl;
            if(idx-1<nums.size() and nums[idx-1]==tar-nums[i]){
                vector<int>v;
                v.push_back(i+1);
                v.push_back(idx);
                return v;
            }
        }
        return {};
    }
};