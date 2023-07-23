class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(string &x:words){
            string s ="";
            for(char&h:x){
                if(h==separator){
                    if(s.size())ans.push_back(s);
                    s="";
                }else{
                    s+=h;
                }
            }
            if(s.size())
            ans.push_back(s);
        }
        return ans;
    }
};