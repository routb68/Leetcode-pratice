class Solution {
public:
    vector<vector<int>> flip(vector<vector<int>>&mat,int row,int col){
        mat[row][col]^=1;
        if(row+1!=mat.size()) mat[row+1][col]^=1;
        if(row-1!=-1) mat[row-1][col]^=1;
        if(col+1!=mat[0].size()) mat[row][col+1]^=1;
        if(col-1!=-1) mat[row][col-1]^=1;
        return mat;
    }
    int go(vector<vector<int>>mat,int row,int col){
        if(row==mat.size()){
            ++col;
            row=0;
        }
        if(col==mat[0].size()){
            for(auto &a:mat){
                for(auto &x:a){
                    if(x){
                        return 1e5;
                    }
                }
            }
            return 0;
        }
        int res1=go(mat,row+1,col);
        int res2=go(flip(mat,row,col),row+1,col)+1;
        return min(res1,res2);
    }
    int minFlips(vector<vector<int>>& mat) {
        int res=go(mat,0,0);
        if(res>=1e5)return -1;
        return res;
    }
};