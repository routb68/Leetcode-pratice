class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int n =mat.size(),m=mat[0].size(),ans = 0;;
        vector<vector<int>>dp(n,vector<int>(m));
        
        for(int i=0;i<n;++i){ 
            dp[i][0]=mat[i][0]-'0'; 
            if(dp[i][0]) ans =1;
        }
        // cout<<endl;
        for(int i=0;i<m;++i) {
            dp[0][i]=mat[0][i]-'0'; 
            if(dp[0][i]) ans =1;
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                dp[i][j]=0;
                if(mat[i][j]-'0'){
                    dp[i][j]= (mat[i][j]-'0')+ min({dp[i-1][j],
                                              dp[i-1][j-1],dp[i][j-1]});
                    ans = max(ans,dp[i][j]);
                }
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
       return ans*ans;
    }
};