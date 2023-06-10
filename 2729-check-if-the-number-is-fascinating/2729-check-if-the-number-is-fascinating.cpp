class Solution {
public:
    bool isFascinating(int n) {
        int n1=n+n,n2=3*n;
        cout<<n1<<" "<<n2;
        set<int>s;
        int cnt=0;
        while(n){
            s.insert(n%10);
            n/=10;
            ++cnt;
        }
        n=n1;
        while(n){
            s.insert(n%10);
            n/=10;
            ++cnt;
        }
        n=n2;
        while(n){
            s.insert(n%10);
            n/=10;
            ++cnt;
        }
        s.insert(0);
        if(s.size()==10 and cnt==9) return true;
        return false;
    }
};