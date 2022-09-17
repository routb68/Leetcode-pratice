class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& ps, vector<int>& ts) {
        sort(begin(ps),end(ps));
        sort(begin(ts),end(ts));
        int ans=0,l=0,t=0;
        while(l<ps.size() and t<ts.size()){
            if(ps[l]<=ts[t]){
                ans++;
                ++l;
                ++t;
            }else if( ps[l]>ts[t]){
                ++t;
            }
        }
        return ans;
    }
};