class Allocator {
public:
    vector<int>v;
    int aloc=0;
    Allocator(int n) {
        v.resize(n);
        for(int i=0;i<n;++i)v[i]=0;
        
    }
    
    int allocate(int size, int mID) {
        int ans=-1;
        if(v.size()-aloc<size) return -1;
        
        for(int i=0;i<v.size();++i){
           int res=0;
            for(int j=i;j<v.size() and j<i+size;++j){
                if(v[j]==0)++res;
                else {
                    i=j;
                    break;
                }
            }
            if(res==size){
                for(int j=i;j<v.size() and j<i+size;++j) v[j]=mID;
                aloc+=size;
                return i;
            }
        }
        return ans;
    }
    
    int free(int mID) {
        int ans=0;
        for(int i=0;i<v.size();++i){
            if(v[i]==mID){
                v[i]=0;
                ++ans;
            }
        }
        aloc-=ans;
        return ans;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */