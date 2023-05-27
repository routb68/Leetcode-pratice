class Solution {
public:
    bool stoneGame(vector<int>& ps) {
        int ans =0,res=0;
        for(int i=0;i<ps.size()/2;++i){
            ans+=ps[i];
        }
        for(int i=ps.size()/2;i<ps.size();++i) res+=ps[i];
        if(ans==res) return false;
        return true;
    }
};