class Solution {
public:
    unordered_map<int,int>dp;
    int minDays(int n) {
        if(n<2)return n;
        if(dp.find(n)==dp.end()){
        int a,b;
        int r2=n%2,r3=n%3;
        a=r2+minDays(n/2);
        b=r3+minDays(n/3);
        dp[n]=min(a,b)+1;
        }
        return dp[n];
    }
};