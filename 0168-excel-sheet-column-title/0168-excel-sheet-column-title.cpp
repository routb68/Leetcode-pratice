class Solution {
public:
    string convertToTitle(int c) {
        string s;
        while(c>26){
            --c;
            s += char('A' + ((c % 26) ));
            c/=26;
        }
        --c;
        s += char('A' +(c));
        reverse(begin(s),end(s));
        return s;
    }
};