class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int dp[505][505];
        for(int i=0;i<505;++i) dp[i][0]=0;
        for(int i=0;i<505;++i) dp[0][i]=0;
        for(int i=1;i<=nums1.size();++i){
            for(int j=1;j<=nums2.size();++j){
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]= max({dp[i-1][j],
                                   dp[i][j-1],
                                   dp[i-1][j-1]});
                }
            }
        }
        return dp[nums1.size()][nums2.size()];
    }
};