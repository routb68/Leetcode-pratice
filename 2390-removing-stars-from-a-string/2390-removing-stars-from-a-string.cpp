class Solution {
public:
    string removeStars(string s) {
        string s1="";
        for(int i=0;i<s.length();++i){
            if(s[i]=='*'){
                s1.pop_back();
            }else{
                s1+=s[i];
            }
        }
        return s1;
    }
};