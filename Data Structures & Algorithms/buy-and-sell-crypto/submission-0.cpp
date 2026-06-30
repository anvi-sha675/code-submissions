class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0], n=prices.size(), maxProf=0, prof=0;
        for(int i=0;i<n;i++){
            mini=min(mini, prices[i]);
            prof=prices[i]-mini;
            maxProf=max(maxProf, prof);
        }
        return maxProf;
    }
};
