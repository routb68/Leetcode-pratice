class Solution {
public:
    int check(string &s,vector<int>*v){
        int arr[26];
        for(int i=0;i<26;++i){
            arr[i]=0;
        }
        for(char &x:s) ++arr[x-'a'];
        int res =0;
        for(int i=0;i<26;++i){
            if(v[i].size()<arr[i]) return -1;
            for (int j=0;j<arr[i];++j){
                res+=v[i][j];
            }
        }
        return res;
    }
    int maxScoreWords(vector<string>& wd, vector<char>& ltr, vector<int>& sc) {
        vector<int>v[26];
        for(int i=0;i<ltr.size();++i){
            v[ltr[i]-'a'].push_back(sc[ltr[i]-'a']);
        }
        for(int i=0;i<26;++i){
            if(v[i].size()){
                sort(begin(v[i]),end(v[i]),greater<int>());
            }
        }
        int n = (1<<wd.size());
        cout<<n<<endl;
        int ans =0;
        for(int i=1;i<=n;++i){
            string s;
            for(int j=0; j<wd.size();++j){
                if((i &(1<<j))){
                    // cout<<j<<endl;
                    s+=wd[j];
                }
            }
            // cout<<s<<endl;
            int x = check(s,v);
            // cout<<x<<endl;
            ans = max(ans ,x);
        }
        return ans;
    }
};