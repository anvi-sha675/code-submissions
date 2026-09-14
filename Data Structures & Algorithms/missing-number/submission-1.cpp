class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int>mp;
        for(int num:nums){
            mp[num]=1;
        }
        for(int i=0;i<=nums.size();i++){
            if(mp.find(i)==mp.end()) return i;
        }
        return -1;
    }
};
