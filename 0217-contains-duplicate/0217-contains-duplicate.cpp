class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums){
            us.insert(x);
        }
        if(us.size()==nums.size()) return false;
        return true;
    }
};