class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mb) {
        int res=0;
        for(int i=0;i<nums.size();++i){
            res^=nums[i];
        }
        int x=(1<<mb)-1;
        vector<int>v;
        for(int i=nums.size()-1;i>=0;--i){
            v.push_back(res^x);
            res^=nums[i];
        }
        return v;
    }
};