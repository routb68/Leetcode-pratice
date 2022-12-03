#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,mmx,sse2,sse3,sse4")
class RandomizedSet {
public:
    unordered_map<int,int>ump;
    vector<int>v;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(ump.find(val)==ump.end()){
            v.push_back(val);
            ump[val]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(ump.find(val)!=ump.end()){
            int x=ump[val];
            v[x]=v.back();
            v.pop_back();
            ump[v[x]]=ump[val];
            ump.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */