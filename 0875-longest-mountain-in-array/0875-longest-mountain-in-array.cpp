class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans =0;
        int pre =0;
        int cnt=0;
        bool up = false,dow = false;
        for( int i=1;i<arr.size();++i){
            if(arr[i]<arr[i-1]){
                if(up==true){
                    up = false;
                    dow = true;
                    ++cnt;
                }else if(dow==true){
                    ++cnt;
                }else{
                    //  if(dow==true)ans = max(ans,cnt);
                    cnt=0;
                    up = false;
                    dow=false;
                }
            }else if (arr[i]>arr[i-1]){
                if(up==true){
                    ++cnt;
                }else{
                     if(dow==true)ans = max(ans,cnt);
                    dow = false;
                    up = true;
                    cnt = 2;
                }
            }else{
                 if(dow==true)ans = max(ans,cnt);
                    cnt=0;
                    up = false;
                    dow=false;
            }
        }
        if(dow==true)ans= max(ans,cnt);
        return ans;
    }
};