class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt = 0;
        for (int &x:nums){
            if((x % 2) ==0){
                ++cnt;
            }
            if(cnt>1) return true;
        }
        return false;
    }
};