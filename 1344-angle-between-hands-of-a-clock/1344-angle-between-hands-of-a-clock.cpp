class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h = hour *30 ;
        double m = minutes;
        h +=(m/2);
        m*=6;
        double ans = abs(h-m);
        if(ans>180)
            return 360-ans;
        return ans;
    }
};