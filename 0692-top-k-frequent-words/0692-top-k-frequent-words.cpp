class Solution {
public:
    struct myComp{
        bool operator()(pair<string,int>&a,pair<string,int>b){
            if(a.second!=b.second)
                return a.second<b.second;
            return a.first>b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>ump;
        for(string &x:words)++ump[x];
        priority_queue<pair<string,int>,vector<pair<string,int>>,
                       myComp>pq(ump.begin(),ump.end());
        vector<string>v;
        while(k--){
            v.push_back(pq.top().first);
            pq.pop();
        }
        return v;
    }
};