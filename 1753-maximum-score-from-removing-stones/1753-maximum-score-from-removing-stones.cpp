class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);pq.push(b);pq.push(c);
        int cnt =0;
        while(pq.top()>0){
            a = pq.top();pq.pop();
            b = pq.top();pq.pop();
            if(a<1 or b<1){
                break;
            }
            pq.push(a-1);
            pq.push(b-1);
            ++cnt;
        }
        return cnt;
    }
};