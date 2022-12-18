class Solution {
public:
    int similarPairs(vector<string>& ws) {
        vector<set<char>>v(ws.size());
        for(int i=0;i<ws.size();++i){
            for(char &x:ws[i]) v[i].insert(x);
        }
        int ans=0;
        for(int i=0;i<ws.size();++i){
            for(int j=i+1;j<ws.size();++j){
                if(v[i].size()==v[j].size()){
                    bool ok =true;
                    for( char x:v[i]){
                        if(v[j].find(x)==v[j].end()){
                            ok = false;
                        }
                    }
                    if (ok)++ans;
                }
                
            }
        }
        return ans;
    }
};