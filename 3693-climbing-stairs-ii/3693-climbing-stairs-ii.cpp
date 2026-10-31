class Solution {
public:
    int solve(int ind, vector<int>& costs, vector<int>& dp) {

        if (ind == 0)
            return 0;

        if (dp[ind] != -1)
            return dp[ind];

        int ans = INT_MAX;

        if (ind >= 1) {
            ans = min(ans, solve(ind - 1, costs, dp) + costs[ind - 1] + 1 * 1);
        }

        if (ind >= 2) {
            ans = min(ans, solve(ind - 2, costs, dp) + costs[ind - 1] + 2 * 2);
        }

        if (ind >= 3) {
            ans = min(ans, solve(ind - 3, costs, dp) + costs[ind - 1] + 3 * 3);
        }

        return dp[ind] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, -1);
        return solve(n, costs, dp);
    }
};