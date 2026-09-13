class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0, i=0;
        while(i<nums.size()){
            xr^=nums[i];
            i++;
        }
        return xr;
    }
};
