class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& pts, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<pts.size();++i){
            int x = pts[i][0],y = pts[i][1];
            // auto z = make_pair();
            pq.push(make_pair(-((x*x)+(y*y)),i));
        }
        while(k--){
            int idx = pq.top().second;pq.pop();
            ans.emplace_back(pts[idx]);
        }
        return ans;
    }
};