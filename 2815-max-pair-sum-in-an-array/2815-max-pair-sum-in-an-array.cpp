class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int arr[n][10];
        for( int i=0;i<n;++i){
            for( int j=0;j<10;++j)
                arr[i][j]=0;
        }
        for(int i = 0;i<n;++i){
            int x = nums[i];
            while(x){
                ++arr[i][x%10];
                x/=10;
            }
        }
        int ans =-1;
        for( int i=0;i<n;++i){
            for( int j=i+1;j<n;++j){
                bool ok = false;
                for( int k=9;k>=0;--k){
                    if(arr[i][k]==0 and arr[j][k]==0)continue ;
                    if(arr[i][k]==0 or arr[j][k]==0){
                        break;
                    }
                    ok = true;
                    break;
                }
                if(ok){
                    ans = max( ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
    }
};