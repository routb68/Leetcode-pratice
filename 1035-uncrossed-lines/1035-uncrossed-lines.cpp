class Solution {
public:
    int dp[505][505];
    int go (vector<int>&v1,vector<int>&v2,int a,int b){
        if(dp[a][b]!=-1) return dp[a][b];
        if(a== 0 or b==0) 
            return dp[a][b]=0;
        if(v1[a-1]==v2[b-1]) 
            return dp[a][b]= 1+ go(v1,v2,a-1,b-1);
        return dp[a][b]=max({go(v1,v2,a-1,b),
                    go(v1,v2,a,b-1),
                    go(v1,v2,a-1,b-1)});
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<=nums1.size();++i){
            for(int j=0;j<=nums2.size();++j){
                dp[i][j]=-1;
            }
        }
        return go(nums1,nums2,
                  nums1.size(),
                  nums2.size());
    }
};