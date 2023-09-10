class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
         int ans = max(abs(sx-fx),abs(sy-fy));
        t-=ans;
        if(t<0) return false;
        if((t==1) and abs(sx-fx)==0 and abs(sy-fy)==0) return false;
        return true;
    }
};