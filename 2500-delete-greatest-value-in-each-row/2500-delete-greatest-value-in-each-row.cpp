class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto &x:grid){
            sort(begin(x),end(x));
        }
        int ans=0;
        for(int i=0;i<grid[0].size();++i){
            priority_queue<int>pq;
            for(int j=0;j<grid.size();++j){
                pq.push(grid[j][i]);
            }
            ans += pq.top();
        }
        return ans;
    }
};