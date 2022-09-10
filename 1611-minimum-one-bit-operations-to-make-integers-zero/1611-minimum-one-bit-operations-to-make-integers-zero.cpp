class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n<=1) return n;
        int po2=0;
        while((1<<po2)<=n){
            ++po2;
        }
        return ((1<<po2)-1)-minimumOneBitOperations(n-(1<<(po2-1)));
    }
};