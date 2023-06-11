class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int pos=0,can_reach=0,jump=0;
        while(true){
            int max_reach=pos;
            for(int i=pos;i<=can_reach;++i){
                max_reach = max(max_reach,i+nums[i]);
            }
            ++jump;
            if(max_reach>=nums.size()-1){
                return jump;
            }
            pos=can_reach+1;
            can_reach=max_reach;
        }
        return 0;
    }
};