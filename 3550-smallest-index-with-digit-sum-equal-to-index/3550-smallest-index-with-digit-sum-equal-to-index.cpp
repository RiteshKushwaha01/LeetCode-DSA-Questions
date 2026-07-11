class Solution {
private:
    int sumOfDigit(int n) {
        int digitSum = 0;
        while (n > 0) {
            int digit = n % 10;
            digitSum += digit;
            n = n / 10;
        }
        return digitSum;
    }

public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i == sumOfDigit(nums[i]))
                return i;
        }
        return -1;
    }
};