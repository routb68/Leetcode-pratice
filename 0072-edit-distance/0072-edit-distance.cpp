class Solution {
public:
	int dp[505][505];
	int go(string s1, string s2, int n, int m) {
		int res;
		if (dp[n][m] == -1) {
            if(n==0) res=m;
            else if (m==0) res=n;
            else if (s1[n - 1] == s2[m - 1])
				res = go(s1, s2, n - 1, m - 1);
			else
				res = 1 + min({go(s1, s2, n - 1, m),go(s1, s2, n - 1, m - 1),
                              go(s1, s2, n, m - 1)});
		}else{
            return dp[n][m];
        }
		return dp[n][m] = res;
	}
	int minDistance(string word1, string word2) {
		for (int i = 0; i < 505; ++i) {
			for (int j = 0; j < 505; ++j) {
				dp[i][j] = -1;
			}
		}
        for(int i=0;i<505;++i) dp[i][0]=i;
        for(int i=0;i<505;++i) dp[0][i]=i;
        int ans =go(word1, word2, word1.length(), word2.length());
        for(int i=0;i<=word1.length();++i){
            for(int j=0;j<=word2.length();++j){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
		return ans;
	}
};