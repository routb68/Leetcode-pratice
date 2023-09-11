class Solution {
public:
    int minCostToMoveChips(vector<int>& ps) {
        int od =0,ev=0;
        for(int &x:ps){
            if(x&1)++od;
            else ++ev;
        }
        return min(od,ev);
    }
};