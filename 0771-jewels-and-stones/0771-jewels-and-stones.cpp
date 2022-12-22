class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char &x: jewels){
            for(int i=0;i<stones.size();++i) 
                if(stones[i]==x)++ans;
        }
        return ans;
    }
};