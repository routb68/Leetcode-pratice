class Solution {
public:
    bool seen[16] = {};
    int res =0;
    void go(int n,int pos){
        if(pos>n){
            res+=1;
        }
        for(int i=1;i<=n;++i){
            if(seen[i]==false and (i%pos==0 or pos%i==0)){
                seen[i]=1;
                go(n,pos+1);
                seen[i]=0;
            }
        }
    }
    int countArrangement(int n) {
        if(n<4) return n;
        go(n,1);
        return res;
    }
};