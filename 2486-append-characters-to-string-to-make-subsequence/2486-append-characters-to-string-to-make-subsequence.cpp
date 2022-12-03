class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        for(int i=0;i<s.length();++i){
            if(s[i]==t[j])++j;
        }
        return t.length() - j;
    }
};