class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool>v(nums.size(),false);
        for(int &s:nums){
            v[s-1]=true;
        }
        vector<int>ans;
        for(int i=0;i<v.size();++i){
            if(v[i]==false){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};