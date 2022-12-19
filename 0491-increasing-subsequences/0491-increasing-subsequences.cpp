class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n=nums.size(),x;
        vector<vector<int>> res;
        set<vector<int>>us;
        int n1=(1<<n);
        for(int i=1;i<=n1;++i){
            x=i;
            //cout<<i<<" ";
            vector<int>v;
            for(int j=0;j<n;++j){
                if(x & (1<<j)) v.push_back(nums[j]);
            }
            bool ok =true;
            for(int k=1;k<v.size();++k){
                if(v[k-1]>v[k]) ok=false;
            }
            if(ok and v.size()>1) us.insert(v);
        }
        for( auto a:us) res.push_back(a);
        return res;
        
        
    }
};