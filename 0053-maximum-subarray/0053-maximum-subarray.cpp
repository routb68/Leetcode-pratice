class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans =INT_MIN,psum=0;
        for(int &x:nums){
            psum+=x;
            ans=max(ans,psum);
            psum=max(0,psum);
        }
        return ans;
    }
};