class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>umpod,umpev;
        for(int i=0;i<nums.size();++i){
            if(i&1){
                ++umpod[nums[i]];
            }else{
                ++umpev[nums[i]];
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, 
                                      greater<pair<int,int>> >pqod,pqev;
        for(auto [x,y]:umpod){
            // cout<<y<<" " <<x<<endl;
            pqod.push(make_pair(y,x));
            if(pqod.size()>2){
                pqod.pop();
            }
        }
        // cout<<endl;
        for(auto [x,y]:umpev){
            // cout<<y<<" " <<x<<endl;
            pqev.push(make_pair(y,x));
            if(pqev.size()>2){
                pqev.pop();
            }
        }
        vector<pair<int,int>>od,ev;
        while(pqod.size()){
            od.push_back(pqod.top());
            pqod.pop();
        }
        while(pqev.size()){
            ev.push_back(pqev.top());
            pqev.pop();
        }
        int ans =INT_MAX,n=nums.size();
        for(int i=0;i<od.size();++i){
            for(int j=0;j<ev.size();++j){
                if(od[i].second!=ev[j].second){
                    ans = min(ans,n-od[i].first-ev[j].first);
                }
                // if(i==0){
                //     // cout<<ev[j].first<<" "<<ev[j].second<<endl;
                // }
            }
            // cout<<od[i].first<<" "<<od[i].second<<endl;
        }
        if(ans==INT_MAX) return n/2;
        return ans;
    }
};