class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hAngle=(hour*30.0)+(minutes/2.0);
        double mAngle=minutes*6.0;
        double ans=abs(hAngle-mAngle);
        return ans<180.0?ans:360.0-ans;
    }
};
