class Solution {
public:
    int findLongestChain(vector<vector<int>>& ps) {
        int n = ps.size();
        int arr[n];
        for( int i=0;i<n;++i){
            arr[i]=0;
        }
        sort(begin(ps),end(ps));
        arr[0]=1;
        for( int i=1;i<n;++i){
            arr[i]=1;
            for( int j=i-1;j>=0;--j){
                if(ps[i][0]>ps[j][1]){
                    arr[i]= max(arr[i],arr[j]+1);
                }
            }
        }
        return *max_element(arr,arr+n);
    }
};