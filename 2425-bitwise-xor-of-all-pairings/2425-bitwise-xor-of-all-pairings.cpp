class Solution {
public:
    int xorAllNums(vector<int>& n, vector<int>& m) {
        if(n.size()%2==0 and m.size()%2==0) return 0;
        if(n.size()%2==0){
            int ans=0;
            for(int &x:n) ans^=x;
            return ans;
        }else if ( m.size()%2==0){
            int ans=0;
            for(int &x:m) ans^=x;
            return ans;
        }
        int ans=0;
        for(int &x:n) ans^=x;
        for(int &x:m) ans^=x;
        return ans;
    }
};