class SmallestInfiniteSet {
public:
    unordered_set<int>us;
    SmallestInfiniteSet() {
        for(int i=1;i<1001;++i){
            us.insert(i);
        }
    }
    
    int popSmallest() {
        for(int i=0;i<1001;++i){
            if(us.find(i)!=us.end()){
                us.erase(i);
                return i;
            }
        }
        return 0;
    }
    
    void addBack(int num) {
        us.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */