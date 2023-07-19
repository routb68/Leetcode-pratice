class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<s.size();++i){
            if(s[i]=='?'){
                char  a = ('a'-1),b = ('z'+1);
                if(i-1>=0)
                    a= s[i-1];
                if(i+1<s.size()){
                    b = s[i+1];
                }
                char c = 'a';
                while(c==a or c==b){
                    c = 'a'+(rand()%26);
                }
                s[i]=c;
            }
        }
        return s;
    }
};