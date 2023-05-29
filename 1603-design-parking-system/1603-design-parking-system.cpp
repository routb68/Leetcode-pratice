class ParkingSystem {
public:
    int b,b1,m,m1,s,s1;
    ParkingSystem(int big, int medium, int small) {
        b=0,b1=big,m=0,m1=medium,s=0,s1=small;
    }
    
    bool addCar(int c) {
        if(c==1){
            ++b;
            if(b<=b1) return true;
            return false;
        }
        if(c==2){
            ++m;
            if(m<=m1) return true;
            return false;
        }
        ++s;
        if(s<=s1) return true;
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */