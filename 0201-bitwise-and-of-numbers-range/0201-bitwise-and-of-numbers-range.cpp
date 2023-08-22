class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        if(l==r) return l;
        int x1=0,x2=0;
        for( int i=0;i<32;++i){
            if(l & (1<<i)){
                // v1.push_back(i);
                x1=max(x1,i);
            }
        }
        for( int i=0;i<32;++i){
            if(r & (1<<i)){
                x2=max(x2,i);
            }
        }
        if(x1!=x2) return 0;
        long long ans =l;
        for( long long i=l+1;i<=r;++i){
            ans &=i;
            if(ans==0) return 0;
        }
        return ans;
    }
};