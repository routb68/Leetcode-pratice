class Solution {
public:
    int minimumSum(int n, int k) {
        set<int>us;
        int i =1;
        int ans=0;
        while(n--){
            while(us.find(k-i)!=us.end()){
                ++i;
            }
            us.insert(i);
            ans+=i;
            ++i;
        }
        return ans;
    }
};