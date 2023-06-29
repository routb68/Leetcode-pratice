class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        vector<int>fst,lst;
        for(int x:nums){
            fst.push_back(x%10);
            while(x>9)
                x/=10;
            lst.push_back(x);
        }
        int ans =0;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                if(__gcd(lst[i],fst[j])==1)
                    ++ans;
            }
        }
        return ans;
    }
};