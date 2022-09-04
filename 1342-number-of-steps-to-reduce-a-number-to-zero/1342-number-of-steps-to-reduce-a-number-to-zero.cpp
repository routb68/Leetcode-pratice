class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0)return 0;
        int ans=0;
        while(num){
            if(num & 1){
                ++ans;
            }
            num=(num >> 1);
            ++ans;
        }
        return ans-1;
    }
};