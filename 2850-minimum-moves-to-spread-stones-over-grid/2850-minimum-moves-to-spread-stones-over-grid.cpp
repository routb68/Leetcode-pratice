class Solution {
public:
    vector<pair<int,int>>z,nz;
    unordered_map<int,int>dp[8];
    
    int go(int idx,int mask){
        if(idx==z.size()){
            return 0;
        }
        if(dp[idx].find(mask)!=dp[idx].end()) return dp[idx][mask];
        int cost = INT_MAX;
        for(int i=0;i<z.size();++i){
            if((mask & (1<<i))==0){
                int tempcost = getcost(idx,i);
                tempcost += go(idx+1,mask |(1<<i));
                cost = min(cost,tempcost);
            }
        }
        return dp[idx][mask]=cost;
    }
    
    int getcost(int a,int b){
        return abs(z[a].first-nz[b].first)+ abs(z[a].second-nz[b].second);
    }
    
    int minimumMoves(vector<vector<int>>& gd) {
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                if(gd[i][j]==0){
                    z.push_back(make_pair(i,j));
                }else{
                    for(int k=0;k<gd[i][j]-1;++k){
                        nz.push_back(make_pair(i,j));
                    }
                }
            }
        }
        return go(0,0);
    }
};