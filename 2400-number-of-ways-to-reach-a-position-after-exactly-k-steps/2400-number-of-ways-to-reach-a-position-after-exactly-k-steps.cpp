class Solution {
public:
    unordered_map<int,long long>ump[1001];
    const long long mod = 1e9+7;
    int go(int a,int b,int c){
        if(ump[c].find(a)!=ump[c].end())
            return ump[c][a];
        if(c==0){
            if(a==b)return 1;
            return 0;
        }
        ump[c][a] = (go(a+1,b,c-1)+go(a-1,b,c-1))%mod;
        return ump[c][a];
    }
    int numberOfWays(int startPos, int endPos, int k) {
        // cout<<ump[0][0]<<endl;
        return (go(startPos+1,endPos,k-1) + go(startPos-1,endPos,k-1))%mod;
        // return 1;
    }
};