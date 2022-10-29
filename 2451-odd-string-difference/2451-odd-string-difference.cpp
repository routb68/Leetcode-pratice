class Solution {
public:
    string oddString(vector<string>& wd) {
        map<vector<int>,pair<int,int>>mp;
        for(int i=0;i<wd.size();++i){
            vector<int>v;
            for(int j=1;j<wd[i].size();++j){
                v.push_back(wd[i][j-1]-wd[i][j]-'0');
            }
            mp[v].first++;
            mp[v].second=i;
        }
        for(auto x:mp){
            if(x.second.first==1){
                return wd[x.second.second];
            }
        }
        return "";
    }
};