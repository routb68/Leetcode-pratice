class Solution {
public:
    int coinChange(vector<int>& cs, int amt) {
        int dp[amt+1];
        for(int i=0;i<=amt;++i){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1;i<=amt;++i){
            for(int j=0;j<cs.size();++j){
                if(cs[j]<=i and dp[i-cs[j]]!=INT_MAX){
                    dp[i] = min(1+dp[i-cs[j]],dp[i]);
                }
            }
        }
        if(dp[amt]==INT_MAX) return -1;
        return dp[amt];                         
    }
};