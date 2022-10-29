class Solution {
public:
    vector<string> twoEditWords(vector<string>& qs, vector<string>& dy) {
        vector<string>ans;
        for(int i=0;i<qs.size();++i){
            for(int j=0;j<dy.size();++j){
                int a=0;
                for(int k=0;k<qs[i].length();++k){
                    if(qs[i][k]!=dy[j][k]){
                        ++a;
                    }
                }
                if(a<=2){
                    ans.push_back(qs[i]);
                    break;
                }
            }
        }
        return ans;
    }
};