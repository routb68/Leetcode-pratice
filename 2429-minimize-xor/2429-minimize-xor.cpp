class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int64_t d=num1,e=num2;
        vector<int>a,b;
        while(num1){
            if(num1 & 1){
                a.push_back(1);
            }else{
                a.push_back(0);
            }
            num1>>=1;
        }
        while(num2){
            if(num2 & 1){
                b.push_back(1);
            }else{
                b.push_back(0);
            }
            num2>>=1;
        }
        int64_t m=accumulate(begin(a),end(a),0),n=accumulate(begin(b),end(b),0);
        cout<<m<<' '<<n;
        if(m==n) return d;
        while(a.size()<32){
            a.push_back(0);
        }
        while(b.size()<32){
            b.push_back(0);
        }
        if(n>m){
            int64_t res=n-m;
            for(int i=0;i<32 and res;++i){
                if(a[i]==0){
                    d|=(1<<i);
                    --res;
                }
            }
            return d;
        }
        int64_t ans=0;
        for(int i=31;i>=0 and n ;--i){
            if(a[i]){
                ans|=(1<<i);
                --n;
            }
        }
        return ans;
    }
};