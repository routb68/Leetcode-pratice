class Solution {
public:
    string interpret(string c) {
        string s="";
        for(int i=0;i<c.size();++i){
            if(c[i]=='G'){
                s+='G';
            }else{
                if(c[i+1]==')'){
                    s+='o';
                    ++i;
                }else{
                    s+='a';
                    s+='l';
                    i+=3;
                }
            }
        }
        return s;
    }
};