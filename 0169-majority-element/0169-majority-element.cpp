class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0],cnt =0;
        for(int &x:nums){
            if(ans==x)++cnt;
            else{
                --cnt;
                if(cnt==0){
                    ans=x;
                    cnt =1;
                }
            }
        }
        return ans;
    }
};