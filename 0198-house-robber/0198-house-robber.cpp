class Solution {
    long long maxRob(vector<int>& nums, int index, vector<long long>& dp) {

        if (index < 0)
            return 0;

        if (index == 0)
            return nums[0];

        if (dp[index] != -1)
            return dp[index];

        long long pickIndex = nums[index] + maxRob(nums, index - 2, dp);

        long long notPickIndex = maxRob(nums, index - 1, dp);

        return dp[index] = max(pickIndex, notPickIndex);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<long long> dp(n, -1);
        return maxRob(nums, n - 1, dp);
    }
};