class Solution {
public:
    int tar,cnt;
    void go(vector<int>&v,int idx,int sum){
        if(idx==v.size()){
            if(sum==tar)++cnt;
            return;
        }
        go(v,idx+1,sum+v[idx]);
        go(v,idx+1,sum-v[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        tar=target,cnt=0;
        go(nums,0,0);
        return cnt;
    }
};