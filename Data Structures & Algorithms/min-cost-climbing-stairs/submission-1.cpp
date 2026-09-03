class Solution {
public:
    int f(int n, vector<int>& cost, vector<int>&dp){
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        if(dp[n]!=-1) return dp[n];
        int ft=cost[n]+f(n-1, cost, dp);
        int s=cost[n]+f(n-2, cost, dp);
        return dp[n]=min(ft, s);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(f(cost.size()-1, cost, dp), f(cost.size()-2, cost, dp));
    }
};
