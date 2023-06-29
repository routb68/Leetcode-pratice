class Solution {
public:
    int dp[1001][1001];
    const int mod =1e9+7;
    int go(int k,int dist){
        if(k<=dist){
            if(k==dist) return 1;
            return 0;
        }
        if(dp[k][dist]==-1){
            dp[k][dist] = ( go(k-1,dist+1)+go(k-1,abs(dist-1)))%mod;
        }
        return dp[k][dist];
    }
    int numberOfWays(int startPos, int endPos, int k) {
        for(int i=0;i<1001;++i)
            for (int j=0;j<1001;++j)
                dp[i][j]=-1;
        return go(k,abs(startPos-endPos));
    }
};