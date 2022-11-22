class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> v(arr.size());
        v[0]=arr[0];
        for(int i=1;i<arr.size();++i){
            v[i]= (v[i-1] ^ arr[i]);
        }
        vector<int> ans(queries.size());
        for(int i=0;i<queries.size();++i){
            if(queries[i][0]==0){
                ans[i]= v[queries[i][1]];
            }else{
                ans[i]=(v[queries[i][1]] ^ v[queries[i][0]-1]);
            }
        }
        return ans;
    }
};