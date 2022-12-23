class Solution {
public:
    int um[501][501];
    int com(vector<int>&v,int l,int r,bool p){
        if(l>r) return 0;
        if(p){
            if(um[l][r]==-1)
            um[l][r]=max(v[l]+com(v,l+1,r,0),v[r]+com(v,l,r-1,0));
            return um[l][r];
        }
        if(um[l][r]==-1)
        um[l][r]=max(-v[l]+com(v,l+1,r,1),-v[r]+com(v,l,r-1,1));
        return um[l][r];
    }
    bool stoneGame(vector<int>&v) {
        for(int i=0;i<501;++i)
            for(int j=0;j<501;++j){
                um[i][j]=-1;
            }
        if(v[0]+ com(v,1,v.size()-1,0) >0 or v.back()+com(v,0,v.size()-2,0)>0)
            return true;
        return false;
    }
};