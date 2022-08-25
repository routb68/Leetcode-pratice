class Solution {
public:
    vector<int> cd;
    bool ok(int n,long long k){
       long ans=0;
        for(int &x:cd){
            ans+=(x/n);
        }
        return ans>=k;
    }
    int maximumCandies(vector<int>& cdss, long long k) {
        long long sum=0;
        sum=accumulate(begin(cdss),end(cdss),sum);
        if(k>sum)return 0;
        cd=cdss;
        long low=0,high=*max_element(begin(cd),end(cd));
        while(low<high){
            int mid=(low+high+1)/2;
            if(ok(mid,k)){
                low=mid;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};