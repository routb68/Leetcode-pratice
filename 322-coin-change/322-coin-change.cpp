class Solution {
public:
    int coinChange(vector<int>& cs, int am) {
        int dp[am+1];
        dp[0]=0;
        for(int i=1;i<=am;++i){
            dp[i]=INT_MAX;
            for(int &x:cs){
                if(x<=i){
                    if(dp[i-x]!=INT_MAX)
                    dp[i]=min(dp[i],dp[i-x]+1);
                }
            }
        }
        if(dp[am]==INT_MAX)return -1;
        return dp[am];
    }
};