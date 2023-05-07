class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_set<int>us;
        vector<int>pre(nums.size()),suff(nums.size());
        for(int i=0;i<nums.size();++i){
            us.insert(nums[i]);
            pre[i]=us.size();
        }
        us.clear();
        for(int i=nums.size()-1;i>=0;--i){
            suff[i]=us.size();
             us.insert(nums[i]);
        }
        for(int i=0;i<nums.size();++i){
            int a=pre[i]-suff[i];
            pre[i]=a;
        }
        return pre;
    }
};