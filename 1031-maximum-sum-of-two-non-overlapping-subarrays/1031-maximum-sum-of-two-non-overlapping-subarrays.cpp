class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int fln, int sln) {
        int res=INT_MIN;
        for(int i=0;i<=nums.size()-fln-sln;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=nums[j];
            }
            for(int j=i+fln;j<i+fln+sln;++j){
                sum2+=nums[j];
            }
            res=max(res,sum1+sum2);
            int low=i+fln,high=i+fln+sln;
            while(high<nums.size()){
                sum2-=nums[low];
                sum2+=nums[high];
                ++low;++high;
                res=max(sum1+sum2,res);
            }
        }
        swap(fln,sln);
        for(int i=0;i<=nums.size()-fln-sln;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=nums[j];
            }
            for(int j=i+fln;j<i+fln+sln;++j){
                sum2+=nums[j];
            }
            res=max(res,sum1+sum2);
            int low=i+fln,high=i+fln+sln;
            while(high<nums.size()){
                sum2-=nums[low];
                sum2+=nums[high];
                ++low;++high;
                res=max(sum1+sum2,res);
            }
        }
        return res;
    }
};