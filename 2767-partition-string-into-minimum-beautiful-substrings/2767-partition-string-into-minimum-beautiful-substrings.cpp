class Solution {
public:
    vector<string> v = {"11110100001001","110000110101",
                        "1001110001","1111101","11001","101","1"};
    int ans = 1e9;
    void go(string &s,int idx,int cnt){
        // cout<<cnt<<endl;
        // cout<<" sjkhn  "<<idx<<endl;
        if(idx==s.size()) {
            ans = min(ans,cnt);
            return ;
        }
        bool ok = false;
        string t;
        for(int i =idx;i<s.size();++i){
            t+=s[i];
            for( int j=0;j<v.size();++j){
                if(t==v[j]){
                    go(s,i+1,cnt+1);
                }
            }
        }
        return ;
    }
    int minimumBeautifulSubstrings(string s) {
        go(s,0,0);
        if(ans ==1e9) return -1;
        return ans;
    }
};