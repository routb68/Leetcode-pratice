class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int th) {
        int res =0,cnt =0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<=th){
                if(cnt and nums[i]%2 !=nums[i-1]%2)
                    ++cnt;
                else if(cnt and nums[i]%2 ==nums[i-1]%2){
                    if(nums[i]%2==0)cnt=1;
                    else 
                        cnt =0;
                }
                else if(nums[i]%2==0 and cnt ==0){
                    ++cnt;
                }
            }else
                cnt =0;
            res = max(res,cnt);
        }
        return res;
    }
};