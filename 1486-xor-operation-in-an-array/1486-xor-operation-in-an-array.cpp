class Solution {
public:
    int xorOperation(int n, int s) {
        int ans =0;
        for (int i=0;i<n;++i){
            ans ^=s;
            s+=(2);
        }
        return ans;
    }
};