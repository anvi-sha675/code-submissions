class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size(), i=0;
        vector<int>res=nums;
        while(i<n){
            res.push_back(nums[i]);
            i++;
        }
        return res;
    }
};