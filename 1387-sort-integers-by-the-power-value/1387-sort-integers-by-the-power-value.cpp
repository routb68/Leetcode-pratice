class Solution {
public:
    int dp[500005]; 
    int com(int n){
        if(n==1){
            dp[n]=0;
            return dp[n];
        }
        if(dp[n]==-1){
            if(n&1){
                dp[n]=1+com(3*n+1);
                return dp[n];
            }else{
                dp[n]=1+com(n/2);
                return dp[n];
            }
        }
        return dp[n];
    }
    static bool check(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first<b.first;
    }
   
    int getKth(int lo, int hi, int k) {
        for(int i=0;i<500005;++i){
            dp[i]=-1;
        }
        vector<pair<int,int>>v;
        for(int i=lo;i<hi+1;++i){
            dp[i]=com(i);
            v.push_back({dp[i],i});
        }
        sort(begin(v),end(v),check);
        return v[k-1].second;
    }
};