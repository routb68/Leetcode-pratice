class Solution {
public:
    string finalString(string s) {
        string s1 ="";
        for(int i=0;i<s.size();++i){
            if(s[i]=='i'){
                reverse(begin(s1),end(s1));
            }else{
                s1+=s[i];
            }
        }
        return s1;
    }
};