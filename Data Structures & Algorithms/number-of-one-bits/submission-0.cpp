class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0, num=0;
        while(n>0){
            num=num*10+(n%2);
            if(n%2==1) cnt++;
            n/=2;
        }
        return cnt;
    }
};
