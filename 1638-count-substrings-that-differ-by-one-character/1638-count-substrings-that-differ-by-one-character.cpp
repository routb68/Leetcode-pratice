class Solution {
public:
    int countSubstrings(string s, string t) {
        int res=0;
        for(int i=0;i<s.length();++i){
            for(int j=0;j<t.length();++j){
                if(s[i]!=t[j]){
                    int l=1,r=1;
                    while(i-l>=0 and j-l>=0 and s[i-l]==t[j-l])++l;
                    while(i+r<s.length() and j+r<t.length() and s[i+r]==t[j+r])++r;
                    res+= l*r;
                }
            }
        }
        return res;
    }
};