class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<int>v(33,0);
        for(int & x:nums){
            int pos=0;
            while(x){
                if(x& 1){
                    v[pos]=1;
                }
                ++pos;
                x/=2;
            }
        }
        int ans=0;
        for(int i=0;i<33;++i){
            if(v[i]){
                ans+=pow(2,i);
            }
        }
        return ans;
    }
};