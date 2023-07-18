class Solution {
public:
    int kthSmallest(vector<vector<int>>& mtx, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<mtx.size();++i){
            for(int j=0;j<mtx[0].size();++j){
                pq.push(mtx[i][j]);
            }
        }
        --k;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};