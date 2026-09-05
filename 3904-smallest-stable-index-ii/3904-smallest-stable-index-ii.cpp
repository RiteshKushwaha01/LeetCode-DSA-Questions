class Solution {
    vector<int> prefMax(vector<int>& nums) {
        int n = nums.size();
        vector<int> preMax(n);
        preMax[0] = nums[0];

        for (int i = 1; i < n; i++) {
            preMax[i] = max(preMax[i - 1], nums[i]);
        }
        return preMax;
    }

    vector<int> suffMin(vector<int>& nums) {
        int n = nums.size();
        vector<int> sufMin(n);
        sufMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            sufMin[i] = min(sufMin[i + 1], nums[i]);
        }
        return sufMin;
    }

public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> preMax = prefMax(nums);
        vector<int> sufMin = suffMin(nums);

        for (int i = 0; i < n; i++) {
            if ((preMax[i] - sufMin[i]) <= k) {
                return i;
            }
        }

        return -1;
    }
};