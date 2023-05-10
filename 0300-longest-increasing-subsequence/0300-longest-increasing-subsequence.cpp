class Solution {
public:
    int cellidx(vector<int>&v,int lo,int hi,int val){
        while(hi>lo){
            int m = lo + (hi-lo)/2;
            if(v[m]>=val){
                hi=m;
            }else{
                lo=m+1;
            }
        }
        return hi;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();++i){
            if(nums[i]>v.back()){
                v.push_back(nums[i]);
            }else{
                int c= cellidx(v,0,v.size()-1,nums[i]);
                v[c]=nums[i];
            }
        }
        return v.size();
    }
};