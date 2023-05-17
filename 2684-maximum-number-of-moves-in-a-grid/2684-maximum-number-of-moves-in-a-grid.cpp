class Solution {
public:
    int dp[1005][1005];
	int go(vector<vector<int>> &v, int i, int j) {
        if(dp[i][j]!=-1) return dp[i][j];
		if (j == v[0].size() - 1) return dp[i][j]=0;
		int a = 0, b = 0, c = 0;
		if (i - 1 >= 0 and v[i - 1][j + 1] > v[i][j])
			a = 1 + go(v, i - 1, j + 1);
		if (v[i][j + 1] > v[i][j]) 
            b = 1 + go(v, i, j + 1);
		if (i + 1 < v.size() and v[i + 1][j + 1] > v[i][j])
			c = 1 + go(v, i + 1, j + 1);
        //cout<<a<<endl;
		return dp[i][j]=max({a, b, c});
	}
	int maxMoves(vector<vector<int>> &grid) {
		int ans = 0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                dp[i][j]=-1;
            }
        }
		for (int i = 0; i < grid.size(); ++i) {
			ans = max(ans, go(grid, i, 0));
		}
        // for(int i=0;i<grid.size();++i){
        //     for(int j=0;j<grid[0].size();++j){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
		return ans;
	}
};