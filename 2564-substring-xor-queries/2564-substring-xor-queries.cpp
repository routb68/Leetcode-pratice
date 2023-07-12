class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& qs) {
        vector<vector<int>>ans;
        unordered_map<int,pair<int,int>>ump;
        for(int i=0;i<s.size();++i){
            if(s[i]=='0'){
                if(ump.find(0)==ump.end()){
                    ump[0]=make_pair(i,i);
                }
                continue;
            }
            int64_t temp = 0;
            for(int j=i;j<s.size() and j<i+32;++j){
                    temp =( temp<<1) + (s[j]-'0');
                    if(ump.find(temp)==ump.end()){
                        ump[temp]= make_pair(i,j);
                  }
                // cout<<temp<<" "<<i<<" "<<j<<endl;
            }
        }
        for(int i=0;i<qs.size();++i){
            int temp = qs[i][0]^qs[i][1];
            if(ump.find(temp)!=ump.end()){
                ans.push_back({ump[temp].first,ump[temp].second});
            }else{
                ans.push_back({-1,-1});
            }
        }
        return ans;
    }
};