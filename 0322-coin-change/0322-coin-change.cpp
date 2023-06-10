class Solution {
public:
    int coinChange(vector<int>& cs, int amt) {
        // sort(begin(cs),end(cs));
        int n=cs.size();
        int dp[amt+1];
        dp[0]=0;
        for(int i=1;i<=amt;++i){
            dp[i]=INT_MAX;
            for(int j=0;j<n;++j){
                if(i>=cs[j]){
                    if(dp[i-cs[j]]!=INT_MAX){
                        dp[i]=min(dp[i],dp[i-cs[j]]+1);
                    }
                }
            }
        }
        if(dp[amt]==INT_MAX) return -1;
        return dp[amt];
    }
};