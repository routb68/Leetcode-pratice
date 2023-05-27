class Solution {
public:
    bool stoneGame(vector<int>& ps) {
        int ans =0,res=0;
        for(int i=0;i<ps.size();++i){
            if(i%2) ans +=ps[i];
            else res+=ps[i];
        }
        if(ans==res) return false;
        return true;
    }
};