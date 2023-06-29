class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long ans =0;
        unordered_map<double,int>ump;
        for(auto &x:rectangles){
            double a = x[0],b=x[1];
            // if(a>b) swap(a,b);
            double y = b/a;
            if(ump.find(y)!=ump.end()){
                ans+=ump[y];
            }
            ++ump[y];
        }
        return ans;
    }
};