class Solution {
public:
    int twoEggDrop(int n) {
        int res=0;
        while((res*(res+1))<n+n){
            ++res;
        }
        return res;
    }
};