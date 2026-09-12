class Solution {
public:
    int sumSquareOfDigits(int num){
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum=sum+(rem*rem);
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        map<int, int>mp;
        while(n!=1){
            int ss=sumSquareOfDigits(n);
                if(mp.find(ss)!=mp.end()) return false;
                else {
                    mp[ss]=ss;
                    n=ss;
                }
        }
        return true;
    }
};
