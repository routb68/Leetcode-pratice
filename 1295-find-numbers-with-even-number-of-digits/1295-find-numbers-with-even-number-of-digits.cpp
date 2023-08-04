class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0,cnt =0;
        for (int &x:nums){
            cnt =0;
            while(x){
                x/=10;
                ++cnt;
            }
            if(!(cnt &1)){
                ++ans;
            }
        }
        return ans;
    }
};