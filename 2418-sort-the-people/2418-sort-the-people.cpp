class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>ans;
        vector<string>res;
        for(int i=0;i<names.size();++i){
            ans.emplace_back(heights[i],names[i]);
        }
        sort(begin(ans),end(ans));
        reverse(begin(ans),end(ans));
        for(auto  [x,y]:ans){
            res.push_back(y);
        }
        return res;
    }
};