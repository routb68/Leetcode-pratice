class Solution {
public:
    unordered_map<int,int>ump;
    int go(vector<int>& nums,int t){
        if(ump.find(t)!=ump.end()) return ump[t];
        if(t==0){
            return 1 ;
        }
        int ans =0;
        for(int i=0;i<nums.size();++i){
            if(t>=nums[i]){
                ans += go(nums,t-nums[i]);
            }
        }
        return ump[t]=ans;
    }
    int combinationSum4(vector<int>& nums, int t) {
        return go(nums,t);
    }
};