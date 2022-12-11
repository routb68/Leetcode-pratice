class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();++i){
            sort(begin(grid[i]),end(grid[i]));
        }
        int ans=0;
        for(int i=0;i<grid[0].size();++i){
            int res=INT_MIN;
            for(int j=0;j<grid.size();++j){
                res=max(res,grid[j][i]);
            }
            ans+=res;
        }
        return ans;
    }
};