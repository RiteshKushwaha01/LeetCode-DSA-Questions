class Solution {
public:
    vector<int> largestDivisibleSubset(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return {};

        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1);
        vector<int> parent(n, -1);

        int max_size = 1;
        int max_index = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
            if (dp[i] > max_size) {
                max_size = dp[i];
                max_index = i;
            }
        }

        vector<int> ans;
        while (max_index != -1) {
            ans.push_back(nums[max_index]);
            max_index = parent[max_index];
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};