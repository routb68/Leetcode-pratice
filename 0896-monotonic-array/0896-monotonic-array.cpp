class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0 ;
        while(i+1<nums.size() and nums[i]==nums[i+1])++i;
        // cout<<i<<endl;
        if(i+1==nums.size()) return true;
        bool ok = true;
        if(nums[i+1]>nums[i])ok = false;
        // cout<<ok<<endl;
        for(int j = i+1;j<nums.size();++j){
            if(nums[j]> nums[j-1] and ok==1) return false;
            if(nums[j]< nums[j-1] and ok== 0 ) return false;
        }
        return true;
    }
};