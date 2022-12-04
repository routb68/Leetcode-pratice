class Solution {
public:
    bool isCircularSentence(string se) {
        for(int i=0;i<se.length();++i){
            if(isspace(se[i])){
                if(se[i-1]!=se[i+1]){
                    return false;
                }
            }
        }
        if(se[0]==se[se.size()-1])return true;
        return false;
    }
};