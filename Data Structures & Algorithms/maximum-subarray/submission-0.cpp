class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(), maxi=nums[0], curSum=nums[0], i=1, start=0;
        while(i<n){
            if(curSum+nums[i]>nums[i]){
                curSum+=nums[i];
            }else{
                curSum=nums[i];
            }
            if(curSum>maxi){
                maxi=curSum;
                start=i;
            }
            i++;
        }
        return maxi;
    }
};
