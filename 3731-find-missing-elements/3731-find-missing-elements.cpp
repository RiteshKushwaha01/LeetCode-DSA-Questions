class Solution {
    bool checkEl(vector<int>& nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                return true;
        }
        return false;
    }

public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        int minEl = INT_MAX;
        int maxEl = INT_MIN;

        for (int i = 0; i < n; i++) {
            minEl = min(minEl, nums[i]);
            maxEl = max(maxEl, nums[i]);
        }

        vector<int> ans;
        for (int j = minEl + 1; j < maxEl; j++) {
            if (!checkEl(nums, j))
                ans.push_back(j);
        }

        return ans;
    }
};