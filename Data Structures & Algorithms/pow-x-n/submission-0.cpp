class Solution {
public:
    double myPow(double x, int n) {
        double power=1;
        int temp=n;
        if(n<0) n=-n;
        while(n--){
            power*=x;
        }
        if(temp<0){
            return 1/power;
        }
        return power;
    }
};
