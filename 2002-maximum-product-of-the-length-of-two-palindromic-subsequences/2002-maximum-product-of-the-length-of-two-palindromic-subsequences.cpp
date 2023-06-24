class Solution {
public:
    int go(string &t1){
        string t2;
        for(int i=t1.length()-1;i>=0;--i) t2+=t1[i];
        int m=t1.length(),n=t2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;++i) dp[i][0]=0;
        for(int j=0;j<=n;++j) dp[0][j]=0;
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                if(t1[i-1]==t2[j-1]) dp[i][j]= 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    int maxProduct(string s) {
        int n = 1<<(s.length());
        int res =0;
        for(int i=0;i<=n;++i){
            string s1,s2;
            for(int j=0;j<s.length();++j){
                if((i) & (1<<j)){
                    s1+=s[j];
                }else{
                    s2+=s[j];
                }
            }
            int a1 = go(s1),a2 = go(s2);
            res = max(res,a1*a2);
        }
        return res;
    }
};