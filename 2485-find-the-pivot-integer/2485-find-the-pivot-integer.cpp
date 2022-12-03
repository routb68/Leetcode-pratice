class Solution {
public:
    int pivotInteger(int n) {
        int a=sqrt((n*(n+1))/2);
        if(a*a==(n*(n+1))/2) return a;
        return -1;
    }
};