class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxNum = nums[0];
        int minNum = nums[0];
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