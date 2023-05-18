class Solution {
public:
    int minIncrements(int n, vector<int>& cs) {
        int res=0;
        for(int i=(n/2)-1;i>=0;--i){
            int l =i+i+1,r=i+i+2;
            res +=abs(cs[l]-cs[r]);
            cs[i]+=max(cs[l],cs[r]);
        }
        return res;
    }
};