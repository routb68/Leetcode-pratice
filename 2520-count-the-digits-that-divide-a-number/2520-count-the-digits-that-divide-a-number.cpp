class Solution {
public:
    int countDigits(int num) {
       int x= num;
        vector<int>v;
        while(x){
            v.push_back(x%10);
            x/=10;
        }
        for(int &a:v){
            if(num%a==0)++x;
        }
        return x;
    }
};