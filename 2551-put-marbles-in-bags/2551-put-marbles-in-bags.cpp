class Solution {
public:
    long long putMarbles(vector<int>& wt, int k) {
        if (k==1 or k==wt.size()) 
            return 0;
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        priority_queue<long long>pqr;
        for(int i=1;i<wt.size();++i){
            pq.push(wt[i]+wt[i-1]);
            pqr.push(wt[i]+wt[i-1]);
        }
        long long res =0;
        --k;
        while(k--){
            res-=pq.top();pq.pop();
            res+=pqr.top();pqr.pop();
        }
        return res;
    }
};