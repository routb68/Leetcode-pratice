class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cn0=0,l=0,res=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0)++cn0;
            while(cn0>k){
                if(nums[l]==0)--cn0;
                ++l;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};