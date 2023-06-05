class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        int n=gs.size();
         vector<vector<int>>v(n+1),ans;
        for(int i=0;i<n;++i){
            v[gs[i]].push_back(i);
        }
        for(int i=0;i<=n;++i){
            if(v[i].size()==0) continue;
            vector<int>res;
            for(int &x:v[i]){
                res.push_back(x);
                if(res.size()==i){
                    ans.push_back(res);
                    res.clear();
                }
            }
        }
        return ans;
    }
};