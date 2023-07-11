class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>ump;
        for(char&x:s)
            ++ump[x];
        vector<int>v(26,0);
        string ans ="";
        for(char &x:order){
            if(ump.find(x)!=ump.end()){
                int freq = ump[x];
                while(ump[x]){
                    ans+=x;
                    --ump[x];
                }
                ump.erase(x);
            }
        }
        for(auto &[x,y]:ump){
            while(y--){
                ans+=x;
            }
        }
        return ans;
    }
};