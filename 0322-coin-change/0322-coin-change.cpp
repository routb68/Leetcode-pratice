class Solution {
public:
    int coinChange(vector<int>& cs, int amt) {
        int dp[amt+1];
        dp[0]=0;
        for(int i=1;i<=amt;++i){
            dp[i]=INT_MAX;
            for(int j=0;j<cs.size();++j){
                if(cs[j]<=i){
                    int sub_res=dp[i-cs[j]];
                    if(sub_res!=INT_MAX){
                        dp[i]=min(dp[i],sub_res+1);
                    }
                }
            }
        }
        if(dp[amt]==INT_MAX) return -1;
        return dp[amt];
    }
};