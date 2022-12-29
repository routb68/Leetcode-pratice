class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& t) {
        int64_t n=t.size(),time=0,i=0;
        for(int j=0;j<n;++j) t[j].push_back(j);
        sort(begin(t),end(t));
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        vector<int>ans;
        while(i<n or pq.size()){
            if(pq.size()==0){
                time=max(time,(int64_t)t[i][0]);
            }
            while(i<n and time>=t[i][0]){
                pq.emplace(t[i][1],t[i][2]);
                ++i;
            }
            auto [x,y]=pq.top();
            //cout<<x<<" "<<y<<endl;
            pq.pop();
            time+=x;
            ans.push_back(y);
        }
        return ans;
    }
};