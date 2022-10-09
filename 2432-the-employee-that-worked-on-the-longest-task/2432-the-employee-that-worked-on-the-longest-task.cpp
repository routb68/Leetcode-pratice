class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int a=0,b=n;
        for(int i=1;i<logs.size();++i){
            if(logs[i][1]-logs[i-1][1]>=a){
                if(a==logs[i][1]-logs[i-1][1]){
                    b=min(b,logs[i][0]);
                    continue;
                }
                a=logs[i][1]-logs[i-1][1];
                b=logs[i][0];
            }
        }
        cout<<a<<" "<<b<<endl;
        if(a<logs[0][1]){
            b=logs[0][0];
        }else if(a==logs[0][1]){
            b=min(logs[0][0],b);
        }
        return b;
    }
};