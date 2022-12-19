class Solution {
public:
    bool validPath(int n, vector<vector<int>>& ed, int src, int dnt) {
        unordered_map<int,vector<int>>ump;
        for( auto &x:ed){
            ump[x[0]].push_back(x[1]);
            ump[x[1]].push_back(x[0]);
        }
        vector<int>vis(n);
        queue<int>q;
        q.push(src);
        vis[src]=1;
        while(q.size()){
            int curr=q.front();
            q.pop();
            if(curr==dnt) return true;
            for(auto &x:ump[curr]){
                if(vis[x]==0){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
        return false;
    }
};