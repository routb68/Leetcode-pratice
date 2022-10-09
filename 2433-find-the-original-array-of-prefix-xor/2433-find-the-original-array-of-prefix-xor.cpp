class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        int a=0;
        vector<int>v;
        v.push_back(p[0]);
        a^=p[0];
        for(int i=1;i<p.size();++i){
            int b=((a^p[i]));
            v.push_back(b);
            a^=b;
        }
        return v;
    }
};