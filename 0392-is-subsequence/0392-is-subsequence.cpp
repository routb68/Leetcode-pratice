class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int>v[26];
        for(int i=0;i<t.size();++i){
            v[t[i]-'a'].push_back(i);
        }
        int pre=-1;
        for(int i=0;i<s.size();++i){
            if(v[s[i]-'a'].size()==0 or v[s[i]-'a'].back()<pre) return false;
            int idx= lower_bound(begin(v[s[i]-'a']),end(v[s[i]-'a']),pre+1)-
                      v[s[i]-'a'].begin();
            if(idx==v[s[i]-'a'].size()) return false;
            pre = v[s[i]-'a'][idx];
        }
        return true;
    }
};