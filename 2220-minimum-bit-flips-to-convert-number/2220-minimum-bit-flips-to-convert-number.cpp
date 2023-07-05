class Solution {
public:
    int minBitFlips(int a, int b) {
        int cnt =0;
        while(a>0 or b>0 ){
            if((a&1)!=(b&1))
                ++cnt;
            a=a>>1;
            b=b>>1;
            // cout<<a<<" "<<b<<endl;
            // break;
        }
        return cnt;
    }
};