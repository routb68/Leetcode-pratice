class Solution {
public:
    int countDigits(int num) {
        vector<int>v;
        int x=num;
        while(x){
            v.push_back(x%10);
            x/=10;
        }
        int cnt=0;
        for(int &a:v)
            if(num%a==0)
                ++cnt;
        return cnt;
    }
};