class Solution {
    bool checkNum(vector<int>& nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                return false;
        }
        return true;
    }

public:
    int missingMultiple(vector<int>& nums, int k) {
        for (int i = k; i <= 200; i += k) {
            if (checkNum(nums, i)) {
                return i;
            }
        }
        return -1;
    }
};