class Solution {
public:
    struct myComp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            return a.second<b.second;
        }
    };
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>ump;
        for(int &x:arr)
            ++ump[x];
        priority_queue<pair<int,int>,vector<pair<int,int>>,
                           myComp>pq(ump.begin(),ump.end());
        int sum=0,cnt=0;
        while(pq.size()){
            sum+=pq.top().second;
            ++cnt;
            pq.pop();
            if(sum>=(arr.size()/2)){
                return cnt;
            }
        }
        return -1;
    }
};