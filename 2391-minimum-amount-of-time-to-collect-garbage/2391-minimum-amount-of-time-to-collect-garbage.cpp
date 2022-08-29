class Solution {
public:
    int garbageCollection(vector<string>& gb, vector<int>& tv) {
        int g1=0,g2=0,p1=0,p2=0,m1=0,m2=0;
        for(int i=0;i<gb[0].size();++i){
            if(gb[0][i]=='G')++g1;
            else if(gb[0][i]=='P')++p1;
            else ++m1;
        }
        for(int i=1;i<gb.size();++i){
            g2+=tv[i-1];
            p2+=tv[i-1];
            m2+=tv[i-1];
            int g=0,p=0,m=0;
            for(int j=0;j<gb[i].size();++j){
                if(gb[i][j]=='G')++g;
                if(gb[i][j]=='P')++p;
                if(gb[i][j]=='M')++m;
            }
            if(g){
                g1+=g2;
                g2=0;
                g1+=g;
            }
            if(p){
                p1+=p2;
                p2=0;
                p1+=p;
            }
            if(m){
                m1+=m2;
                m2=0;
                m1+=m;
            }
        }
        cout<<m1<<" "<<g1<<" "<<p1;
        return m1+p1+g1;
    }
};