class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int x : nums)
            freq[x]++;

        int maxCount = 0;
        for (auto it : freq)
            maxCount = max(maxCount, it.second);

        int ans = nums.size();

        for (auto it : freq) {
            if (it.second == maxCount) {
                int l = 0, r = nums.size() - 1;
                while (nums[l] != it.first)
                    l++;
                while (nums[r] != it.first)
                    r--;
                ans = min(ans, r - l + 1);
            }
        }

        return ans;
    }
};