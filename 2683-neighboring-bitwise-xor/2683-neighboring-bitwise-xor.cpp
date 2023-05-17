class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int a=d[0];
        for(int i=1;i<d.size();++i) a^=d[i];
        return a==0;
    }
};