class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int lo=0,hi=arr.size()-k;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(x-arr[mid]>arr[mid+k]-x){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        vector<int>res;
        for(int i=lo;i<lo+k;++i){
            res.push_back(arr[i]);
        }
        return res;
    }
};