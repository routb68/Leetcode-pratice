class Solution {
public:
    int dp[1002][1002];
    int go (string &s1, string &s2,int m,int n){
        if(dp[m][n]!=-1) return dp[m][n];
        if(n==0 or m==0) return dp[m][n]=0;
        if(s1[m-1]==s2[n-1]) return dp[m][n]= 1 + go(s1,s2,m-1,n-1);
        return dp[m][n]=max(go(s1,s2,m,n-1),go(s1,s2,m-1,n));
    }
    int longestCommonSubsequence(string t1, string t2) {
        for(int i=0;i<1002;++i){
            for(int j=0;j<1002;++j){
                dp[i][j]=-1;
            }
        }
        return go(t1,t2,t1.length(),t2.length());
    }
};