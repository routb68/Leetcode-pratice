class Solution {
public:
    vector<vector<int>> dp;
    const int mod =1e9+7;
    int64_t go(int64_t a,int64_t b){
        if(a==0 and b==0) return 1;
        if(a<0 or b<0 or b<a) return 0;
        if(dp[a][b]) return dp[a][b];
        long long ans =0;
        ans += (a*(go(a-1,b)));
        ans%=mod;
        ans += ((b-a)*go(a,b-1));
        ans %=mod;
        dp[a][b]=ans;
        return ans;
    }
    int countOrders(int n) {
        dp = vector<vector<int>> (n + 1, vector<int>(n + 1, 0));
        return go(n,n);
    }
};