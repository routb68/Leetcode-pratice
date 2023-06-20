class Solution {
public:
    int distanceTraveled(int m, int a) {
       int ans =0;
        while(m){
            if(m>=5){
                if(a>0){
                    ++m;
                    --a;
                }
                ans+=5;
                m-=5;
            }
            else{
                ans+=m;
                m-=m;
            }
        }
        return ans*10;
    }
};