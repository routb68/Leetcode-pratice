class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>ump;
        for(char &x:s){
            ++ump[x];
        }
        vector<pair<int,char>>v;
        for(auto [x,y]:ump){
            v.emplace_back(make_pair(y,x));
        }
        sort(begin(v),end(v));
        string res;
        for(int i=v.size()-1;i>=0;--i){
            for(int j=0;j<v[i].first;++j){
                res+=v[i].second;
            }
        }
        return res;
    }
};