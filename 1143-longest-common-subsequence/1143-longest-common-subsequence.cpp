class Solution {
public:
    int dp[1001][1001];
    int go(string &s1,string &s2,int a,int b){
        if(dp[a][b]!=-1) return dp[a][b];
        int &ans = dp[a][b];
        if(a==0 or b==0) return dp[a][b] =0;
        if(s1[a-1]==s2[b-1]) return dp[a][b]=1+go(s1,s2,a-1,b-1);
        return dp[a][b] = max(go(s1,s2,a,b-1),go(s1,s2,a-1,b));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return go(text1,text2,text1.size(),text2.size());
    }
};