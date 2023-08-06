class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        if(p%10>=5){
            while(p%10!=0)++p;
        }else{
            while(p%10!=0)--p;
        }
        return 100-p;
    }
};