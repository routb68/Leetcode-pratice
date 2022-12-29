class Solution {
public:
    int maxRepOpt1(string s) {
        int res=0;
        for(char c='a';c<='z';++c){
            int i=0,j=0,gap=0;
            while(i< s.length()){
                if(c!=s[i])++gap;
                ++i;
                if(gap>1) gap-=(s[j++]!=c);
            }
            res = max (res,min(i-j,(int)count_if(begin(s), end(s), 
                         [&](char ch1) { return ch1 == c; })));
        }
        return res;
    }
};