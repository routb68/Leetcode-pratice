class Solution {
public:
    int search(vector<int>& arr, int target) {
        int lo =0,hi= arr.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==target)return mid;
            if(arr[mid]>arr[lo]){
                if(target==arr[lo]) return lo;
                if(target>=arr[lo] and target<arr[mid]){
                    hi=mid-1;
                }else{
                    lo = mid+1;
                }
            }else{
                 if(target==arr[hi]) return hi;
                if(target>arr[mid] and target<=arr[hi]){
                    lo = mid+1;
                }else{
                    hi = mid-1;
                }
            }
            cout<<lo<<" "<<hi<<endl;
        }
        return -1;
    }
};