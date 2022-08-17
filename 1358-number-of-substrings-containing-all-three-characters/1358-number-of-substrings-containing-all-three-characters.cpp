class Solution {
public:
    int numberOfSubstrings(string s) {
        int res=0;
        int a=0,b=0,c=0;
        int i=0,j=0;
        while(i<s.length()){
            if(s[i]=='a')++a;
            if(s[i]=='b')++b;
            if(s[i]=='c')++c;
            while(a>0 and b>0 and c>0){
                res+=(s.size()-i);
                if(s[j]=='a')--a;
                if(s[j]=='b')--b;
                if(s[j]=='c')--c;
                ++j;
            }
            ++i;
        }
        return res;
    }
};