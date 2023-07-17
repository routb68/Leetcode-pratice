class SmallestInfiniteSet {
public:
    bool arr[1001];
    SmallestInfiniteSet() {
        for(int i=0;i<=1000;++i) arr[i]=true;
    }
    
    int popSmallest() {
        for(int i=1;i<=1000;++i){
            if(arr[i]){
                arr[i]=false;
                return i;
            }
        }
        return 0;
    }
    
    void addBack(int num) {
        arr[num]=true;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */