class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        v[0]=1;
        int res=0;
        for(int i=0;i<n;++i){
            int a=1;
            for(int j=i-1;j>=0;--j){
                if(nums[i]>nums[j]){
                    a=max(a,v[j]+1);
                }
            }
            v[i]=a;
            res=max(res,v[i]);
        }
        return res;
    }
};