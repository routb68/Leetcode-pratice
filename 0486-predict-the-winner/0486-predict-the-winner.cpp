class Solution {
public:
    int dp[21][21];
    int com(vector<int>&v,int l,int r,bool p){
        if(l>r) return 0;
        if(l==r) return v[l];
        if(dp[l][r]==-1){
            if(p)
                dp[l][r]=max(v[l]+com(v,l+1,r,false),v[r]+com(v,l,r-1,false));
            else
                dp[l][r]=min(-v[l]+com(v,l+1,r,true),-v[r]+com(v,l,r-1,true));
        }
        return dp[l][r];
    }
    bool PredictTheWinner(vector<int>& nums) {
        for(int i=0;i<21;++i){
            for(int j=0;j<21;++j){
                dp[i][j]=-1;
            }
        }
        return com(nums,0,nums.size()-1,true)>=0;
    }
};