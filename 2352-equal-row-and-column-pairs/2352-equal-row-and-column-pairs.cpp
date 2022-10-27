class Solution {
public:
    int equalPairs(vector<vector<int>>& gd) {
        int n = gd.size(),ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                int k=0;
                while(k<n and gd[k][i]==gd[j][k])++k;
                if(k==n) ++ans;
            }
        }
        return ans;
    }
};