class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxNum = INT_MIN;
        int minNum = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            maxNum = max(maxNum, nums[i]);
            minNum = min(minNum, nums[i]);
        }
        maxNum -= k;
        minNum += k;
        int ans = maxNum - minNum;
        if (ans < 0)
            return 0;
        else
            return ans;
    }
};