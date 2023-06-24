class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        unordered_map<int,int>dp;
        dp[0]=0;
        for(int &x:rods){
            unordered_map<int,int>temp=dp;
            for (auto it:temp){
                int d = it.first;
                dp[d+x] = max(dp[d+x],temp[d]);
                dp[abs(d-x)] = max(dp[abs(d-x)],temp[d]+min(d,x));
            }
        }
        return dp[0];
    }
};