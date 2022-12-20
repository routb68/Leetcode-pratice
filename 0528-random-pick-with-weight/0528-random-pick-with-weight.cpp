class Solution {
public:
    vector<int>v;
    Solution(vector<int>& w) {
        v.clear();
        for(int i=0;i<w.size();++i){
            if(i!=0) w[i]+=v.back();
            v.push_back(w[i]);
        }
    }
    
    int pickIndex() {
        int x=rand()%v.back();
        int ans=(upper_bound(begin(v),end(v),x)-begin(v));
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */