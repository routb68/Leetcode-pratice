class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        map<int,int>ump;
        for(int i=0;i<nums.size();++i){
            if(ump.find(tar-nums[i])!=ump.end()){
                return {i,ump[tar-nums[i]]};
            }
            ump[nums[i]]=i;
        }   
        return {};
    }
};