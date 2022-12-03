class Solution {
public:
    int flipLights(int n, int p) {
        if( p==0) return 1;
        if(n==1) return 2;
        if (p == 1) 
            if(n > 2) return 4 ;
            else return 3; 
        if (n == 2) return 4; 
        if (p == 2) return 7; 
        return 8;
    }
};