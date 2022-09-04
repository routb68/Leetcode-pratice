class Solution {
public:
    vector<int> decode(vector<int>& encd, int f) {
        vector<int>v;
        v.push_back(f);
        for(int &x:encd){
            v.push_back(x^v.back());
        }
        return v;
    }
};