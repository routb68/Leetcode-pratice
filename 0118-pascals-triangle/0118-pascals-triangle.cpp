class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        for(int i=1;i<numRows;++i){
            auto x = v.back();
            vector<int>temp(x.size()+1);
            temp[0]=x[0];
            temp.back()=x.back();
            for(int i=1;i<x.size();++i){
                temp[i]=x[i]+x[i-1];
            }
            v.push_back(temp);
        }
        return v;
    }
};