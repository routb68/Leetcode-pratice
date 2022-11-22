class Solution {
public:
vector<int>v;
    int numSquares(int n) {
        v.resize(n+2);
        for(int i=0;i<n+2;++i){
            v[i]=-1;
        }
        return com (n);
    }
    int com (int n){
        if(v[n]==-1){
        if(n==0) {
            return 0;
        }
        int mncnt=INT_MAX;
        for(int i=1;i*i<=n;++i){
            int curr = com(n-i*i);
            mncnt =min(mncnt,curr+1);
        }
        v[n]=mncnt;
        }
        return v[n];
    }
};