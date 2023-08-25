class Solution {
public:
    int lengthOfLastWord(string s) {
        string s1;
        string s2;
        for( int i=0;i<s.size();++i){
            if(s[i]==' '){
                if(s1.size()>0){
                    s2=s1;
                }
                s1="";
            }else{
                s1+=s[i];
            }
        }
        if(s1.size()>0){
                    s2=s1;
                }
        return s2.size();
    }
};