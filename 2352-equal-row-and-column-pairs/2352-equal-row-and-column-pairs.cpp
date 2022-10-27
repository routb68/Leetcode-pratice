class Solution {
public:
    int equalPairs(vector<vector<int>>& gd) {
        map<vector<int>,int>ump;
        for(int i=0;i<gd.size();++i){
            ump[gd[i]]++;
        }
        int ans=0;
        for(int i=0;i<gd[0].size();++i){
            vector<int>v;
            for(int j=0;j<gd.size();++j){
                v.push_back(gd[j][i]);
            }
            if(ump.find(v)!=ump.end()){
                ans+=ump[v];
            }
        }
        return ans;
    }
};