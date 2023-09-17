class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        map<int,int>ump;
        for(int &x:nums)++ump[x];
        int cnt =0;
        for (auto [x,y]:ump)cnt =max(cnt,y);
        if(cnt<=nums.size()/2){
            return nums.size() %2;
        }
        return cnt+cnt-nums.size();
    }
};