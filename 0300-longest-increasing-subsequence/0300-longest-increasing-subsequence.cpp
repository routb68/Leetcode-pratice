class Solution {
public:
    int cellidx(int *dp,int low,int hi,int ele){
        while(low<hi){
            int m = low + (hi-low)/2;
            if(dp[m]>=ele){
                hi=m;
            }else{
                low =m+1;
            }
        }
        return hi;
    }
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        dp[0]=nums[0];
        int len =1;
        for(int i=1;i<nums.size();++i){
            if(nums[i]>dp[len-1]){
                dp[len]=nums[i];
                ++len;
            }else{
                int idx = cellidx(dp,0,len-1,nums[i]);
                dp[idx]=nums[i];
            }
        }
        return len;
    }
};