class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& gd) {
        int m=gd.size(),n=gd[0].size();
        int dph[m][n],dpv[m][n];
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(j==0) dph[i][j]=gd[i][j];
                else{
                    if(gd[i][j]==0)
                        dph[i][j]=0;
                    else 
                        dph[i][j]=1+dph[i][j-1];
                }
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(i==0) dpv[i][j]=gd[i][j];
                else{
                    if(gd[i][j]==0) dpv[i][j]=0;
                    else dpv[i][j]=1+dpv[i-1][j];
                }
            }
        }
        // for(int i=0;i<m;++i){
        //     for(int j=0;j<n;++j){
        //         cout<<dph[i][j]<<' ';
        //     }
        //     // cout<<endl;
        // }
        // cout<<endl;
        // for(int i=0;i<m;++i){
        //     for(int j=0;j<n;++j){
        //         //cout<<dpv[i][j]<<' ';
        //     }
        //     //cout<<endl;
        // }
        int ans=0;
        for(int i=m-1;i>=0;--i){
            for(int j=n-1;j>=0;--j){
                //cout<< dpv[i][j]<<" ";
                if(dph[i][j] and dpv[i][j]){
                    int small=min( dpv[i][j],dph[i][j]);
                    while (small > ans) { 
                if (dpv[i][j-small+1] >= small &&  dph[i-small+1][j] >= small)
                    ans = small; 
                small--; 
            } 
                }
            }
        }
        return ans*ans;
    }
};