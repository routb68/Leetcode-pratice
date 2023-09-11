class Solution {
public:
    int minFlips(string target) {
        int ans =0;
        char x='0';
        for(int i=0;i<target.size();++i){
            if(target[i]!=x){
                ++ans;
                x=target[i];
            }
        }
       return ans;
    }
};
