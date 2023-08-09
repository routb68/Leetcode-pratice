class Solution {
public:
    void com(vector<vector<int>>& img, int r,int c,int c1,int c2,
             vector<vector<bool>>&vis){
        img[r][c]=c2;
        vis[r][c]=1;
        if(r+1<img.size() and img[r+1][c]==c1 and vis[r+1][c]==0){
            com(img,r+1,c,c1,img[r][c],vis);
        }
        if(c+1<img[0].size() and img[r][c+1]==c1 and vis[r][c+1]==0){
            com(img,r,c+1,c1,img[r][c],vis);
        }
        if(r-1>=0 and img[r-1][c]==c1 and vis[r-1][c]==0){
            com(img,r-1,c,c1,img[r][c],vis);
        }
        if(c-1>=0 and img[r][c-1]==c1 and vis[r][c-1]==0){
            com(img,r,c-1,c1,img[r][c],vis);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int r, int c, int c1) {
        vector<vector<bool>>vis(img.size(),vector<bool>(img[0].size()));
        com(img,r,c,img[r][c],c1,vis);
        return img;
    }
};