class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& prqs) {
        int indegree[nc];
        vector<int> adj[nc];
        for(int i=0;i<nc;++i)indegree[i]=0;
        for(int i=0;i<prqs.size();++i){
            ++indegree[prqs[i][1]];
            adj[prqs[i][0]].push_back(prqs[i][1]);
        }
        queue<int>q;
        for(int i=0;i<nc;++i){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt =0;
        while(q.size()){
            int temp=q.front();q.pop();
            ++cnt;
            for(int &x:adj[temp]){
                --indegree[x];
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        return cnt==nc;
    }
};