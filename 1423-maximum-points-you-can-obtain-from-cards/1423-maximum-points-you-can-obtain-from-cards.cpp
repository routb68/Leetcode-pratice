class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int res=0;
        int currsum=0;
        for(int i=0;i<k;++i) currsum+=cp[i];
        res=max(res,currsum);
        if(k==cp.size())return res;
        int left=k-1,right=cp.size()-1;
        while(right>=cp.size()-k){
            currsum+=cp[right];
            --right;
            currsum-=cp[left];
            --left;
            res=max(res,currsum);
        }
        return res;
    }
};