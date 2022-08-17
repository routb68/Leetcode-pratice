class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        unordered_map<int,int>ump;
        int sum=0,ans=0;
        ump[sum]++;
        for(int &x:v){
            sum+=x;
            if(ump.find(sum-k)!=ump.end()){
                ans+=ump[sum-k];
            }
            ump[sum]++;
        }
        return ans;
    }
};