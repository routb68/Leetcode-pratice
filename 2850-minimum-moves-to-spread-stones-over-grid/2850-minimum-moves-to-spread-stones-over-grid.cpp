class Solution {
public:
    using pii = pair<int, int>;
    vector<pii> zeros, non_one;
    int dp[8][256];
    int N;

    int minimumMoves(vector<vector<int>>& grid) {
        zeros.clear();
        non_one.clear();
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (grid[i][j] == 0) {
                    zeros.emplace_back(i, j);
                } else if (grid[i][j] != 1) {
                    for (int k = 0; k < grid[i][j] - 1; ++k) {
                        non_one.emplace_back(i, j);
                    }
                }
            }
        }
        N = ((int) zeros.size());
        // MASK = (1 << N) - 1;
        memset(dp, -1, sizeof(dp));
        int ans = solve(0, 0);
        return ans;
    }

    int solve(int index, int mask) {
        if (index == N) return 0;
        if (dp[index][mask] != -1) return dp[index][mask];
        int cost = INT_MAX;
        for (int i = 0; i < N; ++i) {
            if ((mask & (1 << i)) == 0) {
                int current_cost = get_cost(index, i);
                current_cost += solve(index + 1, mask ^ (1 << i));
                cost = min(cost, current_cost);
            }
        }
        return dp[index][mask] = cost;
    }
    
    
    

    int get_cost(int p, int q) { 
        return abs(zeros[p].first - non_one[q].first) + 
                          abs(zeros[p].second - non_one[q].second); }
    
    
    
};