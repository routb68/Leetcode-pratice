class Solution {
public:
    int kthLargestValue(vector<vector<int>>& mat, int k) {
        for(int i=0;i<mat.size();++i){
            for(int j=1;j<mat[0].size();++j){
                mat[i][j]^=mat[i][j-1];
            }
        }
        for(int i=0;i<mat[0].size();++i){
            for(int j=1;j<mat.size();++j){
                mat[j][i]^=mat[j-1][i];
            }
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for( auto & a: mat){
            for( auto &x:a){
                pq.push(x);
                while(pq.size()>k){
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};