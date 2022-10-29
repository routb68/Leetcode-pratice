class Solution {
public:
    int destroyTargets(vector<int>& nums, int sp) {
        sort(begin(nums),end(nums));
        int vi;
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            vi=(nums[i]%sp);
            mp[vi]++;
        }
        int a=0,b=INT_MAX;
        for( auto [x,y]:mp){
            a=max(y,a);
        }
        set<int>s;
        for(auto [x,y]:mp){
            if(y==a){
                s.insert(x);
            }
        }
        for(int &x: nums){
            if(s.find(x%sp)!=s.end()){
                return x;
            }
        }
        return -1;
    }
};