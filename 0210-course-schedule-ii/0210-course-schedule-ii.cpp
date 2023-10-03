class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& pqs) {
        int indegree[nc];
        for(int i=0;i<nc;++i)indegree[i]=0;
        vector<int>adj[nc];
        for(int i=0;i<pqs.size();++i){
            ++indegree[pqs[i][1]];
            adj[pqs[i][0]].push_back(pqs[i][1]);
        }
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<nc;++i){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(q.size()){
            int temp=q.front();q.pop();
            ans.push_back(temp);
            for(int &x:adj[temp]){
                --indegree[x];
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        if(ans.size()!=nc) return {};
        reverse(begin(ans),end(ans));
        return ans;
    }
};