class Solution {
public:
    int ans ;
    void dp_update(vector<vector<int>>& sts,vector<vector<int>>& mts,vector<vector<int>>&dp){
        int n = sts.size();
        for( int i=0;i<n;++i){
            int cnt =0;
            for( int j=0;j<n;++j){
               for(int k=0;k<sts[0].size();++k){
                   if(sts[i][k]==mts[j][k])++cnt;
               }
                dp[i][j]=cnt;
                cnt=0;
            }
            
        }
    }
    void com(vector<vector<int>>&dp,int n,int st,int mt,int temp){
        if(st==n){
            // cout<<temp<<endl;
            ans = max(ans,temp);
            return;
        }
        for( int i=0;i<n;++i){
            if((mt & (1<<i))==0){
                com(dp,n,st+1,mt|(1<<i),temp+dp[st][i]);
            }
        }
    }
    int maxCompatibilitySum(vector<vector<int>>& sts, vector<vector<int>>& mts) {
        int n = mts.size();
        vector<vector<int>> dp(n,vector<int>(n));
        dp_update(sts,mts,dp);
        ans =0;
        com(dp,n,0,0,0);
        return ans;
    }
};