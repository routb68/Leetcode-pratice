class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int sum=0,i=0,l=0,res=0;
        for( i=0;i<k;++i){
            sum+=arr[i];
        }
        if(sum>=th*k)++res;
        for(i;i<arr.size();++i,++l){
            sum+=arr[i];
            sum-=arr[l];
            if(sum>=th*k)++res;
        }
        return res;
    }
};