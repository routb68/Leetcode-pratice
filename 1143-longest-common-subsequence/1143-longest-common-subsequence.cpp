class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int dp[1001][1001];
        for(int i=0;i<1001;++i)dp[i][0]=0;
        for(int j=0;j<1001;++j)dp[0][j]=0;
        for(int i=1;i<=s1.size();++i){
            for(int j=1;j<=s2.size();++j){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                // cout <<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
        return dp[s1.size()][s2.size()];
    }
};