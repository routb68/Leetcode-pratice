class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int>v;
        for(int i=0;i<n+m-1;++i){
            for(int j=0;j<=i;++j){
                int l=j,r=i-l;
                if(i%2==0) swap(l,r);
                if(l<n and r<m) v.push_back(mat[l][r]);
            }
        }
        return v;
    }
};