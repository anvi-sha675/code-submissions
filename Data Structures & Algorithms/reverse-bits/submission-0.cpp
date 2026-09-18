class Solution {
public:
    string binary(uint32_t num){
        string n = "";
        for(int i = 0; i < 32; i++){
            uint32_t rem = num % 2;
            n += rem + '0';
            num /= 2;
        }
        return n;
    }
    uint32_t reverse(string num){
        uint32_t n=0;
        for(int i=0;i<32;i++){
            n*=2;
            n+=num[i]-'0';
        }
        return n;
    }
    uint32_t reverseBits(uint32_t n) {
        string bin=binary(n);
        uint32_t rev=reverse(bin);
        return rev;
    }
};
