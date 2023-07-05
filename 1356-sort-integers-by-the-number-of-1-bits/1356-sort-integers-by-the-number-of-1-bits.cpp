class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v(arr.size());
        for(int i=0;i<arr.size();++i){
            int cnt = 0,num=arr[i];
            while(num){
                if(num & 1)
                    ++cnt;
                num = num>>1;
            }
            v[i].first = cnt;
            v[i].second = arr[i];
        }
        sort(begin(v),end(v));
        for( int i=0;i<arr.size();++i){
            arr[i]=v[i].second;
        }
        return arr;
    }
};