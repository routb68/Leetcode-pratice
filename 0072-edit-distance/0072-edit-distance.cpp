class Solution {
public:
    int dp[505][505];
    int go(string s1,string s2,int m,int n){
        if(dp[m][n]!=-1) return dp[m][n];
        if(m==0 or n==0) return dp[m][n]=max(m,n);
        if(s1[m-1]==s2[n-1]) return dp[m][n]=go(s1,s2,m-1,n-1);
        return dp[m][n]=1+min({go(s1,s2,m-1,n),go(s1,s2,m,n-1),go(s1,s2,m-1,n-1)});
    }
    int minDistance(string word1, string word2) {
        for(int i=0;i<505;++i){
            for(int j=0;j<505;++j){
                dp[i][j]=-1;
            }
        }
        return go (word1,word2,word1.size(),word2.size());
    }
};