class Solution {
public:
    int ans;
    int N;
    vector<vector<int>>cord ={{-1,0},{0,-1},{1,0},{0,1}};
    void go(vector<vector<int>>&gd,set<pair<int,int>>&mp,int r,int c){
        if(gd[r][c]==2){
            if(mp.size()==N)++ans;
            return;
        }
        for(int i=0;i<4;++i){
            if(r+cord[i][0]<0 or  r+cord[i][0]>=gd.size()) continue;
            if(c+cord[i][1]<0 or c+cord[i][1]>=gd[0].size()) continue;
            if(gd[r+cord[i][0]][c+cord[i][1]]==-1) continue;
            if(mp.find(make_pair(r+cord[i][0],c+cord[i][1]))!=mp.end())
                continue;
            
            mp.insert(make_pair(r+cord[i][0],c+cord[i][1]));
            go(gd,mp, r+cord[i][0], c+cord[i][1] );
            mp.erase(make_pair(r+cord[i][0],c+cord[i][1]));
        }
    }
    int uniquePathsIII(vector<vector<int>>& gd) {
        ans = 0;N=0;
        for(int i=0;i<gd.size();++i){
            for(int j=0;j<gd[0].size();++j){
                if(gd[i][j]!=-1)++N;
            }
        }
        for(int i=0;i<gd.size();++i){
            for(int j=0;j<gd[0].size();++j){
                if(gd[i][j]==1){
                    set<pair<int,int>>mp;
                    mp.insert(make_pair(i,j));
                    go(gd,mp,i,j);
                    break;
                }
            }
        }
        return ans;
    }
};