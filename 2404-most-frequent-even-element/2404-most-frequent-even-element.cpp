class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>ump;
        for(int &x:nums){
            if((x & 1)==0){
                ump[x]++;
                ans=max(ans,ump[x]);
            }
        }
        int res=1e6;
        for(auto [x,y]:ump){
            if(y==ans){
                res=min(res,x);
            }
        }
        if(res==1e6)return -1;
        return res;
    }
};