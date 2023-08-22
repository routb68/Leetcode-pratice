class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        int arr[n];
        for( int i=0;i<n;++i){
            arr[i]=-1;
        }
        arr[0]=0;
        for( int i=1;i<n;++i){
            for( int j=i-1;j>=0;--j){
                if(abs(nums[i]-nums[j])<=target and arr[j]!=-1){
                    arr[i]= max(arr[i],arr[j]+1);
                }
            }
            // cout<<arr[i]<<" ";
        }
        if(arr[n-1]==0) return -1;
        return arr[n-1];
    }
};