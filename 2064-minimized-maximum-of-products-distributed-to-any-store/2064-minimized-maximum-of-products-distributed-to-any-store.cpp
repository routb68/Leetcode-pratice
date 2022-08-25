class Solution {
public:
    vector<int>qs;
    bool ok (int n, int k){
       int sum=0;
        for(int &x:qs){
            sum+=((x+n-1)/n);
        }
        return sum>k;
    }
    int minimizedMaximum(int n, vector<int>& qss) {
        qs=qss;
        int low=1,high=*max_element(begin(qs),end(qs))+100;
        while(low<high){
            int mid=(low+high)/2;
            if(ok(mid,n)){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};