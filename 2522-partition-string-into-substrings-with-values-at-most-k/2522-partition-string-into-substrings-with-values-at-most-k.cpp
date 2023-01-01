class Solution {
public:
    int minimumPartition(string s, int k) {
        if(k<9){
            for(char &x:s){
                if(x-'0'>k) return -1;
            }
        }
        int cnt=1;
        int64_t res=0;
        for(int i=0;i<s.length();++i){
            int x=s[i]-'0';
            res*=10;
            res+=x;
            if(res>k){
                ++cnt;
                res=x;
            }
        }
        return cnt;
    }
};