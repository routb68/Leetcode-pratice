class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& sc, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<sc.size();++i){
            v.push_back({sc[i][k],i});
        }
        sort(begin(v),end(v));
        // reverse(begin(v),end(v));
        vector<vector<int>>ans;
        for(int i=sc.size()-1;i>=0;--i){
            ans.push_back(sc[v[i].second]);
        }
        return ans;
    }
};