class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,low=0,res=0,no=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0)++no;
            if(no>1){
                while(no>1){
                    if(nums[low]==0)--no;
                   ++low;
                }
            }
            ans=max(i-low+1-no,ans);
        }
        if(ans==nums.size())return ans-1;
        return ans;
    }
};