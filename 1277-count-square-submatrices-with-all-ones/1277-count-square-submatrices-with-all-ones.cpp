class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int a=m.size(),b=m[0].size();
        int dp[a][b];
        int ans=0;
        for(int i=0;i<a;++i){
            dp[i][0]=m[i][0];
            ans+=dp[i][0];
        }
        for(int i=1;i<b;++i){
            dp[0][i]=m[0][i];
            ans+=dp[0][i];
        }
        for(int i=1;i<a;++i){
            for(int j=1;j<b;++j){
                if(m[i][j]==0){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=1+min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
                }
                ans+=dp[i][j];
            }
        }
        return ans;
    }
};