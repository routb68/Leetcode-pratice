class Solution {
public:
    unordered_set<string>us;
    unordered_map<int,int>ump;
    int go(string &s,int idx){
        if(ump.find(idx)!=ump.end()) return ump[idx];
        if(idx==s.size())return ump[idx]=0;
        int ans = 1+go(s,idx+1);
        string s1="";
        for(int i=idx;i<s.size();++i){
            s1+=s[i];
            if(us.find(s1)!=us.end()){
                ans = min(ans,go(s,i+1));
            }else{
                int x = s1.size()+go(s,i+1);
                ans = min(ans,x);
            }
        }
        return ump[idx]=ans;
    }
    int minExtraChar(string s, vector<string>& dy) {
        for( string &x:dy){
            us.insert(x);
        }
        return go(s,0);
    }
};