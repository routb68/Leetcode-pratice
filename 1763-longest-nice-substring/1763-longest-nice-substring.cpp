class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.length()<2)return "";
        unordered_set<char>us;
        for(int i=0;i<s.length();++i){
            us.insert(s[i]);
        }
        for(int i=0;i<s.length();++i){
            if(us.find(toupper(s[i]))==us.end() or us.find(tolower(s[i]))==us.end()){
                string s1=longestNiceSubstring(s.substr(0,i));
                string s2=longestNiceSubstring(s.substr(i+1));
                if(s1.length()>=s2.length()) return s1;
                return s2;
            }
        }
        return s;
    }
};