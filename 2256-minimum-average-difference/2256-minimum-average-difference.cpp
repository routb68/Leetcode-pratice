class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int64_t psum=0,posum=0;
        posum=accumulate(begin(nums),end(nums),posum);
        int res=0,ans=posum;
        for(int i=0;i<nums.size();++i){
            psum+=nums[i];
            posum-=nums[i];
            //int a=((psum/i+1)-(posum/(nums.size()-i-1)));
            int a= psum/(i+1);
            int b=0;
            if(i!=nums.size()-1){
                b=posum/(nums.size()-1-i);
            }
            if(ans>abs(b-a)){
                ans=abs(b-a);
                res=i;
                //cout<<ans<<endl;
            }
        }
        return res;
    }
};