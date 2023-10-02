class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        int64_t ans =0;
        vector<int64_t>pmax(n),smax(n);
        pmax[0]=nums[0];
        for(int i=1;i<n;++i){
            int64_t x= nums[i];
            pmax[i]=max(pmax[i-1],x);
        }
        smax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i){
            int64_t x = nums[i];
            smax[i]=max(x,smax[i+1]);
        }
        for(int i=1;i<n-1;++i){
            int64_t x = (pmax[i-1]-nums[i])*smax[i+1];
            // cout<<pmax[i-1]<<" "<<nums[i]<<" "<<smax[i+1]<<endl;
            // cout<<i<<" "<<x<<endl;
            ans = max(ans,x);
        }
        return ans;
    }
};