class Solution {
public:
    int countSubstrings(string s, string t) {
        int res=0;
        for(int i=0;i<s.length();++i){
            for(int j=0;j<t.length();++j){
                int miss=0;
                for(int k=0;k+i<s.length() and k+j<t.length();++k){
                    if(s[i+k]!=t[k+j] and ++miss>1) break;
                    res+=miss;
                }
            }
        }
        return res;
    }
};