class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int n=ps.size();
        // int arr[n];
        int ans=0;
        int temp_min = ps[0];
        for( int i=0;i<n;++i){
            temp_min = min(temp_min,ps[i]);
            ans = max( ans,ps[i]-temp_min);
        }
        return ans;
    }
};