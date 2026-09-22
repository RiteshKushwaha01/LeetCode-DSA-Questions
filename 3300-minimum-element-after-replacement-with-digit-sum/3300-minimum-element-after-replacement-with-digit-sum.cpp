class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int minEl = INT_MAX;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            minEl = min(minEl, sum);
        }
        return minEl;
    }
};