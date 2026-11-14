class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int smallestNum = INT_MAX;
        int largestNum = INT_MIN;
        for (int i = 0; i < n; i++) {
            smallestNum = min(smallestNum, nums[i]);
            largestNum = max(largestNum, nums[i]);
        }
        int ans = 1;
        for (int j = 1; j <= smallestNum; j++) {
            if (smallestNum % j == 0 && largestNum % j == 0) {
                ans = max(ans, j);
            }
        }
        return ans;
    }
};