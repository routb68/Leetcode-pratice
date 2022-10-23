class Solution {
public:
    int subarrayGCD(vector<int>& v, int k) {
        int cnt=0;
        for(int i=0;i<v.size();++i){
            int x= v[i];
            for(int j=i;j<v.size();++j){
                x= __gcd(v[j],x);
                cnt+=(x==k);
            }
        }
        return cnt;
    }
};