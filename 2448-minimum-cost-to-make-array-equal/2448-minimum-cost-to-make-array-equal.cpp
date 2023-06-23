class Solution {
public:
    long long go(vector<int>&nums,vector<int>&cost,long long x){
        long long ans =0;
        for(int i=0;i<nums.size();++i){
            ans+=(cost[i]*(abs(nums[i]-x)));
        }
        return ans;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long low = *min_element(begin(nums),end(nums));
        long long high = *max_element(begin(nums),end(nums));
        long long res = go(nums,cost,low);
        while(low<high){
            long long mid = (high+low)/2;
            long long c1 = go(nums,cost,mid),c2=go(nums,cost,mid+1);
            res = min(c1,c2);
            if(c1<c2)
                high = mid;
            else
                low = mid+1;
        }
        return res;
    }
};