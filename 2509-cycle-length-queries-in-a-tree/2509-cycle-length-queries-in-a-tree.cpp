class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& qs) {
        vector<int>v(qs.size());
        for(int i=0;i<qs.size();++i){
            int a=qs[i][0],b=qs[i][1];
            int cnt=0;
            unordered_set<int>s;
            while(a){
                s.insert(a);
                a/=2;
            }
            while(b){
                if(s.find(b)==s.end()){
                    s.insert(b);
                }else{
                    s.erase(b);
                }
                b/=2;
            }
            v[i]=s.size()+1;
        }
        return v;
    }
};