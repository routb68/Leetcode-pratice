class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v(2010);
        for(int &x:arr){
            v[x+1000]++;
        }
        unordered_set<int>us;
        for(int &x:v){
            if(x!=0){
                if(us.find(x)==us.end()) us.insert(x);
                else return false;
            }
        }
        return true;
    }
};