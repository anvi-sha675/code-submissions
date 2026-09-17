class Solution {
public:
    int binary(int num){
        int count=0;
        while(num!=0){
            if(num%2==1) count++;
            num/=2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        if(n==0) return {0};
        if(n==1) return {0,1};
        vector<int>vec={0,1};
        int i=2;
        while(i<=n){
            int val=binary(i);
            vec.push_back(val);
            i++;
        }
        return vec;
    }
};
