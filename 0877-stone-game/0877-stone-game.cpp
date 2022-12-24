class Solution {
public:
    int dp[501][501];
    int com(vector<int>v,int l,int r){
        if(l==r) return v[l];
        if(l>r) return 0;
        if(dp[l][r]==-1){
        dp[l][r]= max(v[l]+min(com(v,l+2,r),com(v,l+1,r-1)),
                  v[r]+min(com(v,l+1,r-1),com(v,l,r-2)));
        }
        return dp[l][r];
    }
    bool stoneGame(vector<int>& v) {
        for(int i=0;i<501;++i){
            for(int j=0;j<501;++j)
                dp[i][j]=-1;
        }
        int sum=accumulate(begin(v),end(v),0);
        int osum=com(v,0,v.size()-1);
        return( osum>sum-osum);
    }
};