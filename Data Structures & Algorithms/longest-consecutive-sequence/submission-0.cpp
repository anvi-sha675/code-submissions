class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), count=1, prev=INT_MIN, ans=0;
        map<int, int>freq;
        for(int num: nums){
            freq[num]++;
        }
        for(auto &i: freq){
            if(prev!=INT_MIN && i.first==prev+1){
                count++;
            }else{
                count=1;
            }
            ans=max(ans, count);
            prev=i.first;
        }
        return ans;
    }
};
