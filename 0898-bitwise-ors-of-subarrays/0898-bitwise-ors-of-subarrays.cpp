class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>us;
        set<int>t;
        for( int &x:arr){
            set<int>r;
            r.insert(x);
            for(int a:t) r.insert(x|a);
            t=r;
            for(int a:t) us.insert(a);
        }
        return us.size();
    }
};