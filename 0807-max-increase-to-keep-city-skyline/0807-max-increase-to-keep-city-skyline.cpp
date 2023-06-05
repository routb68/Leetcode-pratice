class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& gd) {
        int n= gd.size(),m=gd[0].size();
        vector<int>row(n),col(m);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                row[i]=max(row[i],gd[i][j]);
                col[j]=max(col[j],gd[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                ans+=(min(row[i],col[j])-gd[i][j]);
            }
        }
        return ans;
    }
};