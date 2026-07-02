class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) prod*=nums[i];
            else zero++;
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1) nums[i]=0;
            else if(zero==1){
                if(nums[i]==0) nums[i]=prod;
                else nums[i]=0;
            }
            else nums[i]=(prod/nums[i]);
        }
        return nums;
    }
};
