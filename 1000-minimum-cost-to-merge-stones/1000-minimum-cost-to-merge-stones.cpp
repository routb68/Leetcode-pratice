class Solution {
public:
    int mergeStones(vector<int>& stn, int k) {
        int n = stn.size();
        if(k!=2 and n%(k-1)!=1) return -1;
        int dp[n][n];
        for( int i=0;i<n;++i){
            for( int j=0;j<n;++j){
                dp[i][j]=0;
            }
        }
        int psum[n+1];
        psum[0]=0;
        for( int i=0;i<n;++i){
            psum[i+1]=psum[i]+stn[i];
        }
        for( int i=k-1;i<n;++i){
            for( int j=0;j<n-i;++j){
                int temp = INT_MAX;
                for( int s = j;s<j+i;s){
                    temp = min(temp,dp[j][s]+dp[s+1][j+i]);
                    s+=(k-1);
                }
                dp[j][j+i]= temp;
                if(i%(k-1)==0){
                    dp[j][j+i]+=(psum[j+i+1]-psum[j]);
                }
            }
        }
        return dp[0][n-1];
    }
};