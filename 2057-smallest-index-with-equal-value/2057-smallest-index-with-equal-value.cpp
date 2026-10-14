class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (i % 10 == nums[i]) {
                result = min(result, i);
            }
        }

        if (result == INT_MAX)
            return -1;

        return result;
    }
};