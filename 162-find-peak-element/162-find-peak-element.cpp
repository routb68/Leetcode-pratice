class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int lo=0,hi=v.size()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(v[mid]>v[mid+1]){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        return lo;
    }
};