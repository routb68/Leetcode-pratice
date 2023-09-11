class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>us;
        for(auto x:nums){
            for(int i=x[0];i<=x[1];++i){
                us.insert(i);
            }
        }
        return us.size();
    }
};