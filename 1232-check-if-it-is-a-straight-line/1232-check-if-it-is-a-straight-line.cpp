class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cds) {
        sort(begin(cds),end(cds));
        double x=cds[1][0]-cds[0][0],y=cds[1][1]-cds[0][1];
        for(int i=0;i<cds.size()-1;++i){
            double x1=cds[i+1][0]-cds[i+0][0],y1=cds[i+1][1]-cds[i+0][1];
            if(x/y !=x1/y1) return false;
        }
        return true;
    }
};