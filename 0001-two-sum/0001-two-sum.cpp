class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>ump;
        vector<int>v;
        for(int i=0;i<nums.size();++i){
            if(ump.find(tar-nums[i])!=ump.end()){
                v.push_back(i);
                v.push_back(ump[tar-nums[i]]);
                return v;
            }
            ump[nums[i]]=i;
        }
        return v;
    }
};