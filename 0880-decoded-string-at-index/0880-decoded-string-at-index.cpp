class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int64_t sz =0;
        for(char &x:s){
            if(isdigit(x)) sz*=(x-'0');
            else ++sz;
        }
        for(int i=s.size()-1;i>=0;--i){
            k%=sz;
            if(k==0 and isdigit(s[i])==false) return (string) ""+s[i];
            if(isdigit(s[i])){
                sz/=(s[i]-'0');
            }else{
                --sz;
            }
        }
        return "";
    }
};