class Solution {
public:
    int tar;
    vector<unordered_map<int,int>>ump;
    int go(vector<int>&v,int idx,int sum){
        if(idx==v.size()){
            if(sum==tar)
            return 1;
            else return 0;
        }
        if(ump[idx].find(sum)!=ump[idx].end()) return ump[idx][sum];
        int pos=go(v,idx+1,sum+v[idx]);
        int neg=go(v,idx+1,sum-v[idx]);
        ump[idx][sum]=pos+neg;
        return pos+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        ump.resize(nums.size()+1);
        tar=target;
        return go(nums,0,0);
    }
};