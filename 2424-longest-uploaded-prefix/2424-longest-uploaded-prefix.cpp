class LUPrefix {
public:
    vector<int>v;
    int mod=0;
    LUPrefix(int n) {
        v.resize(n);
        
    }
    
    void upload(int vd) {
        v[vd-1]=1;
    }
    
    int longest() {
        int ans=mod;
        for(int i=mod;i<v.size();++i){
            if(v[i]){
                ++ans;
            }else{
                break;
            }
        }
        mod=max(mod,ans);
        return mod;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */