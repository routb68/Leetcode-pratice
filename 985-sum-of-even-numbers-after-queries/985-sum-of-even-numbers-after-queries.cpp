class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int res=0;
        for(int &x:nums){
            if((x&1)==0){
                res+=x;
            }
        }
        vector<int>ans(q.size());
        for(int i=0;i<q.size();++i){
            if((nums[q[i][1]] & 1)==0){
                res-=nums[q[i][1]];
            }
            nums[q[i][1]]+=q[i][0];
            if((nums[q[i][1]] & 1)==0){
                res+=nums[q[i][1]];
            }
            ans[i]=res;
        }
        return ans;
    }
};