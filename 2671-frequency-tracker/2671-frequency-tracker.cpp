class FrequencyTracker {
public:
    map<int,int>us;
    map<int,int>fr;
    FrequencyTracker() {
        
    }
    
    void add(int number) {
        if(us.find(number)!=us.end()){
            int x=us[number];
            --fr[x];
            if(fr[x]==0) fr.erase(x);
        }
        ++us[number];
        ++fr[us[number]];
    }
    
    void deleteOne(int number) {
        if(us.find(number)==us.end()) return ;
        int x= us[number];
        --us[number];
        --fr[x];
        if(fr[x]==0) fr.erase(x);
        if(us[number]==0){
            us.erase(number);
        }else{
            ++fr[us[number]];
        }
    }
    
    bool hasFrequency(int frequency) {
        if(fr.find(frequency)==fr.end()) return false;
        return true;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */