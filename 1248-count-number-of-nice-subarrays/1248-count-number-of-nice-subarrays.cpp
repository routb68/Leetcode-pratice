class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
        unordered_map<int,int>ump;
        ump[0]++;
        int ans=0,sum=0;
        for(int i=0;i<v.size();++i){
            if(v[i] & 1) ++sum;
            if(sum>=k){
                ans+=ump[sum-k];
            }
            ump[sum]++;
        }
        return ans;
    }
};