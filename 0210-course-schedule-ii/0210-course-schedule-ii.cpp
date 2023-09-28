class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& prqs) {
         int indegree[nc];
        vector<int> adj[nc];
        for(int i=0;i<nc;++i)indegree[i]=0;
        for(int i=0;i<prqs.size();++i){
            ++indegree[prqs[i][0]];
            adj[prqs[i][1]].push_back(prqs[i][0]);
        }
        queue<int>q;
        for(int i=0;i<nc;++i){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt =0;
        vector<int>ans;
        while(q.size()){
            int temp=q.front();q.pop();
            ++cnt;
            ans.push_back(temp);
            for(int &x:adj[temp]){
                --indegree[x];
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        if(nc==cnt) return ans;
        return {};
    }
};