class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>ump;
        for(int &x:arr)++ump[x];
        for(auto [x,y]:ump){
            pq.push(make_pair(y,x));
        }
        int ans=0,cnt=0;
        while(pq.size()){
            auto x = pq.top();pq.pop();
            ans +=x.first;
            ++cnt;
            if(ans>=(arr.size()/2)){
                break;
            }
        }
        return cnt;
    }
};