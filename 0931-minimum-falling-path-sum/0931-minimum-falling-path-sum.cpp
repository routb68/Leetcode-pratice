class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n,vector<int>(n));
        for(int i=0;i<n;++i){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;++i){
            for (int j=0;j<n;++j){
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                a = dp[i-1][j];
                if(j-1>=0)b= dp[i-1][j-1];
                if(j+1<n) c= dp[i-1][j+1];
                dp[i][j]= min({a,b,c});
                dp[i][j]+=matrix[i][j];
            }
        }
        return *min_element(begin(dp[n-1]),end(dp[n-1]));
    }
};