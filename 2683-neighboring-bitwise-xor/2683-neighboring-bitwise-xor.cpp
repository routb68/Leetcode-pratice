class Solution {
public:
    bool doesValidArrayExist(vector<int>& dd) {
        int a =0;
        for(int &x:dd) a^=x;
        return a==0;
        
    }
};