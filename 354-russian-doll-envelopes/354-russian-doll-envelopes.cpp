class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int idx(vector<int>&v,int a){
        int l=0,r=v.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(v[mid]>=a){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return r;
    }
    int maxEnvelopes(vector<vector<int>>& env) {
        sort(begin(env),end(env),comp);
        vector<int>v;
        v.push_back(env[0][1]);
        for(int i=1;i<env.size();++i){
            if(env[i][1]>v[v.size()-1]){
                v.push_back(env[i][1]);
            }else{
                int x=idx(v,env[i][1]);
                v[x]=env[i][1];
            }
        }
        return v.size();
    }
};