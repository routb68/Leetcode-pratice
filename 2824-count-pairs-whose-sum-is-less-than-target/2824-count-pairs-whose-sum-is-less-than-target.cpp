class Solution {
public:
    int countPairs(vector<int>& n, int tgt) {
        int cnt =0;
        for( int i=0;i<n.size();++i){
            for( int j=i+1;j<n.size();++j){
                if(n[i]+n[j]<tgt)++cnt;
            }
        }
        return cnt;
    }
};