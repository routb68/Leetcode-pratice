class Solution {
public:
    const int mod = 1e9+7;
    int countOrders(int n) {
        int64_t ans =1;
        for(int i=1;i<=n;++i){
            ans *=(i*(i+i-1));
            ans %=mod;
        }
        return ans;
    }
};