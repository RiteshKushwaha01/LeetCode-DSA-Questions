class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_Value = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    int value = (nums[i] - 1) * (nums[j] - 1);
                    max_Value = max(max_Value, value);
                }
            }
        }
        return max_Value;
    }
};