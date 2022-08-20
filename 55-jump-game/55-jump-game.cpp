class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cr=0;
        for(int i=0;i<=cr;++i){
            if(cr>=nums.size()-1){
                return true;
            }
            cr=max(cr,i+nums[i]);
        }
        return false;
    }
};