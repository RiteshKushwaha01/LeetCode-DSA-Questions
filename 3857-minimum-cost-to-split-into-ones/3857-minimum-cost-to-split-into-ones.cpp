class Solution {
public:
    int dp[501] = {0};

    int solve(int n) {

        if (n == 1)
            return 0;

        if (dp[n])
            return dp[n];

        int mn = INT_MAX;

        for (int i = 1; i < n; i++) {
            mn = min(mn, solve(i) + solve(n - i) + i * (n - i));
        }

        return dp[n] = mn;
    }

    int minCost(int n) { return solve(n); }
};