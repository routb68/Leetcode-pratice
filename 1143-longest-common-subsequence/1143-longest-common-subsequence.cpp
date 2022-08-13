class Solution {
public:
    int dp[1005][1005];
    int longestCommonSubsequence(string t, string s) {
        for(int i=1;i<=t.size();++i){
            for(int j=1;j<=s.size();++j){
                if(t[i-1]==s[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<endl;
        }
        return dp[t.size()][s.size()];
    }
};