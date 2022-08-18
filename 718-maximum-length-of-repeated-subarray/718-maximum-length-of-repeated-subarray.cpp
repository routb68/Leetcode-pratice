class Solution {
public:
    int dp[1010][1010];
    int findLength(vector<int>& n1, vector<int>& n2) {
        int res=0;
        for(int i=1;i<=n1.size();++i){
            for(int j=1;j<=n2.size();++j){
                if(n1[i-1]==n2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                res=max(dp[i][j],res);
                //cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return res;
    }
};