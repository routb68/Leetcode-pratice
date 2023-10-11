class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans = (n*(n+1))/2;
        if(m>n) return ans;
        if(m== 1) return -ans;
        if(n/m >1)ans -= ((n/m)*((n/m)+1))*(m);
        else ans-=(m+m);
        return ans;
    }
};