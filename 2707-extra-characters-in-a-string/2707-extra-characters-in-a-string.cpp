class Solution {
public:
    unordered_set<string>us;
    int dp[55];
    int go( string s,int idx){
        if(dp[idx]!=-1) return dp[idx];
        if(idx==s.length()) return dp[idx]=0;
        int res=INT_MAX;
        string t;
        for(int i=idx;i<s.size();++i){
            t+=s[i];
            if(us.find(t)!=us.end()){
                res=min(res,go(s,i+1));
            }else{
                res=min(res,i-idx+1+go(s,i+1));
            }
        }
        return dp[idx]=res;
    }
    int minExtraChar(string s, vector<string>& dy) {
        for(int i=0;i<55;++i) dp[i]=-1;
        for(int i=0;i<dy.size();++i){
            us.insert(dy[i]);
        }
        return go(s,0);
    }
};