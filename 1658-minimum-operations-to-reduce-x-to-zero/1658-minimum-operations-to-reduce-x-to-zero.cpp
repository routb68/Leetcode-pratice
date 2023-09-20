class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(accumulate(begin(nums),end(nums),0ll)<x) return -1;
        unordered_map<int,int>ump;
        int ssum =0;
        int idx=0;
        ump[ssum]=idx;
        for(int i=nums.size()-1;i>=0;--i){
            ssum+=nums[i];
            ++idx;
            ump[ssum]=idx;
            if(ssum>x)break;
        }
        int psum=0,ans=INT_MAX;
        if(ump.find(x)!=ump.end())ans=ump[x];
        for(int i=0;i<nums.size();++i){
            psum+=nums[i];
            if(psum>x)break;
            if(ump.find(x-psum)!=ump.end()){
                ans = min(ans,i+1+ump[x-psum]);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};