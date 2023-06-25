class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans = z;
        ans +=(min(x,y));
        if(max(x,y)==min(x,y)){
            ans+=min(x,y);
        }else{
            ans+=min(x,y)+1;
        }
        return ans+ans;
    }
};