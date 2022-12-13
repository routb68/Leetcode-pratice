class Solution {
public:
    bool splitArraySameAverage(vector<int>& nums) {
        int n=nums.size(),m=n/2,tsum=accumulate(begin(nums),end(nums),0);
        bool isposs=false;
        
        
        for(int i=1;i<=m and isposs==false;++i){
            if((tsum*i)%n==0) isposs=true;
        }
        
        if(isposs==false) return isposs;
        
        
        vector<unordered_set<int>>us(m+1);
        us[0].insert(0);
        for(int &num:nums){
            for(int i=m-1;i>=0;--i){
                for(const int t:us[i]){
                    us[i+1].insert(t+num);
                }
            }
        }
        
        
        for(int i=1;i<=m;++i){
            if( (tsum*i)%n==0){
                if(us[i].find(tsum*i/n)!=us[i].end())
                    return true;
            }
        }
        
        return false;
    }
};