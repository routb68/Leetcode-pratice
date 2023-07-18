class Solution {
public:
    struct myCmp{
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.second<b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(int &x:nums)++ump[x];
        priority_queue<pair<int,int>,vector<pair<int,int>>,
                       myCmp>pq(ump.begin(),ump.end());
        vector<int>v;
        while(k--){
            v.push_back(pq.top().first);
            pq.pop();
        }
        return v;
    }
};