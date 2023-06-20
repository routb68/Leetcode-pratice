class Solution {
public:
    string defangIPaddr(string a) {
        string s;
        for(char &x:a){
            if(x=='.'){
                s+="[.]";
            }else{
                s+=x;
            }
        }
        return s;
    }
};