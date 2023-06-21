class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(begin(nums),end(nums));
        long long sum =0;
        vector<long long>v;
        for(int &x:nums){
            sum+=x;
            v.push_back(sum);
        }
        vector<long long>ans;
        for(int &x1:queries){
            long long x = x1;
            int idx = upper_bound(begin(nums),end(nums),x)-nums.begin();
            cout<<idx<<" ";
            long long lo =0;
            if(idx==0){
                ans.push_back(sum-(x*nums.size()));
                continue;
            }
            if(idx==v.size()){
                ans.push_back(nums.size()*(long long)(x)-sum);
                continue;
            }
            lo = v[idx-1];
            long long res = (-lo + x*(idx-1));
            lo = sum - v[idx-1];
            res+= (lo - x*(nums.size()-idx-1));
            ans.push_back(res);
        }
        return ans;
    }
};