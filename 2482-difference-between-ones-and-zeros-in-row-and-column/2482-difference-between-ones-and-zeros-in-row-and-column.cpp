class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>row(m);
        vector<int>column(n);
        for(int i=0;i<m;++i){
            int ans=0;
            for(int j=0;j<n;++j){
                ans+=grid[i][j];
            }
            row[i]=ans;
        }
        for(int j=0;j<n;++j){
            int ans=0;
            for(int i=0;i<m;++i){
                ans+=grid[i][j];
            }
            column[j]=ans;
        }
        vector<vector<int>>res(m,vector<int>(n));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                res[i][j]=(2*(row[i]+column[j])-(n+m));
            }
        }
        return res;
    }
};