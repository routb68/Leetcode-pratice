class Solution {
public:
    char check(char x,bool ok){
        if(ok){
            if (x=='0') return '1';
            else return '0';
        }
        return x;
    }
    char go (int n,int k){
        if (n==0) return '0';
        bool flag = (k%2==1);
        char x = go(n-1,k/2);
        return check(x,flag);
    }
    int kthGrammar(int n, int k) {
        char x = go(n-1,k-1);
        return x-'0';
    }
};