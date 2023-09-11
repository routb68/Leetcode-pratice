class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        vector<int> v[501];
        for(int i=0;i<gs.size();++i){
            v[gs[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(int i=1;i<501;++i){
            if(v[i].size()){
                int k = v[i].size()/(i);
                for(int j=0;j<k;++j){
                    vector<int>temp;
                    for(int l=0;l<i;++l){
                        temp.push_back(v[i][(j*i)+l]);
                    }
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};