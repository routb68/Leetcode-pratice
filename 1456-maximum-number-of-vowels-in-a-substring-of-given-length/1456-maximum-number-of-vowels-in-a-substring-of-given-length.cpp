class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0;
        int pr=0;
        for(int i=0;i<k;++i){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')++pr;
        }
        int low=0,high=k;
        res=max(res,pr);
        while(high<s.length()){
            if(s[low]=='a' or s[low]=='e' or s[low]=='i' or s[low]=='o' or s[low]=='u')
                --pr;
            if(s[high]=='a' or s[high]=='e' or s[high]=='i' or s[high]=='o' or 
               s[high]=='u')
                ++pr;
            ++low;
            ++high;
            res=max(res,pr);   
        }
        return res;
    }
};