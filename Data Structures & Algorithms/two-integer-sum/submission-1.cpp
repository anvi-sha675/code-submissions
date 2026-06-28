class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int>mp;
       int i=0;
       while(i<nums.size()){
        int diff=target-nums[i];
        if(mp.find(diff)!=mp.end()){
            return {mp[diff], i};
        }
        mp[nums[i]]=i;
        i++;
       } 
       return {-1, -1};
    }
};
