class Solution {
public:
    int dp[21][21];
    int com(vector<int>&v,int l,int r){
        if(l==r) return v[l];
        if(l>r) return 0;
        if(dp[l][r]==-1){
            dp[l][r]=max(v[l]+min(com(v,l+2,r),com(v,l+1,r-1)),
                        v[r]+min(com(v,l,r-2),com(v,l+1,r-1)));
        }
        return dp[l][r];
    }
    bool PredictTheWinner(vector<int>& nums) {
        for(int i=0;i<21;++i){
            for(int j=0;j<21;++j)
                dp[i][j]=-1;
        }
        int x=com(nums,0,nums.size()-1);
        return (x>=accumulate(begin(nums),end(nums),0)-x);
    }
};