class Solution {
public:
    static bool comp(const vector<int>&a,const vector<int>&b){
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& evs) {
        sort(begin(evs),end(evs),comp);
        // for(auto &x:evs){
        //     for(auto &x1:x)
        //         cout<<x1<<" ";
        //     cout<<endl;
        // }
        vector<int>v;
        v.push_back(evs[0][1]);
        for(int i=1;i<evs.size();++i){
            if(evs[i][1]>v.back()){
                v.push_back(evs[i][1]);
            }else{
                int idx = lower_bound(begin(v),end(v),evs[i][1])-v.begin();
                v[idx]=evs[i][1];
            }
        }
        return v.size();
    }
};