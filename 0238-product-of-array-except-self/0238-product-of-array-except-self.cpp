class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(nums.size());
        int cnt =0,mul=1;
        for(int &x:nums){
            if(x==0)++cnt;
            else mul*=x;
        }
        //cout<<cnt<<endl;
        if(cnt==0){
            for(int i=0;i<nums.size();++i){
                v[i]= mul/nums[i];
            }
        }else if (cnt ==1){
            for(int i=0;i<nums.size();++i){
                if(nums[i]==0)v[i]=mul;
            }
        }
        return v;
    }
};