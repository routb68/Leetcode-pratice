class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int>v;
        v.push_back(0);
        v.push_back(arr[0]);
        int x = arr[0];
        for(int i=1;i<arr.size();++i){
            x^=arr[i];
            v.push_back(x);
        }
        int ans =0;
        for(int i=0;i<arr.size();++i){
            for(int j=i+1;j<arr.size();++j){
                if(v[i]==v[j+1]){
                    ans+=(j-i);
                }
            }
        }
        return ans;
    }
};