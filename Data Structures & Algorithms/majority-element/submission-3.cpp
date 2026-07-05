class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mp;
        for(int num: nums){
            mp[num]++;
        }
        int maxi=0, ans=0;
        for(int num:nums){
            if(maxi<mp[num]){
                maxi=max(maxi, mp[num]);
                ans=num;
            }
        }
        return ans;
    }
};