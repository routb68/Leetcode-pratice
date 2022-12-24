class Solution {
public:
    int dp[2][5005];
    int com(vector<int>&v,int idx,int ok){
        if(idx>= v.size()) return 0;
        if(dp[ok][idx]==-1){
            int ans=com(v,idx+1,ok);
        int res;
        if(ok){
            res=-v[idx]+com(v,idx+1,0);
        }else{
            res=v[idx]+com(v,idx+2,1);
        }
        dp[ok][idx] = max(res,ans);
        }
        return dp[ok][idx];
    }
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<2;++i)
            for(int j=0;j<5005;++j)
                dp[i][j]=-1;
        return com(prices,0,1);
    }
};