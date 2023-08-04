class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt =0;
        if(num1<num2)swap(num1,num2);
        while(num2 !=0){
            num1-=num2;
            ++cnt;
            if(num1<num2)swap(num1,num2);
        }
        return cnt;
    }
};